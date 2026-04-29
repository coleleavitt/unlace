unsigned __int64 __fastcall sub_32F430(__int64 a1, __int64 a2, int a3, unsigned int a4, int a5, int a6, int a7)
{
  __int64 v9; // rbx
  __int64 v12; // [rsp+18h] [rbp-60h] BYREF
  __int64 v13; // [rsp+20h] [rbp-58h] BYREF
  int v14; // [rsp+28h] [rbp-50h]
  unsigned __int64 v15; // [rsp+38h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  *(_BYTE *)a1 = 10;
  v14 = a3;
  v9 = qalloc_or_throw(24);
  LODWORD(v13) = 1;
  HIDWORD(v13) = a4;
  sub_123480(v9, (unsigned __int8 *)&v13);
  *(_DWORD *)(v9 + 20) = a6;
  *(_DWORD *)(v9 + 16) = a5;
  *(_QWORD *)(a1 + 8) = v9;
  sub_11C7E0((__int64)&v13);
  sub_32C760(&v12, a2, a4, a7);
  sub_32C870(&v13, a2, &v12);
  copy_tinfo_t(a1 + 24, &v13);
  clear_tinfo_t(&v13);
  clear_tinfo_t(&v12);
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 84);
  return v15 - __readfsqword(0x28u);
}
