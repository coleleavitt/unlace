__int64 __fastcall sub_A87B40(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r12d
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rax
  int v19; // edx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // ebx
  __int64 v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r12
  __int64 v29; // rbx
  unsigned int v30; // r13d
  unsigned int v31; // eax
  void *v32; // r15
  __int64 v33; // rax
  char v34; // dl
  int v35; // edx
  __int64 v36; // rdx
  void *v37; // r13
  __int64 v38; // rdx
  __int64 v39; // rax
  void *v40; // r13
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // r15
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // [rsp+18h] [rbp-F0h]
  __int64 *v50; // [rsp+40h] [rbp-C8h]
  __int64 v51; // [rsp+50h] [rbp-B8h]
  __int64 v52; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v53[4]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v54; // [rsp+80h] [rbp-88h] BYREF
  __int64 v55; // [rsp+88h] [rbp-80h]
  __int64 v56; // [rsp+90h] [rbp-78h] BYREF
  __int64 v57; // [rsp+98h] [rbp-70h]
  unsigned int v58; // [rsp+A0h] [rbp-68h] BYREF
  char v59; // [rsp+A4h] [rbp-64h]
  __int64 v60; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v61; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v62; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v63; // [rsp+C0h] [rbp-48h]

  v3 = -1;
  if ( (_DWORD)a2 != -1 )
    v3 = sub_FF9FB0(a1[63], a2);
  if ( !(unsigned __int8)sub_FF9F70(a1[63], v3) )
  {
    v6 = sub_1021D80(a1[41]);
    v7 = sub_1021D90(a1[41], v3);
    v49 = a3 + 8;
    sub_17B32B0(v6, a3 + 8, v7);
    return v49;
  }
  v58 = v3;
  v50 = a1 + 95;
  v60 = 0;
  v61 = 0;
  v62 = 1;
  v63 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v60, &qword_1C7F280);
  v9 = a1[95];
  if ( !v9 || (v10 = *(unsigned int *)(v9 - 4), (_DWORD)v10 == *(_DWORD *)(v9 - 8)) )
  {
    sub_83D1D0(v50);
    v9 = a1[95];
    v10 = *(unsigned int *)(v9 - 4);
  }
  v11 = v9 + 40 * v10;
  *(_DWORD *)v11 = v58;
  *(_DWORD *)(v11 + 8) = v60;
  *(_BYTE *)(v11 + 12) = BYTE4(v60) & 3 | *(_BYTE *)(v11 + 12) & 0xFC;
  v12 = v61;
  v61 = 0;
  *(_QWORD *)(v11 + 16) = v12;
  *(_DWORD *)(v11 + 24) = v62;
  *(_BYTE *)(v11 + 28) = BYTE4(v62) & 3 | *(_BYTE *)(v11 + 28) & 0xFC;
  v13 = v63;
  v63 = 0;
  *(_QWORD *)(v11 + 32) = v13;
  ++*(_DWORD *)(v9 - 4);
  sub_25A130((char *)&v60);
  v14 = sub_1021D80(a1[41]);
  v49 = a3 + 8;
  sub_17B3930(v14, a3 + 8, 0, v15, v16, v17);
  v18 = a1[95];
  if ( v18 )
  {
    while ( 1 )
    {
      v19 = *(_DWORD *)(v18 - 4);
      if ( !v19 )
        return v49;
      v53[0] = 0;
      v53[1] = 0;
      v53[2] = 1;
      v53[3] = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)v53, (int *)(v18 + 40LL * (unsigned int)(v19 - 1) + 8));
      v20 = a1[95];
      if ( v20 )
      {
        v21 = v20 + 40LL * (unsigned int)(*(_DWORD *)(v20 - 4) - 1);
        v22 = *(_DWORD *)v21;
      }
      else
      {
        v21 = 0x27FFFFFFD8LL;
        v22 = MEMORY[0x27FFFFFFD8];
      }
      sub_25A130((char *)(v21 + 8));
      v23 = a1[63];
      --*(_DWORD *)(a1[95] - 4LL);
      v24 = sub_FF9F90(v23, v22);
      v51 = sub_1021D80(a1[41]);
      v52 = 0;
      v54 = 0;
      v55 = 0;
      v56 = 1;
      v57 = 0;
      sub_182CBA0(qword_1C7F2C0, &v56);
      v25 = a1[41];
      BYTE4(v56) &= ~1u;
      LODWORD(v56) = 1;
      v26 = sub_1021D80(v25);
      sub_17B3860(v26, &v52, &v54);
      v27 = sub_1021D80(a1[41]);
      sub_17B6090(v27, v49, &v52, v49);
      v28 = *(_QWORD *)v24;
      v29 = *(_QWORD *)v24 + 48LL * *(unsigned int *)(v24 + 8);
      if ( v28 != v29 )
      {
        while ( *(_DWORD *)(v28 + 4) != 2 )
        {
          v28 += 48;
          if ( v29 == v28 )
            goto LABEL_29;
        }
        if ( v29 != v28 )
          break;
      }
LABEL_29:
      sub_25A130((char *)&v54);
      sub_17B1E70(v51, &v52);
      sub_25A130((char *)v53);
      v18 = a1[95];
      if ( !v18 )
        return v49;
    }
    while ( 1 )
    {
      v30 = *(_DWORD *)(v28 + 8);
      sub_3EBE30((__int64)&v58, v28 + 16, (__int64)v53);
      v31 = v54;
      v32 = qword_1C7F2C0;
      LODWORD(v54) = v58;
      v58 = v31;
      v33 = v55;
      v55 = v60;
      v60 = v33;
      v34 = BYTE4(v54) & 0xFC | v59 & 2 | v59 & 1;
      v59 = BYTE4(v54) & 1 | v59 & 0xFC | BYTE4(v54) & 2;
      BYTE4(v54) = v34;
      v35 = v61;
      LODWORD(v61) = v56;
      LODWORD(v56) = v35;
      v36 = v62;
      v62 = v57;
      v57 = v36;
      LOBYTE(v36) = BYTE4(v56) & 0xFC | BYTE4(v61) & 2 | BYTE4(v61) & 1;
      BYTE4(v61) = BYTE4(v56) & 1 | BYTE4(v61) & 0xFC | BYTE4(v56) & 2;
      BYTE4(v56) = v36;
      sub_182CBA0(qword_1C7F2C0, &v58);
      sub_182CBA0(v32, &v61);
      if ( !(unsigned __int8)sub_FF9F70(a1[63], v30) )
      {
        v45 = sub_1021D80(a1[41]);
        sub_17B3860(v45, &v52, &v54);
        v46 = sub_1021D80(a1[41]);
        v47 = sub_1021D90(a1[41], v30);
        sub_17B5D70(v46, v47, &v52, &v52);
        v48 = sub_1021D80(a1[41]);
        sub_17B6090(v48, &v52, v49, v49);
        goto LABEL_24;
      }
      v58 = v30;
      v37 = qword_1C7F2C0;
      v60 = 0;
      v61 = 0;
      v62 = 1;
      v63 = 0;
      if ( (v54 & 0x100000000LL) != 0 )
      {
        sub_182C690(qword_1C7F2C0, &v60, &v54);
        if ( (v56 & 0x100000000LL) == 0 )
        {
LABEL_20:
          BYTE4(v62) &= ~1u;
          LODWORD(v62) = v56;
          goto LABEL_21;
        }
      }
      else
      {
        LODWORD(v60) = v54;
        if ( (v56 & 0x100000000LL) == 0 )
          goto LABEL_20;
      }
      sub_182C690(v37, &v62, &v56);
LABEL_21:
      v38 = a1[95];
      if ( !v38 || (v39 = *(unsigned int *)(v38 - 4), (_DWORD)v39 == *(_DWORD *)(v38 - 8)) )
      {
        sub_83D1D0(v50);
        v38 = a1[95];
        v39 = *(unsigned int *)(v38 - 4);
      }
      v40 = qword_1C7F2C0;
      v41 = v38 + 40 * v39;
      *(_DWORD *)v41 = v58;
      *(_DWORD *)(v41 + 8) = v60;
      *(_BYTE *)(v41 + 12) = BYTE4(v60) & 3 | *(_BYTE *)(v41 + 12) & 0xFC;
      v42 = v61;
      v61 = 0;
      *(_QWORD *)(v41 + 16) = v42;
      *(_DWORD *)(v41 + 24) = v62;
      *(_BYTE *)(v41 + 28) = BYTE4(v62) & 3 | *(_BYTE *)(v41 + 28) & 0xFC;
      v43 = v63;
      v63 = 0;
      *(_QWORD *)(v41 + 32) = v43;
      ++*(_DWORD *)(v38 - 4);
      sub_182CBA0(v40, &v60);
      sub_182CBA0(v40, &v62);
LABEL_24:
      v44 = v28 + 48;
      if ( v29 != v28 + 48 )
      {
        while ( 1 )
        {
          v28 = v44;
          if ( *(_DWORD *)(v44 + 4) == 2 )
            break;
          v44 += 48;
          if ( v29 == v44 )
            goto LABEL_29;
        }
        if ( v44 != v29 )
          continue;
      }
      goto LABEL_29;
    }
  }
  return v49;
}

