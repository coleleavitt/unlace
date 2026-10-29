/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47105B
// Address: 0x0047105B

//----- (0047105B) --------------------------------------------------------
int __usercall sub_47105B@<eax>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  unsigned __int64 v3; // rcx
  int v4; // edi
  int v6; // edi
  int v7; // eax
  int v8; // esi

  HIDWORD(v3) = a1 + 2;
  if ( !sub_471945((int)(a1 + 2), (int)(a1 + 2), a2) )
    return -1;
  v4 = (int)(a1 + 6);
  if ( !sub_471908((int)(a1 + 6), SHIDWORD(v3), (int)(a1 + 6)) )
    return -1;
  do
  {
    if ( !sub_46E65F((int)(a1 + 6), v4) )
      break;
    LODWORD(v3) = a1;
  }
  while ( sub_471281(v3, v4) );
  v6 = a1[28];
  if ( !v6 && a1[10] != 1 )
  {
    v7 = sub_470F7F((unsigned __int8 **)HIDWORD(v3));
    if ( v7 == -1 )
      v6 = -1;
    sub_4718E9((_DWORD *)HIDWORD(v3), v7);
  }
  if ( (*a1 & 1) != 0 )
  {
    v8 = a1[9];
    if ( v8 )
    {
      *sub_46B984() = v8;
      sub_467EF4(SHIDWORD(v3), v6);
    }
  }
  return v6;
}
