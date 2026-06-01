__int64 __fastcall sub_3BA060(_QWORD *a1, unsigned int a2)
{
  unsigned int v2; // ebp
  int v3; // ebx

  v2 = (unsigned __int16)sub_3B9FA0(a1, a2);
  v3 = (unsigned __int16)sub_3B9FA0(a1, a2 + 2);
  if ( (unsigned __int8)sub_615160(*a1, 3, 32) )
    v2 <<= 16;
  else
    v3 <<= 16;
  return v3 | v2;
}

