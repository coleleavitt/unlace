__int64 __fastcall parse_config_value(__int64 a1, const char *a2, __int64 a3)
{
  const char *v3; // r12
  size_t v4; // r13
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int16 v9; // ax
  const char *v10; // rax
  unsigned int v11; // ebx
  void *v13; // rax
  int v14; // ebx
  size_t v15; // rbx
  void *v16; // rax
  const void *v17; // rsi
  unsigned int token; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  void *ptr; // [rsp+0h] [rbp-68h] BYREF
  __int128 v23; // [rsp+8h] [rbp-60h]
  unsigned __int16 v24; // [rsp+18h] [rbp-50h]
  int v25; // [rsp+1Ch] [rbp-4Ch]
  char v26; // [rsp+20h] [rbp-48h]
  __m128i v27; // [rsp+28h] [rbp-40h]
  unsigned __int64 v28; // [rsp+38h] [rbp-30h]

  v3 = a2;
  v4 = *(_QWORD *)(a3 + 8);
  v28 = __readfsqword(0x28u);
  ptr = nullptr;
  v23 = 0;
  if ( v4 )
  {
    v13 = (void *)qalloc_or_throw(v4, a2);
    a2 = *(const char **)a3;
    *((_QWORD *)&v23 + 1) = v4;
    ptr = v13;
    memcpy(v13, a2, v4);
    *(_QWORD *)&v23 = v4;
  }
  v24 = *(_WORD *)(a3 + 24);
  v6 = *(_DWORD *)(a3 + 28);
  v27 = _mm_loadu_si128((const __m128i *)(a3 + 40));
  v25 = v6;
  v26 = *(_BYTE *)(a3 + 32);
  if ( !a1 )
  {
    v11 = 0;
    goto LABEL_13;
  }
  free_idcv(a1);
  v9 = v24;
  if ( v24 <= 0x2Du )
  {
    if ( v24 > 1u )
    {
      switch ( v24 )
      {
        case 2u:
          if ( *(_QWORD *)(sub_780220(v3) + 8) > 1u )
            goto LABEL_20;
          goto LABEL_10;
        case 3u:
        case 5u:
          v14 = v25;
          goto LABEL_17;
        case 4u:
LABEL_20:
          if ( !(_BYTE)byte_2CA2E30 && __cxa_guard_acquire(&byte_2CA2E30) )
          {
            obj = nullptr;
            *(_OWORD *)&n = 0;
            __cxa_atexit((void (*)(void *))sub_383B10, &obj, &off_2AFC540);
            __cxa_guard_release(&byte_2CA2E30);
          }
          sub_728610((__int64 *)&obj, (__int64)v3, (__int64)&ptr);
          free_idcv(a1);
          *(_BYTE *)a1 = 7;
          *(_QWORD *)(a1 + 8) = 0;
          v15 = n;
          *(_OWORD *)(a1 + 16) = 0;
          if ( v15 )
          {
            v16 = (void *)qalloc_or_throw(v15, v3);
            *(_QWORD *)(a1 + 8) = v16;
            v17 = obj;
            *(_QWORD *)(a1 + 24) = v15;
            memcpy(v16, v17, v15);
            *(_QWORD *)(a1 + 16) = v15;
          }
          goto LABEL_18;
        case 8u:
          v21 = v27.m128i_i64[0];
          goto LABEL_28;
        case 0x2Du:
          token = lex_get_token((int)v3);
          if ( token )
          {
            v10 = (const char *)qstrerror(token, &ptr, v19, v20);
          }
          else
          {
            if ( v24 == 8 )
            {
              v21 = -v27.m128i_i64[0];
              v27.m128i_i64[0] = -v27.m128i_i64[0];
LABEL_28:
              free_idcv(a1);
              *(_BYTE *)a1 = 9;
              *(_QWORD *)(a1 + 8) = v21;
              goto LABEL_18;
            }
            if ( ((v24 - 3) & 0xFFFD) == 0 )
            {
              v14 = -v25;
              v25 = -v25;
LABEL_17:
              free_idcv(a1);
              *(_BYTE *)a1 = 2;
              *(_DWORD *)(a1 + 8) = v14;
              goto LABEL_18;
            }
            v10 = (const char *)qstrerror(1352, &ptr, v19, v20);
          }
          break;
        default:
          goto LABEL_10;
      }
LABEL_11:
      sub_727620((__int64)v3, (__int64)"%s", v10);
    }
LABEL_10:
    v10 = (const char *)qstrerror(1362, a2, v7, v8);
    goto LABEL_11;
  }
  if ( v24 > 0x85u )
    goto LABEL_10;
  if ( v24 > 0x7Fu )
  {
    *(_BYTE *)a1 = 4;
    *(_DWORD *)(a1 + 8) = (unsigned __int16)(v9 - 132) <= 1u || v9 == 128;
  }
  else
  {
    if ( (v24 & 0xFFDF) != 0x5B )
      goto LABEL_10;
    free_idcv(a1);
    *(_BYTE *)a1 = 8;
    *(_QWORD *)(a1 + 8) = v3;
  }
LABEL_18:
  v11 = 1;
LABEL_13:
  if ( ptr )
  {
    *(_QWORD *)&v23 = 0;
    qfree(ptr);
  }
  return v11;
}

