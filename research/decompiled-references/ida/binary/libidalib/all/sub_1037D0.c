__int64 __fastcall sub_1037D0(__int64 a1, unsigned __int8 a2)
{
  unsigned int v2; // r12d
  char v3; // al

  v2 = *(unsigned __int8 *)(a1 + 1248);
  if ( !(_BYTE)v2 || *(_QWORD *)(a1 + 1232) == -1 )
    return sub_16BC30(a1, a2);
  v3 = sub_1012D0(a1, 3 - (unsigned int)a2);
  if ( (unsigned __int8)sub_102E30(a1, v3) )
    sub_16BC30(a1, a2);
  return v2;
}

