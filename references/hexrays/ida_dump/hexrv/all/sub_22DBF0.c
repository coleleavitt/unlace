__int64 __fastcall sub_22DBF0(_QWORD *a1, int *a2, unsigned __int64 a3, __int64 *a4)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // edi
  int v9; // eax
  int v11; // eax
  int v12; // r14d

  v6 = sub_22D600(a1, a3, *a2, a4, 3);
  if ( v6 )
    return v6;
  v7 = a1[188];
  v8 = *a2;
  v9 = 16;
  if ( (*(_BYTE *)(v7 + 50) & 8) == 0 )
    v9 = 2 * *(_DWORD *)(v7 + 80);
  if ( v8 > v9 )
    return v6;
  v11 = sub_1185D0(v8);
  v12 = v11;
  if ( *a2 == v11 )
    return v6;
  v6 = sub_22D600(a1, a3, v11, nullptr, 3);
  if ( !v6 )
    return v6;
  *a2 = v12;
  return v6;
}
