void __fastcall sub_2212770(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rax
  void *v14; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-80h]
  _BYTE v16[16]; // [rsp+10h] [rbp-78h] BYREF
  __int64 (__fastcall **v17)(); // [rsp+20h] [rbp-68h] BYREF
  int v18; // [rsp+28h] [rbp-60h]
  __int128 v19; // [rsp+30h] [rbp-58h]
  __int64 v20; // [rsp+40h] [rbp-48h]
  char v21; // [rsp+48h] [rbp-40h]
  int v22; // [rsp+4Ch] [rbp-3Ch]
  void **v23; // [rsp+50h] [rbp-38h]

  sub_2212010(a2, a5);
  v14 = v16;
  v19 = 0;
  v16[0] = 0;
  v15 = 0;
  v18 = 0;
  v21 = 0;
  v22 = 1;
  v20 = 0;
  v17 = &off_2BEBE68;
  v23 = &v14;
  sub_227B8B0(&v17, 0, 0, 0);
  sub_227B910(&v17, a3);
  v17 = &off_2BEBE68;
  v7 = 0;
  sub_227B7A0(&v17);
  v8 = sub_227D600(&v17);
  v9 = sub_995540(v8, "= ");
  sub_227BF10(v9, v14, v15);
  if ( v15 < 8 )
    v7 = 8 - v15;
  v10 = sub_227D600(v9);
  v11 = sub_227D090(v10, v7);
  sub_995540(v11, " (default: ");
  if ( *(_BYTE *)(a4 + 16) )
  {
    v12 = sub_227D600(v11);
    sub_227B910(v12, *(_QWORD *)(a4 + 8));
  }
  else
  {
    v12 = sub_227D600(v11);
    sub_995540(v12, "*no default*");
  }
  v13 = sub_227D600(v12);
  sub_995540(v13, ")\n");
  if ( v14 != v16 )
    operator delete(v14);
}
