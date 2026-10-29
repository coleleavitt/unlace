__int64 __fastcall sub_EF5240(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rcx
  unsigned int v4; // edx
  char v6; // al

  v2 = sub_FFF090(a1);
  v4 = 29;
  if ( !v2
    && ((unsigned __int8)sub_FFE580((unsigned int)a1, a2, 29, v3)
     || (unsigned __int8)sub_FFE5D0((unsigned int)a1)
     || (unsigned __int8)sub_FFEEE0((unsigned int)a1)
     || (v6 = sub_FFED80((unsigned int)a1), v4 = 8, v6)) )
  {
    return 16;
  }
  else
  {
    return v4;
  }
}
