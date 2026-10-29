__int64 __fastcall sub_A97400(__int64 *a1, double a2, __m128 a3)
{
  int **v3; // r15
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  int v14; // edx
  _BYTE v16[8]; // [rsp+18h] [rbp-29C0h] BYREF
  int *v17; // [rsp+20h] [rbp-29B8h] BYREF
  int v18; // [rsp+28h] [rbp-29B0h]
  __int128 v19; // [rsp+30h] [rbp-29A8h]
  __int128 v20; // [rsp+40h] [rbp-2998h]
  __int64 v21; // [rsp+50h] [rbp-2988h]
  __int16 v22; // [rsp+58h] [rbp-2980h]
  __int64 v23; // [rsp+60h] [rbp-2978h]
  int v24[2650]; // [rsp+70h] [rbp-2968h] BYREF

  LODWORD(v3) = (unsigned __int8)byte_1C7ECC8;
  if ( !byte_1C7ECC8 )
  {
    v5 = *a1;
    v6 = a1[1];
    byte_1C7ECC8 = 1;
    sub_8FBD90((__int64)v24, v6, *(_QWORD *)(*(_QWORD *)(v5 + 16) + 112LL), *(_QWORD *)(v5 + 16) + 120LL);
    sub_A7B150(a1, (__int64)v24);
    v7 = a1[1];
    sub_15E1B70(v7);
    v8 = sub_15E1A70(v7);
    v9 = v8;
    if ( v8 )
      ++*(_DWORD *)(v8 + 8);
    sub_8F8A20((__int64)v24);
    v10 = a1[1];
    v3 = &v17;
    v22 = 0;
    v18 = 0;
    v17 = &off_1C4C9C8;
    v21 = 0;
    v23 = v10;
    v19 = 0;
    v20 = 0;
    sub_18561B0((unsigned int)v16, 1000, (unsigned int)&v17, v11, v12, v13);
    v14 = sub_8FD5F0((__int64)v24, 0, nullptr, 1u, (__m128i)0LL, a3);
    if ( v14 == 1 )
    {
      sub_AA5500(v24, &std::cout, 1);
      std::ostream::flush((std::ostream *)&std::cout);
      v14 = 1;
    }
    LOBYTE(v3) = v14 != 1;
    sub_1856400(v16);
    v17 = &off_1C4C9C8;
    if ( (_BYTE)v22 )
      sub_18296D0(v23);
    if ( HIBYTE(v22) )
      sub_1829760(v23);
    if ( v9 )
    {
      if ( (*(_DWORD *)(v9 + 8))-- == 1 )
        sub_15D7BC0(v7, v9);
    }
    sub_8EFC90((__int64)v24);
    byte_1C7ECC8 = 0;
  }
  return (unsigned int)v3;
}

