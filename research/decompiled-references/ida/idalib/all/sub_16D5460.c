__int64 __fastcall sub_16D5460(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5, unsigned int a6, double a7)
{
  __int64 v7; // rax
  __int64 result; // rax
  char v9; // al
  _DWORD *v10; // rbp
  void *v13; // rdi
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r13
  unsigned __int8 v18; // al
  __int64 v19; // rdi
  unsigned int v20; // eax
  unsigned __int8 v21; // [rsp+0h] [rbp-118h]
  unsigned __int8 v22; // [rsp+0h] [rbp-118h]
  unsigned __int8 v23; // [rsp+0h] [rbp-118h]
  int v24; // [rsp+8h] [rbp-110h] BYREF
  int v25; // [rsp+Ch] [rbp-10Ch] BYREF
  __int64 v26; // [rsp+14h] [rbp-104h] BYREF
  char v27; // [rsp+1Ch] [rbp-FCh]
  void *v28; // [rsp+20h] [rbp-F8h] BYREF
  unsigned int v29; // [rsp+28h] [rbp-F0h]
  char v30; // [rsp+2Ch] [rbp-ECh]
  void *v31; // [rsp+30h] [rbp-E8h] BYREF
  unsigned __int64 v32; // [rsp+38h] [rbp-E0h]
  __int64 v33; // [rsp+40h] [rbp-D8h] BYREF
  void *v34[2]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v35; // [rsp+60h] [rbp-B8h] BYREF

  v7 = *(unsigned int *)(a1 + 4624);
  v25 = a4;
  v24 = a5;
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640 * v7 - 640) - 4) <= 1 )
    return 0;
  if ( *(_BYTE *)(a1 + 2440) )
    return 0;
  v9 = *(_BYTE *)(a2 + 2);
  v30 = 0;
  v29 = 1;
  v28 = nullptr;
  v10 = *(_DWORD **)(a2 + 8 * (((v9 & 8) != 0) + (unsigned __int64)a3 + 1) + 32);
  if ( ((*v10 >> 14) & 0xC) != 0 )
    return 0;
  result = sub_16D4840(a1, a2, a3, (__int64)&v28);
  if ( (_BYTE)result )
    goto LABEL_14;
  v13 = v28;
  if ( v29 > 0x40 )
  {
    if ( *(_QWORD *)v28 >= v25 && *(_QWORD *)v28 <= v24 )
      goto LABEL_16;
    goto LABEL_10;
  }
  if ( v29 )
  {
    v19 = (__int64)((_QWORD)v28 << (64 - (unsigned __int8)v29)) >> (64 - (unsigned __int8)v29);
    if ( v19 < v25 )
      goto LABEL_10;
  }
  else
  {
    if ( v25 > 0 )
      goto LABEL_10;
    v19 = 0;
  }
  if ( v24 >= v19 )
    return 0;
LABEL_10:
  if ( (_BYTE)a6 )
  {
    v14 = sub_BF6D70(a2);
    sub_168B9F0((__int64)v34, (__int64 *)(a1 + 8), v14, 0xBEEu, 0);
    sub_C1DEB0(&v31, (int)&v28, 10, v30 ^ 1, 0, 1u, 0);
    v15 = sub_1682AF0((__int64)v34, (__int64)&v31);
    v16 = sub_16CF4F0(v15, &v25);
    v17 = sub_16CF4F0(v16, &v24);
    v26 = sub_EEC8C0((unsigned __int64)v10, (__int64)&v24, a7);
    v18 = *(_BYTE *)(sub_1587DB0(v17, &v26) + 120);
    if ( v31 != &v33 )
    {
      v21 = v18;
      operator delete(v31);
      v18 = v21;
    }
    v22 = v18;
    sub_15F7200(v34);
    result = v22;
  }
  else
  {
    sub_168B9B0((__int64)&v31, a1 + 8, 6509);
    sub_C1DEB0(v34, (int)&v28, 10, v30 ^ 1, 0, 1u, 0);
    sub_AEC220((unsigned __int8 **)&v31, (_BYTE *)v34[0], (signed __int64)v34[1]);
    sub_16B71B0((unsigned __int8 **)&v31, v25);
    sub_16B71B0((unsigned __int8 **)&v31, v24);
    v27 = 1;
    v26 = sub_EEC8C0((unsigned __int64)v10, v24, a7);
    sub_AEC610((__int64 *)&v31, &v26);
    v20 = sub_BF6D70(a2);
    sub_18CAED0(a1, v20, a2, &v31);
    if ( v34[0] != &v35 )
      operator delete(v34[0]);
    if ( v31 && v32 )
      sub_1580C40(v32, (unsigned __int64)v31);
    result = a6;
  }
LABEL_14:
  if ( v29 > 0x40 )
  {
    v13 = v28;
    if ( v28 )
    {
LABEL_16:
      v23 = result;
      operator delete[](v13);
      return v23;
    }
  }
  return result;
}
