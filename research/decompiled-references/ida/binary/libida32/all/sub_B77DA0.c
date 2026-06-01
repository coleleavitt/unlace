unsigned __int64 __fastcall sub_B77DA0(_QWORD *a1, __int64 a2, __int64 a3, int a4, char a5, char a6, char a7)
{
  unsigned __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  _QWORD *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r9
  int v18; // r8d
  __int64 v19; // r8
  bool v20; // zf

  v10 = sub_B6C590(144, a1, a2, 0);
  sub_B5C3D0((_QWORD *)v10, 0x3Bu, 3, (__int64)a1, a2, a4, a4, 0, 0);
  *(_BYTE *)(v10 + 74) |= 2u;
  *(_QWORD *)(v10 + 128) = 0;
  *(_QWORD *)(v10 + 136) = 0;
  *(_QWORD *)v10 = &off_2BD8C58;
  v13 = a1[294];
  a1[304] += 144LL;
  v14 = (_QWORD *)((v13 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a1[295] >= (unsigned __int64)(v14 + 18) && v13 )
    a1[294] = v14 + 18;
  else
    v14 = (_QWORD *)sub_962430((__int64)(a1 + 294), 144, 144, 3, v11, v12);
  sub_B72BC0(v14, v10);
  v18 = *(unsigned __int8 *)(v15 + 104);
  *(_WORD *)v15 &= 0xFE7Fu;
  *(_BYTE *)(v15 + 10) |= 0x20u;
  *(_DWORD *)(v15 + 112) = 0;
  *(_QWORD *)(v15 + 120) = 0;
  *(_QWORD *)(v15 + 136) = a3;
  *(_QWORD *)(v15 + 128) = 0;
  v19 = (8 * (a7 & 3)) | (4 * (a6 & 1)) & 0xE7 | a5 & 3 | v18 & 0xFFFFFFE0;
  *(_BYTE *)(v15 + 104) = v19;
  *(_QWORD *)(v15 + 104) &= 0x1FuLL;
  *(_BYTE *)(v10 + 74) &= ~0x10u;
  *(_BYTE *)(v10 + 29) |= 2u;
  v20 = *(_QWORD *)(v10 + 48) == 0;
  *(_QWORD *)(v10 + 128) = v15;
  if ( v20 )
    sub_A56D30((__int64)a1, v10, v15, v16, v19, v17);
  return v10;
}

