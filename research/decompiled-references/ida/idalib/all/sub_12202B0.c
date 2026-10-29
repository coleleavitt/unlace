void __fastcall sub_12202B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __m128i v11; // [rsp+0h] [rbp-128h] BYREF
  __int64 v12; // [rsp+10h] [rbp-118h] BYREF
  __m128i v13; // [rsp+20h] [rbp-108h] BYREF
  char *v14; // [rsp+30h] [rbp-F8h]
  __int16 v15; // [rsp+40h] [rbp-E8h]
  __m128i v16[2]; // [rsp+50h] [rbp-D8h] BYREF
  __int16 v17; // [rsp+70h] [rbp-B8h]
  __m128i v18[3]; // [rsp+80h] [rbp-A8h] BYREF
  __m128i v19[2]; // [rsp+B0h] [rbp-78h] BYREF
  __int16 v20; // [rsp+D0h] [rbp-58h]
  __m128i v21[4]; // [rsp+E0h] [rbp-48h] BYREF

  if ( *(_BYTE *)(a1 + 2384) )
  {
    v19[0].m128i_i64[0] = (__int64)"/bin";
    v20 = 259;
    v17 = 260;
    v6 = *(_QWORD *)(a1 + 2488);
    v16[0].m128i_i64[0] = a1 + 2392;
    v7 = *(_QWORD *)(a1 + 2496);
    v13.m128i_i64[0] = v6;
    v13.m128i_i64[1] = v7;
    v15 = 773;
    v14 = "/../";
    sub_A41580(v18, &v13, v16, 773, a5, a6);
    sub_A41580(v21, v18, v19, v8, v9, v10);
    sub_2253560(&v11, v21);
    sub_CEFAC0(a2, &v11);
    if ( (__int64 *)v11.m128i_i64[0] != &v12 )
      operator delete((void *)v11.m128i_i64[0]);
  }
}
