__int64 __fastcall sub_CD10(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, unsigned int a6)
{
  int v6; // eax
  __int64 v9; // rdx
  int v10; // esi
  int v11; // ecx
  __int64 v12; // rdx
  _DWORD *v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rax
  _DWORD *i; // rax
  __int16 v18; // r8

  v6 = *(unsigned __int16 *)(a2 + 24);
  LOBYTE(a6) = (_WORD)v6 == 26 || (_WORD)v6 == 117;
  if ( (_BYTE)a6 )
  {
    LOBYTE(a6) = (a3 & 0xFFFFFFF6) == 0;
    return a6;
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 16);
    v10 = 0;
    v11 = *(_DWORD *)(v9 + 104);
    if ( v6 >= v11 && v6 < *(_DWORD *)(v9 + 108) )
      v10 = *(_DWORD *)(*(_QWORD *)(v9 + 112) + 16LL * (v6 - v11) + 8);
    v12 = a2 + 41;
    v13 = &unk_16E40;
    v14 = a2 + 161;
    v15 = a2 + 41;
    while ( 1 )
    {
      if ( (*v13 & v10) != 0 && *(_BYTE *)v15 == 3 )
      {
        v18 = *(_WORD *)(v15 + 5);
        if ( (((v18 & 0x38) - 24) & 0xFFF0) == 0 && a3 == (v18 & 7 | 8) )
          break;
      }
      v15 += 40;
      ++v13;
      if ( v15 == v14 )
      {
        for ( i = &unk_16E60; (*i & v10) == 0 || *(_BYTE *)v12 != 1 || a3 != *(unsigned __int16 *)(v12 + 5); ++i )
        {
          v12 += 40;
          if ( v12 == v14 )
            return a6;
        }
        return 1;
      }
    }
    return 1;
  }
}
