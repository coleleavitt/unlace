__int64 __fastcall sub_742630(__int64 a1, __int64 a2, int *a3)
{
  int v3; // eax

  if ( a2 != 10 )
  {
    if ( a2 == 3 )
    {
      if ( *(_WORD *)a1 != 26981 || *(_BYTE *)(a1 + 2) != 99 )
        return 0;
    }
    else if ( a2 )
    {
      return 0;
    }
    v3 = 8;
LABEL_11:
    *a3 = v3;
    return 1;
  }
  if ( *(_QWORD *)a1 == 0x733D726F74636576LL )
  {
    v3 = 0;
    if ( *(_WORD *)(a1 + 8) == 12407 )
      goto LABEL_11;
  }
  if ( *(_QWORD *)a1 == 0x733D726F74636576LL )
  {
    v3 = 1;
    if ( *(_WORD *)(a1 + 8) == 12663 )
      goto LABEL_11;
  }
  if ( *(_QWORD *)a1 == 0x683D726F74636576LL )
  {
    v3 = 2;
    if ( *(_WORD *)(a1 + 8) == 12407 )
      goto LABEL_11;
  }
  if ( *(_QWORD *)a1 == 0x683D726F74636576LL )
  {
    v3 = 3;
    if ( *(_WORD *)(a1 + 8) == 12663 )
      goto LABEL_11;
  }
  if ( *(_QWORD *)a1 == 0x683D726F74636576LL )
  {
    v3 = 4;
    if ( *(_WORD *)(a1 + 8) == 12919 )
      goto LABEL_11;
  }
  if ( *(_QWORD *)a1 == 0x683D726F74636576LL )
  {
    v3 = 5;
    if ( *(_WORD *)(a1 + 8) == 13175 )
      goto LABEL_11;
  }
  if ( *(_QWORD *)a1 == 0x683D726F74636576LL )
  {
    v3 = 6;
    if ( *(_WORD *)(a1 + 8) == 13431 )
      goto LABEL_11;
  }
  if ( *(_QWORD *)a1 == 0x683D726F74636576LL )
  {
    v3 = 7;
    if ( *(_WORD *)(a1 + 8) == 13687 )
      goto LABEL_11;
  }
  return 0;
}

