__int64 __fastcall sub_1E0C20(__int64 a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v5; // rcx
  __int64 v6; // r11
  int v7; // esi
  __int64 result; // rax
  int v9; // edi
  int v10; // eax

  if ( a3 )
    *a3 = -1;
  v5 = sub_1E0240(a2, *(_QWORD *)(a1 + 12));
  if ( v5 == *(_DWORD **)(v6 + 8) )
    return 0;
  v7 = *(_DWORD *)(a1 + 20);
  result = 0;
  if ( v7 >= 0 && (unsigned __int64)v7 < *((_QWORD *)v5 + 3) )
  {
    v9 = v5[11];
    if ( v9 > 1 )
    {
      v10 = v7 / v9;
      if ( v5[2] <= v5[2] + v7 / v9 )
        v10 *= v9;
      if ( a3 )
      {
        *a3 = v5[12];
        v7 = *(_DWORD *)(a1 + 20);
      }
      return (unsigned int)((v7 - v10) * v5[12]);
    }
  }
  return result;
}
