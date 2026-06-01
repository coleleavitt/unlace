__int64 __fastcall sub_3BEEF0(_QWORD *a1, unsigned __int64 a2)
{
  unsigned int v2; // ebp
  int v3; // ebx

  v2 = (unsigned __int16)sub_3BEE30(a1, a2);
  v3 = (unsigned __int16)sub_3BEE30(a1, *(_QWORD *)(a1[3] + 16LL) & (a2 + 2));
  if ( (unsigned __int8)sub_631C90(*a1, 3, 32) )
    v2 <<= 16;
  else
    v3 <<= 16;
  return v3 | v2;
}
