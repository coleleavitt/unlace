bool __fastcall dbgreg_place_t__::vfunc_9(_DWORD *a1, __int64 a2)
{
  _DWORD *v2; // r8
  bool result; // al
  int v4; // eax

  v2 = *(_DWORD **)a2;
  result = 0;
  if ( *(_QWORD *)a2 != *(_QWORD *)(a2 + 8) && a1[3] == *v2 && a1[4] == v2[1] )
  {
    v4 = a1[5];
    if ( v4 >= 0 )
      v4 /= (int)v2[11];
    return v4 + v2[2] == 0;
  }
  return result;
}
