__int64 __fastcall sub_3E50E0(__int64 a1, unsigned __int8 **a2)
{
  unsigned int v2; // ebx

  v2 = sub_7AD80(a1, (__int64)a2);
  if ( (_BYTE)v2 )
  {
    sub_7AD00(a1 + 360, a2);
    *(_BYTE *)(a1 + 392) = (unsigned __int8)sub_78B00(a2) != 0;
  }
  return v2;
}
