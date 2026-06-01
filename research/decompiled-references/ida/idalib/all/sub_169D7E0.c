__int64 __fastcall sub_169D7E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  char v4; // cl
  unsigned __int64 v5; // rax
  int v6; // edx

  result = 0;
  if ( ((*(_BYTE *)(*(_QWORD *)(a1 + 544) + 8LL) + 110) & 0x7Fu) > 5 )
  {
    v4 = sub_E90000(*(_QWORD *)(a3 + 8));
    result = 1;
    if ( ((1LL << v4) & 0x29) == 0 )
    {
      v5 = sub_B8EAA0(*(_QWORD *)(a1 + 544));
      v6 = *(_BYTE *)(v5 + 8) & 0x7F;
      LOBYTE(v5) = v6 == 24;
      LOBYTE(v6) = v6 == 0;
      return v6 | (unsigned int)v5;
    }
  }
  return result;
}
