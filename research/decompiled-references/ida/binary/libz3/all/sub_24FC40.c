void __fastcall sub_24FC40(__int64 a1)
{
  __int64 v2; // rsi
  _QWORD *v3; // rbx
  _QWORD *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi

  if ( *(_BYTE *)(a1 + 224) )
  {
    v3 = *(_QWORD **)(a1 + 1392);
    if ( v3 )
    {
      v4 = &v3[*((unsigned int *)v3 - 1)];
      if ( v3 >= v4 )
        goto LABEL_13;
      do
      {
        while ( 1 )
        {
          v5 = *v3;
          if ( *v3 )
          {
            v6 = *(_QWORD *)(a1 + 1384);
            if ( (*(_DWORD *)(v5 + 8))-- == 1 )
              break;
          }
          if ( ++v3 >= v4 )
            goto LABEL_12;
        }
        sub_15D7BC0(v6, v5);
        ++v3;
      }
      while ( v3 < v4 );
LABEL_12:
      v3 = *(_QWORD **)(a1 + 1392);
      if ( v3 )
LABEL_13:
        *((_DWORD *)v3 - 1) = 0;
    }
  }
  v2 = *(_QWORD *)(a1 + 1400);
  if ( v2 && !_InterlockedSub((volatile signed __int32 *)(v2 + 8), 1u) )
  {
    sub_24F730(*(_QWORD *)(v2 + 16), (void (__fastcall ***)(void *, unsigned __int64, __int64, __int64))v2);
    *(_QWORD *)(a1 + 1400) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 1400) = 0;
  }
}

