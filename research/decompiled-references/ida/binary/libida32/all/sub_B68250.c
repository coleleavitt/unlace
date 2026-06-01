__int64 __fastcall sub_B68250(__int64 a1)
{
  unsigned __int8 v1; // dl
  __int64 result; // rax

  v1 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (unsigned int)v1 - 34 <= 5 )
    return sub_B53CF0(a1);
  if ( (unsigned int)v1 - 59 <= 2 )
    return sub_B734F0();
  if ( (unsigned int)v1 - 40 <= 6 )
    return sub_B4FEA0(a1);
  result = 0;
  if ( v1 == 65 )
    return *(_QWORD *)(a1 + 88);
  return result;
}

