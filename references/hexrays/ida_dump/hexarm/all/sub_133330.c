__int64 __fastcall sub_133330(_DWORD *a1, __int64 *a2, int a3, unsigned int a4)
{
  int v5; // esi

  v5 = a1[17];
  if ( v5 > a3 )
    return (*(__int64 (__fastcall **)(_DWORD *, __int64 *))(*(_QWORD *)a1 + 40LL))(a1, a2);
  if ( !a2 )
    return a4;
  sub_6B2B0(a2, (__int64)"kr%02X_%d", a3 - v5, a4);
  return a4;
}
