void __fastcall sub_1F5AE60(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rdi
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rcx
  _QWORD *v14; // r13
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  int v21; // ecx
  int v22; // eax
  __int64 v23; // rsi
  int v24; // ecx
  bool v25; // zf
  int v26; // ecx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  _QWORD *v33; // r14
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  int v40; // ecx
  int v41; // edx
  char v42; // si

  sub_1F58FC0((__int64 *)a1, a2);
  v4 = *(_QWORD *)a1;
  v5 = *(unsigned int *)(*(_QWORD *)a1 + 24LL);
  *(_DWORD *)(v4 + 24) = v5 + 1;
  v6 = *(_QWORD *)(v4 + 32);
  v7 = *(_QWORD *)(v6 + 8 * v5);
  *(_DWORD *)(a1 + 20) = 3;
  *(_BYTE *)(a1 + 24) = 1;
  *(_DWORD *)(a1 + 16) = v7;
  v8 = *(unsigned int *)(v4 + 24);
  v9 = *(_QWORD *)(v6 + 8 * v8);
  v10 = v8 + 1;
  v11 = *(_QWORD *)(v4 + 8);
  *(_DWORD *)(v4 + 24) = v10;
  v12 = *(unsigned int *)(v11 + 13072);
  v13 = *(_QWORD *)(*(_QWORD *)(v11 + 13064) + 8 * v12 - 8);
  *(_DWORD *)(v11 + 13072) = v12 - 1;
  *(_QWORD *)(a2 + 16) = v13;
  v14 = *(_QWORD **)(*(_QWORD *)a1 + 8LL);
  v15 = sub_1EE13A0(
          (__int64)v14,
          *(_QWORD *)(*(_QWORD *)a1 + 16LL),
          (__int64 *)(*(_QWORD *)a1 + 32LL),
          (_DWORD *)(*(_QWORD *)a1 + 24LL));
  v20 = sub_1EDB980(v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(a2 + 24) = v20;
  *(_QWORD *)(a2 + 32) = sub_1F19410(*(_QWORD *)a1, *(_QWORD *)(v20 + 40));
  *(_DWORD *)(a2 + 40) = sub_1EE7490(*(_QWORD *)a1);
  v21 = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 20) = v21 + 1;
  v22 = 1 << v21;
  LOBYTE(v22) = ((1 << v21) & *(_DWORD *)(a1 + 16)) != 0;
  LODWORD(v12) = 8 * v22;
  LOBYTE(v12) = (v7 & 2) != 0;
  v23 = (unsigned int)(32 * v12);
  *(_BYTE *)(a2 + 2) = (((v7 & 4) != 0) << 6)
                     | v23
                     | (16 * (v7 & 1)) & 0x9F
                     | (8 * v22) & 0x9F
                     | *(_BYTE *)(a2 + 2) & 0x87;
  v24 = *(_DWORD *)(a1 + 20);
  v25 = ((1 << v24) & *(_DWORD *)(a1 + 16)) == 0;
  *(_DWORD *)(a1 + 20) = v24 + 1;
  *(_BYTE *)(a2 + 2) = (!v25 << 7) | *(_BYTE *)(a2 + 2) & 0x7F;
  v26 = *(_DWORD *)(a1 + 20);
  v27 = *(_DWORD *)(a1 + 16) >> v26;
  *(_DWORD *)(a1 + 20) = v26 + 2;
  *(_BYTE *)(a2 + 3) = v27 & 3 | *(_BYTE *)(a2 + 3) & 0xFC;
  *(_DWORD *)(a2 + 4) = sub_1EE7490(*(_QWORD *)a1);
  if ( (v7 & 1) != 0 )
  {
    *(_QWORD *)(a2 + 48) = sub_1F194E0(*(_QWORD *)a1, v23, v28, v29, v30, v31);
    *(_QWORD *)(a2 + 56) = v32;
    if ( (v7 & 2) == 0 )
    {
LABEL_3:
      if ( (v7 & 4) == 0 )
        return;
LABEL_7:
      v42 = BYTE2(*(_QWORD *)a2);
      sub_1F57350(
        (__int64 *)a1,
        (_DWORD *)(a2 + 8LL * ((v42 & 0x20) != 0) + 16LL * ((v42 & 0x10) != 0) + 48),
        a2 + 16 * (((v42 & 0x10) != 0) + (unsigned __int64)((v42 & 0x40) != 0)) + 8LL * ((v42 & 0x20) != 0) + 48,
        v9);
      return;
    }
  }
  else if ( (v7 & 2) == 0 )
  {
    goto LABEL_3;
  }
  v33 = *(_QWORD **)(*(_QWORD *)a1 + 8LL);
  v34 = sub_1EE13A0(
          (__int64)v33,
          *(_QWORD *)(*(_QWORD *)a1 + 16LL),
          (__int64 *)(*(_QWORD *)a1 + 32LL),
          (_DWORD *)(*(_QWORD *)a1 + 24LL));
  v39 = sub_1EDB980(v33, v34, v35, v36, v37, v38);
  v40 = *(_DWORD *)(a1 + 20);
  v41 = *(_DWORD *)(a1 + 16) >> v40;
  *(_DWORD *)(a1 + 20) = v40 + 2;
  *(_QWORD *)(a2 + ((*(_QWORD *)a2 >> 16) & 0x10LL) + 48) = v41 & 3 | (unsigned __int64)v39;
  if ( (v7 & 4) != 0 )
    goto LABEL_7;
}
