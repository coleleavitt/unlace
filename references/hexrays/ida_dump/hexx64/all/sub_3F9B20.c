unsigned __int64 __fastcall sub_3F9B20(__int64 a1, unsigned __int8 *a2, unsigned __int8 a3, __int64 a4, int a5)
{
  __int64 v6; // r12
  int v7; // r15d
  int v9; // r14d
  int dtype_size; // eax
  _QWORD v11[2]; // [rsp+10h] [rbp-60h] BYREF
  _DWORD v12[6]; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-38h]

  v6 = a5;
  v13 = __readfsqword(0x28u);
  if ( (unsigned __int8)(a2[1] - 6) <= 1u )
  {
    v9 = *a2;
    dtype_size = get_dtype_size(a3);
    sub_1D6310(a1, 3u, dtype_size, a4, 0x3BEA45E214ADDC55LL, v6, v9);
  }
  else
  {
    v11[1] = 0;
    v11[0] = 0xFFFFFFFF00000000LL;
    v7 = get_dtype_size(a3);
    sub_120BF0((__int64)v11, *(_QWORD *)(a1 + 800), *(_QWORD *)(a1 + 40), a2, a4, v7, 0, -1);
    v12[0] = 1;
    v12[2] = v6;
    v12[1] = v7;
    sub_1D6450(a1, 4, (unsigned __int8 *)v11, nullptr, (unsigned __int8 *)v12);
    sub_11CDA0((__int64)v12);
    sub_11CDA0((__int64)v11);
  }
  return v13 - __readfsqword(0x28u);
}
