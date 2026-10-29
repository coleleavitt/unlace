__int64 __fastcall sub_2212BD0(__int64 a1, __int64 a2, const void *a3, size_t a4, __int64 a5, int a6)
{
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned int v11; // esi
  bool v12; // cf
  unsigned int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rax

  sub_2212010(a2, a6);
  v9 = sub_227D600(a2);
  v10 = sub_995540(v9, "= ");
  sub_9954E0(v10, a3, a4);
  v11 = 8 - a4;
  v12 = a4 < 8;
  v13 = 0;
  if ( v12 )
    v13 = v11;
  v14 = sub_227D600(v10);
  v15 = sub_227D090(v14, v13);
  sub_995540(v15, " (default: ");
  if ( *(_BYTE *)(a5 + 40) )
  {
    v16 = sub_227D600(v15);
    sub_227BF10(v16, *(_QWORD *)(a5 + 8), *(_QWORD *)(a5 + 16));
  }
  else
  {
    v16 = sub_227D600(v15);
    sub_995540(v16, "*no default*");
  }
  v17 = sub_227D600(v16);
  return sub_995540(v17, ")\n");
}
