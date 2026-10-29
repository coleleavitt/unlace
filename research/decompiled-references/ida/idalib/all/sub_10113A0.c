__int64 __fastcall sub_10113A0(__int64 a1, __int64 a2, int *a3, __int64 a4)
{
  void *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  void *v12; // rbx
  char *v13; // rbp
  char *v14; // rbx
  char *v15; // rdi
  void *v17[2]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v18; // [rsp+10h] [rbp-78h]
  void *v19[3]; // [rsp+20h] [rbp-68h] BYREF
  __int16 v20; // [rsp+38h] [rbp-50h] BYREF
  void *v21; // [rsp+40h] [rbp-48h]
  void *v22; // [rsp+48h] [rbp-40h]
  __int64 v23; // [rsp+50h] [rbp-38h]

  sub_E59960((void ***)v19, (void **)"threadFlows", (void **)&byte_9[2]);
  sub_100F450((__int64)v17, a2, a3, a4);
  v20 = 8;
  v21 = v17[0];
  v7 = v17[1];
  *(_OWORD *)v17 = 0;
  v22 = v7;
  v8 = v18;
  v18 = 0;
  v23 = v8;
  sub_100D6D0(a1, (__int64)v19, 1, v9, v10, v11);
  sub_222B2A0(&v20);
  v12 = v19[0];
  if ( v19[0] )
  {
    if ( *(void **)v19[0] != (char *)v19[0] + 16 )
      operator delete(*(void **)v19[0]);
    operator delete(v12, 0x20u);
  }
  v13 = (char *)v17[1];
  v14 = (char *)v17[0];
  if ( v17[1] != v17[0] )
  {
    do
    {
      v15 = v14;
      v14 += 40;
      sub_222B2A0(v15);
    }
    while ( v13 != v14 );
    v14 = (char *)v17[0];
  }
  if ( v14 )
    operator delete(v14);
  return a1;
}
