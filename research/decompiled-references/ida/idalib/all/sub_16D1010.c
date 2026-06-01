__int64 __fastcall sub_16D1010(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, double a6)
{
  unsigned __int64 v7; // rbx
  unsigned int v8; // r12d
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rax
  _DWORD *v14; // rdi
  _DWORD *v15; // rcx
  __int64 *v16; // rax
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rbp
  unsigned int v20; // r12d
  __int64 v22; // rdi
  __int64 v23; // rax
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 v26; // r13
  char v27; // r8
  int v28; // ecx
  int v29; // esi
  int v30; // eax
  unsigned int v31; // edx
  unsigned int v32; // edx
  __int64 v33; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v34; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v35; // [rsp+18h] [rbp-D0h] BYREF
  __int64 v36; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+28h] [rbp-C0h] BYREF
  _BYTE v38[184]; // [rsp+30h] [rbp-B8h] BYREF

  v7 = a2;
  if ( a3 == 821 )
  {
    v22 = *(_QWORD *)(a1 + 232);
    if ( (*(_DWORD *)a2 & 0x200000) != 0 )
    {
      v28 = *(_DWORD *)(a2 + 8 * (*(_DWORD *)(a2 + 16) + (unsigned int)((*(_BYTE *)(a2 + 2) & 8) != 0) + 1) + 32);
      v29 = *(_DWORD *)(a2 + 8 * (*(_DWORD *)(a2 + 16) + (unsigned int)((*(_BYTE *)(a2 + 2) & 8) != 0) + 1) + 36);
      v30 = (*(_WORD *)(v22 + 206) >> 7) & 3;
      if ( v30 == 3 )
        v30 = 2;
      v27 = *(_BYTE *)(v22 + 46);
      v31 = v30
          | (((v27 & 8) != 0) << 14)
          | (((v27 & 4) != 0) << 13)
          | (((v27 & 2) != 0) << 12)
          | (8 * *(unsigned __int8 *)(v22 + 45)) & 0x400
          | (((*(_BYTE *)(v22 + 45) & 0x40) != 0) << 9)
          | (4 * ((unsigned int)*(char *)(v22 + 106) >> 31))
          | ((v27 & 1) << 11)
          | (((*(_BYTE *)(v22 + 207) >> 1) & 3) << 6);
      a5 = v31 | 0x38;
      if ( (v30 & 3) == 1 && (v31 & 4) != 0 )
      {
        v32 = v31 | 0x138;
        if ( (unsigned __int8)a5 >> 6 == 2 )
          a5 = v32;
      }
      a4 = ((unsigned int)a5 | ((*(_BYTE *)(v22 + 202) & 7) << 22)) ^ v28;
      a2 = (unsigned int)a4 & v29;
      BYTE1(v23) = BYTE1(a2) ^ BYTE1(a5);
    }
    else
    {
      v23 = sub_FEAD90(v22);
    }
    if ( (v23 & 0x400) != 0 )
    {
      v24 = sub_BF6D70(v7);
      sub_168B9F0((__int64)v38, (__int64 *)(a1 + 8), v24, 0x8Au, 0);
      LODWORD(v36) = 1;
      v25 = sub_1587D10((__int64)v38, (int *)&v36);
      LODWORD(v35) = 0;
      v26 = sub_1587D10(v25, (int *)&v35);
      a2 = (__int64)&v37;
      v37 = sub_EEC8C0(v7, (__int64)&v35, a6);
      sub_1587DB0(v26, &v37);
      sub_15F7200(v38);
    }
  }
  v8 = 1;
  v9 = 8 * (((*(_BYTE *)(v7 + 2) & 8) != 0) + 1LL);
  v10 = *(_QWORD *)(v7 + v9 + 32);
  v11 = *(_QWORD *)(v7 + v9 + 40);
  v33 = v10;
  v34 = v11;
  v12 = sub_C00A40(v7, a2, v10, a4, a5);
  v13 = sub_191F280(a1, &v33, &v34, v12, 2);
  if ( v33 != 1 && v34 != 1 )
  {
    v14 = (_DWORD *)(v33 & 0xFFFFFFFFFFFFFFFELL);
    v15 = (_DWORD *)(v34 & 0xFFFFFFFFFFFFFFFELL);
    *(_QWORD *)(v7 + 8 * (((*(_BYTE *)(v7 + 2) & 8) != 0) + 1LL) + 32) = v33 & 0xFFFFFFFFFFFFFFFELL;
    *(_QWORD *)(v7 + 8 * (((*(_BYTE *)(v7 + 2) & 8) != 0) + 1LL) + 40) = v15;
    if ( (*v14 & 0x10000) == 0 && (*v15 & 0x10000) == 0 )
    {
      v16 = (__int64 *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
      if ( !v16 )
      {
LABEL_9:
        v17 = sub_EEB7E0((unsigned __int64)v14, (__int64)&v33, a6);
        sub_168B9F0((__int64)v38, (__int64 *)(a1 + 8), v17, 0x1464u, 0);
        v36 = *(_QWORD *)((v33 & 0xFFFFFFFFFFFFFFFELL) + 8);
        v18 = sub_162B6D0((__int64)v38, &v36);
        v35 = *(_QWORD *)((v34 & 0xFFFFFFFFFFFFFFFELL) + 8);
        v19 = sub_162B6D0(v18, &v35);
        v20 = sub_EEC140(v34 & 0xFFFFFFFFFFFFFFFELL);
        v37 = __PAIR64__(v20, sub_EEB7E0(v33 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v35, a6));
        v8 = *(unsigned __int8 *)(sub_1587DB0(v19, &v37) + 120);
        sub_15F7200(v38);
        return v8;
      }
      if ( !sub_F58100(*v16) )
      {
        v14 = (_DWORD *)(v33 & 0xFFFFFFFFFFFFFFFELL);
        goto LABEL_9;
      }
    }
    return 0;
  }
  return v8;
}
