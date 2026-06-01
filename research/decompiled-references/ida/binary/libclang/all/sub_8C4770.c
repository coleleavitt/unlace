unsigned __int64 __fastcall sub_8C4770(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // r9
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  unsigned __int8 v13; // r13
  char v14; // al
  __int64 v15; // rax
  int v16; // edx
  unsigned __int8 v17; // al
  __int64 v19; // rax
  bool v20; // [rsp+7h] [rbp-51h]
  __int64 v21; // [rsp+8h] [rbp-50h]
  _QWORD v22[8]; // [rsp+18h] [rbp-40h] BYREF

  v5 = a1;
  v20 = a5 != 0;
  v10 = 8LL * (a5 != 0) + 32;
  v11 = a1[274];
  a1[284] += v10;
  v12 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v10 + v12 && v11 )
  {
    a1[274] = v10 + v12;
  }
  else
  {
    v19 = sub_8C1090((__int64)(a1 + 274), v10, 3);
    v5 = a1;
    v12 = v19;
  }
  v13 = 1;
  v22[0] = *(_QWORD *)(a3 + 48);
  v14 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                 + 16LL);
  if ( v14 != 42 )
    v13 = 2 * (v14 == 43);
  v15 = sub_B0FEA0(v22, v5);
  *(_WORD *)v12 = *(_WORD *)v12 & 0xFE00 | 0x70;
  if ( byte_4AD234C )
  {
    v21 = v15;
    sub_AC4570(112);
    v15 = v21;
  }
  *(_QWORD *)(v12 + 8) = v15;
  v16 = *(_DWORD *)v12;
  *(_QWORD *)(v12 + 16) = a3;
  *(_QWORD *)(v12 + 24) = a4;
  *(_DWORD *)(v12 + 4) = a2;
  *(_DWORD *)v12 = v16 & 0xFFF001FF | (v13 << 9) | (v20 << 19);
  if ( (((v13 << 9) | (v20 << 19)) & 0x80000) != 0 )
    *(_QWORD *)(v12 + 32) = a5;
  v17 = sub_76D000(v12);
  *(_BYTE *)(v12 + 1) = (v17 << 6) | *(_BYTE *)(v12 + 1) & 0x3F;
  *(_BYTE *)(v12 + 2) = *(_BYTE *)(v12 + 2) & 0xF8 | (v17 >> 2) & 7;
  return v12;
}

