void __fastcall sub_38E40(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax

  if ( *(char *)(a1 + 4452) < 0 )
  {
    v2 = getinf() & 0xF;
    if ( (_BYTE)v2 == 6 )
    {
      v3 = getinf() & 0xF;
      if ( (_BYTE)v3 == 1 || !(_BYTE)v3 && (unsigned int)getinf() == 11 )
        goto LABEL_5;
    }
    else if ( (unsigned __int8)v2 <= 6u )
    {
      if ( (unsigned __int8)(v2 - 1) <= 1u )
        goto LABEL_5;
    }
    else if ( (_BYTE)v2 == 8 )
    {
LABEL_5:
      sub_38300(a1, a2);
    }
  }
}
