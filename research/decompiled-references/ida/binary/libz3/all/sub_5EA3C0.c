bool __fastcall sub_5EA3C0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdx
  bool result; // al

  sub_5EA230(a1, a2, a3);
  v3 = *(_QWORD *)(a1 + 48);
  result = 0;
  if ( v3 )
    return *(_DWORD *)(v3 - 4) != 0;
  return result;
}

