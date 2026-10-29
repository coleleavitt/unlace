__int64 __fastcall sub_85C5A0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // r12
  __int64 v4; // r14
  __int64 v5; // r14
  void *v6; // r15
  int v7; // eax
  int v8; // r15d
  int v9; // r8d
  __int64 v10; // rax
  int v11; // r8d
  __int64 v12; // r15
  unsigned int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r14
  int v17; // eax
  void *v18; // rdi
  int v19; // eax
  bool v20; // al
  int v21; // eax
  bool v22; // al
  __int64 v23; // rdx
  unsigned int v24; // eax
  int v25; // esi
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rsi
  char *v34; // r14
  char *v35; // rax
  __int64 v36; // r15
  __int64 v37; // rdx
  __int64 v38; // rdi
  __int64 v39; // rdx
  int v40; // esi
  int v41; // edi
  __int64 v42; // rdi
  __int64 v43; // rsi
  char v44; // r8
  char v45; // r8
  __int64 v46; // rdi
  __int64 v47; // rsi
  char v48; // r8
  char v49; // r8
  void *v50; // r12
  __int64 v51; // r12
  __int64 v52; // rdx
  __int64 v53; // rax
  void *v54; // rbx
  __int64 v55; // rbp
  __int64 result; // rax
  int v57; // eax
  bool v58; // al
  bool v59; // al
  int v60; // eax
  int v61; // eax
  __int64 v62; // rax
  char *v63; // r15
  char *v64; // rsi
  __int64 v65; // [rsp+8h] [rbp-90h]
  unsigned int v66; // [rsp+8h] [rbp-90h]
  __int64 v67; // [rsp+8h] [rbp-90h]
  char *v68; // [rsp+8h] [rbp-90h]
  __int64 v69; // [rsp+8h] [rbp-90h]
  __int64 v70; // [rsp+10h] [rbp-88h]
  int v71; // [rsp+10h] [rbp-88h]
  char *v72; // [rsp+10h] [rbp-88h]
  __int64 v73; // [rsp+10h] [rbp-88h]
  int v74; // [rsp+10h] [rbp-88h]
  void *v75; // [rsp+10h] [rbp-88h]
  int v76; // [rsp+18h] [rbp-80h]
  __int64 v77; // [rsp+18h] [rbp-80h]
  int v78; // [rsp+18h] [rbp-80h]
  __int64 v79; // [rsp+18h] [rbp-80h]
  _QWORD v80[2]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v81[11]; // [rsp+40h] [rbp-58h] BYREF

  v1 = 0x1FFFFFFFE0LL;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(v3 + 880);
  if ( v4 )
    v1 = 32LL * (unsigned int)(*(_DWORD *)(v4 - 4) - 1);
  v5 = v1 + v4;
  v80[0] = 0;
  v80[1] = 0;
  v81[0] = 1;
  v6 = qword_1C7F2C0;
  v81[1] = 0;
  v81[2] = 0;
  if ( (*(_BYTE *)(v5 + 4) & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, v80, v5);
    if ( (*(_BYTE *)(v5 + 20) & 1) == 0 )
      goto LABEL_5;
  }
  else
  {
    LODWORD(v80[0]) = *(_DWORD *)v5;
    if ( (*(_BYTE *)(v5 + 20) & 1) == 0 )
    {
LABEL_5:
      v7 = *(_DWORD *)(v5 + 16);
      BYTE4(v81[0]) &= ~1u;
      LODWORD(v81[0]) = v7;
      goto LABEL_6;
    }
  }
  sub_182C690(v6, v81, v5 + 16);
LABEL_6:
  v8 = sub_182DB30(v80);
  v9 = 3 * sub_182DB30(v81);
  v10 = *(unsigned int *)(v3 + 896);
  v11 = v8 + v9;
  v12 = *(_QWORD *)(v3 + 888);
  v13 = v10 - 1;
  v10 *= 48;
  v14 = v12 + v10;
  v15 = 48LL * (v11 & v13);
  v16 = v12 + v15;
  if ( v15 != v10 )
  {
    v12 += v15;
    do
    {
      v17 = *(_DWORD *)(v12 + 4);
      if ( v17 == 2 )
      {
        if ( *(_DWORD *)v12 == v11 )
        {
          v18 = qword_1C7F2C0;
          if ( (*(_BYTE *)(v12 + 12) & 1) != 0 || (v80[0] & 0x100000000LL) != 0 )
          {
            v76 = v11;
            v70 = v14;
            v19 = sub_182C7B0(qword_1C7F2C0, v12 + 8, v80);
            v14 = v70;
            v11 = v76;
            v20 = v19 == 0;
          }
          else
          {
            v20 = *(_DWORD *)(v12 + 8) == LODWORD(v80[0]);
          }
          if ( v20 )
          {
            if ( (*(_BYTE *)(v12 + 28) & 1) != 0 || (v81[0] & 0x100000000LL) != 0 )
            {
              v71 = v11;
              v65 = v14;
              v21 = sub_182C7B0(v18, v12 + 24, v81);
              v14 = v65;
              v11 = v71;
              v22 = v21 == 0;
            }
            else
            {
              v22 = *(_DWORD *)(v12 + 24) == LODWORD(v81[0]);
            }
            if ( v22 )
            {
              v23 = v12 + 48;
              if ( v14 == v12 + 48 )
                goto LABEL_71;
              goto LABEL_21;
            }
          }
        }
      }
      else if ( !v17 )
      {
        goto LABEL_45;
      }
      v12 += 48;
    }
    while ( v14 != v12 );
    v12 = *(_QWORD *)(v3 + 888);
  }
  while ( v16 != v12 )
  {
    v57 = *(_DWORD *)(v12 + 4);
    if ( v57 == 2 )
    {
      if ( *(_DWORD *)v12 == v11 )
      {
        v18 = qword_1C7F2C0;
        if ( (*(_BYTE *)(v12 + 12) & 1) != 0 || (v80[0] & 0x100000000LL) != 0 )
        {
          v78 = v11;
          v73 = v14;
          v60 = sub_182C7B0(qword_1C7F2C0, v12 + 8, v80);
          v14 = v73;
          v11 = v78;
          v58 = v60 == 0;
        }
        else
        {
          v58 = *(_DWORD *)(v12 + 8) == LODWORD(v80[0]);
        }
        if ( v58 )
        {
          if ( (*(_BYTE *)(v12 + 28) & 1) != 0 || (v81[0] & 0x100000000LL) != 0 )
          {
            v74 = v11;
            v67 = v14;
            v61 = sub_182C7B0(v18, v12 + 24, v81);
            v14 = v67;
            v11 = v74;
            v59 = v61 == 0;
          }
          else
          {
            v59 = *(_DWORD *)(v12 + 24) == LODWORD(v81[0]);
          }
          if ( v59 )
          {
            v23 = v12 + 48;
            if ( v14 == v12 + 48 )
LABEL_71:
              v23 = *(_QWORD *)(v3 + 888);
LABEL_21:
            v24 = *(_DWORD *)(v3 + 900) - 1;
            if ( *(_DWORD *)(v23 + 4) )
            {
              v25 = *(_DWORD *)(v3 + 904);
              *(_DWORD *)(v12 + 4) = 1;
              *(_DWORD *)(v3 + 900) = v24;
              if ( v24 < 0x40 )
                v24 = 64;
              *(_DWORD *)(v3 + 904) = v25 + 1;
              if ( v24 < v25 + 1 && !(unsigned __int8)sub_186AF10(v18) )
              {
                v26 = *(unsigned int *)(v3 + 896);
                v27 = sub_186B270(48 * v26);
                v28 = v27;
                if ( (_DWORD)v26 )
                {
                  v29 = v27;
                  v30 = v27 + 48 * v26;
                  do
                  {
                    *(_BYTE *)(v29 + 12) &= 0xFCu;
                    *(_BYTE *)(v29 + 28) &= 0xFCu;
                    v29 += 48;
                    *(_QWORD *)(v29 - 48) = 0;
                    *(_QWORD *)(v29 - 32) = 0;
                    *(_QWORD *)(v29 - 16) = 0;
                  }
                  while ( v29 != v30 );
                  v31 = v28;
                  if ( (((_BYTE)v30 - (_BYTE)v28) & 0x10) == 0
                    || (v31 = v28 + 48, *(_DWORD *)(v28 + 8) = 0, v28 + 48 != v30) )
                  {
                    do
                    {
                      *(_DWORD *)(v31 + 8) = 0;
                      v31 += 96;
                      *(_DWORD *)(v31 - 40) = 0;
                    }
                    while ( v31 != v30 );
                  }
                  v32 = v28;
                  if ( (((_BYTE)v30 - (_BYTE)v28) & 0x10) == 0
                    || (v32 = v28 + 48, *(_DWORD *)(v28 + 24) = 1, v28 + 48 != v30) )
                  {
                    do
                    {
                      *(_DWORD *)(v32 + 24) = 1;
                      v32 += 96;
                      *(_DWORD *)(v32 - 24) = 1;
                    }
                    while ( v32 != v30 );
                  }
                }
                v33 = *(unsigned int *)(v3 + 896);
                v34 = *(char **)(v3 + 888);
                v35 = v34;
                v36 = 48 * v33;
                v66 = v33 - 1;
                v72 = &v34[48 * v33];
                v77 = v28 + 48 * v33;
                if ( v34 != v72 )
                {
                  do
                  {
                    if ( *((_DWORD *)v35 + 1) == 2 )
                    {
                      v37 = 48LL * (*(_DWORD *)v35 & v66);
                      v38 = v28 + v37;
                      if ( v36 == v37 )
                      {
LABEL_79:
                        if ( v28 == v38 )
                        {
LABEL_84:
                          sub_1872CE0("");
                          sub_1873130(114, 213);
                        }
                        v39 = v28;
                        while ( *(_DWORD *)(v39 + 4) )
                        {
                          v39 += 48;
                          if ( v38 == v39 )
                            goto LABEL_84;
                        }
                      }
                      else
                      {
                        v39 = v28 + v37;
                        while ( *(_DWORD *)(v39 + 4) )
                        {
                          v39 += 48;
                          if ( v77 == v39 )
                            goto LABEL_79;
                        }
                      }
                      *(_DWORD *)v39 = *(_DWORD *)v35;
                      v40 = *(_DWORD *)(v39 + 8);
                      v41 = *((_DWORD *)v35 + 2);
                      *(_DWORD *)(v39 + 4) = 2;
                      *(_DWORD *)(v39 + 8) = v41;
                      v42 = *((_QWORD *)v35 + 2);
                      *((_DWORD *)v35 + 2) = v40;
                      v43 = *(_QWORD *)(v39 + 16);
                      *(_QWORD *)(v39 + 16) = v42;
                      v44 = v35[12];
                      *((_QWORD *)v35 + 2) = v43;
                      LOBYTE(v42) = *(_BYTE *)(v39 + 12);
                      *(_BYTE *)(v39 + 12) = v44 & 2 | v42 & 0xFD;
                      LOBYTE(v43) = v42 & 2 | v35[12] & 0xFD;
                      v35[12] = v43;
                      v45 = *(_BYTE *)(v39 + 12);
                      *(_BYTE *)(v39 + 12) = v45 & 0xFE | v43 & 1;
                      LODWORD(v42) = *((_DWORD *)v35 + 6);
                      v35[12] = v45 & 1 | v35[12] & 0xFE;
                      LODWORD(v43) = *(_DWORD *)(v39 + 24);
                      *(_DWORD *)(v39 + 24) = v42;
                      v46 = *((_QWORD *)v35 + 4);
                      *((_DWORD *)v35 + 6) = v43;
                      v47 = *(_QWORD *)(v39 + 32);
                      *(_QWORD *)(v39 + 32) = v46;
                      v48 = v35[28];
                      *((_QWORD *)v35 + 4) = v47;
                      LOBYTE(v46) = *(_BYTE *)(v39 + 28);
                      *(_BYTE *)(v39 + 28) = v48 & 2 | v46 & 0xFD;
                      LOBYTE(v47) = v46 & 2 | v35[28] & 0xFD;
                      v35[28] = v47;
                      v49 = *(_BYTE *)(v39 + 28) & 1;
                      *(_BYTE *)(v39 + 28) = *(_BYTE *)(v39 + 28) & 0xFE | v47 & 1;
                      v35[28] = v49 | v35[28] & 0xFE;
                      *(_DWORD *)(v39 + 40) = *((_DWORD *)v35 + 10);
                    }
                    v35 += 48;
                  }
                  while ( v72 != v35 );
                  v34 = *(char **)(v3 + 888);
                }
                if ( v34 )
                {
                  v62 = *(unsigned int *)(v3 + 896);
                  if ( (_DWORD)v62 )
                  {
                    v63 = v34;
                    v68 = &v34[48 * v62];
                    do
                    {
                      v79 = v28;
                      v75 = qword_1C7F2C0;
                      sub_182CBA0(qword_1C7F2C0, v63 + 8);
                      v64 = v63 + 24;
                      v63 += 48;
                      sub_182CBA0(v75, v64);
                      v28 = v79;
                    }
                    while ( v68 != v63 );
                  }
                  v69 = v28;
                  sub_186B220(v34);
                  v28 = v69;
                }
                *(_QWORD *)(v3 + 888) = v28;
                *(_DWORD *)(v3 + 904) = 0;
              }
            }
            else
            {
              *(_DWORD *)(v12 + 4) = 0;
              *(_DWORD *)(v3 + 900) = v24;
            }
            break;
          }
        }
      }
    }
    else if ( !v57 )
    {
      break;
    }
    v12 += 48;
  }
LABEL_45:
  v50 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v80);
  sub_182CBA0(v50, v81);
  v51 = *(_QWORD *)(a1 + 8);
  v52 = 0x1FFFFFFFE0LL;
  v53 = *(_QWORD *)(v51 + 880);
  if ( v53 )
    v52 = 32LL * (unsigned int)(*(_DWORD *)(v53 - 4) - 1);
  v54 = qword_1C7F2C0;
  v55 = v53 + v52;
  sub_182CBA0(qword_1C7F2C0, v53 + v52);
  sub_182CBA0(v54, v55 + 16);
  result = *(_QWORD *)(v51 + 880);
  --*(_DWORD *)(result - 4);
  return result;
}

