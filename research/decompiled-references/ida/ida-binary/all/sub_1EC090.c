__int64 __fastcall sub_1EC090(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  int v6; // edx
  __int64 v7; // rax

  if ( !(_BYTE)a2 )
  {
    if ( *(_QWORD *)(a1 + 424) )
      return (unsigned int)*(__int16 *)(a1 + 414);
LABEL_15:
    sub_1E69C0(a5, a1, a2, a3, a4);
    return sub_1EC120();
  }
  if ( !*(_BYTE *)(a1 + 968) )
    return MEMORY[0x3010102464C4647](0);
  if ( !*(_QWORD *)(a1 + 424) )
    goto LABEL_15;
  v6 = *(_DWORD *)(a1 + 416);
  if ( v6 == 2 )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 896) + 200LL))(*(_QWORD *)(a1 + 896));
  if ( v6 == 3 )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 904) + 200LL))(*(_QWORD *)(a1 + 904));
  v7 = 0;
  if ( v6 == 1 )
    v7 = *(_QWORD *)(a1 + 888);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 200LL))(v7);
}
