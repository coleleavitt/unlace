unsigned __int64 __fastcall sub_3AF630(_QWORD *a1, __int64 *a2, __int64 *a3, __int64 *a4, double a5)
{
  const char *v8; // rbp
  __int64 v9; // rax
  char v10; // al
  _DWORD *v11; // rsi
  int v12; // eax
  __int64 v14; // rax

  v8 = "Types_E";
  v9 = sub_1EA680((__int64)(a1 + 48), (__int64)a2, (__int64)a3, (__int64)a4, a5);
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v9 + 40) + 192LL))(*(_QWORD *)(v9 + 40), a1[125]);
  if ( v10 != 45 )
  {
    v8 = "Types_T";
    if ( v10 != 61 )
    {
      v8 = "Types_F";
      if ( v10 != 12 )
        v8 = "Types_S";
    }
  }
  v11 = (_DWORD *)a1[97];
  if ( a1[99] <= 7u )
  {
    v14 = qvector_reserve(a1 + 97, v11, 8, 1);
    a1[97] = v14;
    v11 = (_DWORD *)v14;
  }
  v12 = *(_DWORD *)v8;
  a1[98] = 8;
  *v11 = v12;
  *(_DWORD *)((char *)v11 + 3) = *(_DWORD *)(v8 + 3);
  *(_BYTE *)(a1[97] + 7LL) = 0;
  return sub_1F9050((__int64)a1, a2, a3, a4);
}
