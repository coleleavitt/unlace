unsigned __int64 __fastcall sub_4146E0(
        __int64 *a1,
        int a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        char a6)
{
  int *v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // r8d
  int v13; // r9d
  _DWORD *v14; // rbp
  _DWORD *v15; // rsi
  int v16; // r12d

  v9 = (int *)a1[25];
  *v9 = a2;
  sub_125180((__int64)(v9 + 8), a3);
  sub_125180((__int64)(v9 + 12), a4);
  sub_125180((__int64)(v9 + 16), a5);
  if ( a6 || a2 > 62 )
    v9[1] |= 0x10u;
  v14 = (_DWORD *)a1[25];
  v15 = (_DWORD *)a1[24];
  if ( v14 != v15 )
  {
    v16 = v14[17];
    sub_11CDA0((__int64)(v14 + 16));
    v14[17] = v16;
    v15 = (_DWORD *)a1[24];
  }
  return sub_414640(a1, v15, v10, v11, v12, v13);
}
