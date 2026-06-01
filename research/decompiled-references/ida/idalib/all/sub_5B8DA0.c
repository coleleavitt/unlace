__int64 __fastcall sub_5B8DA0(__m128i *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rsi
  unsigned __int64 v6; // rax
  __int64 v7; // rsi
  __m128i *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r14
  unsigned int v11; // r13d
  __int64 v12; // rdx
  __int64 v13; // rbp
  char v14; // al
  unsigned __int64 v15; // rax
  unsigned int v16; // eax
  char v17; // al
  __int64 v18; // rsi
  __int64 v19; // rdx
  bool v20; // zf
  __int64 v21; // rax
  __int64 v22; // [rsp+8h] [rbp-80h]
  __int64 *v23; // [rsp+10h] [rbp-78h]
  char v24; // [rsp+1Fh] [rbp-69h]
  __m128i v25; // [rsp+20h] [rbp-68h] BYREF
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v27; // [rsp+38h] [rbp-50h]
  unsigned __int64 v28; // [rsp+48h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  if ( !a2 || *(char *)(a2 + 17) < 0 )
    return 0;
  result = *(_QWORD *)(a2 + 72);
  if ( *(_DWORD *)(a2 + 68) && !result )
  {
    v4 = *(_QWORD *)a2;
    ptr = nullptr;
    v27 = 0;
    v6 = sub_3BDD60(a1, v4);
    if ( netnode_qgetblob(v6, &ptr, 1, 4096, 83) <= 0 )
      sub_378D50();
    v7 = 16;
    v23 = (__int64 *)qcalloc((int)((*(_DWORD *)(a2 + 68) + 31) & 0xFFFFFFE0), 16);
    *(_QWORD *)(a2 + 72) = v23;
    if ( !v23 )
      sub_3BC000((int)"read sp");
    v8 = (__m128i *)ptr;
    v9 = *(unsigned int *)(a2 + 68);
    v10 = *(_QWORD *)a2;
    v25 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)ptr, (__m128i)(unsigned __int64)((unsigned __int64)ptr + v27));
    if ( (_DWORD)v9 )
    {
      v22 = 0;
      v11 = 0;
      v24 = 0;
      while ( 1 )
      {
        v17 = is_cvt64(v8, v7, v9);
        v18 = v25.m128i_i64[1];
        if ( v17 )
          v13 = (int)unpack_dd(&v25);
        else
          v13 = unpack_dq(&v25);
        v14 = is_cvt64(&v25, v18, v12);
        v7 = v25.m128i_i64[1];
        v8 = &v25;
        if ( v14 )
        {
          v15 = (unsigned int)unpack_dd(&v25);
          v9 = 0xFFFFFFFFLL;
          if ( (unsigned int)v15 == 0xFFFFFFFFLL )
          {
            if ( v11 && v13 <= 0 )
              goto LABEL_16;
            v10 += v13;
            *v23 = v10;
            v21 = 0x7FFFFFFFFFFFFFFFLL;
            goto LABEL_26;
          }
        }
        else
        {
          v15 = unpack_dq(&v25);
        }
        if ( v13 <= 0 && v11 )
          goto LABEL_16;
        v10 += v13;
        *v23 = v10;
        v19 = -(__int64)(v15 >> 1);
        v20 = (v15 & 1) == 0;
        v21 = v15 >> 1;
        if ( v20 )
          v21 = v19;
LABEL_26:
        v22 += v21;
        v7 = a2;
        v8 = a1;
        v23[1] = v22;
        if ( (int)sub_5C9B30(a1, a2, v10) >= 0 )
        {
          v16 = *(_DWORD *)(a2 + 68);
          ++v11;
          v23 += 2;
          goto LABEL_17;
        }
LABEL_16:
        v24 = 1;
        v16 = *(_DWORD *)(a2 + 68) - 1;
        *(_DWORD *)(a2 + 68) = v16;
LABEL_17:
        if ( v11 >= v16 )
        {
          if ( v24 )
          {
            if ( !v16 )
            {
              qfree(*(void **)(a2 + 72));
              *(_QWORD *)(a2 + 72) = 0;
            }
            sub_5C77B0(a1, a2, 0);
          }
          v8 = (__m128i *)ptr;
          break;
        }
      }
    }
    if ( v8 )
    {
      *(_QWORD *)&v27 = 0;
      qfree(v8);
    }
    return *(_QWORD *)(a2 + 72);
  }
  return result;
}
