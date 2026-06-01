__int64 __fastcall sub_A2AFC0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 (__fastcall *a5)(__int64 a1, __int64 a2),
        __int64 a6)
{
  __int64 (__fastcall *v8)(__int64, __int64); // rbx
  unsigned int v9; // r12d
  char *v10; // r13
  char *v11; // rbx
  __int64 v12; // rdi
  __int64 *v14; // r12
  __int64 *i; // rbx
  __int64 v16; // r8
  __int64 **v17; // rcx
  __int64 v18; // r9
  unsigned int v20; // [rsp+14h] [rbp-184h]
  _BYTE **v21; // [rsp+20h] [rbp-178h] BYREF
  __int64 v22; // [rsp+28h] [rbp-170h] BYREF
  __int64 v23; // [rsp+30h] [rbp-168h]
  __int64 (__fastcall *v24)(__int64, __int64); // [rsp+38h] [rbp-160h]
  __int64 v25; // [rsp+40h] [rbp-158h]
  unsigned __int8 v26; // [rsp+48h] [rbp-150h]
  _BYTE *v27; // [rsp+50h] [rbp-148h] BYREF
  size_t v28; // [rsp+58h] [rbp-140h]
  int v29; // [rsp+60h] [rbp-138h]
  __int64 v30; // [rsp+68h] [rbp-130h]
  __int64 v31; // [rsp+70h] [rbp-128h]
  __int64 *v32[24]; // [rsp+78h] [rbp-120h] BYREF
  void *v33; // [rsp+138h] [rbp-60h]
  char *v34; // [rsp+140h] [rbp-58h]
  __int64 v35; // [rsp+148h] [rbp-50h]
  char v36; // [rsp+151h] [rbp-47h]

  v8 = a5;
  if ( !a5 )
    v8 = sub_A1CA00;
  v29 = 0;
  v27 = nullptr;
  v28 = 0;
  v30 = 0;
  v31 = 0;
  memset(v32, 0, sizeof(v32));
  v33 = nullptr;
  v34 = nullptr;
  v35 = 0;
  v36 = 0;
  v9 = sub_A2AE20(a1, a2, (__int64)&v27, (__int64)v8, a6);
  if ( !(_BYTE)v9 )
  {
    v21 = &v27;
    sub_9FBD90(&v22, v27, v28, a3);
    v24 = v8;
    v23 = a4;
    v25 = a6;
    v26 = 0;
    sub_A236A0((__int64)&v21, v20, 0, v32, 0, 0);
    v14 = (__int64 *)v21[30];
    for ( i = (__int64 *)v21[29]; v14 != i; i += 26 )
    {
      v16 = *i;
      v17 = (__int64 **)(i + 2);
      v18 = i[1];
      sub_A236A0((__int64)&v21, v20, 0, v17, v16, v18);
    }
    v9 = v26;
    if ( !v26 )
    {
      sub_A1C9F0(&v22, v23);
      v9 = v26;
    }
    sub_A007D0(&v22);
  }
  v10 = v34;
  v11 = (char *)v33;
  if ( v34 != v33 )
  {
    do
    {
      v12 = (__int64)(v11 + 16);
      v11 += 208;
      sub_A1D170(v12);
    }
    while ( v10 != v11 );
    v11 = (char *)v33;
  }
  if ( v11 )
    operator delete(v11);
  sub_A1D170((__int64)v32);
  return v9;
}

