__int64 __fastcall sub_531B70(unsigned __int8 *a1, unsigned __int8 *a2)
{
  unsigned __int8 v2; // r12
  unsigned __int8 *v3; // rbx
  int v5; // ebp
  int v6; // r14d
  unsigned int v7; // r15d
  int v8; // ebp
  unsigned __int8 v10; // [rsp+Bh] [rbp-3Dh]
  int v11; // [rsp+Ch] [rbp-3Ch]

  if ( a1 )
  {
    v11 = 0;
    v2 = *a1;
    v3 = a1;
LABEL_3:
    while ( 1 )
    {
      v5 = v2;
      if ( !(unsigned __int8)sub_52F460(v2) )
        break;
LABEL_9:
      v2 = *++v3;
    }
    while ( 1 )
    {
      v6 = *a2;
      v10 = *a2;
      v7 = sub_52F460(*a2);
      if ( (_BYTE)v7 )
      {
        ++a2;
        goto LABEL_3;
      }
      if ( !v10 )
        break;
      v8 = toupper(v5);
      if ( toupper(v6) != v8 || !v2 )
        return v7;
      v2 = *++v3;
      ++v11;
      ++a2;
      v5 = v2;
      if ( (unsigned __int8)sub_52F460(v2) )
        goto LABEL_9;
    }
    LOBYTE(v7) = v11 > 0;
  }
  else
  {
    return 0;
  }
  return v7;
}
