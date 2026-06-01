__int64 __fastcall sub_1E1920(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbp
  _DWORD *v6; // rax
  __int64 v7; // r11
  _DWORD *v8; // rdx
  int v9; // eax
  int v10; // esi
  int v11; // edi
  int v12; // ecx
  int v13; // edi

  if ( *(_DWORD *)(a2 + 12) != *(_DWORD *)(a3 + 12) )
    return 0xFFFFFFFFLL;
  if ( *(_DWORD *)(a2 + 16) != *(_DWORD *)(a3 + 16) )
    return 0xFFFFFFFFLL;
  v5 = a1 + 1000;
  sub_1E0240(a1 + 1000, *(_QWORD *)(a2 + 12));
  v6 = sub_1E0240(v5, *(_QWORD *)(a3 + 12));
  v8 = *(_DWORD **)(v5 + 8);
  if ( v8 == (_DWORD *)v7 || v8 == v6 )
    return 0xFFFFFFFFLL;
  v9 = *(_DWORD *)(a2 + 20);
  v10 = *(_DWORD *)(a3 + 20);
  if ( *(_BYTE *)(v7 + 12) )
  {
    v11 = *(_DWORD *)(v7 + 8);
    if ( v9 >= 0 )
      v9 /= *(int *)(v7 + 44);
    v12 = v9 + v11;
    if ( v10 < 0 )
      v13 = v10 + v11;
    else
      v13 = v10 / *(_DWORD *)(v7 + 44) + v11;
    if ( v13 == v12 )
      return sub_1E0C20(a3, v5, nullptr);
    return 0xFFFFFFFFLL;
  }
  if ( v10 != v9 )
    return 0xFFFFFFFFLL;
  return 4294967294LL;
}
