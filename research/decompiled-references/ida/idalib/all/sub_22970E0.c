__int64 __fastcall sub_22970E0(char *a1, __int64 a2, __int64 a3)
{
  int v5; // [rsp+1Ch] [rbp-1Ch]
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]

  if ( a2 == 3 )
  {
    if ( *(_WORD *)a1 == 27745 && a1[2] == 108 )
    {
      LODWORD(v6) = 0;
      WORD2(v6) = 1;
      LOBYTE(v7) = 1;
      return v6;
    }
  }
  else if ( !a2 )
  {
    LOBYTE(v5) = 1;
    v6 = a3;
    v7 = v5;
    return v6;
  }
  if ( !sub_2247970(a1, a2, 0xAu, &v6) && v6 == (unsigned int)v6 )
  {
    if ( v6 )
    {
      WORD2(v6) = 1;
      LOBYTE(v7) = 1;
    }
    else
    {
      LOBYTE(v5) = 1;
      v6 = a3;
      v7 = v5;
    }
    return v6;
  }
  LOBYTE(v7) = 0;
  return v6;
}
