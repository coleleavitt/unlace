__int64 __fastcall sub_3673B0(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  char tinfo_property; // al
  __int64 v6; // rdx
  int v7; // eax
  int v8; // r13d

  if ( *(_DWORD *)a1 != 4 )
    return 0;
  tinfo_property = get_tinfo_property(*a3, 2);
  v6 = a2[12];
  if ( (tinfo_property & 0xF) == 9 )
  {
    BYTE1(v6) &= 0x20u;
    if ( BYTE1(v6) && *(int *)(a1 + 36) <= 7 )
    {
      if ( *(_BYTE *)(a1 + 64) == 1
        && (*(int (__fastcall **)(unsigned int *, _QWORD, __int64))(*(_QWORD *)a2 + 32LL))(
             a2,
             *(unsigned int *)(a1 + 72),
             v6) <= 7 )
      {
        return 0;
      }
      v7 = 67;
      v8 = 8;
LABEL_8:
      *(_DWORD *)a1 = v7;
      *(_DWORD *)(a1 + 68) = v8;
      return 1;
    }
  }
  else
  {
    BYTE1(v6) &= 8u;
    if ( BYTE1(v6) )
    {
      v8 = a2[20];
      if ( *(_DWORD *)(a1 + 36) < v8
        && (*(_BYTE *)(a1 + 64) != 1
         || v8 <= (*(int (__fastcall **)(unsigned int *, _QWORD, __int64))(*(_QWORD *)a2 + 32LL))(
                    a2,
                    *(unsigned int *)(a1 + 72),
                    v6)) )
      {
        v7 = ((unsigned int)get_tinfo_property(*a3, 3) != 1) + 8;
        goto LABEL_8;
      }
    }
  }
  return 0;
}
