__int64 *__fastcall sub_1F59610(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // rcx
  int v13; // r12d
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // r12
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // eax
  __int64 v26; // rdi
  __int64 *result; // rax
  __int64 v28; // rdx
  _QWORD *v29; // r13
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9

  sub_1F58FC0((__int64 *)a1, a2);
  v4 = *(_QWORD *)a1;
  v5 = *(unsigned int *)(*(_QWORD *)a1 + 24LL);
  *(_DWORD *)(v4 + 24) = v5 + 1;
  v6 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v5);
  *(_DWORD *)(a1 + 20) = 1;
  *(_BYTE *)(a1 + 24) = 1;
  *(_DWORD *)(a1 + 16) = v6;
  *(_BYTE *)(a2 + 2) = *(_BYTE *)(a2 + 2) & 0xBF | ((v6 & 1) << 6);
  v7 = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 20) = v7 + 1;
  *(_BYTE *)(a2 + 2) = ((((1 << v7) & *(_DWORD *)(a1 + 16)) != 0) << 7) | *(_BYTE *)(a2 + 2) & 0x7F;
  v8 = *(_DWORD *)(a1 + 20);
  LODWORD(v4) = *(_DWORD *)(a1 + 16) >> v8;
  *(_DWORD *)(a1 + 20) = v8 + 2;
  *(_BYTE *)(a2 + 3) = *(_BYTE *)(a2 + 3) & 0xF9 | (2 * (v4 & 3));
  v9 = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 20) = v9 + 1;
  *(_BYTE *)(a2 + 3) = (8 * (((1 << v9) & *(_DWORD *)(a1 + 16)) != 0)) | *(_BYTE *)(a2 + 3) & 0xF7;
  v10 = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 20) = v10 + 1;
  *(_BYTE *)(a2 + 2) = (32 * (((1 << v10) & *(_DWORD *)(a1 + 16)) != 0)) | *(_BYTE *)(a2 + 2) & 0xDF;
  v11 = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 20) = v11 + 1;
  *(_BYTE *)(a2 + 2) = (8 * (((1 << v11) & *(_DWORD *)(a1 + 16)) != 0)) | *(_BYTE *)(a2 + 2) & 0xF7;
  v12 = *(unsigned int *)(a1 + 20);
  LODWORD(v6) = 1 << v12;
  LOBYTE(v6) = ((1 << v12) & *(_DWORD *)(a1 + 16)) != 0;
  *(_DWORD *)(a1 + 20) = v12 + 1;
  v13 = 0;
  *(_BYTE *)(a2 + 3) &= ~1u;
  v14 = (unsigned int)(16 * v6);
  *(_BYTE *)(a2 + 2) = (16 * v6) | *(_BYTE *)(a2 + 2) & 0xEF;
  v15 = *(_QWORD *)a2;
  if ( (*(_QWORD *)a2 & 0x100000) != 0 )
  {
    v16 = *(_QWORD *)a1;
    v17 = *(unsigned int *)(*(_QWORD *)a1 + 24LL);
    v12 = (unsigned int)(v17 + 1);
    *(_DWORD *)(v16 + 24) = v12;
    v14 = *(_QWORD *)(v16 + 32);
    v13 = *(_DWORD *)(v14 + 8 * v17);
    v15 = *(_QWORD *)a2;
  }
  if ( (v15 & 0x80000) == 0 )
  {
    if ( (v15 & 0x200000) == 0 )
      goto LABEL_5;
LABEL_8:
    v29 = *(_QWORD **)(*(_QWORD *)a1 + 8LL);
    v30 = sub_1EE13A0(
            (__int64)v29,
            *(_QWORD *)(*(_QWORD *)a1 + 16LL),
            (__int64 *)(*(_QWORD *)a1 + 32LL),
            (_DWORD *)(*(_QWORD *)a1 + 24LL));
    *(_QWORD *)(a2 + ((*(_QWORD *)a2 >> 15) & 0x10LL) + 32) = sub_1EDB980(v29, v30, v31, v32, v33, v34);
    v18 = *(_QWORD *)a2 >> 16;
    if ( (*(_QWORD *)a2 & 0x100000LL) == 0 )
      goto LABEL_6;
LABEL_9:
    sub_1F57350(
      (__int64 *)a1,
      (_DWORD *)(a2 + 8LL * ((v18 & 0x20) != 0) + 16LL * ((v18 & 8) != 0) + 32),
      a2 + 16 * (((v18 & 8) != 0) + (unsigned __int64)((v18 & 0x10) != 0)) + 8LL * ((v18 & 0x20) != 0) + 32,
      v13);
    goto LABEL_6;
  }
  *(_QWORD *)(a2 + 32) = sub_1F194E0(*(_QWORD *)a1, a2, v14, v12, v2, v3);
  v15 = *(_QWORD *)a2;
  *(_QWORD *)(a2 + 40) = v28;
  if ( (v15 & 0x200000) != 0 )
    goto LABEL_8;
LABEL_5:
  v18 = v15 >> 16;
  if ( (v18 & 0x10) != 0 )
    goto LABEL_9;
LABEL_6:
  v19 = *(_QWORD **)(*(_QWORD *)a1 + 8LL);
  v20 = sub_1EE13A0(
          (__int64)v19,
          *(_QWORD *)(*(_QWORD *)a1 + 16LL),
          (__int64 *)(*(_QWORD *)a1 + 32LL),
          (_DWORD *)(*(_QWORD *)a1 + 24LL));
  *(_QWORD *)(a2 + 16) = sub_1EDB980(v19, v20, v21, v22, v23, v24);
  v25 = sub_1EE7490(*(_QWORD *)a1);
  v26 = *(_QWORD *)a1;
  *(_DWORD *)(a2 + 4) = v25;
  result = sub_1F19410(v26, *(_QWORD *)(*(_QWORD *)(a2 + 16) + 40LL));
  *(_QWORD *)(a2 + 24) = result;
  return result;
}
