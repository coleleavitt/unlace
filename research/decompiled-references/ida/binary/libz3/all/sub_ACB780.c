bool __fastcall sub_ACB780(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r12
  __int64 v3; // rdx
  bool result; // al

  v2 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 16LL))(a2);
  v3 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
  result = 0;
  if ( v2 == v3 && a1[2] == a2[2] )
    return a1[3] == a2[3];
  return result;
}

