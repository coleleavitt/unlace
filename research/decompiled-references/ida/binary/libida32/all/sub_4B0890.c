unsigned __int64 __fastcall sub_4B0890(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // rax

  v3 = a2;
  if ( a1 < a2 )
  {
    while ( (unsigned __int8)(*(_BYTE *)(v3 - 1) - 48) <= 9u )
    {
      if ( a1 == --v3 )
        goto LABEL_4;
    }
    if ( a2 != v3 && a1 < v3 && *(_BYTE *)(v3 - 1) == 95 )
      return v3 - 1 - a1;
  }
LABEL_4:
  if ( a3 )
    return a2 - a1;
  else
    return v3 - a1;
}

