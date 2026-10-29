__int64 __fastcall sub_1AFE760(_QWORD *a1, unsigned int a2, __int64 a3, const void *a4, size_t a5, __int64 a6)
{
  __int64 v8; // r14
  __int64 v9; // r15
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9

  v8 = a1[68];
  v9 = sub_6F3470(a1[30] + 552LL, a4, a5);
  v10 = sub_A81910((_QWORD *)a1[31], a3, a2);
  v11 = sub_B731A0(a1[31], v8, a2, a2, v9, a3, (__int64)v10, 0);
  *(_BYTE *)(v11 + 29) |= 2u;
  v12 = v11;
  if ( a6 )
  {
    v13 = sub_B31030(a1[31], a6, 0);
    sub_B8CC60(v12, v13, v14, v15, v16, v17);
  }
  return v12;
}
