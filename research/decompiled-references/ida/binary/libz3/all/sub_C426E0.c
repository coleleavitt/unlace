__int64 __fastcall sub_C426E0(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  int *v4; // rax
  int v8; // edx
  unsigned __int64 v10; // rcx
  __int64 v11; // r15
  unsigned __int64 v12; // r12
  __int64 *v13; // r13
  __int64 v14; // rsi
  __int64 v15; // rdi
  bool v16; // zf
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // r12
  void *v22; // rbx
  __int64 v23; // rsi
  void *v24; // r12
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rax
  void *v28; // r15
  char v29; // r13
  __int64 v30; // r13
  void *v31; // rdi
  int v32; // eax
  __int64 v33; // r9
  __int64 v34; // r14
  int v35; // eax
  unsigned int v36; // r10d
  __int64 v37; // rax
  __int64 v38; // r13
  __int64 v39; // rsi
  __int64 v40; // rdi
  void *v41; // rbx
  char v42; // dl
  char v43; // cl
  bool v44; // sf
  char v45; // al
  unsigned int v46; // eax
  unsigned int v47; // eax
  __int64 v48; // [rsp-98h] [rbp-98h]
  __int64 *v49; // [rsp-90h] [rbp-90h]
  __int64 v51; // [rsp-90h] [rbp-90h]
  __int64 v52; // [rsp-90h] [rbp-90h]
  __int64 v53; // [rsp-90h] [rbp-90h]
  int v54; // [rsp-88h] [rbp-88h]
  __int64 v55; // [rsp-88h] [rbp-88h]
  unsigned int v56; // [rsp-88h] [rbp-88h]
  __int64 v57; // [rsp-80h] [rbp-80h]
  void *v58; // [rsp-80h] [rbp-80h]
  unsigned int v59; // [rsp-80h] [rbp-80h]
  __int64 v60; // [rsp-80h] [rbp-80h]
  __int64 v61; // [rsp-80h] [rbp-80h]
  __int64 v62; // [rsp-80h] [rbp-80h]
  __int64 v63; // [rsp-78h] [rbp-78h]
  __int64 v64; // [rsp-78h] [rbp-78h]
  __int64 v65[2]; // [rsp-68h] [rbp-68h] BYREF
  __int64 v66; // [rsp-58h] [rbp-58h] BYREF
  __int64 v67; // [rsp-50h] [rbp-50h]
  int v68; // [rsp-48h] [rbp-48h] BYREF
  char v69; // [rsp-44h] [rbp-44h]
  __int64 v70; // [rsp-40h] [rbp-40h]
  __int64 v71; // [rsp-8h] [rbp-8h] BYREF

  v4 = *(int **)(a2 + 24);
  if ( v4 )
  {
    v8 = *v4;
    if ( *v4 != 5 )
    {
LABEL_3:
      if ( !v8 && v4[1] == 2 )
      {
        v10 = *(_QWORD *)(a1 + 40);
        v11 = *a3;
        v63 = a1 + 56;
        v57 = a1 + 48;
        v54 = a1 + 32;
        v48 = a3[1];
        if ( v10 )
        {
          v12 = v10 + 8LL * *(unsigned int *)(v10 - 4);
          if ( v10 >= v12 )
            goto LABEL_37;
          v13 = *(__int64 **)(a1 + 40);
          do
          {
            v14 = *v13;
            if ( *v13 )
            {
              v15 = *(_QWORD *)(a1 + 32);
              v16 = (*(_DWORD *)(v14 + 8))-- == 1;
              if ( v16 )
                sub_15D7BC0(v15, v14);
            }
            ++v13;
          }
          while ( (unsigned __int64)v13 < v12 );
          v10 = *(_QWORD *)(a1 + 40);
          if ( v10 )
LABEL_37:
            *(_DWORD *)(v10 - 4) = 0;
        }
        v19 = *(_QWORD *)(a1 + 48);
        if ( v19 )
        {
          v20 = *(unsigned int *)(v19 - 4);
          if ( (_DWORD)v20 )
          {
            v49 = a4;
            v21 = v19 + 32 * v20;
            do
            {
              v22 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v19);
              v23 = v19 + 16;
              v19 += 32;
              sub_182CBA0(v22, v23);
            }
            while ( v19 != v21 );
            a4 = v49;
            v19 = *(_QWORD *)(a1 + 48);
          }
          *(_DWORD *)(v19 - 4) = 0;
        }
        v24 = qword_1C7F2C0;
        sub_182CEF0(qword_1C7F2C0, v63);
        sub_182CBA0(v24, a1 + 72);
        v25 = *(_QWORD *)(a1 + 8);
        *(_BYTE *)(a1 + 76) &= ~1u;
        *(_DWORD *)(a1 + 72) = 1;
        v26 = *(_QWORD *)(v25 + 16);
        v67 = 0;
        v66 = v26;
        if ( (unsigned __int8)sub_C45340(
                                v25,
                                0,
                                v11,
                                (unsigned int)&qword_1C7F280,
                                (unsigned int)&v71 - 80,
                                v54,
                                v57,
                                v63) )
        {
          BYTE4(v66) &= 0xFCu;
          v69 &= 0xFCu;
          v27 = *(_QWORD *)(a1 + 8);
          v28 = qword_1C7F2C0;
          LODWORD(v66) = 0;
          v67 = 0;
          v68 = 1;
          v70 = 0;
          if ( (*(_BYTE *)(&qword_1C7F280 + 1) & 1) != 0 )
          {
            v53 = v27;
            sub_182C690(qword_1C7F2C0, &v66, &qword_1C7F280);
            v27 = v53;
          }
          else
          {
            LODWORD(v66) = qword_1C7F280;
          }
          if ( (qword_1C7F290 & 0x100000000LL) != 0 )
          {
            v52 = v27;
            sub_182C690(v28, &v68, &qword_1C7F290);
            v27 = v52;
          }
          else
          {
            v69 &= ~1u;
            v68 = qword_1C7F290;
          }
          v51 = v27;
          sub_1831620(qword_1C7F2C0, &v66);
          v65[1] = 0;
          v65[0] = *(_QWORD *)(v51 + 16);
          v29 = sub_C45340(v51, 0, v48, (unsigned int)&v71 - 80, (unsigned int)v65, v54, v57, v63);
          sub_2334C0(v65);
          v58 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v66);
          sub_182CBA0(v58, &v68);
          if ( v29 )
          {
            BYTE4(v66) &= 0xFCu;
            v69 &= 0xFCu;
            v30 = *(_QWORD *)(a1 + 8);
            LODWORD(v66) = 0;
            v31 = qword_1C7F2C0;
            v67 = 0;
            v68 = 1;
            v70 = 0;
            if ( (*(_BYTE *)(a1 + 60) & 1) != 0 )
              sub_182C690(qword_1C7F2C0, &v66, v63);
            else
              LODWORD(v66) = *(_DWORD *)(a1 + 56);
            if ( (*(_BYTE *)(a1 + 76) & 1) != 0 )
            {
              sub_182C690(v31, &v68, a1 + 72);
            }
            else
            {
              v32 = *(_DWORD *)(a1 + 72);
              v69 &= ~1u;
              v68 = v32;
            }
            sub_1831620(qword_1C7F2C0, &v66);
            v33 = *(_QWORD *)(a1 + 40);
            v34 = *(_QWORD *)(a1 + 48);
            v35 = v66;
            if ( v34 )
            {
              if ( (int)v66 >= 0 )
              {
                v36 = *(_DWORD *)(v34 - 4);
                if ( !*(_BYTE *)(v30 + 768) )
                {
                  v64 = *(_QWORD *)(v30 + 16);
                  if ( !v36 )
                    goto LABEL_64;
                  if ( v36 != 1 )
                  {
                    v55 = v33;
                    v59 = *(_DWORD *)(v34 - 4);
                    sub_168FD40(v30 + 672, v36, v34, v33, &v66);
                    v36 = v59;
                    v33 = v55;
                    goto LABEL_62;
                  }
                  v42 = *(_BYTE *)(v34 + 4);
                  if ( (v42 & 1) == 0 && *(_DWORD *)v34 == 1 )
                  {
                    v43 = *(_BYTE *)(v34 + 20);
                    if ( (v43 & 1) != 0 )
                      goto LABEL_101;
                    if ( *(_DWORD *)(v34 + 16) != 1 )
                    {
LABEL_99:
                      if ( (v43 & 1) == 0 && *(_DWORD *)(v34 + 16) == 1 )
                      {
                        v44 = v35 < 0;
                        if ( !v35 )
                        {
                          v56 = v36;
                          v60 = v33;
                          sub_15E1A70(*(_QWORD *)(v30 + 16));
                          goto LABEL_87;
                        }
                        goto LABEL_102;
                      }
LABEL_101:
                      v44 = v35 < 0;
LABEL_102:
                      if ( v44 )
                        goto LABEL_91;
                      goto LABEL_86;
                    }
                    if ( (v69 & 1) != 0
                      || v68 != 1
                      || (qword_1C7F290 & 0x100000000LL) != 0
                      || (_DWORD)qword_1C7F290 != 1 )
                    {
                      v61 = v33;
                      v45 = sub_1848D40(qword_1C7F2C0, &v66, &qword_1C7F280);
                      v42 = *(_BYTE *)(v34 + 4);
                      v33 = v61;
                      v36 = 1;
                      if ( !v45 )
                      {
LABEL_88:
                        if ( (v42 & 1) != 0 || *(_DWORD *)v34 != 1 )
                          goto LABEL_62;
                        v35 = v66;
                        v43 = *(_BYTE *)(v34 + 20);
LABEL_91:
                        if ( (v43 & 1) == 0 )
                        {
                          if ( *(_DWORD *)(v34 + 16) == 1
                            && (v66 & 0x100000000LL) == 0
                            && v35 == 1
                            && (v69 & 1) == 0
                            && v68 == 1 )
                          {
                            goto LABEL_64;
                          }
                          if ( *(_DWORD *)(v34 + 16) == 1 && !v35 )
                          {
                            sub_15E1A70(*(_QWORD *)(v30 + 16));
LABEL_64:
                            v37 = sub_15E1B70(v64);
LABEL_65:
                            v38 = v37;
LABEL_66:
                            if ( v38 )
                              ++*(_DWORD *)(v38 + 8);
                            v39 = *a4;
                            if ( *a4 )
                            {
                              v40 = a4[1];
                              v16 = (*(_DWORD *)(v39 + 8))-- == 1;
                              if ( v16 )
                                sub_15D7BC0(v40, v39);
                            }
                            *a4 = v38;
                            v41 = qword_1C7F2C0;
                            sub_182CBA0(qword_1C7F2C0, &v66);
                            sub_182CBA0(v41, &v68);
                            return 4;
                          }
                        }
LABEL_62:
                        if ( (int)v66 >= 0 )
                          sub_1690D20(v30 + 672, v36, v34, v33, &v66);
                        goto LABEL_64;
                      }
                    }
                    else
                    {
                      if ( (v66 & 0x100000000LL) != 0 || (*(_BYTE *)(&qword_1C7F280 + 1) & 1) != 0 )
                      {
                        v62 = v33;
                        v47 = sub_182C7B0(qword_1C7F2C0, &v66, &qword_1C7F280);
                        v42 = *(_BYTE *)(v34 + 4);
                        v33 = v62;
                        v46 = v47 >> 31;
                        v36 = 1;
                      }
                      else
                      {
                        LOBYTE(v46) = qword_1C7F280 > (int)v66;
                      }
                      if ( !(_BYTE)v46 )
                        goto LABEL_88;
                    }
                    if ( (v42 & 1) != 0 )
                    {
                      if ( (int)v66 < 0 )
                        goto LABEL_62;
                    }
                    else
                    {
                      v35 = v66;
                      if ( *(_DWORD *)v34 == 1 )
                      {
                        v43 = *(_BYTE *)(v34 + 20);
                        goto LABEL_99;
                      }
                      if ( (int)v66 < 0 )
                        goto LABEL_62;
                    }
                  }
LABEL_86:
                  v56 = v36;
                  v60 = v33;
                  sub_168FD40(v30 + 672, 1, v34, v33, &v66);
LABEL_87:
                  v42 = *(_BYTE *)(v34 + 4);
                  v33 = v60;
                  v36 = v56;
                  goto LABEL_88;
                }
LABEL_77:
                v37 = sub_1690760(v30 + 672, v36, v34, v33, &v66);
                goto LABEL_65;
              }
            }
            else if ( (int)v66 >= 0 )
            {
              if ( !*(_BYTE *)(v30 + 768) )
              {
                v64 = *(_QWORD *)(v30 + 16);
                goto LABEL_64;
              }
              v36 = 0;
              goto LABEL_77;
            }
            v38 = *(_QWORD *)(*(_QWORD *)(v30 + 16) + 864LL);
            goto LABEL_66;
          }
        }
      }
      return 5;
    }
    if ( v4[1] == 2 )
    {
      if ( (unsigned __int8)sub_C465A0(a1, *a3, a3[1]) )
        return 4;
      v4 = *(int **)(a2 + 24);
      if ( !v4 )
        return 5;
      v8 = *v4;
      if ( *v4 != 5 )
        goto LABEL_3;
      if ( v4[1] != 3 )
        goto LABEL_15;
    }
    else if ( v4[1] != 3 )
    {
      goto LABEL_15;
    }
    if ( !(unsigned __int8)sub_C465A0(a1, a3[1], *a3) )
    {
      v4 = *(int **)(a2 + 24);
      if ( !v4 )
        return 5;
      v8 = *v4;
      if ( *v4 != 5 )
        goto LABEL_3;
LABEL_15:
      if ( v4[1] == 4 )
      {
        if ( (unsigned __int8)sub_C465A0(a1, a3[1], *a3) )
          goto LABEL_32;
        v4 = *(int **)(a2 + 24);
        if ( !v4 )
          return 5;
        v8 = *v4;
        if ( *v4 != 5 )
          goto LABEL_3;
      }
      if ( v4[1] != 5 )
        return 5;
      if ( !(unsigned __int8)sub_C465A0(a1, *a3, a3[1]) )
      {
        v4 = *(int **)(a2 + 24);
        if ( !v4 )
          return 5;
        v8 = *v4;
        goto LABEL_3;
      }
LABEL_32:
      v17 = sub_15E1A70(*(_QWORD *)a1);
      v18 = v17;
      if ( v17 )
        ++*(_DWORD *)(v17 + 8);
      sub_C41880(*a4, a4[1]);
      *a4 = v18;
    }
    return 4;
  }
  return 5;
}

