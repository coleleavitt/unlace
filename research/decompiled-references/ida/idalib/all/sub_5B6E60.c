unsigned __int64 __fastcall sub_5B6E60(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, int a5, int a6)
{
  bool v6; // cc
  __int64 v7; // rsi
  int v10; // [rsp+Ch] [rbp-2Ch] BYREF
  _QWORD v11[5]; // [rsp+10h] [rbp-28h] BYREF

  v11[1] = __readfsqword(0x28u);
  v6 = a2[1] <= 1u;
  v11[0] = -1;
  if ( v6
    || (unsigned int)qsscanf(*a2, (unsigned int)"^%a%n", (unsigned int)v11, (unsigned int)&v10, a5, a6) != 1
    || (v7 = v11[0], v10 != (a2[1] == 0) + a2[1] - 1LL) )
  {
    v11[0] = -1;
    v7 = -1;
  }
  return sub_3BDE50(a1, v7);
}
