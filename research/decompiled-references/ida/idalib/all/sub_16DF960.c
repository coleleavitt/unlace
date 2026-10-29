__int64 __fastcall sub_16DF960(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, __int64 a5, double a6)
{
  char v7; // al
  char v8; // dl
  __int64 result; // rax
  int v10; // r12d
  unsigned int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 *v15; // r15
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // r9
  __int64 v23; // rax
  int v24; // r12d
  unsigned __int8 v26; // [rsp+2Ch] [rbp-13Ch]
  __int64 *v27; // [rsp+30h] [rbp-138h]
  _BYTE *v28; // [rsp+40h] [rbp-128h] BYREF
  unsigned __int64 v29; // [rsp+48h] [rbp-120h]
  unsigned __int64 v30; // [rsp+60h] [rbp-108h] BYREF
  unsigned __int64 v31; // [rsp+68h] [rbp-100h]
  void *v32; // [rsp+80h] [rbp-E8h] BYREF
  unsigned __int64 v33; // [rsp+88h] [rbp-E0h]
  __int64 v34; // [rsp+90h] [rbp-D8h] BYREF
  void *v35; // [rsp+A0h] [rbp-C8h] BYREF
  unsigned __int64 v36; // [rsp+A8h] [rbp-C0h]
  __int64 v37; // [rsp+B0h] [rbp-B8h] BYREF

  v7 = *(_BYTE *)(a1 + 72);
  v8 = v7 ^ *(_BYTE *)(a3 + 72);
  v26 = a5;
  if ( (v8 & 3) != 0 )
  {
    v15 = (__int64 *)(a2 + 8);
    sub_168B9B0((__int64)&v32, a2 + 8, 6910);
    sub_16B6F70((unsigned __int8 **)&v32, *(_BYTE *)(a1 + 72) & 3);
    sub_16B6F70((unsigned __int8 **)&v32, *(_BYTE *)(a3 + 72) & 3);
LABEL_12:
    sub_1582CA0((__int64)&v35, (_BYTE **)&v32);
    sub_16DE8D0(
      a2,
      v26,
      a4,
      (__int64)&v35,
      *(unsigned int *)(a1 + 68),
      a6,
      v16,
      *(_QWORD *)(a1 + 56),
      *(_DWORD *)(a1 + 64),
      nullptr,
      0);
    if ( v35 && v36 )
      sub_1580C40(v36, (unsigned __int64)v35);
    if ( v32 )
    {
      if ( v33 )
        sub_1580C40(v33, (unsigned __int64)v32);
    }
    sub_168B9F0((__int64)&v35, v15, *(_DWORD *)(a3 + 68), 0x1765u, 0);
    LODWORD(v32) = 0;
    v17 = sub_1587D10((__int64)&v35, (int *)&v32);
    sub_16D6BD0(v17, (__int64 *)(a3 + 56));
    sub_15F7200(&v35);
    return 0;
  }
  if ( (v7 & 3) != 0 )
  {
    result = 1;
    if ( ((*(_WORD *)(a3 + 74) ^ *(_WORD *)(a1 + 74)) & 0xFFFC) == 0 )
      return result;
    v15 = (__int64 *)(a2 + 8);
    sub_168B9B0((__int64)&v32, a2 + 8, 6909);
    sub_16B71B0((unsigned __int8 **)&v32, ((*(_WORD *)(a1 + 74) >> 2) + 1) & 0x7FFF);
    sub_16B71B0((unsigned __int8 **)&v32, ((*(_WORD *)(a3 + 74) >> 2) + 1) & 0x7FFF);
    goto LABEL_12;
  }
  v10 = 0;
  if ( (v8 & 0xC) != 0 )
  {
    sub_168B9B0((__int64)&v32, a2 + 8, 6911);
    sub_16B6F70((unsigned __int8 **)&v32, (*(_BYTE *)(a1 + 72) >> 2) & 3);
    sub_16B6F70((unsigned __int8 **)&v32, (*(_BYTE *)(a3 + 72) >> 2) & 3);
    sub_1582CA0((__int64)&v35, (_BYTE **)&v32);
    sub_16DE8D0(
      a2,
      v26,
      a4,
      (__int64)&v35,
      *(unsigned int *)(a1 + 68),
      a6,
      v18,
      *(_QWORD *)(a1 + 56),
      *(_DWORD *)(a1 + 64),
      nullptr,
      0);
    if ( v35 && v36 )
      sub_1580C40(v36, (unsigned __int64)v35);
    if ( v32 && v33 )
      sub_1580C40(v33, (unsigned __int64)v32);
    sub_168B9F0((__int64)&v35, (__int64 *)(a2 + 8), *(_DWORD *)(a3 + 68), 0x1765u, 0);
    LODWORD(v32) = 0;
    v19 = sub_1587D10((__int64)&v35, (int *)&v32);
    v10 = *(unsigned __int8 *)(sub_16D6BD0(v19, (__int64 *)(a3 + 56)) + 120);
    sub_15F7200(&v35);
  }
  v11 = sub_C9D490((int *)a1, *(_QWORD *)(a2 + 248), a3, a4, a5);
  if ( v11 > 6 )
    return v10 ^ 1u;
  v14 = 1LL << v11;
  if ( (v14 & 0x4D) != 0 )
  {
    v20 = a2 + 8;
    v21 = 6913;
    v27 = (__int64 *)(a2 + 8);
  }
  else if ( (v14 & 0x20) != 0 )
  {
    if ( (unsigned __int8)sub_FD3830(
                            *(_QWORD *)(*(_QWORD *)(a2 + 264) + 32LL),
                            0x1B07u,
                            *(unsigned int *)(a1 + 68),
                            *(_QWORD *)(a2 + 264),
                            v12,
                            v13) == 1 )
      return v10 ^ 1u;
    v20 = a2 + 8;
    v21 = 6915;
    v27 = (__int64 *)(a2 + 8);
  }
  else
  {
    if ( (v14 & 0x10) == 0 )
      return v10 ^ 1u;
    v20 = a2 + 8;
    v21 = 6914;
    v27 = (__int64 *)(a2 + 8);
  }
  sub_168B9B0((__int64)&v28, v20, v21);
  sub_16BB080((__int64)&v32, a1);
  sub_AEC220(&v28, v32, v33);
  sub_16BB080((__int64)&v35, a3);
  sub_AEC220(&v28, v35, v36);
  sub_1582CA0((__int64)&v30, &v28);
  sub_16DE8D0(
    a2,
    v26,
    a4,
    (__int64)&v30,
    *(unsigned int *)(a1 + 68),
    a6,
    v22,
    *(_QWORD *)(a1 + 56),
    *(_DWORD *)(a1 + 64),
    nullptr,
    0);
  if ( v30 && v31 )
    sub_1580C40(v31, v30);
  if ( v35 != &v37 )
    operator delete(v35);
  if ( v32 != &v34 )
    operator delete(v32);
  if ( v28 && v29 )
    sub_1580C40(v29, (unsigned __int64)v28);
  sub_168B9F0((__int64)&v35, v27, *(_DWORD *)(a3 + 68), 0x1765u, 0);
  LODWORD(v32) = 0;
  v23 = sub_1587D10((__int64)&v35, (int *)&v32);
  v24 = *(unsigned __int8 *)(sub_16D6BD0(v23, (__int64 *)(a3 + 56)) + 120);
  sub_15F7200(&v35);
  return v24 ^ 1u;
}
