__int64 __fastcall sub_103750(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r12d

  v2 = *(unsigned __int8 *)(a1 + 1248);
  if ( !(_BYTE)v2 || *(_QWORD *)(a1 + 1232) == -1 )
    return sub_16BD80(a1, a2);
  if ( (unsigned __int8)sub_102E30(a1, 1) )
    sub_16BD80(a1, a2);
  return v2;
}

