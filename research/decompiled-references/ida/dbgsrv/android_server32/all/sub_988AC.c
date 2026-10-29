/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_988AC
// Address: 0x000988AC

//----- (000988AC) --------------------------------------------------------
int __fastcall sub_988AC(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  char *v6; // r1
  char *v7; // r2
  int result; // r0

  sub_93B8C(a2, "(", "");
  sub_96CC0((_DWORD *)(a1 + 12), a2);
  sub_93B8C(a2, ")", "");
  (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 16))(*(_DWORD *)(a1 + 8), a2);
  v4 = *(_DWORD *)(a1 + 20);
  if ( v4 << 31 )
  {
    sub_93B8C(a2, " const", "");
    v4 = *(_DWORD *)(a1 + 20);
  }
  if ( (v4 & 2) != 0 )
  {
    sub_93B8C(a2, " volatile", "");
    v4 = *(_DWORD *)(a1 + 20);
  }
  if ( (v4 & 4) != 0 )
    sub_93B8C(a2, " restrict", "");
  v5 = *(unsigned __int8 *)(a1 + 24);
  if ( v5 == 2 )
  {
    v6 = " &&";
    v7 = "";
  }
  else
  {
    if ( v5 != 1 )
      goto LABEL_12;
    v6 = " &";
    v7 = "";
  }
  sub_93B8C(a2, v6, v7);
LABEL_12:
  result = *(_DWORD *)(a1 + 28);
  if ( result )
  {
    sub_9241E(a2, 32);
    return sub_923F8(*(unsigned __int8 **)(a1 + 28), a2);
  }
  return result;
}
