/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_982B0
// Address: 0x000982B0

//----- (000982B0) --------------------------------------------------------
unsigned __int8 *__fastcall sub_982B0(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r0
  char *v7; // r1
  char *v8; // r2
  unsigned __int8 *result; // r0

  sub_93B8C(a2, "(", "");
  sub_96CC0((_DWORD *)(a1 + 16), a2);
  sub_93B8C(a2, ")", "");
  v4 = *(_DWORD *)(a1 + 8);
  if ( v4 )
    (*(void (__fastcall **)(int, int))(*(_DWORD *)v4 + 16))(v4, a2);
  v5 = *(_DWORD *)(a1 + 28);
  if ( v5 << 31 )
  {
    sub_93B8C(a2, " const", "");
    v5 = *(_DWORD *)(a1 + 28);
  }
  if ( (v5 & 2) != 0 )
  {
    sub_93B8C(a2, " volatile", "");
    v5 = *(_DWORD *)(a1 + 28);
  }
  if ( (v5 & 4) != 0 )
    sub_93B8C(a2, " restrict", "");
  v6 = *(unsigned __int8 *)(a1 + 32);
  if ( v6 == 2 )
  {
    v7 = " &&";
    v8 = "";
  }
  else
  {
    if ( v6 != 1 )
      goto LABEL_14;
    v7 = " &";
    v8 = "";
  }
  sub_93B8C(a2, v7, v8);
LABEL_14:
  result = *(unsigned __int8 **)(a1 + 24);
  if ( result )
    return (unsigned __int8 *)sub_923F8(result, a2);
  return result;
}
