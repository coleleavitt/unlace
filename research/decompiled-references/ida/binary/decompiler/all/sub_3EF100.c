unsigned __int64 __fastcall sub_3EF100(__int64 a1, __int64 a2, int a3, char a4, char a5)
{
  bool v8; // zf
  unsigned int v10; // edi
  int dtype_size; // r14d
  int v12; // r9d
  _QWORD v14[2]; // [rsp+0h] [rbp-60h] BYREF
  _DWORD v15[6]; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-38h]

  v8 = *(_WORD *)(a1 + 48) == 92;
  v16 = __readfsqword(0x28u);
  if ( !v8 )
    sub_3E4F40(a1, (unsigned __int8 *)a2, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 472LL));
  if ( !a4 )
    return v16 - __readfsqword(0x28u);
  v10 = (unsigned __int8)sub_3E3620(a1 + 24);
  if ( a5 )
  {
    v14[1] = 0;
    v14[0] = 0xFFFFFFFF00000000LL;
    dtype_size = get_dtype_size();
    sub_11E7B0(
      (__int64)v14,
      *(_QWORD *)(a1 + 800),
      *(_QWORD *)(a1 + 40),
      (unsigned __int8 *)a2,
      *(_QWORD *)(a2 + 16),
      dtype_size,
      0,
      -1);
    v15[0] = 1;
    v15[1] = dtype_size;
    v15[2] = a3;
    sub_1D38D0(a1, 12, (unsigned int)v14, (unsigned int)v15, (unsigned int)v15, v12);
    sub_11A960((__int64)v15);
    sub_11A960((__int64)v14);
    return v16 - __readfsqword(0x28u);
  }
  return sub_3EEFC0(a1, (unsigned __int8 *)a2, v10, *(_QWORD *)(a2 + 16), a3);
}
