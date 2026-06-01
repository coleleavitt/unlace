__int64 __fastcall sub_1E0D60(__int64 a1, _QWORD *a2)
{
  _DWORD *v3; // rcx
  _DWORD *v4; // rax
  char v5; // r11
  int v6; // eax
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v11; // eax
  int v12; // edx

  v3 = sub_1E0240((__int64)a2, *(_QWORD *)(a1 + 12));
  v4 = (_DWORD *)a2[1];
  if ( !v5 )
  {
    if ( v3 != v4 )
    {
      v6 = *(_DWORD *)(a1 + 20);
      if ( v6 > 0 )
      {
        *(_DWORD *)(a1 + 20) = v6 - 1;
        return 1;
      }
      goto LABEL_9;
    }
LABEL_12:
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a1 + 48LL))(a1, a2);
    v3 = sub_1E0240((__int64)a2, *(_QWORD *)(a1 + 12));
    if ( (_DWORD *)a2[1] == v3 )
      return 0;
    goto LABEL_9;
  }
  if ( v3 == v4 )
    goto LABEL_12;
  v7 = *(_DWORD *)(a1 + 20);
  v8 = v3[2];
  if ( v7 >= 0 )
    v7 /= (int)v3[11];
  v9 = v8 + v7;
  if ( v9 > 0 )
  {
    v11 = v9 - 1;
    v12 = v11 - v8;
    if ( v11 >= v8 )
      v12 *= v3[11];
    *(_DWORD *)(a1 + 20) = v12;
    return 1;
  }
LABEL_9:
  if ( (_DWORD *)*a2 != v3 )
  {
    *(_QWORD *)(a1 + 12) = *((_QWORD *)v3 - 7);
    *(_DWORD *)(a1 + 20) = *((_QWORD *)v3 - 4) - 1;
    return 1;
  }
  return 0;
}
