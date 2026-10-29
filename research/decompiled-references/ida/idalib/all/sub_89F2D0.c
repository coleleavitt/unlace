__int64 __fastcall sub_89F2D0(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned int v3; // ecx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax

  v3 = *(_DWORD *)(a1 + 112);
  if ( v3 != -2 )
  {
    if ( (v3 & 0x80000000) != 0 )
      return v3;
    if ( *(_BYTE *)(a1 + 104) != 1 )
    {
      if ( *(unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 136LL) < (unsigned int)a2 )
        return (unsigned int)-49;
      goto LABEL_5;
    }
    if ( (unsigned int)a2 < *(unsigned __int16 *)(a1 + 106) )
    {
      if ( !v3 || (unsigned int)a2 < v3 )
      {
        a2 = (unsigned int)(2 * a2);
        v5 = *(_QWORD *)(a1 + 8 * a2 + 120);
        goto LABEL_7;
      }
      return (unsigned int)-55;
    }
    return (unsigned int)-54;
  }
  if ( (_DWORD)a2 )
    return v3;
  if ( *(_BYTE *)(a1 + 104) == 1 )
  {
    if ( *(_WORD *)(a1 + 106) )
    {
      v5 = *(_QWORD *)(a1 + 120);
      goto LABEL_7;
    }
    return (unsigned int)-54;
  }
LABEL_5:
  if ( (unsigned int)a2 >= *(unsigned __int16 *)(a1 + 106) )
    return (unsigned int)-54;
  a2 = (unsigned int)(2 * a2);
  v5 = *(_QWORD *)(a1 + 8 * a2 + 120);
  if ( v5 == -1 )
    return (unsigned int)-55;
LABEL_7:
  v6 = v5;
  v7 = *(_QWORD *)(a1 + 8LL * (unsigned int)(a2 + 1) + 120);
  if ( v7 >= v5 )
    v6 = v7;
  if ( *(_QWORD *)(a1 + 64) < v6 )
  {
    return (unsigned int)-67;
  }
  else
  {
    if ( a3 )
    {
      v8 = v7 - v5;
      if ( v7 < v5 )
        v8 = 0;
      *a3 = v8;
    }
    return 0;
  }
}
