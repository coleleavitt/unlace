bool __fastcall sub_BDCB10(__int64 a1, _QWORD *a2, __int64 a3)
{
  _DWORD *v3; // rcx
  bool result; // al
  int v5; // ecx

  v3 = *(_DWORD **)(*(_QWORD *)(*a2 + 16LL) + 24LL);
  result = 0;
  if ( v3 && *(_DWORD *)(a1 + 8) == *v3 )
  {
    v5 = v3[1];
    if ( v5 == 1 )
      return *(_QWORD *)(a2[14] + 8LL) == *(_QWORD *)(a3 + 8);
    else
      return v5 == 0 || v5 == 5;
  }
  return result;
}

