__int64 __fastcall sub_19D6690(__int64 **a1, unsigned __int64 a2, unsigned __int64 a3, int *a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax

  if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 2) & 4) == 0 )
    return 0;
  v9 = sub_19CF160(*(_QWORD *)(a3 + 8), a2, v6, v7);
  v12 = sub_19CF160(a2, a2, v10, v11);
  if ( v12 == 1 && v9 == 4 )
  {
    sub_19D64C0(a1, a2, a3);
    v13 = 40;
  }
  else
  {
    if ( v12 != 4 || v9 != 1 )
      return 0;
    sub_19D64C0(a1, a2, a3);
    v13 = 1;
  }
  *a4 = v13;
  return 1;
}
