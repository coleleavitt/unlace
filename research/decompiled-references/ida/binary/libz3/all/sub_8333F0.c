__int64 __fastcall sub_8333F0(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // eax
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __int64 i; // rax
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
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // r15
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // [rsp+20h] [rbp-D8h]
  _QWORD *v48; // [rsp+38h] [rbp-C0h]
  __int64 v49; // [rsp+40h] [rbp-B8h]
  __int64 v50; // [rsp+48h] [rbp-B0h] BYREF
  _QWORD v51[4]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v52; // [rsp+70h] [rbp-88h] BYREF
  __int64 v53; // [rsp+78h] [rbp-80h]
  __int64 v54; // [rsp+80h] [rbp-78h] BYREF
  __int64 v55; // [rsp+88h] [rbp-70h]
  unsigned int v56; // [rsp+90h] [rbp-68h] BYREF
  char v57; // [rsp+94h] [rbp-64h]
  __int64 v58; // [rsp+98h] [rbp-60h] BYREF
  __int64 v59; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v60; // [rsp+A8h] [rbp-50h]
  __int64 v61; // [rsp+B0h] [rbp-48h]

  v5 = sub_FF9FB0(a1[62], a2);
  if ( (unsigned __int8)sub_FF9F70(a1[62], v5) )
  {
    v56 = v5;
    v48 = a1 + 89;
    BYTE4(v58) &= 0xFCu;
    BYTE4(v60) &= 0xFCu;
    LODWORD(v58) = 0;
    v59 = 0;
    LODWORD(v60) = 1;
    v61 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v58, &qword_1C7F280);
    v9 = a1[89];
    if ( !v9 || (v10 = *(unsigned int *)(v9 - 4), (_DWORD)v10 == *(_DWORD *)(v9 - 8)) )
    {
      sub_83D1D0(v48);
      v9 = a1[89];
      v10 = *(unsigned int *)(v9 - 4);
    }
    v11 = v9 + 40 * v10;
    *(_DWORD *)v11 = v56;
    *(_DWORD *)(v11 + 8) = v58;
    *(_BYTE *)(v11 + 12) = BYTE4(v58) & 3 | *(_BYTE *)(v11 + 12) & 0xFC;
    v12 = v59;
    v59 = 0;
    *(_QWORD *)(v11 + 16) = v12;
    *(_DWORD *)(v11 + 24) = v60;
    *(_BYTE *)(v11 + 28) = BYTE4(v60) & 3 | *(_BYTE *)(v11 + 28) & 0xFC;
    v13 = v61;
    v61 = 0;
    *(_QWORD *)(v11 + 32) = v13;
    ++*(_DWORD *)(v9 - 4);
    sub_25A130((char *)&v58);
    v14 = sub_1021D80(a1[59]);
    v47 = a3 + 8;
    sub_17B3930(v14, a3 + 8, 0, v15, v16, v17);
    for ( i = a1[89]; i; i = a1[89] )
    {
      v19 = *(_DWORD *)(i - 4);
      if ( !v19 )
        break;
      v51[0] = 0;
      v51[1] = 0;
      v51[2] = 1;
      v51[3] = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)v51, (int *)(i + 40LL * (unsigned int)(v19 - 1) + 8));
      v20 = a1[89];
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
      v23 = a1[62];
      --*(_DWORD *)(a1[89] - 4LL);
      v24 = sub_FF9F90(v23, v22);
      v49 = sub_1021D80(a1[59]);
      v50 = 0;
      v52 = 0;
      v53 = 0;
      v54 = 1;
      v55 = 0;
      sub_182CBA0(qword_1C7F2C0, &v54);
      v25 = a1[59];
      BYTE4(v54) &= ~1u;
      LODWORD(v54) = 1;
      v26 = sub_1021D80(v25);
      sub_17B3860(v26, &v50, &v52);
      v27 = sub_1021D80(a1[59]);
      sub_17B6090(v27, v47, &v50, v47);
      v28 = *(_QWORD *)v24;
      v29 = *(_QWORD *)v24 + 48LL * *(unsigned int *)(v24 + 8);
      if ( v28 != v29 )
      {
        while ( *(_DWORD *)(v28 + 4) != 2 )
        {
          v28 += 48;
          if ( v29 == v28 )
            goto LABEL_24;
        }
        if ( v28 != v29 )
        {
          do
          {
            v30 = *(_DWORD *)(v28 + 8);
            sub_3EBE30((__int64)&v56, v28 + 16, (__int64)v51);
            v31 = v52;
            v32 = qword_1C7F2C0;
            LODWORD(v52) = v56;
            v56 = v31;
            v33 = v53;
            v53 = v58;
            v58 = v33;
            v34 = BYTE4(v52) & 0xFC | v57 & 2 | v57 & 1;
            v57 = BYTE4(v52) & 1 | v57 & 0xFC | BYTE4(v52) & 2;
            BYTE4(v52) = v34;
            v35 = v59;
            LODWORD(v59) = v54;
            LODWORD(v54) = v35;
            v36 = v60;
            v60 = v55;
            v55 = v36;
            LOBYTE(v36) = BYTE4(v54) & 0xFC | BYTE4(v59) & 2 | BYTE4(v59) & 1;
            BYTE4(v59) = BYTE4(v54) & 1 | BYTE4(v59) & 0xFC | BYTE4(v54) & 2;
            BYTE4(v54) = v36;
            sub_182CBA0(qword_1C7F2C0, &v56);
            sub_182CBA0(v32, &v59);
            if ( (unsigned __int8)sub_FF9F70(a1[62], v30) )
            {
              v56 = v30;
              BYTE4(v58) &= 0xFCu;
              BYTE4(v60) &= 0xFCu;
              LODWORD(v58) = 0;
              v59 = 0;
              LODWORD(v60) = 1;
              v61 = 0;
              sub_27B950((__int64)qword_1C7F2C0, (__int64)&v58, (int *)&v52);
              v37 = a1[89];
              if ( !v37 || (v38 = *(unsigned int *)(v37 - 4), (_DWORD)v38 == *(_DWORD *)(v37 - 8)) )
              {
                sub_83D1D0(v48);
                v37 = a1[89];
                v38 = *(unsigned int *)(v37 - 4);
              }
              v39 = v37 + 40 * v38;
              *(_DWORD *)v39 = v56;
              *(_DWORD *)(v39 + 8) = v58;
              *(_BYTE *)(v39 + 12) = BYTE4(v58) & 3 | *(_BYTE *)(v39 + 12) & 0xFC;
              v40 = v59;
              v59 = 0;
              *(_QWORD *)(v39 + 16) = v40;
              *(_DWORD *)(v39 + 24) = v60;
              *(_BYTE *)(v39 + 28) = BYTE4(v60) & 3 | *(_BYTE *)(v39 + 28) & 0xFC;
              v41 = v61;
              v61 = 0;
              *(_QWORD *)(v39 + 32) = v41;
              ++*(_DWORD *)(v37 - 4);
              sub_25A130((char *)&v58);
            }
            else
            {
              v43 = sub_1021D80(a1[59]);
              sub_17B3860(v43, &v50, &v52);
              v44 = sub_1021D80(a1[59]);
              v45 = sub_1021D90(a1[59], v30);
              sub_17B5D70(v44, v45, &v50, &v50);
              v46 = sub_1021D80(a1[59]);
              sub_17B6090(v46, &v50, v47, v47);
            }
            v42 = v28 + 48;
            if ( v29 == v28 + 48 )
              break;
            while ( 1 )
            {
              v28 = v42;
              if ( *(_DWORD *)(v42 + 4) == 2 )
                break;
              v42 += 48;
              if ( v29 == v42 )
                goto LABEL_24;
            }
          }
          while ( v42 != v29 );
        }
      }
LABEL_24:
      sub_25A130((char *)&v52);
      sub_17B1E70(v49, &v50);
      sub_25A130((char *)v51);
    }
  }
  else
  {
    v6 = sub_1021D80(a1[59]);
    v7 = sub_1021D90(a1[59], v5);
    v47 = a3 + 8;
    sub_17B32B0(v6, a3 + 8, v7);
  }
  return v47;
}

