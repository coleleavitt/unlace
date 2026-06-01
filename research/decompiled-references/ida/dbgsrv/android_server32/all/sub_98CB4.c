/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_98CB4
// Address: 0x00098CB4

//----- (00098CB4) --------------------------------------------------------
int __fastcall sub_98CB4(int a1, int a2)
{
  int v2; // r6

  v2 = *(_DWORD *)(a1 + 8);
  if ( *(_BYTE *)(v2 + 4) == 10 && sub_98DC4(v2) )
  {
    sub_93B8C(a2, "id<", "");
    sub_93B8C(a2, *(_BYTE **)(v2 + 12), *(_BYTE **)(v2 + 16));
    return sub_93B8C(a2, ">", "");
  }
  else
  {
    (*(void (__fastcall **)(int, int))(*(_DWORD *)v2 + 12))(v2, a2);
    if ( sub_94836(*(unsigned __int8 **)(a1 + 8)) )
      sub_93B8C(a2, " ", "");
    if ( sub_94836(*(unsigned __int8 **)(a1 + 8)) || sub_9484A(*(unsigned __int8 **)(a1 + 8)) )
      sub_93B8C(a2, "(", "");
    return sub_93B8C(a2, "*", "");
  }
}
