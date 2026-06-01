void __fastcall sub_E49C90(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  size_t v5; // rax
  unsigned __int64 *v6; // rbx
  __int64 v7; // rax
  unsigned __int64 *v8; // r14
  unsigned __int64 v9; // rax
  char *v10; // rbx
  size_t v11; // rax
  char *v12; // rbp
  char *v13; // rdi
  void **v14; // [rsp+8h] [rbp-B0h] BYREF
  void *v15[2]; // [rsp+10h] [rbp-A8h] BYREF
  void *v16; // [rsp+20h] [rbp-98h]
  __m128 v17; // [rsp+30h] [rbp-88h] BYREF
  int v18; // [rsp+40h] [rbp-78h]
  __int16 v19; // [rsp+50h] [rbp-68h] BYREF
  __m128 v20; // [rsp+58h] [rbp-60h]
  void *v21; // [rsp+68h] [rbp-50h]

  sub_E374F0(a1, a2);
  sub_E43670((__int64)&v17, a1, *(_QWORD *)(a2 + 88));
  v19 = 7;
  v20 = v17;
  v17 = 0u;
  LODWORD(v21) = v18;
  v18 = 0;
  v2 = j__strlen("interface");
  sub_2206E30(a1 + 1048, "interface", v2);
  sub_2208D80(a1 + 1048, &v19);
  sub_2205EB0(a1 + 1048);
  sub_2207560(&v19);
  sub_E395A0((__int64 *)&v17);
  v3 = sub_B85280(a2);
  sub_E43670((__int64)&v17, a1, v3);
  v19 = 7;
  v4 = v17.m128_u64[1];
  v20.m128_u64[0] = v17.m128_u64[0];
  v17 = 0u;
  v20.m128_u64[1] = v4;
  LODWORD(v4) = v18;
  v18 = 0;
  LODWORD(v21) = v4;
  v5 = j__strlen("implementation");
  sub_2206E30(a1 + 1048, "implementation", v5);
  sub_2208D80(a1 + 1048, &v19);
  sub_2205EB0(a1 + 1048);
  sub_2207560(&v19);
  sub_E395A0((__int64 *)&v17);
  v6 = *(unsigned __int64 **)(a2 + 104);
  v7 = *(unsigned int *)(a2 + 112);
  *(_OWORD *)v15 = 0;
  v16 = nullptr;
  v8 = &v6[v7];
  if ( v6 != v8 )
  {
    v14 = v15;
    do
    {
      sub_E43670((__int64)&v17, a1, *v6);
      v19 = 7;
      v9 = v17.m128_u64[1];
      v20.m128_u64[0] = v17.m128_u64[0];
      v17 = 0u;
      v20.m128_u64[1] = v9;
      LODWORD(v9) = v18;
      v18 = 0;
      LODWORD(v21) = v9;
      if ( v15[1] == v16 )
      {
        sub_E3A210((__int64)v14, (char *)v15[1], (__int64)&v19);
      }
      else
      {
        sub_2205840(v15[1], &v19);
        v15[1] = (char *)v15[1] + 40;
      }
      ++v6;
      sub_2207560(&v19);
      sub_E395A0((__int64 *)&v17);
    }
    while ( v8 != v6 );
    v10 = (char *)v15[0];
    if ( v15[1] != v15[0] )
    {
      v14 = (void **)v15[1];
      v19 = 8;
      v21 = v16;
      v16 = nullptr;
      v20 = _mm_loadh_ps((const double *)&v14);
      *(_OWORD *)v15 = 0;
      v11 = j__strlen("protocols");
      v17.m128_u64[0] = (unsigned __int64)&v19;
      v17.m128_u64[1] = a1 + 1048;
      sub_E34890(a1 + 1048, (__int64)"protocols", v11, (__int64)sub_E34840, &v17);
      sub_2207560(&v19);
      v12 = (char *)v15[1];
      v10 = (char *)v15[0];
      if ( v15[1] != v15[0] )
      {
        do
        {
          v13 = v10;
          v10 += 40;
          sub_2207560(v13);
        }
        while ( v12 != v10 );
        v10 = (char *)v15[0];
      }
    }
    if ( v10 )
      operator delete(v10);
  }
}

