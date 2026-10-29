__int64 __fastcall sub_81FDC0(__int64 a1)
{
  int v1; // eax
  unsigned __int64 v2; // rax
  __int64 v3; // rdx

  v1 = *(_DWORD *)(a1 + 496);
  if ( v1 && v1 != 7 )
  {
    if ( !*(_QWORD *)(a1 + 648) )
    {
      if ( v1 == 6 )
      {
        sub_8172C0(a1);
        ++*(_QWORD *)(a1 + 48);
        *(_DWORD *)(a1 + 496) = 1;
LABEL_9:
        if ( !*(_QWORD *)(a1 + 8) )
          return 0;
        goto LABEL_10;
      }
      if ( v1 == 1 )
        goto LABEL_9;
    }
LABEL_10:
    *(_QWORD *)(a1 + 64) = "encoding is incomplete";
    return 4294949586LL;
  }
  v2 = *(unsigned int *)(a1 + 816);
  if ( (unsigned int)v2 <= 0x18 )
  {
    v3 = 16777729;
    if ( _bittest64(&v3, v2) )
      return 0;
  }
  *(_QWORD *)(a1 + 64) = "eof in decode";
  return 4294949584LL;
}
