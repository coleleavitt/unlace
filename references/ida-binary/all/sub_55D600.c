char __fastcall sub_55D600(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 **v4; // rsi
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  bool v7; // cl
  int v8; // edx

  if ( !a3
    || ((v4 = (__int64 **)(a2 + 32LL * a3), v5 = **v4, (v5 & 1) != 0)
      ? (v6 = (v5 >> 1) & 1)
      : (LOBYTE(v6) = *(_BYTE *)(v5 + 44) & 1),
        (_BYTE)v6) )
  {
    LOBYTE(v6) = 1;
  }
  else
  {
    if ( (v5 & 1) != 0 )
      v7 = (**v4 & 8) != 0;
    else
      v7 = (*(_BYTE *)(v5 + 44) & 4) != 0;
    if ( !v7 )
    {
      v8 = *(unsigned __int16 *)(**(_QWORD **)(a2 + 32LL * (a3 - 1)) + 66LL);
      LOBYTE(v6) = 0;
      if ( v8 )
        LOBYTE(v6) = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL)
                              + 2LL
                              * (*((_DWORD *)v4 + 6)
                               + v8 * (unsigned int)*(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 36LL))) != 0;
    }
  }
  return v6;
}
