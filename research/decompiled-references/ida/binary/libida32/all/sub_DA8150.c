__int64 __fastcall sub_DA8150(__int64 a1, __int64 *a2, __int64 a3, int a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v9[4]; // [rsp+18h] [rbp-20h] BYREF

  v4 = 1;
  if ( *(_DWORD *)(a3 + 24) )
    return v4;
  v5 = *(_QWORD *)(a3 + 32);
  if ( !v5 )
    return v4;
  v6 = *(_QWORD *)(v5 + 32);
  if ( !*(_BYTE *)(v6 + 61) )
    return v4;
  if ( (*(_QWORD *)v6 & 2) == 0 )
  {
    v7 = *(_QWORD *)v6 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v7 )
    {
      if ( (*(_BYTE *)(v7 + 28) & 0x7Fu) - 26 <= 0x1A )
      {
        LOBYTE(v4) = a4 == 0 || (unsigned int)(a4 - 3) <= 1;
        if ( (_BYTE)v4 )
          return (unsigned int)sub_D9E8E0(a1, a2, (unsigned int *)v7);
        if ( a4 == 9 || (*(_BYTE *)(sub_E0E500(a1) + 1) & 0x20) != 0 )
        {
          v9[0] = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
          sub_E0FE60(a1, v9, 2443, 0);
          return v4;
        }
      }
    }
  }
  return 0;
}

