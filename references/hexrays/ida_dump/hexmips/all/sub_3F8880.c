unsigned __int64 __fastcall sub_3F8880(
        __int64 *a1,
        int a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        char a6)
{
  int *v9; // rbp
  _DWORD *v10; // rbp
  _DWORD *v11; // rsi
  int v12; // r12d

  v9 = (int *)a1[25];
  *v9 = a2;
  sub_120F80((__int64)(v9 + 8), a3);
  sub_120F80((__int64)(v9 + 12), a4);
  sub_120F80((__int64)(v9 + 16), a5);
  if ( a6 || a2 > 62 )
    v9[1] |= 0x10u;
  v10 = (_DWORD *)a1[25];
  v11 = (_DWORD *)a1[24];
  if ( v10 != v11 )
  {
    v12 = v10[17];
    sub_118BA0((__int64)(v10 + 16));
    v10[17] = v12;
    v11 = (_DWORD *)a1[24];
  }
  return sub_3F87E0(a1, v11);
}
