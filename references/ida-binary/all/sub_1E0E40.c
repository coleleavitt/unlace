bool __fastcall sub_1E0E40(__int64 a1, __int64 a2, char a3)
{
  _DWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r11
  _DWORD *v8; // rdi
  _DWORD *v9; // rcx
  int v10; // eax
  int v12; // eax
  int v13; // r9d
  int v14; // r10d
  int v15; // esi

  v5 = sub_1E0240(a2, *(_QWORD *)(a1 + 12));
  v8 = *(_DWORD **)(v7 + 8);
  v9 = v5;
  if ( a3 )
  {
    if ( v5 != v8 )
    {
      v12 = *(_DWORD *)(a1 + 20);
      v13 = v9[2];
      v14 = v9[11];
      if ( v12 >= 0 )
        v12 /= v14;
      v15 = v13 + v12 + 1;
      if ( v15 < (int)(v13 + (v14 + *((_QWORD *)v9 + 3) - 1LL) / (unsigned __int64)v14) )
      {
        v10 = v12 + 1;
        if ( v15 >= v13 )
          v10 *= v14;
        goto LABEL_6;
      }
      if ( v8 != v9 + 14 )
      {
        *(_QWORD *)(a1 + 12) = *((_QWORD *)v9 + 7);
        *(_DWORD *)(a1 + 20) = -v9[16];
        return 1;
      }
      return 0;
    }
LABEL_13:
    (*(void (__fastcall **)(__int64, __int64, __int64, _DWORD *))(*(_QWORD *)a1 + 48LL))(a1, v7, v6, v5);
    return *(_DWORD *)(a1 + 12) != -1;
  }
  if ( v5 == v8 )
    goto LABEL_13;
  v10 = *(_DWORD *)(a1 + 20) + 1;
  if ( (unsigned __int64)v10 < *((_QWORD *)v9 + 3) )
  {
LABEL_6:
    *(_DWORD *)(a1 + 20) = v10;
    return 1;
  }
  if ( v8 != v9 + 14 )
  {
    *(_QWORD *)(a1 + 12) = *((_QWORD *)v9 + 7);
    v10 = 0;
    goto LABEL_6;
  }
  return 0;
}
