__int64 __fastcall dbgreg_place_t__::vfunc_1(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rax
  __int64 v4; // r11
  _DWORD *v5; // rdi
  int v6; // ecx
  int v7; // eax

  v3 = sub_1E0240(a2, *(_QWORD *)(a1 + 12));
  if ( *(_DWORD **)(v4 + 8) == v3 )
    return -1;
  v5 = v3;
  v6 = v3[13];
  v7 = *(_DWORD *)(a1 + 20);
  if ( v7 >= 0 )
    v7 /= (int)v5[11];
  return v6 + v7 + v5[2];
}
