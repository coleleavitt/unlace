__int64 __fastcall sub_19C4170(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        char a8,
        unsigned int a9)
{
  unsigned int v9; // r15d
  int v12; // r8d
  __int64 result; // rax
  __int64 v14; // [rsp+8h] [rbp-60h] BYREF
  __int64 (__fastcall **v15)(); // [rsp+10h] [rbp-58h] BYREF
  int v16; // [rsp+18h] [rbp-50h]
  __int64 *v17; // [rsp+20h] [rbp-48h]

  v9 = a5;
  if ( a3 )
    v14 = sub_EEC8C0(a3, a2, a7);
  else
    v14 = 0;
  if ( (*(_BYTE *)(*(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0
    || sub_19A2DC0(a1, a4, a3, a4, a5, a6)
    || (v16 = 5278, v15 = off_2BC64B0, v17 = &v14, result = sub_1E63C20(a1, v9, a4, 1, &v15), !(_BYTE)result) )
  {
    v12 = 0;
    if ( !*(_QWORD *)(a6 + 8) )
      v12 = a4;
    if ( a8 || a9 )
    {
      return sub_1CE41F0(a1, a9 | 0x100000000LL, 0, 1);
    }
    else
    {
      sub_1A5D3E0(a1, a2, 0, a6, v12, 0, 0);
      return 0;
    }
  }
  return result;
}
