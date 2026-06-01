bool __fastcall sub_14A8FA0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int16 a9)
{
  __int64 v9; // rbp
  __int64 v11; // rax
  size_t v12; // rax

  v9 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(*(_QWORD *)(v9 + 56) + 1LL) & 8) == 0 || a9 != 5 )
    return 0;
  v11 = *(_QWORD *)(a1 + 1856);
  if ( !v11 )
  {
    v12 = j__strlen("trivially_relocatable_if_eligible");
    v11 = sub_6F3470(v9 + 552, "trivially_relocatable_if_eligible", v12);
    *(_QWORD *)(a1 + 1856) = v11;
  }
  return a8 == v11;
}
