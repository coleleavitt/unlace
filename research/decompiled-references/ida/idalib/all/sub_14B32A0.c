__int64 __fastcall sub_14B32A0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8,
        __int16 a9)
{
  __int64 v9; // rbp
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v13; // rbp
  __int64 v14; // r12
  __int64 v15; // rax
  unsigned int v16; // eax
  int v17; // edx
  size_t v18; // rax
  size_t v19; // rax

  v9 = a1[1];
  v10 = a8;
  if ( (*(_BYTE *)(*(_QWORD *)(v9 + 56) + 1LL) & 8) != 0 && a9 == 5 )
  {
    v11 = a1[232];
    if ( !v11 )
    {
      v18 = j__strlen("trivially_relocatable_if_eligible");
      v11 = sub_6F3470(v9 + 552, "trivially_relocatable_if_eligible", v18);
      a1[232] = v11;
    }
    if ( v10 == v11 )
      return 1;
    v13 = a1[1];
    v14 = a8;
    if ( (*(_BYTE *)(*(_QWORD *)(v13 + 56) + 1LL) & 8) != 0 && a9 == 5 )
    {
      v15 = a1[233];
      if ( !v15 )
      {
        v19 = j__strlen("replaceable_if_eligible");
        v15 = sub_6F3470(v13 + 552, "replaceable_if_eligible", v19);
        a1[233] = v15;
      }
      if ( v15 == v14 )
        return 1;
    }
  }
  v16 = sub_14A7DC0(a1, (__int64)&a7);
  if ( v16 == 2 || v16 == 8 )
    return 1;
  LOBYTE(v17) = v16 == 4;
  LOBYTE(v16) = v16 == 16;
  return v17 | v16;
}
