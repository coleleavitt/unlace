unsigned __int64 __fastcall sub_18EFDE0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        _DWORD *a5,
        int *a6,
        double a7,
        double a8)
{
  __int64 v12; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v14; // rax
  __int64 v15[7]; // [rsp+0h] [rbp-38h] BYREF

  v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v12 + 16) != 13 || ((*(_WORD *)(v12 + 18) >> 3) & 0x1FF) != 0x1B3)
    && (unsigned __int8)sub_1E63CF0(a1, a2, a3, 1, 5236) )
  {
    return 1;
  }
  v15[0] = a1;
  v15[1] = a3;
  v14 = sub_18EEFD0(v15, a4, a3, a4, (__int64)a5, a7, a8);
  if ( v14 <= 1 )
    return 1;
  result = v14 & 0xFFFFFFFFFFFFFFFELL;
  *a6 = (*(_BYTE *)(result + 1) >> 1) & 3;
  *a5 = 5;
  return result;
}
