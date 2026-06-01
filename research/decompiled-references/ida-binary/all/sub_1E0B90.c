__int64 __fastcall sub_1E0B90(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v5; // rax
  int v6; // r11d
  _DWORD *v7; // rcx
  int v8; // eax
  unsigned int v9; // edx
  int v10; // edi
  int v11; // esi
  int v12; // edi
  int v13; // eax
  int v14; // eax
  int v15; // edx

  v5 = sub_1E0240(a3, *(_QWORD *)(a1 + 12));
  if ( *(_DWORD **)(a3 + 8) == v5 )
    return 0;
  v7 = v5;
  v8 = *(_DWORD *)(a1 + 20);
  v9 = 0;
  if ( v8 >= 0 && (unsigned __int64)v8 < *((_QWORD *)v7 + 3) )
  {
    v10 = v7[11];
    v11 = v8 / v10;
    if ( v7[2] <= v7[2] + v8 / v10 )
      v11 *= v10;
    v12 = v10 - 1;
    v13 = v6 / v7[12];
    if ( v13 > v12 )
      v13 = v12;
    v14 = v11 + v13;
    *(_DWORD *)(a1 + 20) = v14;
    v15 = *((_QWORD *)v7 + 3) - 1;
    if ( v15 > v14 )
      v15 = v14;
    *(_DWORD *)(a1 + 20) = v15;
    return 1;
  }
  return v9;
}
