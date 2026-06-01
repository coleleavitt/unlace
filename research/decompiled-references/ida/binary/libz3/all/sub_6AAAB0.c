__int64 __fastcall sub_6AAAB0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v6; // rbx
  double v7; // rax
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(int, int, int, int, int, int, __int64); // rax
  int v10; // eax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // [rsp-50h] [rbp-58h]
  __int64 v18[2]; // [rsp-40h] [rbp-48h] BYREF
  __m128 v19; // [rsp-30h] [rbp-38h] BYREF

  v6 = a1;
  v7 = *(double *)a1;
  v18[1] = 0;
  *(double *)v18 = v7;
  v19 = _mm_loadh_ps((const double *)a1);
  if ( a4 )
    ++*(_DWORD *)(a4 + 8);
  v8 = a1[8];
  if ( v8 )
  {
    v9 = *(__int64 (__fastcall **)(int, int, int, int, int, int, __int64))(*(_QWORD *)v8 + 16LL);
  }
  else
  {
    v17 = a3;
    v8 = sub_186B270(0x40u);
    v15 = *v6;
    a2 = (unsigned int)a2;
    v16 = v6[1];
    *(_QWORD *)v8 = &off_1C52FD8;
    *(_QWORD *)(v8 + 8) = v15;
    a3 = v17;
    *(_QWORD *)(v8 + 16) = v16;
    LOBYTE(v16) = *(_BYTE *)(v16 + 715);
    *(_QWORD *)(v8 + 24) = 0;
    *(_BYTE *)(v8 + 40) = v16;
    v9 = sub_6BF550;
    *(_QWORD *)(v8 + 32) = v15;
    *(_QWORD *)(v8 + 48) = 0;
    *(_BYTE *)(v8 + 56) = 1;
    v6[8] = v8;
  }
  v10 = v9(v8, a2, a3, (int)&v19, (int)v18, 0, a5);
  v11 = v19.m128_u64[0];
  LOBYTE(v6) = v10 != 0;
  if ( v19.m128_u64[0] )
  {
    v12 = v19.m128_u64[1];
    if ( (*(_DWORD *)(v19.m128_u64[0] + 8))-- == 1 )
      sub_15D7BC0(v12, v11);
  }
  sub_2B4F40(v18);
  return (unsigned int)v6;
}

