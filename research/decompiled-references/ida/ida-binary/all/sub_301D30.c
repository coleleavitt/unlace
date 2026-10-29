bool __fastcall IDAApplication__::vfunc_30(__int64 a1, __int64 a2, double a3)
{
  int v3; // eax

  v3 = sub_23D430(a2, a3);
  if ( v3 )
    return v3 == 1;
  *(_QWORD *)(a1 + 688) = a2;
  return 0;
}
