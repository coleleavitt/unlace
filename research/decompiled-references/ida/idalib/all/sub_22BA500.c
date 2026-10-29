void __fastcall sub_22BA500(__m128i *a1, int a2)
{
  __m128i v3; // rax
  int v4; // edi
  __m128i v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char *v12; // rax
  __int64 v13; // rdx
  void *v14[2]; // [rsp+0h] [rbp-128h] BYREF
  __int64 v15; // [rsp+10h] [rbp-118h] BYREF
  __m128i v16[2]; // [rsp+20h] [rbp-108h] BYREF
  __int16 v17; // [rsp+40h] [rbp-E8h]
  __m128i v18; // [rsp+50h] [rbp-D8h] BYREF
  __int16 v19; // [rsp+70h] [rbp-B8h]
  __m128i v20[3]; // [rsp+80h] [rbp-A8h] BYREF
  __m128i v21; // [rsp+B0h] [rbp-78h] BYREF
  __int16 v22; // [rsp+D0h] [rbp-58h]
  __m128i v23[4]; // [rsp+E0h] [rbp-48h] BYREF

  if ( a1[3].m128i_i32[0] )
  {
    v3.m128i_i64[0] = (__int64)sub_22B7340(a2);
    v4 = a1[3].m128i_i32[0];
    v21 = v3;
    v22 = 261;
    v17 = 259;
    v16[0].m128i_i64[0] = (__int64)"-";
    v5.m128i_i64[0] = (__int64)sub_22B6CA0(v4);
    v19 = 261;
    v18 = v5;
    sub_A41580(v20, &v18, v16, v6, v7, v8);
    sub_A41580(v23, v20, &v21, v9, v10, v11);
    sub_2253560(v14, v23);
    sub_22BA340(a1, (__int64)v14[0], (__int64)v14[1]);
    if ( v14[0] != &v15 )
      operator delete(v14[0]);
  }
  else
  {
    v12 = sub_22B7340(a2);
    sub_22BA340(a1, (__int64)v12, v13);
  }
}
