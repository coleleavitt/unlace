unsigned __int64 __fastcall sub_7A3000(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        unsigned __int8 a6,
        char a7)
{
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  bool v17; // zf

  v10 = sub_79A610(144, a1, a2, 0);
  sub_78A3D0(v10, 0x39u, 3, (__int64)a1, a2, a4, a4, 0, 0);
  *(_BYTE *)(v10 + 74) |= 2u;
  *(_QWORD *)(v10 + 128) = 0;
  *(_QWORD *)(v10 + 136) = 0;
  *(_QWORD *)v10 = &off_49F5330;
  v11 = a1[274];
  a1[284] += 144LL;
  v12 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v12 + 144 && v11 )
    a1[274] = v12 + 144;
  else
    v12 = sub_7A1DE0((__int64)(a1 + 274), 144, 3);
  v13 = *(_QWORD *)v12;
  *(_QWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 24) = 0;
  v14 = v13 & 0x180 | 0x8007FF8000203200LL;
  v15 = *(_QWORD *)(v12 + 8);
  *(_QWORD *)(v12 + 32) = 0;
  *(_QWORD *)v12 = v14;
  *(_QWORD *)(v12 + 56) = 0;
  v16 = (unsigned int)v15 & 0xFE200000 | 0x1C054LL;
  *(_QWORD *)(v12 + 80) = 0;
  *(_QWORD *)(v12 + 8) = v16;
  *(_QWORD *)(v12 + 88) = v10;
  *(_QWORD *)(v12 + 96) = 0;
  *(_DWORD *)(v12 + 112) = 0;
  *(_QWORD *)(v12 + 120) = 0;
  *(_QWORD *)(v12 + 104) = (8LL * (a7 & 3)) | a5 & 3 | (4LL * a6);
  *(_QWORD *)(v12 + 128) = 0;
  *(_QWORD *)(v12 + 136) = a3;
  *(_WORD *)v12 = v14 & 0x3200;
  *(_BYTE *)(v12 + 10) = BYTE2(v16) & 1 | 0x20;
  *(_OWORD *)(v12 + 40) = 0;
  *(_OWORD *)(v12 + 64) = 0;
  *(_BYTE *)(v10 + 74) &= ~0x10u;
  *(_BYTE *)(v10 + 29) |= 2u;
  v17 = *(_QWORD *)(v10 + 48) == 0;
  *(_QWORD *)(v10 + 128) = v12;
  if ( v17 )
    sub_6E8D60((__int64)a1, v10);
  return v10;
}

