__int64 __fastcall sub_4A8A00(__int64 a1)
{
  void *v2; // r12
  unsigned int v3; // eax
  __int64 v4; // rbx
  void *v5; // r15
  int v6; // edx
  void *v7; // r15
  __int64 v8; // rdx
  char v9; // cl
  __int64 v10; // rax
  void *v11; // r12
  void *v12; // r12
  __int64 v13; // rdx
  __int64 v14; // r14
  void *v15; // rdi
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rax
  char v19; // dl
  char v20; // cl
  __int64 v21; // rax
  char v22; // dl
  char v23; // cl
  void *v24; // rbx
  __int64 v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // rax
  void *v28; // rdi
  void *v29; // rbx
  void *v31; // [rsp+10h] [rbp-B8h]
  __int64 v32; // [rsp+10h] [rbp-B8h]
  void *v33; // [rsp+10h] [rbp-B8h]
  __int64 v34; // [rsp+18h] [rbp-B0h]
  __int64 v35; // [rsp+28h] [rbp-A0h]
  __int64 i; // [rsp+28h] [rbp-A0h]
  __int64 v37; // [rsp+30h] [rbp-98h] BYREF
  __int64 v38; // [rsp+38h] [rbp-90h]
  __int64 v39; // [rsp+40h] [rbp-88h] BYREF
  __int64 v40; // [rsp+48h] [rbp-80h]
  int v41; // [rsp+50h] [rbp-78h] BYREF
  char v42; // [rsp+54h] [rbp-74h]
  __int64 v43; // [rsp+58h] [rbp-70h]
  int v44; // [rsp+60h] [rbp-68h] BYREF
  char v45; // [rsp+64h] [rbp-64h]
  __int64 v46; // [rsp+68h] [rbp-60h]
  __int64 v47; // [rsp+70h] [rbp-58h] BYREF
  __int64 v48; // [rsp+78h] [rbp-50h]
  __int64 v49; // [rsp+80h] [rbp-48h] BYREF
  __int64 v50; // [rsp+88h] [rbp-40h]

  v37 = 0;
  v38 = 0;
  v2 = qword_1C7F2C0;
  v39 = 1;
  v40 = 0;
  if ( (*(_BYTE *)(&qword_1C7F280 + 1) & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, &v37, &qword_1C7F280);
    if ( (qword_1C7F290 & 0x100000000LL) == 0 )
      goto LABEL_3;
LABEL_39:
    sub_182C690(v2, &v39, &qword_1C7F290);
    goto LABEL_4;
  }
  LODWORD(v37) = qword_1C7F280;
  if ( (qword_1C7F290 & 0x100000000LL) != 0 )
    goto LABEL_39;
LABEL_3:
  BYTE4(v39) &= ~1u;
  LODWORD(v39) = qword_1C7F290;
LABEL_4:
  if ( *(_DWORD *)a1 )
  {
    v3 = *(_DWORD *)(a1 + 4);
    v35 = 0;
    if ( !v3 )
      goto LABEL_13;
    while ( 1 )
    {
      v4 = 0;
      do
      {
        v12 = qword_1C7F2C0;
        v13 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v35) + 32 * v4;
        v42 &= 0xFCu;
        v45 &= 0xFCu;
        v41 = 0;
        v43 = 0;
        v44 = 1;
        v46 = 0;
        if ( (*(_BYTE *)(v13 + 20) & 1) != 0 )
          sub_182C690(qword_1C7F2C0, &v41, v13 + 16);
        else
          v41 = *(_DWORD *)(v13 + 16);
        sub_182CBA0(v12, &v44);
        v5 = qword_1C7F2C0;
        v44 = 1;
        v45 &= ~1u;
        BYTE4(v47) &= 0xFCu;
        BYTE4(v49) &= 0xFCu;
        LODWORD(v47) = 0;
        v48 = 0;
        LODWORD(v49) = 1;
        v50 = 0;
        sub_1836B00(qword_1C7F2C0, &v37, &v41, &v47);
        sub_182CBA0(v5, &v49);
        v6 = v47;
        ++v4;
        v7 = qword_1C7F2C0;
        LODWORD(v47) = v37;
        LODWORD(v37) = v6;
        v8 = v48;
        v48 = v38;
        v38 = v8;
        v9 = BYTE4(v47) & 1;
        LOBYTE(v8) = BYTE4(v37) & 0xFC | BYTE4(v47) & 2;
        BYTE4(v47) = BYTE4(v37) & 1 | BYTE4(v47) & 0xFC | BYTE4(v37) & 2;
        BYTE4(v37) = v9 | v8;
        LODWORD(v49) = v39;
        v10 = v40;
        v40 = v50;
        v50 = v10;
        LODWORD(v39) = 1;
        LOBYTE(v8) = BYTE4(v39) & 0xFC | BYTE4(v49) & 2;
        BYTE4(v49) = BYTE4(v39) & 1 | BYTE4(v39) & 2 | BYTE4(v49) & 0xFC;
        BYTE4(v39) = v8;
        sub_182CBA0(qword_1C7F2C0, &v47);
        sub_182CBA0(v7, &v49);
        v11 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v41);
        sub_182CBA0(v11, &v44);
        v3 = *(_DWORD *)(a1 + 4);
      }
      while ( (unsigned int)v4 < v3 );
      if ( (unsigned int)(v35 + 1) >= *(_DWORD *)a1 )
        break;
      ++v35;
      if ( !v3 )
        goto LABEL_13;
    }
    if ( *(_DWORD *)a1 )
    {
LABEL_13:
      for ( i = 0; v3; ++i )
      {
        v14 = 0;
        do
        {
          v25 = 32 * v14;
          v26 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * i);
          v47 = 0;
          v48 = 0;
          v49 = 1;
          v50 = 0;
          v27 = 32 * v14 + v26;
          v28 = qword_1C7F2C0;
          if ( (v37 & 0x100000000LL) != 0 )
          {
            v34 = v27;
            sub_182C690(qword_1C7F2C0, &v47, &v37);
            v27 = v34;
            if ( (v39 & 0x100000000LL) != 0 )
            {
LABEL_28:
              v32 = v27;
              sub_182C690(v28, &v49, &v39);
              v27 = v32;
              goto LABEL_18;
            }
          }
          else
          {
            LODWORD(v47) = v37;
            if ( (v39 & 0x100000000LL) != 0 )
              goto LABEL_28;
          }
          BYTE4(v49) &= ~1u;
          LODWORD(v49) = v39;
LABEL_18:
          if ( (v49 & 0x100000000LL) != 0
            || (_DWORD)v49 != 1
            || (*(_BYTE *)(v27 + 20) & 1) != 0
            || *(_DWORD *)(v27 + 16) != 1 )
          {
            sub_1848FF0(qword_1C7F2C0, &v47, v27);
          }
          else
          {
            v33 = qword_1C7F2C0;
            sub_1831650(qword_1C7F2C0, &v47, v27);
            sub_182CBA0(v33, &v49);
            BYTE4(v49) &= ~1u;
            LODWORD(v49) = 1;
          }
          v42 &= 0xFCu;
          v15 = qword_1C7F2C0;
          v45 &= 0xFCu;
          v41 = 0;
          v43 = 0;
          v44 = 1;
          v46 = 0;
          if ( (v47 & 0x100000000LL) != 0 )
            sub_182C690(qword_1C7F2C0, &v41, &v47);
          else
            v41 = v47;
          if ( (v49 & 0x100000000LL) != 0 )
          {
            sub_182C690(v15, &v44, &v49);
          }
          else
          {
            v45 &= ~1u;
            v44 = v49;
          }
          ++v14;
          v31 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v47);
          sub_182CBA0(v31, &v49);
          v16 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * i) + v25;
          v17 = *(_DWORD *)v16;
          *(_DWORD *)v16 = v41;
          v41 = v17;
          v18 = *(_QWORD *)(v16 + 8);
          *(_QWORD *)(v16 + 8) = v43;
          v43 = v18;
          v19 = *(_BYTE *)(v16 + 4);
          *(_BYTE *)(v16 + 4) = v42 & 2 | v19 & 0xFD;
          v42 = v19 & 2 | v42 & 0xFD;
          v20 = *(_BYTE *)(v16 + 4);
          *(_BYTE *)(v16 + 4) = v42 & 1 | v20 & 0xFE;
          v42 = v20 & 1 | v42 & 0xFE;
          LODWORD(v18) = *(_DWORD *)(v16 + 16);
          *(_DWORD *)(v16 + 16) = v44;
          v44 = v18;
          v21 = *(_QWORD *)(v16 + 24);
          *(_QWORD *)(v16 + 24) = v46;
          v46 = v21;
          v22 = *(_BYTE *)(v16 + 20);
          *(_BYTE *)(v16 + 20) = v45 & 2 | v22 & 0xFD;
          v45 = v22 & 2 | v45 & 0xFD;
          v23 = *(_BYTE *)(v16 + 20) & 1;
          *(_BYTE *)(v16 + 20) = v45 & 1 | *(_BYTE *)(v16 + 20) & 0xFE;
          v24 = qword_1C7F2C0;
          v45 = v23 | v45 & 0xFE;
          sub_182CBA0(qword_1C7F2C0, &v41);
          sub_182CBA0(v24, &v44);
          v3 = *(_DWORD *)(a1 + 4);
        }
        while ( (unsigned int)v14 < v3 );
        if ( (unsigned int)(i + 1) >= *(_DWORD *)a1 )
          break;
      }
    }
  }
  v29 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v37);
  return sub_182CBA0(v29, &v39);
}

