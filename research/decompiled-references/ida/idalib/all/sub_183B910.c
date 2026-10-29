bool __fastcall sub_183B910(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rax

  if ( a4 )
  {
    if ( *(_DWORD *)a4 && *(_DWORD *)(a4 + 4) )
    {
      if ( !*(_QWORD *)(a4 + 8) )
        return 0;
LABEL_4:
      v6 = sub_16A2930(a1, a4, 1, a4, a5, a6);
      if ( !v6 )
        return 0;
LABEL_5:
      if ( (*(_BYTE *)(v6 + 8) & 0x7Fu) - 59 <= 2 )
      {
        v7 = v6 - 64;
        if ( v7 )
        {
          v8 = *(_QWORD *)(v7 + 40);
          if ( (v8 & 7) == 0 )
            return a2 == (v8 & 0xFFFFFFFFFFFFFFF8LL);
        }
      }
      return 0;
    }
    if ( *(_QWORD *)(a4 + 8) )
      goto LABEL_4;
  }
  v6 = *(_QWORD *)(a1 + 544);
  if ( v6 )
    goto LABEL_5;
  return 0;
}
