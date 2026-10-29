__int64 __fastcall sub_101FED0(unsigned int *a1, int a2, _DWORD *a3)
{
  unsigned int v4; // ebx
  int v5; // r12d
  unsigned int v6; // eax
  __int64 v7; // rax
  __int64 v8; // r15
  int v9; // edx
  int v10; // eax
  int v12; // esi
  __int64 v13; // rax
  _BYTE v14[57]; // [rsp+Fh] [rbp-39h] BYREF

  v4 = 0;
  v5 = sub_101D5E0(a1, a2);
  LOBYTE(v6) = sub_101FDD0((__int64)a1, v5, (a2 + 1) & 0x7FFFFFFF);
  if ( (_BYTE)v6 )
    return v4;
  v4 = v6;
  v14[0] = 0;
  v7 = sub_101FA50((__int64)a1, v5, v14);
  v8 = v7;
  if ( v14[0] )
    return v4;
  v9 = *(_DWORD *)(v7 + 12);
  if ( !v9 )
  {
LABEL_4:
    if ( !a3 )
      return 1;
    v10 = *(_DWORD *)(v8 + 16);
    if ( !v10 )
      v10 = *(_DWORD *)(v8 + 12);
LABEL_7:
    *a3 = v10;
    return 1;
  }
  v10 = *(_DWORD *)(v7 + 16);
  if ( v10 )
  {
    if ( !a3 )
      return 1;
    goto LABEL_7;
  }
  if ( !v5 )
    goto LABEL_20;
  if ( v5 <= 0 )
  {
    if ( v5 < -2 )
    {
      v12 = v5 + 1;
      goto LABEL_14;
    }
LABEL_20:
    v10 = v9;
    if ( !a3 )
      return 1;
    goto LABEL_7;
  }
  v12 = v5 + 1;
  if ( v5 + 1 >= a1[48] )
    goto LABEL_20;
LABEL_14:
  v13 = sub_101FA50((__int64)a1, v12, v14);
  if ( !v14[0] && (*(char *)(v13 + 3) >= 0 || *(_DWORD *)(v13 + 12) != *(_DWORD *)(v8 + 12)) )
    goto LABEL_4;
  return v4;
}
