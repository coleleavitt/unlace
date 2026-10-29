_BOOL8 __fastcall sub_CBFB60(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rdx
  _BOOL8 result; // rax
  __int64 v8; // rax
  int v9; // edi
  char *v10; // rdx
  unsigned int v11; // esi
  __int64 v12; // r11
  char *v13; // rsi
  __int64 v14; // r11
  char *v15; // r10
  char *i; // r13
  __int64 v17; // rax
  void *v18; // rbp
  void *v19; // rbp
  bool v20; // al
  void *v21; // rbx
  __int64 v22; // rax
  void *v23; // rbp
  void *v24; // rdi
  int v25; // eax
  int v26; // eax
  void *v27; // rdi
  __int64 v28; // rax
  int v29; // edi
  _QWORD *v30; // rsi
  unsigned int v31; // edx
  _QWORD *v32; // r11
  __int64 v33; // rdx
  _QWORD *v34; // r10
  _QWORD *j; // rax
  __int64 v36; // rdx
  void *v37; // r12
  void *v38; // r14
  __int64 v39; // rax
  void *v40; // r14
  _QWORD *v41; // rax
  void *v42; // r14
  int v43; // edx
  int v44; // edx
  void *v45; // rdi
  int v46; // eax
  int v47; // eax
  void *v48; // rdi
  int v49; // eax
  void *v50; // r15
  int v51; // edx
  void *v52; // r15
  __int64 v53; // rdx
  char v54; // cl
  __int64 v55; // rax
  void *v56; // rdi
  unsigned int v57; // r15d
  int v58; // edx
  __int64 v59; // rdx
  char v60; // cl
  __int64 v61; // rax
  void *v62; // r14
  void *v63; // r13
  bool v64; // [rsp+0h] [rbp-100h]
  void *v65; // [rsp+8h] [rbp-F8h]
  _QWORD *v66; // [rsp+8h] [rbp-F8h]
  void *v67; // [rsp+18h] [rbp-E8h]
  _QWORD *v68; // [rsp+18h] [rbp-E8h]
  void *v69; // [rsp+18h] [rbp-E8h]
  void *v70; // [rsp+18h] [rbp-E8h]
  void *v71; // [rsp+18h] [rbp-E8h]
  _QWORD v72[2]; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v73[2]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v74[2]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v75[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v76; // [rsp+68h] [rbp-98h] BYREF
  __int64 v77; // [rsp+70h] [rbp-90h]
  __int64 v78; // [rsp+78h] [rbp-88h] BYREF
  __int64 v79; // [rsp+80h] [rbp-80h]
  char v80; // [rsp+88h] [rbp-78h]
  __int64 v81; // [rsp+98h] [rbp-68h] BYREF
  __int64 v82; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v83; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v84; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v85; // [rsp+B8h] [rbp-48h]
  char v86; // [rsp+C0h] [rbp-40h]

  if ( *(_WORD *)(a2 + 4) )
    return 0;
  if ( *(_DWORD *)(a2 + 24) )
    return 0;
  v6 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v6 || (result = 0, *v6 == -1) )
  {
    v8 = *(unsigned int *)(a1 + 32);
    v9 = *(_DWORD *)(a2 + 12);
    v72[0] = 0;
    v10 = *(char **)(a1 + 24);
    v72[1] = 0;
    v11 = v8 - 1;
    v73[0] = 1;
    v8 *= 48;
    v73[1] = 0;
    v12 = 3LL * (v9 & v11);
    v13 = &v10[v8];
    v76 = 0;
    v14 = 16 * v12;
    v77 = 0;
    v78 = 1;
    v15 = &v10[v14];
    v79 = 0;
    v80 = 0;
    v81 = a2;
    v82 = 0;
    v83 = 0;
    v84 = 1;
    v85 = 0;
    v86 = 0;
    if ( v14 != v8 )
    {
      for ( i = &v10[v14]; v13 != i; i += 48 )
      {
        v17 = *(_QWORD *)i;
        if ( *(_QWORD *)i > 1u )
        {
          if ( *(_DWORD *)(v17 + 12) == v9 && a2 == v17 )
            goto LABEL_27;
        }
        else if ( !v17 )
        {
          goto LABEL_12;
        }
      }
    }
    while ( v15 != v10 )
    {
      v22 = *(_QWORD *)v10;
      if ( *(_QWORD *)v10 > 1u )
      {
        if ( *(_DWORD *)(v22 + 12) == v9 && a2 == v22 )
        {
          i = v10;
LABEL_27:
          v23 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v82);
          sub_182CBA0(v23, &v84);
          v24 = qword_1C7F2C0;
          if ( (i[12] & 1) != 0 )
          {
            v71 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, &v76, i + 8);
            v24 = v71;
          }
          else
          {
            v25 = *((_DWORD *)i + 2);
            BYTE4(v76) &= ~1u;
            LODWORD(v76) = v25;
          }
          if ( (i[28] & 1) != 0 )
          {
            sub_182C690(v24, &v78, i + 24);
          }
          else
          {
            v26 = *((_DWORD *)i + 6);
            BYTE4(v78) &= ~1u;
            LODWORD(v78) = v26;
          }
          v27 = qword_1C7F2C0;
          v80 = i[40];
          if ( (v76 & 0x100000000LL) != 0 )
          {
            sub_182C690(qword_1C7F2C0, v72, &v76);
          }
          else
          {
            BYTE4(v72[0]) &= ~1u;
            LODWORD(v72[0]) = v76;
          }
          if ( (v78 & 0x100000000LL) != 0 )
          {
            sub_182C690(v27, v73, &v78);
            v67 = qword_1C7F2C0;
          }
          else
          {
            BYTE4(v73[0]) &= ~1u;
            v67 = qword_1C7F2C0;
            LODWORD(v73[0]) = v78;
          }
          sub_182CBA0(qword_1C7F2C0, &v76);
          sub_182CBA0(v67, &v78);
          v28 = *(unsigned int *)(a1 + 56);
          v29 = *(_DWORD *)(a2 + 12);
          v76 = 0;
          v30 = *(_QWORD **)(a1 + 48);
          v77 = 0;
          v31 = v28 - 1;
          v78 = 1;
          v28 *= 48;
          v79 = 0;
          v32 = (_QWORD *)((char *)v30 + v28);
          v80 = 0;
          v33 = 48LL * (v29 & v31);
          v81 = a2;
          v82 = 0;
          v34 = &v30[(unsigned __int64)v33 / 8];
          v83 = 0;
          v84 = 1;
          v85 = 0;
          v86 = 0;
          if ( v33 != v28 )
          {
            for ( j = &v30[(unsigned __int64)v33 / 8]; v32 != j; j += 6 )
            {
              v36 = *j;
              if ( *j > 1u )
              {
                if ( *(_DWORD *)(v36 + 12) == v29 && a2 == v36 )
                  goto LABEL_52;
              }
              else if ( !v36 )
              {
                goto LABEL_42;
              }
            }
          }
          for ( ; v34 != v30; v30 += 6 )
          {
            v39 = *v30;
            if ( *v30 > 1u )
            {
              if ( *(_DWORD *)(v39 + 12) == v29 && a2 == v39 )
              {
                j = v30;
LABEL_52:
                v40 = qword_1C7F2C0;
                v68 = j;
                sub_182CBA0(qword_1C7F2C0, &v82);
                sub_182CBA0(v40, &v84);
                v41 = v68;
                v42 = qword_1C7F2C0;
                if ( (*((_BYTE *)v68 + 12) & 1) != 0 )
                {
                  sub_182C690(qword_1C7F2C0, &v76, v68 + 1);
                  v41 = v68;
                }
                else
                {
                  v43 = *((_DWORD *)v68 + 2);
                  BYTE4(v76) &= ~1u;
                  LODWORD(v76) = v43;
                }
                if ( (*((_BYTE *)v41 + 28) & 1) != 0 )
                {
                  v66 = v41;
                  sub_182C690(v42, &v78, v41 + 3);
                  v41 = v66;
                }
                else
                {
                  v44 = *((_DWORD *)v41 + 6);
                  BYTE4(v78) &= ~1u;
                  LODWORD(v78) = v44;
                }
                v45 = qword_1C7F2C0;
                v80 = *((_BYTE *)v41 + 40);
                if ( (v76 & 0x100000000LL) != 0 )
                {
                  sub_182C690(qword_1C7F2C0, a3, &v76);
                }
                else
                {
                  v46 = v76;
                  *(_BYTE *)(a3 + 4) &= ~1u;
                  *(_DWORD *)a3 = v46;
                }
                if ( (v78 & 0x100000000LL) != 0 )
                {
                  sub_182C690(v45, a3 + 16, &v78);
                }
                else
                {
                  v47 = v78;
                  *(_BYTE *)(a3 + 20) &= ~1u;
                  *(_DWORD *)(a3 + 16) = v47;
                }
                v65 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, &v76);
                sub_182CBA0(v65, &v78);
                if ( !LODWORD(v72[0]) && *(int *)a3 >= 0 && (*(_BYTE *)(a3 + 20) & 1) == 0 && *(_DWORD *)(a3 + 16) == 1 )
                {
                  v74[0] = 2;
                  v74[1] = 0;
                  v75[0] = 1;
                  v75[1] = 0;
                  sub_182CBA0(qword_1C7F2C0, v75);
                  BYTE4(v75[0]) &= ~1u;
                  v48 = qword_1C7F2C0;
                  LODWORD(v75[0]) = 1;
                  v76 = 0;
                  v77 = 0;
                  v78 = 1;
                  v79 = 0;
                  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
                    sub_182C690(qword_1C7F2C0, &v76, a3);
                  else
                    LODWORD(v76) = *(_DWORD *)a3;
                  if ( (*(_BYTE *)(a3 + 20) & 1) != 0 )
                  {
                    sub_182C690(v48, &v78, a3 + 16);
                  }
                  else
                  {
                    v49 = *(_DWORD *)(a3 + 16);
                    BYTE4(v78) &= ~1u;
                    LODWORD(v78) = v49;
                  }
                  v50 = qword_1C7F2C0;
                  BYTE4(v81) &= 0xFCu;
                  BYTE4(v83) &= 0xFCu;
                  LODWORD(v81) = 0;
                  v82 = 0;
                  LODWORD(v83) = 1;
                  v84 = 0;
                  sub_1833EB0(qword_1C7F2C0, &v76, v74, &v81);
                  sub_182CBA0(v50, &v83);
                  v51 = v81;
                  v52 = qword_1C7F2C0;
                  LODWORD(v81) = v76;
                  LODWORD(v76) = v51;
                  v53 = v82;
                  v82 = v77;
                  v77 = v53;
                  LOBYTE(v53) = BYTE4(v81) & 1;
                  v54 = BYTE4(v76) & 0xFC | BYTE4(v81) & 2;
                  BYTE4(v81) = BYTE4(v76) & 1 | BYTE4(v81) & 0xFC | BYTE4(v76) & 2;
                  BYTE4(v76) = v54 | v53;
                  LODWORD(v83) = v78;
                  v55 = v79;
                  v79 = v84;
                  v84 = v55;
                  LODWORD(v78) = 1;
                  LOBYTE(v55) = BYTE4(v78) & 1 | BYTE4(v78) & 2 | BYTE4(v83) & 0xFC;
                  BYTE4(v78) = BYTE4(v78) & 0xFC | BYTE4(v83) & 2;
                  BYTE4(v83) = v55;
                  sub_182CBA0(qword_1C7F2C0, &v81);
                  v56 = v52;
                  v57 = 1;
                  sub_182CBA0(v56, &v83);
                  while ( (int)v76 > 0 )
                  {
                    ++v57;
                    BYTE4(v81) &= 0xFCu;
                    BYTE4(v83) &= 0xFCu;
                    LODWORD(v81) = 0;
                    v82 = 0;
                    LODWORD(v83) = 1;
                    v84 = 0;
                    v69 = qword_1C7F2C0;
                    sub_1833EB0(qword_1C7F2C0, &v76, v74, &v81);
                    sub_182CBA0(v69, &v83);
                    v58 = v81;
                    LODWORD(v81) = v76;
                    LODWORD(v76) = v58;
                    v59 = v82;
                    v82 = v77;
                    v77 = v59;
                    LOBYTE(v59) = BYTE4(v81) & 1;
                    v60 = BYTE4(v76) & 0xFC | BYTE4(v81) & 2;
                    BYTE4(v81) = BYTE4(v76) & 1 | BYTE4(v81) & 0xFC | BYTE4(v76) & 2;
                    BYTE4(v76) = v60 | v59;
                    LODWORD(v83) = v78;
                    v61 = v79;
                    v79 = v84;
                    v84 = v61;
                    v70 = qword_1C7F2C0;
                    LODWORD(v78) = 1;
                    LOBYTE(v59) = BYTE4(v78) & 0xFC | BYTE4(v83) & 2;
                    BYTE4(v83) = BYTE4(v78) & 1 | BYTE4(v78) & 2 | BYTE4(v83) & 0xFC;
                    BYTE4(v78) = v59;
                    sub_182CBA0(qword_1C7F2C0, &v81);
                    sub_182CBA0(v70, &v83);
                  }
                  v62 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, &v76);
                  sub_182CBA0(v62, &v78);
                  v63 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, v74);
                  sub_182CBA0(v63, v75);
                  v20 = *(_DWORD *)(a1 + 188) >= v57;
LABEL_14:
                  v21 = qword_1C7F2C0;
                  v64 = v20;
                  sub_182CBA0(qword_1C7F2C0, v72);
                  sub_182CBA0(v21, v73);
                  return v64;
                }
LABEL_13:
                v20 = 0;
                goto LABEL_14;
              }
            }
            else if ( !v39 )
            {
              break;
            }
          }
LABEL_42:
          v37 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v82);
          sub_182CBA0(v37, &v84);
          v38 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v76);
          sub_182CBA0(v38, &v78);
          goto LABEL_13;
        }
      }
      else if ( !v22 )
      {
        break;
      }
      v10 += 48;
    }
LABEL_12:
    v18 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v82);
    sub_182CBA0(v18, &v84);
    v19 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v76);
    sub_182CBA0(v19, &v78);
    goto LABEL_13;
  }
  return result;
}

