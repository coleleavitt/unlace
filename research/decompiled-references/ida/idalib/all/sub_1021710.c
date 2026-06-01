__int64 __fastcall sub_1021710(__int64 a1, int a2, unsigned int a3, unsigned int a4, char a5, char a6, unsigned int a7)
{
  unsigned __int64 v11; // rbp
  __int64 result; // rax
  int v13; // r9d
  __int64 v14; // [rsp-10h] [rbp-58h]
  _BYTE v15[57]; // [rsp+Fh] [rbp-39h] BYREF

  v15[0] = 0;
  v11 = sub_10214C0(a1, a2);
  result = sub_101FA50(a1, v11, v15);
  if ( *(char *)(result + 3) >= 0 && !v15[0] )
  {
    *(_BYTE *)(result + 15) |= 0x80u;
    sub_101DD90(a1);
    v13 = 1;
    if ( !a5 )
      v13 = 2 * (a6 != 0);
    sub_101F640(*(_QWORD *)(a1 + 488), v11, HIDWORD(v11), a3, a4, v13, a7);
    return v14;
  }
  return result;
}
