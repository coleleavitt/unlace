void __fastcall sub_32DCF0(_QWORD *a1, __int64 *a2, __int64 *a3, __int64 *a4)
{
  __int64 v5; // rcx
  unsigned int v8; // r12d
  __int64 v9; // rbx
  void *v10; // rdi
  _DWORD *v11; // rcx
  __int64 v12; // r14
  char v13; // al
  __int64 v14; // r14
  __int64 v15; // rbx
  __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // rdi
  _QWORD *v19; // rbp
  __int64 v20; // rsi
  bool v21; // zf
  unsigned int v22; // eax
  unsigned int v23; // eax
  int v24; // eax
  __int64 v25; // r14
  void *v26; // rdi
  char *v27; // rax
  int v28; // edx
  int v29; // edx
  void *v30; // rdi
  int v31; // edx
  int v32; // edx
  void *v33; // rdi
  int v34; // edx
  int v35; // eax
  __int64 *v36; // rdi
  __int64 v37; // rax
  __int64 v38; // r14
  _QWORD *v39; // rsi
  _DWORD *v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rdi
  char *v43; // rax
  __int64 v44; // rbp
  char *v45; // r14
  __int64 v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rdi
  __int64 v49; // r14
  char *v50; // rbx
  __int64 v51; // rbp
  __int64 v52; // rdi
  char *v53; // rbx
  __int64 v54; // rsi
  void *v55; // rcx
  int v56; // eax
  bool v57; // al
  void *v58; // rcx
  int v59; // eax
  bool v60; // al
  __int64 v62; // rdx
  __int64 v63; // rsi
  int v64; // eax
  bool v65; // al
  unsigned int v66; // eax
  int v67; // eax
  bool v68; // al
  bool v69; // al
  __int64 v70; // rdx
  _DWORD *v71; // rsi
  char v72; // al
  int v73; // eax
  int v74; // eax
  unsigned int v75; // eax
  unsigned int v76; // eax
  unsigned int v77; // eax
  _DWORD *ptrc; // [rsp+8h] [rbp-60h]
  _DWORD *ptrd; // [rsp+8h] [rbp-60h]
  char *ptr; // [rsp+8h] [rbp-60h]
  char *ptrf; // [rsp+8h] [rbp-60h]
  char *ptrg; // [rsp+8h] [rbp-60h]
  void *ptrh; // [rsp+8h] [rbp-60h]
  void *ptri; // [rsp+8h] [rbp-60h]
  void *ptra; // [rsp+8h] [rbp-60h]
  _DWORD *ptrj; // [rsp+8h] [rbp-60h]
  void *ptrb; // [rsp+8h] [rbp-60h]
  void *ptre; // [rsp+8h] [rbp-60h]
  char *ptrk; // [rsp+8h] [rbp-60h]
  void *ptrl; // [rsp+8h] [rbp-60h]
  _DWORD *ptrm; // [rsp+8h] [rbp-60h]
  __int64 *v93; // [rsp+10h] [rbp-58h]
  _QWORD *v94; // [rsp+18h] [rbp-50h]
  _DWORD *v95; // [rsp+20h] [rbp-48h]
  char *v96; // [rsp+20h] [rbp-48h]
  char *v97; // [rsp+20h] [rbp-48h]
  __int64 v98; // [rsp+20h] [rbp-48h]
  __int64 v99; // [rsp+20h] [rbp-48h]
  _DWORD *v100; // [rsp+20h] [rbp-48h]
  _DWORD *v101; // [rsp+28h] [rbp-40h]
  _DWORD *v102; // [rsp+28h] [rbp-40h]
  _DWORD *v103; // [rsp+28h] [rbp-40h]

  v5 = *a3;
  if ( *a3 )
  {
    v8 = 0;
    v93 = a4;
    v94 = a1 + 13;
    while ( 1 )
    {
      if ( v8 >= *(_DWORD *)(v5 - 4) )
        return;
      v9 = 96LL * v8;
      v10 = qword_1C7F2C0;
      v11 = (_DWORD *)(v9 + v5);
      v12 = v9 + *a2;
      if ( (v11[5] & 1) != 0 || v11[4] != 1 || (*(_BYTE *)(v12 + 20) & 1) != 0 || *(_DWORD *)(v12 + 16) != 1 )
      {
        ptrc = v11;
        v13 = sub_1848D40(qword_1C7F2C0, v11, v9 + *a2);
        v11 = ptrc;
        v10 = qword_1C7F2C0;
        if ( v13 )
          goto LABEL_7;
      }
      else
      {
        if ( (v11[1] & 1) != 0 || (*(_BYTE *)(v12 + 4) & 1) != 0 )
        {
          ptrd = v11;
          v22 = sub_182C7B0(qword_1C7F2C0, v11, v9 + *a2);
          v11 = ptrd;
          v23 = v22 >> 31;
          v10 = qword_1C7F2C0;
        }
        else
        {
          LOBYTE(v23) = *v11 < *(_DWORD *)v12;
        }
        if ( (_BYTE)v23 )
          goto LABEL_7;
      }
      if ( (v11[1] & 1) != 0 || (*(_BYTE *)(v12 + 4) & 1) != 0 )
      {
        v95 = v11;
        v24 = sub_182C7B0(v10, v11, v12);
        v11 = v95;
        if ( v24 )
          goto LABEL_28;
      }
      else if ( *v11 != *(_DWORD *)v12 )
      {
        goto LABEL_28;
      }
      if ( (v11[5] & 1) != 0 || (*(_BYTE *)(v12 + 20) & 1) != 0 )
      {
        ptrj = v11;
        v64 = sub_182C7B0(v10, v11 + 4, v12 + 16);
        v11 = ptrj;
        v65 = v64 == 0;
      }
      else
      {
        v65 = v11[4] == *(_DWORD *)(v12 + 16);
      }
      v10 = qword_1C7F2C0;
      if ( !v65 )
        goto LABEL_28;
      ptrb = (void *)(v12 + 32);
      v100 = v11 + 8;
      if ( (v11[13] & 1) != 0 || v11[12] != 1 || (*(_BYTE *)(v12 + 52) & 1) != 0 || *(_DWORD *)(v12 + 48) != 1 )
      {
        v102 = v11;
        v72 = sub_1848D40(qword_1C7F2C0, v100, ptrb);
        v11 = v102;
        v10 = qword_1C7F2C0;
        if ( v72 )
          goto LABEL_7;
      }
      else
      {
        if ( (v11[9] & 1) != 0 || (*(_BYTE *)(v12 + 36) & 1) != 0 )
        {
          v103 = v11;
          v75 = sub_182C7B0(qword_1C7F2C0, v100, ptrb);
          v11 = v103;
          v66 = v75 >> 31;
          v10 = qword_1C7F2C0;
        }
        else
        {
          LOBYTE(v66) = v11[8] < *(_DWORD *)(v12 + 32);
        }
        if ( (_BYTE)v66 )
          goto LABEL_7;
      }
      if ( (v11[9] & 1) != 0 || (*(_BYTE *)(v12 + 36) & 1) != 0 )
      {
        v101 = v11;
        v67 = sub_182C7B0(v10, v100, ptrb);
        v11 = v101;
        v68 = v67 == 0;
      }
      else
      {
        v68 = v11[8] == *(_DWORD *)(v12 + 32);
      }
      if ( v68
        && ((v11[13] & 1) != 0 || (*(_BYTE *)(v12 + 52) & 1) != 0
          ? (ptrm = v11, v74 = sub_182C7B0(v10, v11 + 12, v12 + 48), v11 = ptrm, v69 = v74 == 0)
          : (v69 = v11[12] == *(_DWORD *)(v12 + 48)),
            v69) )
      {
        v70 = v12 + 64;
        v71 = v11 + 16;
        if ( (v11[21] & 1) != 0 || v11[20] != 1 || (*(_BYTE *)(v12 + 84) & 1) != 0 || *(_DWORD *)(v12 + 80) != 1 )
        {
          if ( !(unsigned __int8)sub_1848D40(qword_1C7F2C0, v71, v70) )
            goto LABEL_28;
        }
        else
        {
          if ( (v11[17] & 1) != 0 || (*(_BYTE *)(v12 + 68) & 1) != 0 )
            v76 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v71, v70) >> 31;
          else
            LOBYTE(v76) = v11[16] < *(_DWORD *)(v12 + 64);
          if ( !(_BYTE)v76 )
            goto LABEL_28;
        }
        v10 = qword_1C7F2C0;
LABEL_7:
        v14 = v9 + *a2;
        v15 = *a3 + v9;
        if ( (*(_BYTE *)(v15 + 20) & 1) != 0
          || *(_DWORD *)(v15 + 16) != 1
          || (*(_BYTE *)(v14 + 20) & 1) != 0
          || *(_DWORD *)(v14 + 16) != 1 )
        {
          if ( (unsigned __int8)sub_1848D40(v10, v15, v14) )
            goto LABEL_10;
          goto LABEL_65;
        }
        v55 = v10;
        if ( (*(_BYTE *)(v15 + 4) & 1) != 0 || (*(_BYTE *)(v14 + 4) & 1) != 0 )
        {
          if ( (int)sub_182C7B0(v10, v15, v14) < 0 )
            goto LABEL_10;
LABEL_65:
          v55 = qword_1C7F2C0;
          if ( (*(_BYTE *)(v15 + 4) & 1) == 0 && (*(_BYTE *)(v14 + 4) & 1) == 0 )
            goto LABEL_120;
          ptri = qword_1C7F2C0;
          v56 = sub_182C7B0(qword_1C7F2C0, v15, v14);
          v55 = ptri;
          if ( v56 )
            goto LABEL_17;
LABEL_68:
          if ( (*(_BYTE *)(v15 + 20) & 1) != 0 || (*(_BYTE *)(v14 + 20) & 1) != 0 )
            v57 = (unsigned int)sub_182C7B0(v55, v15 + 16, v14 + 16) == 0;
          else
            v57 = *(_DWORD *)(v15 + 16) == *(_DWORD *)(v14 + 16);
          if ( !v57 )
            goto LABEL_17;
          ptra = (void *)(v14 + 32);
          v99 = v15 + 32;
          if ( (*(_BYTE *)(v15 + 52) & 1) != 0
            || *(_DWORD *)(v15 + 48) != 1
            || (*(_BYTE *)(v14 + 52) & 1) != 0
            || *(_DWORD *)(v14 + 48) != 1 )
          {
            if ( (unsigned __int8)sub_1848D40(qword_1C7F2C0, v99, ptra) )
              goto LABEL_10;
          }
          else
          {
            v58 = qword_1C7F2C0;
            if ( (*(_BYTE *)(v15 + 36) & 1) == 0 && (*(_BYTE *)(v14 + 36) & 1) == 0 )
            {
              v59 = *(_DWORD *)(v15 + 32);
              if ( v59 < *(_DWORD *)(v14 + 32) )
                goto LABEL_10;
              goto LABEL_78;
            }
            if ( (int)sub_182C7B0(qword_1C7F2C0, v99, ptra) < 0 )
              goto LABEL_10;
          }
          v58 = qword_1C7F2C0;
          if ( (*(_BYTE *)(v15 + 36) & 1) != 0 || (*(_BYTE *)(v14 + 36) & 1) != 0 )
          {
            ptrl = qword_1C7F2C0;
            v73 = sub_182C7B0(qword_1C7F2C0, v99, v14 + 32);
            v58 = ptrl;
            v60 = v73 == 0;
            goto LABEL_79;
          }
          v59 = *(_DWORD *)(v15 + 32);
LABEL_78:
          v60 = v59 == *(_DWORD *)(v14 + 32);
LABEL_79:
          if ( v60
            && ((*(_BYTE *)(v15 + 52) & 1) != 0 || (*(_BYTE *)(v14 + 52) & 1) != 0
              ? (unsigned int)sub_182C7B0(v58, v15 + 48, v14 + 48) == 0
              : *(_DWORD *)(v15 + 48) == *(_DWORD *)(v14 + 48)) )
          {
            v62 = v14 + 64;
            v63 = v15 + 64;
            if ( (*(_BYTE *)(v15 + 84) & 1) != 0
              || *(_DWORD *)(v15 + 80) != 1
              || (*(_BYTE *)(v14 + 84) & 1) != 0
              || *(_DWORD *)(v14 + 80) != 1 )
            {
              if ( (unsigned __int8)sub_1848D40(qword_1C7F2C0, v63, v62) )
                goto LABEL_10;
            }
            else
            {
              if ( (*(_BYTE *)(v15 + 68) & 1) != 0 || (*(_BYTE *)(v14 + 68) & 1) != 0 )
                v77 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v63, v62) >> 31;
              else
                LOBYTE(v77) = *(_DWORD *)(v15 + 64) < *(_DWORD *)(v14 + 64);
              if ( (_BYTE)v77 )
              {
LABEL_10:
                v16 = *(_QWORD *)(a1[8] + 8LL * v8);
                if ( *(_QWORD *)(*a1 + 856LL) != v16 )
                {
                  v17 = (_QWORD *)(v93[1] + 8LL * v8);
                  v18 = *v93;
                  v19 = v17;
                  if ( v16 )
                    ++*(_DWORD *)(v16 + 8);
                  v20 = *v17;
                  if ( *v17 )
                  {
                    v21 = (*(_DWORD *)(v20 + 8))-- == 1;
                    if ( v21 )
                      sub_15D7BC0(v18, v20);
                  }
                  *v19 = v16;
                }
              }
            }
          }
LABEL_17:
          ++v8;
          v5 = *a3;
          if ( !*a3 )
            return;
        }
        else
        {
          if ( *(_DWORD *)v14 > *(_DWORD *)v15 )
            goto LABEL_10;
LABEL_120:
          if ( *(_DWORD *)v15 == *(_DWORD *)v14 )
            goto LABEL_68;
          ++v8;
          v5 = *a3;
          if ( !*a3 )
            return;
        }
      }
      else
      {
LABEL_28:
        v25 = v9 + *a2;
        v26 = qword_1C7F2C0;
        v27 = (char *)(v9 + *a3);
        if ( (v27[4] & 1) != 0 )
        {
          v98 = v9 + *a3;
          ptrh = qword_1C7F2C0;
          sub_182C690(qword_1C7F2C0, v9 + *a2, v98);
          v27 = (char *)v98;
          v26 = ptrh;
        }
        else
        {
          v28 = *(_DWORD *)v27;
          *(_BYTE *)(v25 + 4) &= ~1u;
          *(_DWORD *)v25 = v28;
        }
        if ( (v27[20] & 1) != 0 )
        {
          ptrf = v27;
          sub_182C690(v26, v25 + 16, v27 + 16);
          v27 = ptrf;
          v30 = qword_1C7F2C0;
          if ( (ptrf[36] & 1) == 0 )
          {
LABEL_32:
            v31 = *((_DWORD *)v27 + 8);
            *(_BYTE *)(v25 + 36) &= ~1u;
            *(_DWORD *)(v25 + 32) = v31;
            if ( (v27[52] & 1) == 0 )
              goto LABEL_33;
            goto LABEL_60;
          }
        }
        else
        {
          v29 = *((_DWORD *)v27 + 4);
          *(_BYTE *)(v25 + 20) &= ~1u;
          *(_DWORD *)(v25 + 16) = v29;
          v30 = qword_1C7F2C0;
          if ( (v27[36] & 1) == 0 )
            goto LABEL_32;
        }
        v96 = v27;
        sub_182C690(v30, v25 + 32, v27 + 32);
        v27 = v96;
        if ( (v96[52] & 1) == 0 )
        {
LABEL_33:
          v32 = *((_DWORD *)v27 + 12);
          *(_BYTE *)(v25 + 52) &= ~1u;
          *(_DWORD *)(v25 + 48) = v32;
          v33 = qword_1C7F2C0;
          if ( (v27[68] & 1) == 0 )
            goto LABEL_34;
          goto LABEL_61;
        }
LABEL_60:
        ptrg = v27;
        sub_182C690(v30, v25 + 48, v27 + 48);
        v27 = ptrg;
        v33 = qword_1C7F2C0;
        if ( (ptrg[68] & 1) == 0 )
        {
LABEL_34:
          v34 = *((_DWORD *)v27 + 16);
          *(_BYTE *)(v25 + 68) &= ~1u;
          *(_DWORD *)(v25 + 64) = v34;
          if ( (v27[84] & 1) == 0 )
            goto LABEL_35;
          goto LABEL_62;
        }
LABEL_61:
        v97 = v27;
        sub_182C690(v33, v25 + 64, v27 + 64);
        v27 = v97;
        if ( (v97[84] & 1) == 0 )
        {
LABEL_35:
          v35 = *((_DWORD *)v27 + 20);
          *(_BYTE *)(v25 + 84) &= ~1u;
          *(_DWORD *)(v25 + 80) = v35;
          goto LABEL_36;
        }
LABEL_62:
        sub_182C690(v33, v25 + 80, v27 + 80);
LABEL_36:
        v36 = (__int64 *)a1[2];
        v37 = 8LL * v8;
        v38 = *(_QWORD *)(v36[118] + v37);
        if ( v38 )
          ++*(_DWORD *)(v38 + 16);
        v39 = (_QWORD *)(v37 + a1[14]);
        v40 = (_DWORD *)*v39;
        if ( *v39 )
        {
          v21 = v40[4]-- == 1;
          if ( v21 )
          {
            ptre = v40;
            (**(void (__fastcall ***)(_DWORD *))v40)(v40);
            sub_186B220(ptre);
            v37 = 8LL * v8;
            v36 = (__int64 *)a1[2];
            v39 = (_QWORD *)(v37 + a1[14]);
          }
        }
        v41 = *v36;
        *v39 = v38;
        ptr = (char *)v37;
        (*(void (__fastcall **)(__int64 *, _QWORD *))(v41 + 64))(v36, v94);
        v42 = a1[7];
        v43 = ptr;
        v44 = *(_QWORD *)(v93[1] + 8LL * v8);
        v45 = &ptr[a1[8]];
        if ( v44 )
          ++*(_DWORD *)(v44 + 8);
        v46 = *(_QWORD *)v45;
        if ( *(_QWORD *)v45 )
        {
          v21 = (*(_DWORD *)(v46 + 8))-- == 1;
          if ( v21 )
          {
            sub_15D7BC0(v42, v46);
            v43 = ptr;
          }
        }
        v47 = *a2;
        *(_QWORD *)v45 = v44;
        if ( *(int *)(v47 + 96LL * v8) <= 0 )
          goto LABEL_17;
        v48 = a1[7];
        v49 = *(_QWORD *)(*a1 + 864LL);
        v50 = &v43[a1[8]];
        if ( v49 )
        {
          v51 = *(_QWORD *)v50;
          ++*(_DWORD *)(v49 + 8);
          if ( !v51 )
          {
            *(_QWORD *)v50 = v49;
            v51 = v49;
            v52 = *v93;
            v53 = &v43[v93[1]];
LABEL_52:
            ++*(_DWORD *)(v51 + 8);
            goto LABEL_53;
          }
        }
        else
        {
          v51 = *(_QWORD *)v50;
          if ( !*(_QWORD *)v50 )
          {
            v52 = *v93;
            v53 = &v43[v93[1]];
            goto LABEL_53;
          }
        }
        v21 = (*(_DWORD *)(v51 + 8))-- == 1;
        if ( v21 )
        {
          ptrk = v43;
          sub_15D7BC0(v48, v51);
          v43 = ptrk;
          v51 = *(_QWORD *)(*a1 + 864LL);
        }
        else
        {
          v51 = v49;
        }
        *(_QWORD *)v50 = v49;
        v52 = *v93;
        v53 = &v43[v93[1]];
        if ( v51 )
          goto LABEL_52;
LABEL_53:
        v54 = *(_QWORD *)v53;
        if ( *(_QWORD *)v53 )
        {
          v21 = (*(_DWORD *)(v54 + 8))-- == 1;
          if ( v21 )
            sub_15D7BC0(v52, v54);
        }
        *(_QWORD *)v53 = v51;
        ++v8;
        v5 = *a3;
        if ( !*a3 )
          return;
      }
    }
  }
}

