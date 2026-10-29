__int64 __fastcall sub_1A38930(_QWORD *a1, __int64 a2)
{
  __int64 (*v2)(void); // rdx
  __int64 v3; // rdx
  unsigned int v4; // edx
  unsigned int v5; // ecx
  int v6; // esi
  unsigned int v8; // eax

  v2 = *(__int64 (**)(void))(*a1 + 24LL);
  if ( (char *)v2 == (char *)sub_14B5980 )
  {
    v3 = a1[2];
    if ( v3
      && *(_DWORD *)(a2 + 24)
      && !*(_BYTE *)(a2 + 61)
      && (*(_QWORD *)a2 & 7) == 0
      && v3 == (*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFF8LL)
      && *(_QWORD *)(a2 + 8) == a1[3]
      || !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 16LL))(a1, a2) )
    {
      *(_DWORD *)(a2 + 48) = -1;
      return 0;
    }
    v4 = *(_DWORD *)(a2 + 40);
    *(_DWORD *)(a2 + 48) = 0;
    if ( v4 <= 0x2710 )
    {
      v5 = *(_DWORD *)(a2 + 44);
      v6 = 0;
      if ( v5 <= 0x2710 )
        goto LABEL_7;
    }
  }
  else
  {
    v8 = v2();
    v4 = *(_DWORD *)(a2 + 40);
    *(_DWORD *)(a2 + 48) = v8;
    if ( v4 <= 0x2710 )
    {
      v5 = *(_DWORD *)(a2 + 44);
      if ( v5 <= 0x2710 && v8 <= 0x2710 )
      {
        v6 = 150 * v8;
LABEL_7:
        if ( v6 + 100 * v4 + 110 * v5 <= 0x2710 )
          return 1;
      }
    }
  }
  return 0;
}
