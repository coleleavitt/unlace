__int64 __fastcall sub_1E6EF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  int v5; // edx

  if ( !*(_BYTE *)(a1 + 968) )
    return MEMORY[0x3010102464C474F](0);
  if ( *(_QWORD *)(a1 + 424) )
  {
    v5 = *(_DWORD *)(a1 + 416);
    switch ( v5 )
    {
      case 2:
        return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 896) + 464LL))(*(_QWORD *)(a1 + 896));
      case 3:
        return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 904) + 464LL))(*(_QWORD *)(a1 + 904));
      case 1:
        return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 888) + 464LL))(*(_QWORD *)(a1 + 888));
      default:
        return MEMORY[0x3010102464C474F](0);
    }
  }
  else
  {
    sub_1E69C0(a5, a1, a2, a3, a4);
    return sub_1E6FA0();
  }
}
