void __fastcall sub_2212A50(float a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rax
  void *v13; // [rsp+10h] [rbp-88h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-80h]
  _BYTE v15[16]; // [rsp+20h] [rbp-78h] BYREF
  __int64 (__fastcall **v16)(); // [rsp+30h] [rbp-68h] BYREF
  int v17; // [rsp+38h] [rbp-60h]
  __int128 v18; // [rsp+40h] [rbp-58h]
  __int64 v19; // [rsp+50h] [rbp-48h]
  char v20; // [rsp+58h] [rbp-40h]
  int v21; // [rsp+5Ch] [rbp-3Ch]
  void **v22; // [rsp+60h] [rbp-38h]

  sub_2212010(a3, a5);
  v13 = v15;
  v18 = 0;
  v15[0] = 0;
  v14 = 0;
  v17 = 0;
  v20 = 0;
  v21 = 1;
  v19 = 0;
  v16 = &off_2BEBE68;
  v22 = &v13;
  sub_227B8B0(&v16, 0, 0, 0);
  sub_227B9D0(&v16, a1);
  v16 = &off_2BEBE68;
  sub_227B7A0(&v16);
  v6 = 0;
  v7 = sub_227D600(&v16);
  v8 = sub_995540(v7, "= ");
  sub_227BF10(v8, v13, v14);
  if ( v14 < 8 )
    v6 = 8 - v14;
  v9 = sub_227D600(v8);
  v10 = sub_227D090(v9, v6);
  sub_995540(v10, " (default: ");
  if ( *(_BYTE *)(a4 + 12) )
  {
    v11 = sub_227D600(v10);
    sub_227B9D0(v11, *(float *)(a4 + 8));
  }
  else
  {
    v11 = sub_227D600(v10);
    sub_995540(v11, "*no default*");
  }
  v12 = sub_227D600(v11);
  sub_995540(v12, ")\n");
  if ( v13 != v15 )
    operator delete(v13);
}
