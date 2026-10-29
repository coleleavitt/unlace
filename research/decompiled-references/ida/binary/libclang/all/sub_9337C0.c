__int64 __fastcall sub_9337C0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  void **v6; // rbx
  __int64 v7; // rdx
  unsigned int v8; // edx
  char v9; // al
  bool v10; // cc
  void *v11; // rbp
  char v13; // [rsp+Fh] [rbp-99h]
  void *v14; // [rsp+10h] [rbp-98h] BYREF
  unsigned int v15; // [rsp+18h] [rbp-90h]
  char v16; // [rsp+1Ch] [rbp-8Ch]
  void *v17; // [rsp+20h] [rbp-88h] BYREF
  unsigned int v18; // [rsp+28h] [rbp-80h]
  char v19; // [rsp+2Ch] [rbp-7Ch]
  void *v20; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-70h]
  char v22; // [rsp+3Ch] [rbp-6Ch]
  void *v23; // [rsp+40h] [rbp-68h] BYREF
  unsigned int v24; // [rsp+48h] [rbp-60h]
  char v25; // [rsp+4Ch] [rbp-5Ch]
  void *v26; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v27; // [rsp+58h] [rbp-50h]
  char v28; // [rsp+5Ch] [rbp-4Ch]
  void *v29; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v30; // [rsp+68h] [rbp-40h]

  v6 = &v29;
  sub_2587BE0(&v29, a1, *(unsigned int *)(a1 + 8));
  v7 = *(unsigned int *)(a2 + 8);
  v16 = 0;
  v15 = v30;
  v14 = v29;
  sub_2587BE0(&v29, a2, v7);
  v19 = 0;
  v18 = v30;
  v17 = v29;
  sub_2587BE0(&v29, &v17, a3);
  v28 = 0;
  v27 = v30;
  v26 = v29;
  sub_2587BE0(&v29, &v14, a3);
  v25 = 0;
  v24 = v30;
  v23 = v29;
  sub_258C0C0(&v29, &v23, &v26);
  v22 = 0;
  v21 = v30;
  v20 = v29;
  if ( v24 > 0x40 && v23 )
    operator delete[](v23);
  if ( v27 > 0x40 && v26 )
    operator delete[](v26);
  v13 = v22;
  sub_25877E0(&v29, &v20, v15);
  v8 = v30;
  v9 = v13;
  v10 = *(_DWORD *)(a4 + 8) <= 0x40u;
  v24 = v30;
  v23 = v29;
  v25 = v13;
  if ( v10 && v30 <= 0x40 )
  {
    *(_QWORD *)a4 = v29;
    *(_DWORD *)(a4 + 8) = v8;
  }
  else
  {
    sub_2585EA0(a4, &v23);
    v9 = v25;
  }
  if ( v9 )
  {
    sub_2587D60(&v29, &v23);
    v28 = 1;
    v26 = v29;
    v11 = v29;
    v27 = v30;
    if ( v30 > 0x40 )
      goto LABEL_12;
LABEL_28:
    LOBYTE(v6) = v11 != v20;
    goto LABEL_14;
  }
  sub_2587BE0(&v29, &v23, a3);
  v28 = 0;
  v26 = v29;
  v11 = v29;
  v27 = v30;
  if ( v30 <= 0x40 )
    goto LABEL_28;
LABEL_12:
  LODWORD(v6) = sub_2586760(&v26, &v20) ^ 1;
  if ( v11 )
    operator delete[](v11);
LABEL_14:
  if ( v24 > 0x40 && v23 )
    operator delete[](v23);
  if ( v21 > 0x40 && v20 )
    operator delete[](v20);
  if ( v18 > 0x40 && v17 )
    operator delete[](v17);
  if ( v15 > 0x40 && v14 )
    operator delete[](v14);
  return (unsigned int)v6;
}

