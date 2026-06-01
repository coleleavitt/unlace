double __fastcall sub_384FC0(int a1, __int64 *a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned int v4; // ebx
  __int64 v5; // rax
  int v6; // edx
  char v7; // al
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  char v11; // al
  unsigned int v12; // eax
  int v13; // eax
  char v14; // di
  __int64 v15; // r10
  __int64 v16; // rax
  int v17; // edx
  __int64 *v18; // rbx
  char v19; // r12
  __int64 v20; // r15
  _QWORD *v21; // rcx
  __int64 v22; // rax
  int v23; // edi
  _QWORD *v24; // rsi
  __int64 v25; // rdx
  _QWORD *v26; // r9
  _QWORD *i; // r14
  __int64 v28; // rax
  void *v29; // r14
  double result; // xmm0_8
  void *v31; // rbx
  void *v32; // rbx
  __int64 v33; // rax
  void *v34; // rdi
  int v35; // edx
  int v36; // edx
  char v37; // al
  void *v38; // r14
  void *v39; // r14
  _QWORD *v40; // rcx
  __int64 v41; // rax
  int v42; // edi
  _QWORD *v43; // rsi
  __int64 v44; // rdx
  _QWORD *v45; // r9
  _QWORD *j; // r14
  __int64 v47; // rax
  void *v48; // r14
  void *v49; // r14
  __int64 v50; // rax
  void *v51; // r15
  void *v52; // r15
  int v53; // edx
  int v54; // edx
  char v55; // al
  void *v56; // r14
  void *v57; // r14
  void *v58; // r14
  void *v59; // [rsp+20h] [rbp-178h]
  void *v60; // [rsp+20h] [rbp-178h]
  void *v61; // [rsp+20h] [rbp-178h]
  __int64 *v62; // [rsp+28h] [rbp-170h]
  _QWORD v63[2]; // [rsp+40h] [rbp-158h] BYREF
  _QWORD v64[2]; // [rsp+50h] [rbp-148h] BYREF
  _QWORD v65[2]; // [rsp+60h] [rbp-138h] BYREF
  _QWORD v66[2]; // [rsp+70h] [rbp-128h] BYREF
  __int64 v67; // [rsp+80h] [rbp-118h] BYREF
  __int64 v68; // [rsp+88h] [rbp-110h]
  __int64 v69; // [rsp+90h] [rbp-108h] BYREF
  __int64 v70; // [rsp+98h] [rbp-100h]
  char v71; // [rsp+A0h] [rbp-F8h]
  __int64 v72; // [rsp+B0h] [rbp-E8h]
  __int64 v73; // [rsp+B8h] [rbp-E0h] BYREF
  __int64 v74; // [rsp+C0h] [rbp-D8h]
  __int64 v75; // [rsp+C8h] [rbp-D0h] BYREF
  __int64 v76; // [rsp+D0h] [rbp-C8h]
  char v77; // [rsp+D8h] [rbp-C0h]
  _BYTE v78[16]; // [rsp+E0h] [rbp-B8h] BYREF
  _QWORD *v79; // [rsp+F0h] [rbp-A8h]
  unsigned int v80; // [rsp+F8h] [rbp-A0h]
  _QWORD *v81; // [rsp+108h] [rbp-90h]
  unsigned int v82; // [rsp+110h] [rbp-88h]
  __int64 *v83; // [rsp+158h] [rbp-40h]

  sub_F735C0(v78, *a2);
  v2 = a2[9];
  if ( v2 )
  {
    v3 = *a2;
    v4 = 0;
    while ( 1 )
    {
      v7 = *(_BYTE *)(v2 + 3) >> 6;
      if ( v7 )
      {
        if ( v7 == 1 )
          goto LABEL_31;
      }
      else
      {
        do
        {
          v2 = *(_QWORD *)(v2 + 16);
          v7 = *(_BYTE *)(v2 + 3) >> 6;
        }
        while ( !v7 );
        if ( v7 == 1 )
        {
LABEL_31:
          if ( v4 >= *(_DWORD *)(v2 + 4) + 1 )
            break;
          goto LABEL_14;
        }
      }
      if ( v7 == 2 )
        v8 = *(_DWORD *)(v2 + 4) - 1;
      else
        v8 = *(_DWORD *)(v2 + 4);
      if ( v4 >= v8 )
        break;
LABEL_14:
      v9 = a2[11];
      if ( !v9 )
        goto LABEL_23;
      v10 = a2[11];
      v11 = *(_BYTE *)(v9 + 3) >> 6;
      if ( v11 )
      {
        if ( v11 != 1 )
          goto LABEL_17;
      }
      else
      {
        do
        {
          v10 = *(_QWORD *)(v10 + 16);
          v11 = *(_BYTE *)(v10 + 3) >> 6;
        }
        while ( !v11 );
        if ( v11 != 1 )
        {
LABEL_17:
          if ( v11 == 2 )
            v12 = *(_DWORD *)(v10 + 4) - 1;
          else
            v12 = *(_DWORD *)(v10 + 4);
          if ( v4 >= v12 )
            goto LABEL_23;
          goto LABEL_20;
        }
      }
      if ( v4 >= *(_DWORD *)(v10 + 4) + 1 )
        goto LABEL_23;
LABEL_20:
      v13 = 17;
      do
      {
        if ( *(char *)(v9 + 3) >= 0 )
        {
          if ( v4 == *(_DWORD *)(v9 + 4) )
            goto LABEL_23;
        }
        else if ( *(_BYTE *)(v9 + 3) >> 6 != 2 )
        {
          goto LABEL_23;
        }
        v9 = *(_QWORD *)(v9 + 16);
        --v13;
      }
      while ( v13 );
      sub_233F80((__int64 *)(v3 + 616), (_DWORD *)a2 + 22);
      v3 = *a2;
LABEL_23:
      v14 = *((_BYTE *)a2 + 123);
      v15 = v3;
      if ( (v14 & 0x10) == 0 )
      {
        if ( (*((_BYTE *)a2 + 123) & 0x20) != 0 )
          goto LABEL_7;
LABEL_25:
        v16 = a2[9];
        v17 = 17;
        do
        {
          if ( *(char *)(v16 + 3) >= 0 )
          {
            if ( v4 == *(_DWORD *)(v16 + 4) )
              goto LABEL_7;
          }
          else if ( *(_BYTE *)(v16 + 3) >> 6 != 2 )
          {
            goto LABEL_7;
          }
          v16 = *(_QWORD *)(v16 + 16);
          --v17;
        }
        while ( v17 );
        sub_233F80((__int64 *)(v15 + 616), (_DWORD *)a2 + 18);
        goto LABEL_7;
      }
      v5 = a2[13];
      v6 = 17;
      do
      {
        if ( *(char *)(v5 + 3) >= 0 )
        {
          if ( v4 == *(_DWORD *)(v5 + 4) )
            goto LABEL_6;
        }
        else if ( *(_BYTE *)(v5 + 3) >> 6 != 2 )
        {
          goto LABEL_6;
        }
        v5 = *(_QWORD *)(v5 + 16);
        --v6;
      }
      while ( v6 );
      sub_236900((_QWORD *)(v3 + 672), a2 + 13);
      v14 = *((_BYTE *)a2 + 123);
      v15 = *a2;
LABEL_6:
      if ( (v14 & 0x20) == 0 )
        goto LABEL_25;
LABEL_7:
      sub_F79EF0((int)v78);
      v2 = a2[9];
      ++v4;
      if ( !v2 )
        break;
      v3 = *a2;
    }
  }
  v18 = v83;
  v63[0] = 0;
  v63[1] = 0;
  v64[0] = 1;
  v64[1] = 0;
  v65[0] = 0;
  v65[1] = 0;
  v66[0] = 1;
  v66[1] = 0;
  if ( v83 )
  {
    v62 = &v83[*((unsigned int *)v83 - 1)];
    if ( v62 != v83 )
    {
      v19 = 0;
LABEL_35:
      v20 = *v18;
      v67 = 0;
      v21 = v79;
      v71 = 0;
      v69 = 1;
      v73 = 0;
      v22 = 48LL * v80;
      v75 = 1;
      v23 = *(_DWORD *)(v20 + 12);
      v24 = &v79[(unsigned __int64)v22 / 8];
      v68 = 0;
      v70 = 0;
      v72 = v20;
      v25 = 48LL * (v23 & (v80 - 1));
      v77 = 0;
      v74 = 0;
      v26 = &v79[(unsigned __int64)v25 / 8];
      v76 = 0;
      if ( v25 != v22 )
      {
        for ( i = &v79[(unsigned __int64)v25 / 8]; v24 != i; i += 6 )
        {
          v28 = *i;
          if ( *i > 1u )
          {
            if ( *(_DWORD *)(v28 + 12) == v23 && v20 == v28 )
              goto LABEL_73;
          }
          else if ( !v28 )
          {
LABEL_42:
            v59 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v73);
            sub_182CBA0(v59, &v75);
            goto LABEL_43;
          }
        }
      }
      if ( v79 == v26 )
      {
        v58 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v73);
        sub_182CBA0(v58, &v75);
LABEL_43:
        v29 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v67);
        sub_182CBA0(v29, &v69);
LABEL_44:
        if ( v19 )
          goto LABEL_89;
        goto LABEL_45;
      }
      while ( 1 )
      {
        v33 = *v21;
        if ( *v21 > 1u )
        {
          if ( *(_DWORD *)(v33 + 12) == v23 && v20 == v33 )
          {
            i = v21;
LABEL_73:
            v60 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v73);
            sub_182CBA0(v60, &v75);
            v34 = qword_1C7F2C0;
            if ( (*((_BYTE *)i + 12) & 1) != 0 )
            {
              v61 = qword_1C7F2C0;
              sub_182C690(qword_1C7F2C0, &v67, i + 1);
              v34 = v61;
            }
            else
            {
              v35 = *((_DWORD *)i + 2);
              BYTE4(v67) &= ~1u;
              LODWORD(v67) = v35;
            }
            if ( (*((_BYTE *)i + 28) & 1) != 0 )
            {
              sub_182C690(v34, &v69, i + 3);
            }
            else
            {
              v36 = *((_DWORD *)i + 6);
              BYTE4(v69) &= ~1u;
              LODWORD(v69) = v36;
            }
            v37 = *((_BYTE *)i + 40);
            v38 = qword_1C7F2C0;
            v71 = v37;
            if ( (v67 & 0x100000000LL) != 0 )
            {
              sub_182C690(qword_1C7F2C0, v63, &v67);
            }
            else
            {
              BYTE4(v63[0]) &= ~1u;
              LODWORD(v63[0]) = v67;
            }
            if ( (v69 & 0x100000000LL) != 0 )
            {
              sub_182C690(v38, v64, &v69);
            }
            else
            {
              BYTE4(v64[0]) &= ~1u;
              LODWORD(v64[0]) = v69;
            }
            v39 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v67);
            sub_182CBA0(v39, &v69);
            v67 = 0;
            v40 = v81;
            v71 = 0;
            v69 = 1;
            v73 = 0;
            v41 = 48LL * v82;
            v75 = 1;
            v42 = *(_DWORD *)(v20 + 12);
            v43 = &v81[(unsigned __int64)v41 / 8];
            v68 = 0;
            v70 = 0;
            v72 = v20;
            v44 = 48LL * (v42 & (v82 - 1));
            v77 = 0;
            v74 = 0;
            v45 = &v81[(unsigned __int64)v44 / 8];
            v76 = 0;
            if ( v44 != v41 )
            {
              for ( j = &v81[(unsigned __int64)v44 / 8]; v43 != j; j += 6 )
              {
                v47 = *j;
                if ( *j > 1u )
                {
                  if ( *(_DWORD *)(v47 + 12) == v42 && v20 == v47 )
                    goto LABEL_101;
                }
                else if ( !v47 )
                {
                  goto LABEL_88;
                }
              }
            }
            if ( v81 == v45 )
            {
LABEL_88:
              v48 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v73);
              sub_182CBA0(v48, &v75);
              v49 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v67);
              sub_182CBA0(v49, &v69);
              if ( v19 )
              {
LABEL_89:
                result = 0.0;
                goto LABEL_48;
              }
LABEL_45:
              v19 = 1;
              goto LABEL_46;
            }
            while ( 2 )
            {
              v50 = *v40;
              if ( *v40 <= 1u )
              {
                if ( !v50 )
                  goto LABEL_88;
                goto LABEL_94;
              }
              if ( *(_DWORD *)(v50 + 12) != v42 || v20 != v50 )
              {
LABEL_94:
                v40 += 6;
                if ( v45 == v40 )
                  goto LABEL_88;
                continue;
              }
              break;
            }
            j = v40;
LABEL_101:
            v51 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v73);
            sub_182CBA0(v51, &v75);
            v52 = qword_1C7F2C0;
            if ( (*((_BYTE *)j + 12) & 1) != 0 )
            {
              sub_182C690(qword_1C7F2C0, &v67, j + 1);
            }
            else
            {
              v53 = *((_DWORD *)j + 2);
              BYTE4(v67) &= ~1u;
              LODWORD(v67) = v53;
            }
            if ( (*((_BYTE *)j + 28) & 1) != 0 )
            {
              sub_182C690(v52, &v69, j + 3);
            }
            else
            {
              v54 = *((_DWORD *)j + 6);
              BYTE4(v69) &= ~1u;
              LODWORD(v69) = v54;
            }
            v55 = *((_BYTE *)j + 40);
            v56 = qword_1C7F2C0;
            v71 = v55;
            if ( (v67 & 0x100000000LL) != 0 )
            {
              sub_182C690(qword_1C7F2C0, v65, &v67);
            }
            else
            {
              BYTE4(v65[0]) &= ~1u;
              LODWORD(v65[0]) = v67;
            }
            if ( (v69 & 0x100000000LL) != 0 )
            {
              sub_182C690(v56, v66, &v69);
              v57 = qword_1C7F2C0;
            }
            else
            {
              v57 = qword_1C7F2C0;
              BYTE4(v66[0]) &= ~1u;
              LODWORD(v66[0]) = v69;
            }
            sub_182CBA0(qword_1C7F2C0, &v67);
            sub_182CBA0(v57, &v69);
            if ( LODWORD(v63[0])
              && ((v63[0] & 0x100000000LL) != 0
               || LODWORD(v63[0]) != 1
               || (v64[0] & 0x100000000LL) != 0
               || LODWORD(v64[0]) != 1)
              || LODWORD(v65[0])
              && ((v65[0] & 0x100000000LL) != 0
               || LODWORD(v65[0]) != 1
               || (v66[0] & 0x100000000LL) != 0
               || LODWORD(v66[0]) != 1) )
            {
              goto LABEL_44;
            }
LABEL_46:
            if ( v62 == ++v18 )
              break;
            goto LABEL_35;
          }
        }
        else if ( !v33 )
        {
          goto LABEL_42;
        }
        v21 += 6;
        if ( v26 == v21 )
          goto LABEL_42;
      }
    }
  }
  result = 1.0;
LABEL_48:
  v31 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v65);
  sub_182CBA0(v31, v66);
  v32 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v63);
  sub_182CBA0(v32, v64);
  sub_F74720(v78);
  return result;
}

