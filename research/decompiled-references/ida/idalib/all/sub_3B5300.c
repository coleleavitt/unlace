__int64 __fastcall sub_3B5300(_BYTE *a1, unsigned __int8 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 *v6; // r12
  _QWORD *v8; // rdi
  unsigned __int64 v10; // r14
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // r15
  void *v14; // rdi
  __int64 v15; // rcx
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __m128i v19; // xmm0
  __int64 v20; // rcx
  void **v22; // rax
  __int64 v23; // rdx
  void **v24; // rbp
  __int64 v25; // rax
  int v26; // ecx
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // rax
  void *v30; // rdi

  v6 = *(__int64 **)(qword_2CCB598 + 1576);
  if ( (_BYTE *)v6[34] != a1 && (unsigned int)sub_3B4CE0((__int64)a1, a2, a3, a4, a5, a6) )
  {
    v8 = v6 + 21;
    if ( (a1[72] & 8) != 0 )
      v8 = v6 + 15;
    sub_3AB380(v8, (__int64)a1);
    if ( *((_DWORD *)a1 + 11) != 3 )
      goto LABEL_6;
    v10 = *((_QWORD *)a1 + 7);
    if ( v10 >= v6[7] )
    {
      if ( !under_debugger )
        interr(40040);
      goto LABEL_32;
    }
    v11 = (int)v10;
    v12 = v6[6];
    v13 = v12 + 32LL * (int)v10;
    v14 = *(void **)v13;
    if ( *(_QWORD *)v13 )
    {
      *(_QWORD *)(v13 + 8) = 0;
      qfree(v14);
      v12 = v6[6];
    }
    v15 = v6[7];
    v16 = (__int64 *)(v13 + 32);
    v17 = ((32 * v15 + v12 - v13) >> 5) - 2;
    if ( v17 >= 0 )
    {
      do
      {
        v18 = *v16;
        v19 = _mm_loadu_si128((const __m128i *)(v16 + 1));
        *v16 = 0;
        v16 += 4;
        *(v16 - 2) = 0;
        *(v16 - 8) = v18;
        v20 = *(v16 - 1);
        *(__m128i *)(v16 - 7) = v19;
        *(v16 - 5) = v20;
      }
      while ( v17-- != 0 );
      v15 = v6[7];
    }
    v6[7] = v15 - 1;
    if ( (int)v10 < (int)v15 - 1 )
    {
      do
      {
        *(_QWORD *)(*(_QWORD *)(v6[6] + 32 * v11 + 24) + 56LL) = v11;
        ++v11;
      }
      while ( (int)v15 - 1 > (int)v11 );
      if ( (a1[76] & 2) == 0 )
        return 1;
    }
    else
    {
LABEL_6:
      if ( (a1[76] & 2) == 0 )
        return 1;
    }
    v22 = (void **)sub_3AF270((__int64)a1);
    v23 = v6[1];
    v24 = v22;
    v25 = *v6;
    if ( v24 != (void **)(*v6 + 8 * v23) && *v24 == a1 )
    {
      if ( !a2 )
      {
        sub_3AD350(193, (__int64)a1, v23);
        v23 = v6[1];
        v25 = *v6;
      }
      memmove(v24, v24 + 1, v25 + 8 * v23 - (_QWORD)v24 - 8);
      --v6[1];
      (*(void (__fastcall **)(__int64, __int64, _BYTE *, _QWORD, _QWORD))(*(_QWORD *)qword_2C819A8 + 16LL))(
        qword_2C819A8,
        1,
        a1,
        0,
        (2 * a2) | (unsigned int)*((unsigned __int8 *)v6 + 308));
      *((_DWORD *)a1 + 11) = -1;
      if ( !a2 )
        sub_52CCE0(5, 0, *((_QWORD *)a1 + 11), v26, v27, v28);
      v29 = sub_3AA830((__int64)a1);
      memmove((void *)v29, (const void *)(v29 + 8), v6[30] + 8 * v6[31]-- - v29 - 8);
      if ( a1 )
      {
        v30 = *((void **)a1 + 1);
        if ( v30 )
        {
          *((_QWORD *)a1 + 2) = 0;
          qfree(v30);
        }
        operator delete(a1, 0x60u);
      }
      return 1;
    }
    if ( !under_debugger )
      interr(40041);
LABEL_32:
    BUG();
  }
  return 0;
}
