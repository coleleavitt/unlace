__int64 __fastcall sub_B53750(__int64 a1, __int64 a2, size_t a3, __int64 a4, int a5)
{
  _BYTE *v6; // rbp
  __int64 v8; // r15
  __int64 i; // rbx
  unsigned int v10; // r12d
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  _DWORD *v13; // rdi
  __int64 v15; // rdi

  v6 = (_BYTE *)a2;
  if ( a5 )
  {
    v8 = (unsigned int)(a5 - 1);
    for ( i = 0; ; ++i )
    {
      v10 = i;
      v11 = *(_QWORD *)(*(_QWORD *)(a4 + 8 * i) + 40LL);
      if ( (v11 & 7) == 0 )
      {
        v12 = v11 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v12 )
        {
          v13 = *(_DWORD **)(v12 + 16);
          if ( *v13 == a3 )
          {
            if ( !a3 )
              break;
            a2 = (__int64)v6;
            if ( !memcmp(v13 + 4, v6, a3) )
              break;
          }
        }
      }
      if ( v8 == i )
        goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    if ( a3 != 3 )
      return (unsigned int)-1;
    if ( *(_WORD *)v6 != 11822 )
      return (unsigned int)-1;
    if ( v6[2] != 46 )
      return (unsigned int)-1;
    v15 = *(_QWORD *)(a1 + 40);
    if ( !v15 )
      return (unsigned int)-1;
    if ( (*(_BYTE *)(v15 + 48) & 1) == 0 )
    {
      sub_B3A710((__int64 *)v15, a2);
      v15 = *(_QWORD *)(a1 + 40);
    }
    v10 = -2;
    if ( (*(_BYTE *)(v15 + 49) & 2) == 0 )
      return (unsigned int)-1;
  }
  return v10;
}
