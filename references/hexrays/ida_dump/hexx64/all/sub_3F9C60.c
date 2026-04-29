unsigned __int64 __fastcall sub_3F9C60(__int64 a1, __int64 a2, int a3, char a4, char a5)
{
  bool v8; // zf
  __int64 v10; // rdi
  int dtype_size; // r14d
  _QWORD v13[2]; // [rsp+0h] [rbp-60h] BYREF
  _DWORD v14[6]; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-38h]

  v8 = *(_WORD *)(a1 + 48) == 92;
  v15 = __readfsqword(0x28u);
  if ( !v8 )
    sub_3EFB80(a1, (unsigned __int8 *)a2, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 472LL));
  if ( !a4 )
    return v15 - __readfsqword(0x28u);
  v10 = (unsigned __int8)sub_3EE260(a1 + 24);
  if ( a5 )
  {
    v13[1] = 0;
    v13[0] = 0xFFFFFFFF00000000LL;
    dtype_size = get_dtype_size(v10);
    sub_120BF0(
      (__int64)v13,
      *(_QWORD *)(a1 + 800),
      *(_QWORD *)(a1 + 40),
      (unsigned __int8 *)a2,
      *(_QWORD *)(a2 + 16),
      dtype_size,
      0,
      -1);
    v14[0] = 1;
    v14[1] = dtype_size;
    v14[2] = a3;
    sub_1D6450(a1, 12, (unsigned __int8 *)v13, (unsigned __int8 *)v14, (unsigned __int8 *)v14);
    sub_11CDA0((__int64)v14);
    sub_11CDA0((__int64)v13);
    return v15 - __readfsqword(0x28u);
  }
  return sub_3F9B20(a1, (unsigned __int8 *)a2, v10, *(_QWORD *)(a2 + 16), a3);
}
