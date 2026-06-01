void __fastcall sub_2212060(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, int a5)
{
  __int64 v7; // rsi
  unsigned int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rax
  void *v15; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-80h]
  _BYTE v17[16]; // [rsp+10h] [rbp-78h] BYREF
  __int64 (__fastcall **v18)(); // [rsp+20h] [rbp-68h] BYREF
  int v19; // [rsp+28h] [rbp-60h]
  __int128 v20; // [rsp+30h] [rbp-58h]
  __int64 v21; // [rsp+40h] [rbp-48h]
  char v22; // [rsp+48h] [rbp-40h]
  int v23; // [rsp+4Ch] [rbp-3Ch]
  void **v24; // [rsp+50h] [rbp-38h]

  sub_2212010(a2, a5);
  v15 = v17;
  v20 = 0;
  v17[0] = 0;
  v16 = 0;
  v19 = 0;
  v22 = 0;
  v23 = 1;
  v21 = 0;
  v18 = &off_2BEBE68;
  v24 = &v15;
  sub_227B8B0(&v18, 0, 0, 0);
  v7 = a3;
  v8 = 0;
  sub_227B930(&v18, v7);
  v18 = &off_2BEBE68;
  sub_227B7A0(&v18);
  v9 = sub_227D600(&v18);
  v10 = sub_995540(v9, "= ");
  sub_227BF10(v10, v15, v16);
  if ( v16 < 8 )
    v8 = 8 - v16;
  v11 = sub_227D600(v10);
  v12 = sub_227D090(v11, v8);
  sub_995540(v12, " (default: ");
  if ( *(_BYTE *)(a4 + 9) )
  {
    v13 = sub_227D600(v12);
    sub_227B930(v13, *(unsigned __int8 *)(a4 + 8));
  }
  else
  {
    v13 = sub_227D600(v12);
    sub_995540(v13, "*no default*");
  }
  v14 = sub_227D600(v13);
  sub_995540(v14, ")\n");
  if ( v15 != v17 )
    operator delete(v15);
}
