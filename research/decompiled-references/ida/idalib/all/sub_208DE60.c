__int64 __fastcall sub_208DE60(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi

  v3 = *(_QWORD *)(a1 + 48);
  if ( v3 )
  {
    a2 = a1;
    sub_204D180(v3, a1);
  }
  *(_QWORD *)(a1 + 48) = 0;
  sub_205B420(a1, a2);
  return sub_20CC0C0(a1);
}
