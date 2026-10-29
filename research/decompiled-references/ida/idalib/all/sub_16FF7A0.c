void __fastcall sub_16FF7A0(char ***a1, __int64 a2, char a3, const __m128i *a4)
{
  char **v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char *v12; // rax
  void *v13[2]; // [rsp+8h] [rbp-98h] BYREF
  _BYTE v14[16]; // [rsp+18h] [rbp-88h] BYREF
  void **v15; // [rsp+28h] [rbp-78h] BYREF
  int v16; // [rsp+30h] [rbp-70h]
  __int128 v17; // [rsp+38h] [rbp-68h]
  __int64 v18; // [rsp+48h] [rbp-58h]
  char v19; // [rsp+50h] [rbp-50h]
  int v20; // [rsp+54h] [rbp-4Ch]
  void **v21; // [rsp+58h] [rbp-48h]

  v17 = 0;
  v13[0] = v14;
  v13[1] = nullptr;
  v14[0] = 0;
  v16 = 0;
  v19 = 0;
  v20 = 1;
  v18 = 0;
  v15 = (void **)&off_2BEBE68;
  v21 = v13;
  sub_227B8B0(&v15, 0, 0, 0);
  sub_E90250(a2, (__int64)&v15, a4, 0, 1);
  v15 = (void **)&off_2BEBE68;
  sub_227B7A0(&v15);
  v7 = *a1;
  LOWORD(v18) = 260;
  v15 = v13;
  v12 = sub_15A4EB0(v7, (const void ***)&v15, v8, v9, v10, v11);
  if ( a3 )
    sub_15A30F0((__int64)a1, (__int64)v12);
  else
    sub_15A2FD0((__int64)a1, (__int64)v12);
  if ( v13[0] != v14 )
    operator delete(v13[0]);
}
