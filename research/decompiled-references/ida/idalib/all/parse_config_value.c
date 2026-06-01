__int64 __fastcall parse_config_value(__int64 a1, __int64 a2, __int64 a3)
{
  size_t v4; // r13
  __int64 v6; // rax
  unsigned __int16 v7; // ax
  const char *v8; // rax
  unsigned int v9; // ebx
  void *v11; // rax
  const void *v12; // rsi
  __int64 v13; // rbx
  size_t v14; // rbx
  void *v15; // rax
  const void *v16; // rsi
  unsigned int token; // eax
  __int64 v18; // rbx
  void *ptr; // [rsp+0h] [rbp-78h] BYREF
  __int128 v20; // [rsp+8h] [rbp-70h]
  unsigned __int16 v21; // [rsp+18h] [rbp-60h]
  __int64 v22; // [rsp+20h] [rbp-58h]
  char v23; // [rsp+28h] [rbp-50h]
  __m128i v24; // [rsp+30h] [rbp-48h]
  unsigned __int64 v25; // [rsp+48h] [rbp-30h]

  v4 = *(_QWORD *)(a3 + 8);
  v25 = __readfsqword(0x28u);
  ptr = nullptr;
  v20 = 0;
  if ( v4 )
  {
    v11 = (void *)qalloc_or_throw(v4);
    v12 = *(const void **)a3;
    *((_QWORD *)&v20 + 1) = v4;
    ptr = v11;
    memcpy(v11, v12, v4);
    *(_QWORD *)&v20 = v4;
  }
  v21 = *(_WORD *)(a3 + 24);
  v6 = *(_QWORD *)(a3 + 32);
  v24 = _mm_loadu_si128((const __m128i *)(a3 + 48));
  v22 = v6;
  v23 = *(_BYTE *)(a3 + 40);
  if ( !a1 )
  {
    v9 = 0;
    goto LABEL_13;
  }
  free_idcv(a1);
  v7 = v21;
  if ( v21 <= 0x2Du )
  {
    if ( v21 > 1u )
    {
      switch ( v21 )
      {
        case 2u:
          if ( *(_QWORD *)(sub_7A0520(a2) + 8) > 1u )
            goto LABEL_20;
          goto LABEL_10;
        case 3u:
        case 5u:
          v13 = v22;
          goto LABEL_17;
        case 4u:
LABEL_20:
          if ( !(_BYTE)byte_2CCCD30 && __cxa_guard_acquire(&byte_2CCCD30) )
          {
            obj = nullptr;
            *(_OWORD *)&n = 0;
            __cxa_atexit((void (*)(void *))sub_387760, &obj, &off_2B25620);
            __cxa_guard_release(&byte_2CCCD30);
          }
          sub_748AD0((__int64 *)&obj, a2, (__int64)&ptr);
          free_idcv(a1);
          *(_BYTE *)a1 = 7;
          *(_QWORD *)(a1 + 8) = 0;
          v14 = n;
          *(_OWORD *)(a1 + 16) = 0;
          if ( v14 )
          {
            v15 = (void *)qalloc_or_throw(v14);
            *(_QWORD *)(a1 + 8) = v15;
            v16 = obj;
            *(_QWORD *)(a1 + 24) = v14;
            memcpy(v15, v16, v14);
            *(_QWORD *)(a1 + 16) = v14;
          }
          goto LABEL_18;
        case 8u:
          v18 = v24.m128i_i64[0];
          goto LABEL_28;
        case 0x2Du:
          token = lex_get_token(a2);
          if ( token )
          {
            v8 = (const char *)qstrerror(token);
          }
          else
          {
            if ( v21 == 8 )
            {
              v18 = -v24.m128i_i64[0];
              v24.m128i_i64[0] = -v24.m128i_i64[0];
LABEL_28:
              free_idcv(a1);
              *(_BYTE *)a1 = 9;
              *(_QWORD *)(a1 + 8) = v18;
              goto LABEL_18;
            }
            if ( ((v21 - 3) & 0xFFFD) == 0 )
            {
              v13 = -v22;
              v22 = -v22;
LABEL_17:
              free_idcv(a1);
              *(_BYTE *)a1 = 2;
              *(_QWORD *)(a1 + 8) = v13;
              goto LABEL_18;
            }
            v8 = (const char *)qstrerror(1352);
          }
          break;
        default:
          goto LABEL_10;
      }
LABEL_11:
      sub_747B60(a2, (__int64)"%s", v8);
    }
LABEL_10:
    v8 = (const char *)qstrerror(1362);
    goto LABEL_11;
  }
  if ( v21 > 0x85u )
    goto LABEL_10;
  if ( v21 > 0x7Fu )
  {
    *(_BYTE *)a1 = 4;
    *(_QWORD *)(a1 + 8) = ((unsigned __int16)(v7 - 132) <= 1u) | (unsigned __int8)(v7 == 128);
  }
  else
  {
    if ( (v21 & 0xFFDF) != 0x5B )
      goto LABEL_10;
    free_idcv(a1);
    *(_BYTE *)a1 = 8;
    *(_QWORD *)(a1 + 8) = a2;
  }
LABEL_18:
  v9 = 1;
LABEL_13:
  if ( ptr )
  {
    *(_QWORD *)&v20 = 0;
    qfree(ptr);
  }
  return v9;
}
