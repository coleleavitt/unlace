unsigned __int64 __fastcall sub_32F110(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7)
{
  unsigned int v7; // r14d
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v14; // [rsp+18h] [rbp-60h] BYREF
  __int64 v15; // [rsp+20h] [rbp-58h] BYREF
  int v16; // [rsp+28h] [rbp-50h]
  unsigned __int64 v17; // [rsp+38h] [rbp-40h]

  v7 = a4;
  v17 = __readfsqword(0x28u);
  *(_BYTE *)a1 = 10;
  v16 = a3;
  v9 = qalloc_or_throw(24, a2, a3, a4);
  LODWORD(v15) = 1;
  HIDWORD(v15) = v7;
  sub_123A40(v9, (unsigned __int8 *)&v15, v10, v11);
  *(_DWORD *)(v9 + 20) = a6;
  *(_DWORD *)(v9 + 16) = a5;
  *(_QWORD *)(a1 + 8) = v9;
  sub_11CDA0((__int64)&v15);
  sub_32C430(&v14, a2, v7, a7);
  sub_32C540(&v15, a2, &v14);
  copy_tinfo_t();
  clear_tinfo_t();
  clear_tinfo_t();
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 84);
  return v17 - __readfsqword(0x28u);
}
