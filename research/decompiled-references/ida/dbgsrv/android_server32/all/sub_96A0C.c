/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96A0C
// Address: 0x00096A0C

//----- (00096A0C) --------------------------------------------------------
int __fastcall sub_96A0C(int a1, int a2)
{
  int v3; // r5
  __int64 v5; // kr00_8
  unsigned int v6; // r11
  int result; // r0
  unsigned int i; // r5

  v3 = *(_DWORD *)(a2 + 4);
  v5 = *(_QWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 12) = -1;
  *(_DWORD *)(a2 + 16) = -1;
  sub_923F8(*(unsigned __int8 **)(a1 + 8), a2);
  v6 = *(_DWORD *)(a2 + 16);
  result = v6 + 1;
  if ( v6 == -1 )
  {
    result = sub_93B8C(a2, "...", "");
  }
  else if ( v6 )
  {
    for ( i = 1; i < v6; ++i )
    {
      sub_93B8C(a2, ", ", "");
      *(_DWORD *)(a2 + 12) = i;
      result = sub_923F8(*(unsigned __int8 **)(a1 + 8), a2);
    }
  }
  else
  {
    *(_DWORD *)(a2 + 4) = v3;
  }
  *(_QWORD *)(a2 + 12) = v5;
  return result;
}
