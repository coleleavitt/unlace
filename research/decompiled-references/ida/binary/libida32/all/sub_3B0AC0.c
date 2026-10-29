__int64 __fastcall sub_3B0AC0(_BYTE *a1, int a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 *v6; // rbp
  unsigned __int8 v8; // r12
  __int64 v9; // rdi
  unsigned __int64 v11; // rax
  int v12; // r15d
  __int64 v13; // rdx
  int v14; // r13d
  __int64 v15; // r14
  __int64 v16; // rsi
  void *v17; // rdi
  __int64 v18; // rcx
  __int64 *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __m128i v22; // xmm0
  __int64 v23; // rcx
  __int64 v25; // rax
  void **v26; // rax
  __int64 v27; // rdx
  void **v28; // r13
  __int64 v29; // rax
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  __int64 v33; // rax
  void *v34; // rdi
  __int64 v35; // [rsp+8h] [rbp-40h]

  v6 = *(__int64 **)(qword_2CA1698 + 1384);
  if ( (_BYTE *)v6[34] != a1 )
  {
    v8 = a2;
    if ( (unsigned int)sub_3B04E0((__int64)a1, a2, a3, a4, a5, a6) )
    {
      v9 = (__int64)(v6 + 21);
      if ( (a1[64] & 8) != 0 )
        v9 = (__int64)(v6 + 15);
      sub_3A6B60(v9, (__int64)a1);
      if ( *((_DWORD *)a1 + 10) != 3 )
        goto LABEL_6;
      v11 = *((unsigned int *)a1 + 13);
      v12 = *((_DWORD *)a1 + 13);
      if ( v11 >= v6[7] )
      {
        if ( !under_debugger )
          interr(40040);
        goto LABEL_32;
      }
      v13 = v6[6];
      v14 = *((_DWORD *)a1 + 13);
      v15 = 32LL * (int)v11;
      v16 = v13 + v15;
      v17 = *(void **)(v13 + v15);
      if ( v17 )
      {
        *(_QWORD *)(v16 + 8) = 0;
        v35 = v13 + v15;
        qfree(v17);
        v13 = v6[6];
        v16 = v35;
      }
      v18 = v6[7];
      v19 = (__int64 *)(v16 + 32);
      v20 = ((32 * v18 + v13 - v16) >> 5) - 2;
      if ( v20 >= 0 )
      {
        do
        {
          v21 = *v19;
          v22 = _mm_loadu_si128((const __m128i *)(v19 + 1));
          *v19 = 0;
          v19 += 4;
          *(v19 - 2) = 0;
          *(v19 - 8) = v21;
          v23 = *(v19 - 1);
          *(__m128i *)(v19 - 7) = v22;
          *(v19 - 5) = v23;
        }
        while ( v20-- != 0 );
        v18 = v6[7];
      }
      v6[7] = v18 - 1;
      if ( v12 < (int)v18 - 1 )
      {
        do
        {
          v25 = *(_QWORD *)(v6[6] + v15 + 24);
          v15 += 32;
          *(_DWORD *)(v25 + 52) = v14++;
        }
        while ( (_DWORD)v18 - 1 != v14 );
        if ( (a1[68] & 2) == 0 )
          return 1;
      }
      else
      {
LABEL_6:
        if ( (a1[68] & 2) == 0 )
          return 1;
      }
      v26 = (void **)sub_3AAB40((__int64)a1);
      v27 = v6[1];
      v28 = v26;
      v29 = *v6;
      if ( v28 != (void **)(*v6 + 8 * v27) && *v28 == a1 )
      {
        if ( !v8 )
        {
          sub_3A8C70(193, (__int64)a1, v27);
          v27 = v6[1];
          v29 = *v6;
        }
        memmove(v28, v28 + 1, v29 + 8 * v27 - (_QWORD)v28 - 8);
        --v6[1];
        (*(void (__fastcall **)(__int64, __int64, _BYTE *, _QWORD, _QWORD))(*(_QWORD *)qword_2C57988 + 16LL))(
          qword_2C57988,
          1,
          a1,
          0,
          (2 * v8) | (unsigned int)*((unsigned __int8 *)v6 + 308));
        *((_DWORD *)a1 + 10) = -1;
        if ( !v8 )
          sub_514A50(5, 0, *((_DWORD *)a1 + 20), v30, v31, v32);
        v33 = sub_3A6070((__int64)a1);
        memmove((void *)v33, (const void *)(v33 + 8), v6[30] + 8 * v6[31]-- - v33 - 8);
        if ( a1 )
        {
          v34 = *((void **)a1 + 1);
          if ( v34 )
          {
            *((_QWORD *)a1 + 2) = 0;
            qfree(v34);
          }
          operator delete(a1, 0x58u);
        }
        return 1;
      }
      if ( !under_debugger )
        interr(40041);
LABEL_32:
      BUG();
    }
  }
  return 0;
}

