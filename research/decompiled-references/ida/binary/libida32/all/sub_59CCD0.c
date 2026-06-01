__int64 __fastcall sub_59CCD0(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, int a5, int a6)
{
  bool v6; // cc
  int v7; // esi
  int v10; // [rsp+0h] [rbp-28h] BYREF
  int v11; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v6 = a2[1] <= 1u;
  v11 = -1;
  if ( v6
    || (unsigned int)qsscanf(*a2, (int)"^%a%n", (int)&v11, (int)&v10, a5, a6, v10) != 1
    || (v7 = v11, v10 != (a2[1] == 0) + a2[1] - 1LL) )
  {
    v11 = -1;
    v7 = -1;
  }
  return sub_3B9110(a1, v7);
}

