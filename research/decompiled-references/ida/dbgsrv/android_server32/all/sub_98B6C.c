/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_98B6C
// Address: 0x00098B6C

//----- (00098B6C) --------------------------------------------------------
int __fastcall sub_98B6C(int a1, _DWORD *a2)
{
  int v3; // r0
  __int64 v5; // kr00_8

  v3 = a2[1];
  if ( !v3 || *(_BYTE *)(v3 + *a2 - 1) != 93 )
    sub_93B8C((int)a2, " ", "");
  sub_93B8C((int)a2, "[", "");
  v5 = *(_QWORD *)(a1 + 12);
  if ( HIDWORD(v5) )
  {
    if ( (_DWORD)v5 )
      sub_93B8C((int)a2, (_BYTE *)v5, (_BYTE *)HIDWORD(v5));
  }
  else if ( (_DWORD)v5 )
  {
    sub_923F8((unsigned __int8 *)v5, (int)a2);
  }
  sub_93B8C((int)a2, "]", "");
  return (*(int (__fastcall **)(_DWORD, _DWORD *))(**(_DWORD **)(a1 + 8) + 16))(*(_DWORD *)(a1 + 8), a2);
}
// 98BAE: conditional instruction was optimized away because r2.4==0
