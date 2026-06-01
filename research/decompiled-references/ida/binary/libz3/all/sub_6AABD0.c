__int64 __fastcall sub_6AABD0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v5; // rbx
  double v6; // rax
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(int, int, int, int, int, int, __int64); // rax
  int v9; // eax
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // [rsp-48h] [rbp-50h] BYREF
  __int64 v17[2]; // [rsp-40h] [rbp-48h] BYREF
  __m128 v18; // [rsp-30h] [rbp-38h] BYREF

  v5 = a1;
  v6 = *(double *)a1;
  v16 = a2;
  v17[1] = 0;
  *(double *)v17 = v6;
  v18 = _mm_loadh_ps((const double *)a1);
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v7 = a1[8];
  if ( v7 )
  {
    v8 = *(__int64 (__fastcall **)(int, int, int, int, int, int, __int64))(*(_QWORD *)v7 + 16LL);
  }
  else
  {
    v7 = sub_186B270(0x40u);
    v14 = v5[1];
    v15 = *v5;
    *(_QWORD *)v7 = &off_1C52FD8;
    *(_QWORD *)(v7 + 16) = v14;
    LOBYTE(v14) = *(_BYTE *)(v14 + 715);
    *(_QWORD *)(v7 + 8) = v15;
    *(_BYTE *)(v7 + 40) = v14;
    v8 = sub_6BF550;
    *(_QWORD *)(v7 + 24) = 0;
    *(_QWORD *)(v7 + 32) = v15;
    *(_QWORD *)(v7 + 48) = 0;
    *(_BYTE *)(v7 + 56) = 1;
    v5[8] = v7;
  }
  v9 = v8(v7, 1, (int)&v16, (int)&v18, (int)v17, 0, a4);
  v10 = v18.m128_u64[0];
  LOBYTE(v5) = v9 != 0;
  if ( v18.m128_u64[0] )
  {
    v11 = v18.m128_u64[1];
    if ( (*(_DWORD *)(v18.m128_u64[0] + 8))-- == 1 )
      sub_15D7BC0(v11, v10);
  }
  sub_2B4F40(v17);
  return (unsigned int)v5;
}

