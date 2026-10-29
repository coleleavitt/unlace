__int64 __fastcall sub_141A8D0(int **a1, unsigned __int16 a2)
{
  unsigned int v2; // ebp
  unsigned __int8 *v4[13]; // [rsp+0h] [rbp-68h] BYREF

  v2 = 1;
  if ( *((_WORD *)*a1 + 8) == a2 )
    return v2;
  sub_FC70B0((__int64)v4, *((_QWORD *)a1[1] + 6), **a1, 14);
  sub_AE9DF0(v4, a2, 4u);
  v2 = 0;
  sub_AEA040((__int64)v4);
  if ( *((_WORD *)*a1 + 8) == 2 )
    return v2;
  sub_141A820((__int64)a1[1], (unsigned int *)*a1);
  return 0;
}
