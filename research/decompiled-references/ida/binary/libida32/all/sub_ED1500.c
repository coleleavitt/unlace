__int64 __fastcall sub_ED1500(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rcx
  unsigned int v4; // edx
  char v6; // al

  v2 = sub_FDB350(a1);
  v4 = 29;
  if ( !v2
    && ((unsigned __int8)sub_FDA840((unsigned int)a1, a2, 29, v3)
     || (unsigned __int8)sub_FDA890((unsigned int)a1)
     || (unsigned __int8)sub_FDB1A0((unsigned int)a1)
     || (v6 = sub_FDB040((unsigned int)a1), v4 = 8, v6)) )
  {
    return 16;
  }
  else
  {
    return v4;
  }
}

