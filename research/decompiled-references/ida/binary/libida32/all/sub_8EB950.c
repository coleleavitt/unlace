__int64 __fastcall sub_8EB950(__int64 a1, _WORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  _DWORD *v8; // rbx
  _DWORD *v9; // rbx
  unsigned __int64 v10; // rax
  int v11; // eax
  unsigned __int64 v12; // r10
  _DWORD *v13; // rbx
  unsigned __int64 v14; // r12
  int v15; // eax
  unsigned int *v16; // rbx
  unsigned int *v17; // rcx
  unsigned __int64 v18; // r8
  unsigned int v19; // esi
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r11
  unsigned __int64 v22; // r10
  unsigned int v23; // eax
  int v24; // eax
  unsigned __int64 v26; // [rsp+8h] [rbp-120h]
  unsigned __int64 v27; // [rsp+10h] [rbp-118h]
  unsigned __int64 v28; // [rsp+18h] [rbp-110h]
  unsigned int v29; // [rsp+24h] [rbp-104h] BYREF
  unsigned int v30; // [rsp+28h] [rbp-100h] BYREF
  unsigned int v31; // [rsp+2Ch] [rbp-FCh] BYREF
  __int16 v32[32]; // [rsp+30h] [rbp-F8h] BYREF
  __int16 v33[60]; // [rsp+70h] [rbp-B8h] BYREF
  unsigned __int64 v34; // [rsp+E8h] [rbp-40h]

  v6 = a3 + 8;
  v34 = __readfsqword(0x28u);
  v29 = 31;
  *(_DWORD *)(a1 + 2056) = 1;
  v30 = 255;
  v31 = 1;
  v7 = sub_8E3E90((_QWORD *)a1, &v30, (unsigned __int8 *)(a3 + 8), a4 - 8, &v31);
  if ( !v31 && v30 == 255 )
    *(_DWORD *)(a1 + 2056) = 2;
  if ( v7 > 0xFFFFFFFFFFFFFF88LL )
    return -30;
  v8 = (_DWORD *)(v7 + v6);
  v26 = a3 + a4;
  v27 = sub_8DCD00(v32, &v29, (int *)&v31, v8, a3 + a4 - (_QWORD)v8);
  if ( v27 > 0xFFFFFFFFFFFFFF88LL )
    return -30;
  if ( v31 > 8 )
    return -30;
  if ( (unsigned __int64)sub_8E0490((_WORD *)(a1 + 2064), v32, 0x1Fu, v31, a2, 0x2200u) > 0xFFFFFFFFFFFFFF88LL )
    return -30;
  v30 = 52;
  v9 = (_DWORD *)((char *)v8 + v27);
  v10 = sub_8DCD00(v33, &v30, (int *)&v31, v9, v26 - (_QWORD)v9);
  if ( v10 > 0xFFFFFFFFFFFFFF88LL )
    return -30;
  v28 = v10;
  if ( v31 > 9 || (unsigned __int64)sub_8E0490((_WORD *)(a1 + 2836), v33, v30, v31, a2, 0x2200u) > 0xFFFFFFFFFFFFFF88LL )
    return -30;
  v11 = 1;
  v12 = v28;
  if ( v30 > 0x33 )
  {
    v11 = sub_8E62D0(v33, 52);
    v12 = v28;
  }
  v13 = (_DWORD *)((char *)v9 + v12);
  *(_DWORD *)(a1 + 5608) = v11;
  v30 = 35;
  v14 = sub_8DCD00(v33, &v30, (int *)&v31, v13, v26 - (_QWORD)v13);
  if ( v14 > 0xFFFFFFFFFFFFFF88LL
    || v31 > 9
    || (unsigned __int64)sub_8E0490((_WORD *)(a1 + 4288), v33, v30, v31, a2, 0x2200u) > 0xFFFFFFFFFFFFFF88LL )
  {
    return -30;
  }
  v15 = 1;
  if ( v30 > 0x22 )
    v15 = sub_8E62D0(v33, 35);
  v16 = (_DWORD *)((char *)v13 + v14);
  *(_DWORD *)(a1 + 5612) = v15;
  v17 = v16 + 3;
  if ( (unsigned __int64)(v16 + 3) > v26 )
    return -30;
  v18 = *v16;
  v19 = 31;
  *(_DWORD *)(a1 + 5616) = v18;
  v20 = v16[1];
  v21 = v26 - (_QWORD)v17;
  *(_DWORD *)(a1 + 5620) = v20;
  v22 = v16[2];
  *(_DWORD *)(a1 + 5624) = v22;
  if ( v26 - (unsigned __int64)v17 <= 0xFFFDFFFF )
  {
    _BitScanReverse(&v23, v21 + 0x20000);
    v19 = 31 - (v23 ^ 0x1F);
  }
  v24 = 1;
  if ( v29 >= v19 )
    v24 = sub_8E62D0(v32, v19);
  *(_DWORD *)(a1 + 5604) = v24;
  if ( (_DWORD)v18 && v21 >= v18 && (_DWORD)v20 && v21 >= v20 && (_DWORD)v22 && v22 <= v21 )
    return (__int64)v17 - a3;
  else
    return -30;
}

