void __fastcall sub_7F8E80(__int64 *a1, __int64 a2, int *a3)
{
  int v3; // ecx
  __int64 v4; // rax
  int v7; // esi
  int *v8; // rdx
  unsigned int v10; // ecx
  __int64 v11; // r9
  int *v12; // rcx
  __int64 v13; // r9
  int *v14; // rdi
  int *i; // rbx
  __int64 v16; // rax
  __int64 v17; // rbx
  unsigned int v18; // ecx
  __int64 v19; // r14
  __int64 v20; // r11
  int v21; // edi
  __int64 v22; // rdx
  __int64 v23; // r10
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // ecx
  __int64 v30; // rax
  unsigned int v31; // edx
  char *v32; // rsi
  __int64 v33; // rdx
  char *v34; // rdi
  char *j; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  char *v38; // rdx
  unsigned int v39; // esi
  __int64 v40; // r8
  char *v41; // rsi
  __int64 v42; // r8
  char *v43; // rdi
  char *k; // rax
  char *v45; // r14
  unsigned int v46; // r13d
  __int64 v47; // rax
  char *v48; // r13
  char *v49; // rsi
  __int64 v50; // rdx
  int v51; // eax
  int v52; // edx
  __int64 v53; // rax
  char v54; // si
  __int64 v55; // rax
  char v56; // si
  int v57; // edx
  int v58; // ecx
  __int64 v59; // rdx
  char v60; // si
  __int64 v61; // rdx
  char v62; // si
  _QWORD *v63; // rcx
  __int64 v64; // rdi
  unsigned int v65; // edx
  int v66; // eax
  unsigned int v67; // eax
  __int64 v68; // rbp
  char *v69; // r13
  __int64 v70; // rax
  char *v71; // r14
  char *v72; // rax
  char *v73; // rdi
  int v74; // eax
  int v75; // edx
  __int64 v76; // rax
  char v77; // cl
  __int64 v78; // rax
  char v79; // cl
  void *v80; // [rsp+0h] [rbp-A8h]
  char *v81; // [rsp+0h] [rbp-A8h]
  char *v82; // [rsp+8h] [rbp-A0h]
  int v83; // [rsp+14h] [rbp-94h]
  char *ptr; // [rsp+18h] [rbp-90h]
  _QWORD v85[4]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v86; // [rsp+40h] [rbp-68h]
  __int64 v87; // [rsp+48h] [rbp-60h] BYREF
  __int64 v88; // [rsp+50h] [rbp-58h]
  __int64 v89; // [rsp+58h] [rbp-50h]
  __int64 v90; // [rsp+60h] [rbp-48h]

  v3 = *a3;
  v85[0] = 0;
  v85[1] = 0;
  v85[2] = 1;
  v85[3] = 0;
  if ( !v3 )
    goto LABEL_44;
  v4 = *((unsigned int *)a1 + 2);
  v86 = a2;
  v7 = *(_DWORD *)(a2 + 12);
  v8 = (int *)*a1;
  v87 = 0;
  v88 = 0;
  v10 = v4 - 1;
  v89 = 1;
  v4 *= 40;
  v90 = 0;
  v11 = 5LL * (v7 & v10);
  v12 = (int *)((char *)v8 + v4);
  v13 = 8 * v11;
  v14 = &v8[(unsigned __int64)v13 / 4];
  if ( v13 != v4 )
  {
    for ( i = &v8[(unsigned __int64)v13 / 4]; v12 != i; i += 10 )
    {
      v16 = *(_QWORD *)i;
      if ( *(_QWORD *)i > 1u )
      {
        if ( *(_DWORD *)(v16 + 12) == v7 && a2 == v16 )
        {
LABEL_35:
          sub_25A130((char *)&v87);
          sub_27B950((__int64)qword_1C7F2C0, (__int64)v85, i + 2);
          sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v85, (__int64)a3, (__int64)v85);
          v29 = *(_DWORD *)(a2 + 12);
          v87 = 0;
          v86 = a2;
          v88 = 0;
          v89 = 1;
          v90 = 0;
          if ( !LODWORD(v85[0]) )
          {
            v30 = *((unsigned int *)a1 + 2);
            v31 = v30 - 1;
            v30 *= 40;
            v32 = (char *)(*a1 + v30);
            v33 = 40LL * (v29 & v31);
            v34 = (char *)(*a1 + v33);
            if ( v33 != v30 )
            {
              for ( j = (char *)(*a1 + v33); v32 != j; j += 40 )
              {
                v36 = *(_QWORD *)j;
                if ( *(_QWORD *)j > 1u )
                {
                  if ( *(_DWORD *)(v36 + 12) == v29 && a2 == v36 )
                  {
LABEL_85:
                    v63 = j + 40;
                    v64 = *((unsigned int *)a1 + 3);
                    if ( v32 == j + 40 )
                      v63 = (_QWORD *)*a1;
                    v65 = v64 - 1;
                    if ( *v63 )
                    {
                      *(_QWORD *)j = 1;
                      v66 = *((_DWORD *)a1 + 4);
                      *((_DWORD *)a1 + 3) = v65;
                      v67 = v66 + 1;
                      if ( v65 < 0x40 )
                        v65 = 64;
                      *((_DWORD *)a1 + 4) = v67;
                      if ( v65 < v67 && !(unsigned __int8)sub_186AF10(v64) )
                      {
                        v68 = sub_7FF080(*((unsigned int *)a1 + 2));
                        sub_7FF100(*a1, *((unsigned int *)a1 + 2), v68, *((unsigned int *)a1 + 2));
                        v69 = (char *)*a1;
                        if ( *a1 )
                        {
                          v70 = *((unsigned int *)a1 + 2);
                          if ( (_DWORD)v70 )
                          {
                            v71 = (char *)*a1;
                            v72 = &v69[40 * v70];
                            do
                            {
                              v73 = v71 + 8;
                              v81 = v72;
                              v71 += 40;
                              sub_25A130(v73);
                              v72 = v81;
                            }
                            while ( v71 != v81 );
                          }
                          sub_186B220(v69);
                        }
                        *a1 = v68;
                        *((_DWORD *)a1 + 4) = 0;
                      }
                    }
                    else
                    {
                      *(_QWORD *)j = 0;
                      *((_DWORD *)a1 + 3) = v65;
                    }
                    goto LABEL_43;
                  }
                }
                else if ( !v36 )
                {
                  goto LABEL_43;
                }
              }
            }
            if ( (char *)*a1 != v34 )
            {
              for ( j = (char *)*a1; v34 != j; j += 40 )
              {
                v50 = *(_QWORD *)j;
                if ( *(_QWORD *)j > 1u )
                {
                  if ( *(_DWORD *)(v50 + 12) == v29 && a2 == v50 )
                    goto LABEL_85;
                }
                else if ( !v50 )
                {
                  break;
                }
              }
            }
LABEL_43:
            sub_25A130((char *)&v87);
            goto LABEL_44;
          }
          v37 = *((unsigned int *)a1 + 2);
          v38 = (char *)*a1;
          v39 = v37 - 1;
          v37 *= 40;
          v40 = 5LL * (v29 & v39);
          v41 = (char *)(*a1 + v37);
          v42 = 8 * v40;
          v43 = (char *)(*a1 + v42);
          if ( v42 != v37 )
          {
            for ( k = (char *)(*a1 + v42); v41 != k; k += 40 )
            {
              v45 = *(char **)k;
              if ( *(_QWORD *)k > 1u )
              {
                if ( *((_DWORD *)v45 + 3) == v29 && (char *)a2 == v45 )
                {
                  v45 = k;
                  goto LABEL_52;
                }
              }
              else if ( !v45 )
              {
                goto LABEL_52;
              }
            }
          }
          for ( ; v43 != v38; v38 += 40 )
          {
            v45 = *(char **)v38;
            if ( *(_QWORD *)v38 > 1u )
            {
              if ( *((_DWORD *)v45 + 3) == v29 && (char *)a2 == v45 )
              {
                v45 = v38;
                goto LABEL_52;
              }
            }
            else if ( !v45 )
            {
              goto LABEL_52;
            }
          }
          v45 = nullptr;
LABEL_52:
          sub_25A130((char *)&v87);
          sub_27B950((__int64)qword_1C7F2C0, (__int64)(v45 + 8), (int *)v85);
          goto LABEL_44;
        }
      }
      else if ( !v16 )
      {
        goto LABEL_9;
      }
    }
  }
  for ( ; v14 != v8; v8 += 10 )
  {
    v28 = *(_QWORD *)v8;
    if ( *(_QWORD *)v8 > 1u )
    {
      if ( *(_DWORD *)(v28 + 12) == v7 && a2 == v28 )
      {
        i = v8;
        goto LABEL_35;
      }
    }
    else if ( !v28 )
    {
      break;
    }
  }
LABEL_9:
  sub_25A130((char *)&v87);
  v86 = a2;
  v87 = 0;
  v88 = 0;
  v89 = 1;
  v90 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v87, a3);
  v17 = *((unsigned int *)a1 + 2);
  v18 = 2 * v17;
  v83 = 2 * v17;
  if ( 3 * (int)v17 < (unsigned int)(4 * (*((_DWORD *)a1 + 3) + *((_DWORD *)a1 + 4))) )
  {
    v46 = 2 * v17;
    v17 = v18;
    v19 = sub_7FF080(v18);
    sub_7FF100(*a1, *((unsigned int *)a1 + 2), v19, v46);
    ptr = (char *)*a1;
    if ( *a1 )
    {
      v47 = *((unsigned int *)a1 + 2);
      if ( (_DWORD)v47 )
      {
        v48 = (char *)*a1;
        v82 = &ptr[40 * v47];
        do
        {
          v80 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v48 + 8);
          v49 = v48 + 24;
          v48 += 40;
          sub_182CBA0(v80, v49);
        }
        while ( v48 != v82 );
      }
      sub_186B220(ptr);
    }
    *a1 = v19;
    *((_DWORD *)a1 + 4) = 0;
    *((_DWORD *)a1 + 2) = v83;
  }
  else
  {
    v19 = *a1;
  }
  v20 = v86;
  v21 = *(_DWORD *)(v86 + 12);
  v22 = 40LL * (v21 & (unsigned int)(v17 - 1));
  v23 = v19 + v22;
  if ( v22 != 40 * v17 )
  {
    v24 = v19 + v22;
    v25 = 0;
    while ( 1 )
    {
      v26 = *(_QWORD *)v24;
      if ( *(_QWORD *)v24 > 1u )
      {
        if ( *(_DWORD *)(v26 + 12) == v21 && v86 == v26 )
        {
          v57 = *(_DWORD *)(v24 + 8);
          v58 = v87;
          *(_QWORD *)v24 = v86;
          *(_DWORD *)(v24 + 8) = v58;
          LODWORD(v87) = v57;
          v59 = *(_QWORD *)(v24 + 16);
          *(_QWORD *)(v24 + 16) = v88;
          v88 = v59;
          LOBYTE(v59) = *(_BYTE *)(v24 + 12);
          *(_BYTE *)(v24 + 12) = BYTE4(v87) & 2 | v59 & 0xFD;
          BYTE4(v87) = v59 & 2 | BYTE4(v87) & 0xFD;
          v60 = *(_BYTE *)(v24 + 12);
          *(_BYTE *)(v24 + 12) = BYTE4(v87) & 1 | v60 & 0xFE;
          BYTE4(v87) = v60 & 1 | BYTE4(v87) & 0xFE;
          LODWORD(v59) = *(_DWORD *)(v24 + 24);
          *(_DWORD *)(v24 + 24) = v89;
          LODWORD(v89) = v59;
          v61 = *(_QWORD *)(v24 + 32);
          *(_QWORD *)(v24 + 32) = v90;
          v90 = v61;
          LOBYTE(v61) = *(_BYTE *)(v24 + 28);
          *(_BYTE *)(v24 + 28) = BYTE4(v89) & 2 | v61 & 0xFD;
          BYTE4(v89) = v61 & 2 | BYTE4(v89) & 0xFD;
          v62 = *(_BYTE *)(v24 + 28) & 1;
          *(_BYTE *)(v24 + 28) = BYTE4(v89) & 1 | *(_BYTE *)(v24 + 28) & 0xFE;
          BYTE4(v89) = v62 | BYTE4(v89) & 0xFE;
          goto LABEL_54;
        }
      }
      else
      {
        if ( !v26 )
        {
          if ( v25 )
            goto LABEL_78;
          v25 = v24;
          goto LABEL_79;
        }
        v25 = v24;
      }
      v24 += 40;
      if ( v19 + 40 * v17 == v24 )
        goto LABEL_22;
    }
  }
  v25 = 0;
  while ( 1 )
  {
LABEL_22:
    if ( v23 == v19 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v27 = *(_QWORD *)v19;
    if ( *(_QWORD *)v19 <= 1u )
      break;
    if ( *(_DWORD *)(v27 + 12) == v21 && v86 == v27 )
    {
      v74 = *(_DWORD *)(v19 + 8);
      v75 = v87;
      *(_QWORD *)v19 = v86;
      *(_DWORD *)(v19 + 8) = v75;
      LODWORD(v87) = v74;
      v76 = *(_QWORD *)(v19 + 16);
      *(_QWORD *)(v19 + 16) = v88;
      v88 = v76;
      LOBYTE(v75) = *(_BYTE *)(v19 + 12);
      *(_BYTE *)(v19 + 12) = BYTE4(v87) & 2 | v75 & 0xFD;
      BYTE4(v87) = v75 & 2 | BYTE4(v87) & 0xFD;
      v77 = *(_BYTE *)(v19 + 12);
      *(_BYTE *)(v19 + 12) = v77 & 0xFE | BYTE4(v87) & 1;
      BYTE4(v87) = v77 & 1 | BYTE4(v87) & 0xFE;
      LODWORD(v76) = *(_DWORD *)(v19 + 24);
      *(_DWORD *)(v19 + 24) = v89;
      LODWORD(v89) = v76;
      v78 = *(_QWORD *)(v19 + 32);
      *(_QWORD *)(v19 + 32) = v90;
      v90 = v78;
      LOBYTE(v75) = *(_BYTE *)(v19 + 28);
      *(_BYTE *)(v19 + 28) = BYTE4(v89) & 2 | v75 & 0xFD;
      BYTE4(v89) = v75 & 2 | BYTE4(v89) & 0xFD;
      v79 = *(_BYTE *)(v19 + 28) & 1;
      *(_BYTE *)(v19 + 28) = *(_BYTE *)(v19 + 28) & 0xFE | BYTE4(v89) & 1;
      BYTE4(v89) = v79 | BYTE4(v89) & 0xFE;
      goto LABEL_54;
    }
LABEL_21:
    v19 += 40;
  }
  if ( v27 )
  {
    v25 = v19;
    goto LABEL_21;
  }
  if ( v25 )
LABEL_78:
    --*((_DWORD *)a1 + 4);
  else
    v25 = v19;
LABEL_79:
  v51 = *(_DWORD *)(v25 + 8);
  v52 = v87;
  *(_QWORD *)v25 = v20;
  *(_DWORD *)(v25 + 8) = v52;
  LODWORD(v87) = v51;
  v53 = *(_QWORD *)(v25 + 16);
  *(_QWORD *)(v25 + 16) = v88;
  v88 = v53;
  LOBYTE(v52) = *(_BYTE *)(v25 + 12);
  *(_BYTE *)(v25 + 12) = BYTE4(v87) & 2 | v52 & 0xFD;
  BYTE4(v87) = v52 & 2 | BYTE4(v87) & 0xFD;
  v54 = *(_BYTE *)(v25 + 12);
  *(_BYTE *)(v25 + 12) = BYTE4(v87) & 1 | v54 & 0xFE;
  BYTE4(v87) = v54 & 1 | BYTE4(v87) & 0xFE;
  LODWORD(v53) = *(_DWORD *)(v25 + 24);
  *(_DWORD *)(v25 + 24) = v89;
  LODWORD(v89) = v53;
  v55 = *(_QWORD *)(v25 + 32);
  *(_QWORD *)(v25 + 32) = v90;
  v90 = v55;
  LOBYTE(v52) = *(_BYTE *)(v25 + 28);
  *(_BYTE *)(v25 + 28) = BYTE4(v89) & 2 | v52 & 0xFD;
  BYTE4(v89) = v52 & 2 | BYTE4(v89) & 0xFD;
  v56 = *(_BYTE *)(v25 + 28) & 1;
  *(_BYTE *)(v25 + 28) = BYTE4(v89) & 1 | *(_BYTE *)(v25 + 28) & 0xFE;
  LOBYTE(v55) = BYTE4(v89);
  ++*((_DWORD *)a1 + 3);
  BYTE4(v89) = v56 | v55 & 0xFE;
LABEL_54:
  sub_25A130((char *)&v87);
LABEL_44:
  sub_25A130((char *)v85);
}

