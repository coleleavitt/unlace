/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_98E1C
// Address: 0x00098E1C

//----- (00098E1C) --------------------------------------------------------
int __fastcall sub_98E1C(int a1, int a2)
{
  char *v4; // r1
  char *v5; // r2

  (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 12))(*(_DWORD *)(a1 + 8), a2);
  if ( sub_94836(*(unsigned __int8 **)(a1 + 8)) )
    sub_93B8C(a2, " ", "");
  if ( sub_94836(*(unsigned __int8 **)(a1 + 8)) || sub_9484A(*(unsigned __int8 **)(a1 + 8)) )
  {
    v4 = "(&";
    v5 = "";
  }
  else
  {
    v4 = "&";
    v5 = "";
  }
  return sub_93B8C(a2, v4, v5);
}
