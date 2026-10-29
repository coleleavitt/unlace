__int64 __fastcall sub_1036C0(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
  unsigned int v4; // r13d

  v4 = *(unsigned __int8 *)(a1 + 1248);
  if ( !(_BYTE)v4 || *(_QWORD *)(a1 + 1232) == -1 )
    return sub_16B340(a1, a2, a3);
  if ( (unsigned __int8)sub_102E30(a1, 1) )
    sub_16B340(a1, a2, a3);
  return v4;
}

