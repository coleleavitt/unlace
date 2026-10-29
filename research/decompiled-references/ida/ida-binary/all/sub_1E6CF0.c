__int64 __fastcall sub_1E6CF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  int v5; // edx
  __int64 v6; // rax

  if ( !*(_BYTE *)(a1 + 968) )
  {
    v6 = 0;
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 232LL))(v6, 1);
  }
  if ( *(_QWORD *)(a1 + 424) )
  {
    v5 = *(_DWORD *)(a1 + 416);
    if ( v5 == 2 )
    {
      v6 = *(_QWORD *)(a1 + 896);
    }
    else if ( v5 == 3 )
    {
      v6 = *(_QWORD *)(a1 + 904);
    }
    else
    {
      v6 = 0;
      if ( v5 == 1 )
        v6 = *(_QWORD *)(a1 + 888);
    }
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 232LL))(v6, 1);
  }
  sub_1E69C0(a5, a1, a2, a3, a4);
  return sub_1E6D70();
}
