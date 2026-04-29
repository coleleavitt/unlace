unsigned __int64 __fastcall sub_3E5360(__int64 a1, unsigned __int8 *a2, unsigned __int8 a3, __int64 a4, int a5)
{
  bool v6; // zf
  int v8; // r15d
  int v10; // r14d
  int dtype_size; // eax
  _QWORD v12[2]; // [rsp+10h] [rbp-60h] BYREF
  _DWORD v13[6]; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-38h]

  v6 = a2[1] == 7;
  v14 = __readfsqword(0x28u);
  if ( v6 )
  {
    v10 = *a2;
    dtype_size = get_dtype_size(a3);
    sub_1CF210(a1, 3u, dtype_size, a4, 0x3BEA45E214ADDC55LL, a5, v10);
  }
  else
  {
    v12[1] = 0;
    v12[0] = 0xFFFFFFFF00000000LL;
    v8 = get_dtype_size(a3);
    sub_11A530((__int64)v12, *(_QWORD *)(a1 + 800), *(_QWORD *)(a1 + 40), a2, a4, v8, 0, -1);
    v13[0] = 1;
    v13[2] = a5;
    v13[1] = v8;
    sub_1CF350(a1, 4, (unsigned __int8 *)v12, nullptr, (unsigned __int8 *)v13);
    sub_1166E0((__int64)v13);
    sub_1166E0((__int64)v12);
  }
  return v14 - __readfsqword(0x28u);
}
