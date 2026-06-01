__int64 __fastcall sub_6B2360(__int64 *a1, __int64 a2, char **a3, char a4)
{
  __int64 *v4; // r12
  _DWORD *v5; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // r14
  char *v11; // rax
  unsigned __int8 v12; // dl
  char *v13; // r15
  int v14; // ecx
  int v16; // edx
  int v17; // ecx
  __int64 v18; // rcx
  int v19; // ecx
  char v20; // al
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  __int64 *v23; // r14
  unsigned __int64 v24; // r15
  int v25; // r13d
  unsigned int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // edx
  char *v30; // rcx
  __int16 v31; // ax
  char v32; // al
  int v33; // edx
  bool v34; // al
  __int16 v35; // ax
  unsigned __int8 v36; // dl
  char *v37; // rsi
  __int16 v38; // dx
  int v39; // ecx
  int v40; // eax
  int v41; // edx
  int v42; // eax
  char v43; // si
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rax
  int v47; // edx
  char *v48; // rsi
  int v49; // r12d
  __int64 v50; // rax
  __int64 v51; // rdx
  __int16 v52; // dx
  char *v53; // rdi
  __int64 v54; // rbp
  __int64 v55; // rbx
  __int64 v56; // rax
  unsigned __int64 v57; // r13
  __int64 *v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // rsi
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // r13
  _DWORD *v64; // rcx
  _DWORD *v65; // r13
  unsigned __int8 v66; // dl
  int v67; // eax
  char v68; // si
  int v69; // eax
  __int64 v70; // rax
  int v71; // eax
  __int64 v72; // [rsp+0h] [rbp-B8h]
  int v73; // [rsp+8h] [rbp-B0h]
  __int64 v74; // [rsp+8h] [rbp-B0h]
  int v75; // [rsp+8h] [rbp-B0h]
  int v76; // [rsp+10h] [rbp-A8h]
  signed int v77; // [rsp+14h] [rbp-A4h]
  int v78; // [rsp+14h] [rbp-A4h]
  int v79; // [rsp+18h] [rbp-A0h]
  int v80; // [rsp+1Ch] [rbp-9Ch]
  char **v81; // [rsp+20h] [rbp-98h]
  _DWORD *v82; // [rsp+20h] [rbp-98h]
  unsigned __int64 v83; // [rsp+20h] [rbp-98h]
  __int64 v84; // [rsp+28h] [rbp-90h]
  int v85; // [rsp+30h] [rbp-88h]
  char *v86; // [rsp+38h] [rbp-80h] BYREF
  __int64 v87; // [rsp+40h] [rbp-78h] BYREF
  __int64 v88; // [rsp+48h] [rbp-70h]
  int v89; // [rsp+50h] [rbp-68h]
  int v90; // [rsp+58h] [rbp-60h]
  __int64 v91; // [rsp+60h] [rbp-58h] BYREF
  __int64 v92; // [rsp+68h] [rbp-50h]
  __int64 v93; // [rsp+70h] [rbp-48h]
  unsigned __int64 v94; // [rsp+78h] [rbp-40h]

  v94 = __readfsqword(0x28u);
  if ( !a3 )
    return 0;
  v4 = a1;
  v5 = (_DWORD *)a2;
  if ( a2 )
  {
    a1 = (__int64 *)a2;
    cleanup_argloc(a2);
  }
  v10 = is_cvt64(a1, a2, a3);
  v11 = *a3;
  if ( !*a3 )
    return 0;
  v12 = *v11;
  if ( !*v11 )
    return 0;
  v13 = v11 + 1;
  v86 = v11 + 1;
  if ( v12 == 0xFF )
  {
    v17 = v11[1];
    if ( !v11[1] )
      return 0;
    if ( v17 < 0 )
    {
      v36 = v11[2];
      if ( !v36 )
        return 0;
      v13 = v11 + 3;
      v18 = (v11[1] & 0x7F | (v36 << 7)) - 1;
    }
    else
    {
      v13 = v11 + 2;
      v18 = (unsigned int)(v17 - 1);
    }
    v86 = v13;
    if ( (v18 & 0x20) != 0 )
    {
      v19 = v18 & 0xFFFFFFDF;
      v20 = 1;
    }
    else
    {
      v75 = v18;
      v34 = sub_631C90(*v4, 3, 4, v18, v8, v9);
      v19 = v75;
      if ( !v34 )
        v10 |= *(_BYTE *)(v4[3] + 28);
      v20 = v10 ^ 1;
    }
    if ( v19 == 64 )
      goto LABEL_11;
    if ( (v19 & 0x40) != 0 )
    {
      if ( v19 <= 127 )
      {
        v77 = v19 & 0xFFFFFFBF;
        if ( a2 )
          goto LABEL_26;
LABEL_66:
        v23 = nullptr;
        v79 = 0xFFFF;
        goto LABEL_29;
      }
      if ( (v19 & 0x80u) == 0 )
        return 0;
      LOBYTE(v19) = v19 & 0x7F;
      v77 = v19;
      if ( a2 )
        goto LABEL_26;
      if ( v19 )
        goto LABEL_66;
    }
    else
    {
      if ( (v19 & 0x80u) == 0 )
      {
        v39 = v19 + 1;
        switch ( v39 )
        {
          case 1:
            if ( a4 || !(unsigned __int8)sub_6B1DF0(&v86, &v91, v20) )
              return 0;
            if ( a2 )
            {
              v45 = v91;
              *(_DWORD *)a2 = 1;
              *(_QWORD *)(a2 + 8) = v45;
            }
            goto LABEL_81;
          case 2:
            goto LABEL_11;
          case 3:
          case 4:
            v40 = *v13;
            if ( !*v13 )
              return 0;
            if ( v40 < 0 )
            {
              v67 = (unsigned __int8)v13[1];
              if ( !(_BYTE)v67 )
                return 0;
              v41 = (*v13 & 0x7F | (v67 << 7)) - 1;
              v42 = v13[2];
              v68 = v13[2];
              if ( !v68 )
                return 0;
              if ( v42 < 0 )
              {
                v71 = (unsigned __int8)v13[3];
                if ( !(_BYTE)v71 )
                  return 0;
                v13 += 4;
                v42 = v68 & 0x7F | (v71 << 7);
              }
              else
              {
                v13 += 3;
              }
            }
            else
            {
              v41 = v40 - 1;
              v42 = v13[1];
              v43 = v13[1];
              if ( !v43 )
                return 0;
              if ( v42 < 0 )
              {
                v69 = (unsigned __int8)v13[2];
                if ( !(_BYTE)v69 )
                  return 0;
                v13 += 3;
                v42 = v43 & 0x7F | (v69 << 7);
              }
              else
              {
                v13 += 2;
              }
            }
            if ( v5 )
            {
              v44 = v41 | ((v42 - 1) << 16);
              if ( v39 == 3 )
                *v5 = 3;
              else
                *v5 = 4;
              v5[2] = v44;
            }
            break;
          case 5:
            v47 = *v13;
            if ( !*v13 )
              return 0;
            v48 = v13 + 1;
            v49 = v47 - 1;
            if ( v47 >= 0 )
              goto LABEL_87;
            v66 = v13[1];
            if ( !v66 )
              return 0;
            v48 = v13 + 2;
            v49 = (*v13 & 0x7F | (v66 << 7)) - 1;
LABEL_87:
            v86 = v48;
            if ( !(unsigned __int8)sub_6B1DF0(&v86, &v91, v20) )
              return 0;
            if ( v5 )
            {
              v50 = operator new(0x10u);
              v51 = v91;
              *(_DWORD *)(v50 + 8) = v49;
              *(_QWORD *)v50 = v51;
              if ( v50 )
              {
                *v5 = 5;
                *((_QWORD *)v5 + 1) = v50;
              }
            }
LABEL_81:
            v13 = v86;
            goto LABEL_11;
          case 6:
            if ( !(unsigned __int8)sub_6B1DF0(&v86, &v91, v20) )
              return 0;
            if ( a2 )
            {
              v46 = v91;
              *(_DWORD *)a2 = 6;
              *(_QWORD *)(a2 + 8) = v46;
            }
            goto LABEL_81;
          default:
            return 0;
        }
        goto LABEL_11;
      }
      v77 = v19 & 0xFFFFFF7F;
      if ( (v19 & 0xFFFFFF7F) != 0 )
      {
        if ( !a2 )
        {
          v23 = nullptr;
          v79 = 0xFFFF;
          goto LABEL_29;
        }
LABEL_26:
        v21 = qalloc_or_throw(24);
        v22 = v77;
        *(_QWORD *)v21 = 0;
        v23 = (__int64 *)v21;
        *(_OWORD *)(v21 + 8) = 0;
        v88 = 0;
        v89 = 0xFFFF;
        v24 = *(_QWORD *)(v21 + 8);
        v87 = 0;
        v79 = 0xFFFF;
        if ( v77 < v24 )
        {
          v57 = v77;
          v58 = (__int64 *)v21;
          do
          {
            v59 = 3 * v57++;
            cleanup_argloc(*v58 + 8 * v59);
          }
          while ( v57 < v24 );
          v23 = v58;
          v5 = (_DWORD *)a2;
          v23[1] = v77;
          goto LABEL_28;
        }
        if ( v24 >= v77 )
        {
LABEL_28:
          cleanup_argloc(&v87);
          goto LABEL_29;
        }
        v60 = *(_QWORD *)v21;
        v61 = *(_QWORD *)(v21 + 16);
        if ( (unsigned __int64)&v87 < *v23 || (unsigned __int64)&v87 >= v60 + 24 * v61 )
        {
          if ( v61 >= v77
            || (v70 = qvector_reserve(v23, v60, v77, 24), v24 = v23[1], v22 = v77, *v23 = v70, v60 = v70, v24 < v77) )
          {
            while ( 1 )
            {
              v83 = v22;
              v65 = (_DWORD *)(v60 + 24 * v24);
              *v65 = 0;
              copy_argloc(v65, &v87);
              v22 = v83;
              ++v24;
              v65[4] = v89;
              if ( v24 >= v83 )
                break;
              v60 = *v23;
            }
            v23[1] = v83;
            goto LABEL_28;
          }
          v23[1] = v77;
          cleanup_argloc(&v87);
        }
        else
        {
          LODWORD(v91) = 0;
          copy_argloc(&v91, &v87);
          v62 = v77;
          LODWORD(v93) = v89;
          if ( v23[2] < (unsigned __int64)v77 )
          {
            *v23 = qvector_reserve(v23, *v23, v77, 24);
            v62 = v77;
          }
          v63 = v23[1];
          if ( v63 < v62 )
          {
            do
            {
              v84 = v62;
              v64 = (_DWORD *)(*v23 + 24 * v63);
              *v64 = 0;
              v82 = v64;
              copy_argloc(v64, &v91);
              ++v63;
              v62 = v84;
              v82[4] = v93;
            }
            while ( v84 != v63 );
            v23[1] = v84;
            cleanup_argloc(&v91);
            goto LABEL_28;
          }
          v23[1] = v62;
          cleanup_argloc(&v91);
          cleanup_argloc(&v87);
        }
LABEL_29:
        v25 = 0;
        v73 = 0;
        v81 = &v86;
        while ( 1 )
        {
          LODWORD(v93) = v79;
          if ( !(unsigned __int8)sub_6B2360(
                                   (_DWORD)v4,
                                   (unsigned int)&v91,
                                   (_DWORD)v81,
                                   0,
                                   v8,
                                   v9,
                                   v72,
                                   v73,
                                   v76,
                                   v79,
                                   (_DWORD)v81,
                                   v84,
                                   v85,
                                   (_DWORD)v86,
                                   v87,
                                   v88,
                                   v89,
                                   v90,
                                   0,
                                   0,
                                   v93) )
            break;
          v29 = *v86;
          if ( !*v86 )
            break;
          v30 = v86 + 1;
          v31 = v29 - 1;
          if ( v29 < 0 )
          {
            v35 = (unsigned __int8)v86[1];
            if ( !(_BYTE)v35 )
            {
LABEL_42:
              v86 = v30;
              break;
            }
            v30 = v86 + 2;
            v31 = (*v86 & 0x7F | (v35 << 7)) - 1;
          }
          v86 = v30;
          LOWORD(v93) = v31;
          v32 = *v30;
          if ( v80 == 64 )
          {
            if ( !v32 )
              break;
            v37 = v30 + 1;
            v38 = v32 - 1;
            if ( v32 < 0 )
            {
              v52 = (unsigned __int8)v30[1];
              if ( !(_BYTE)v52 )
              {
                v86 = v30 + 1;
                break;
              }
              v37 = v30 + 2;
              v38 = (v32 & 0x7F | (v52 << 7)) - 1;
            }
            v86 = v37;
            LOWORD(v26) = v38;
          }
          else
          {
            if ( !v32 )
              goto LABEL_42;
            v33 = 0;
            while ( 1 )
            {
              ++v30;
              if ( v32 >= 0 )
                break;
              v33 = v32 & 0x7F | (v33 << 7);
              v32 = *v30;
              if ( !*v30 )
                goto LABEL_42;
            }
            v86 = v30;
            v26 = (v33 << 6) | v32 & 0x3F;
            if ( v26 > 0xFFFF )
              break;
          }
          WORD1(v93) = v26;
          if ( v23 )
          {
            v27 = *v23 + v74;
            v28 = *(_QWORD *)(v27 + 8);
            *(_QWORD *)(v27 + 8) = v92;
            v92 = v28;
            LODWORD(v28) = *(_DWORD *)v27;
            *(_DWORD *)v27 = v91;
            LODWORD(v91) = v28;
            LOWORD(v28) = *(_WORD *)(v27 + 16);
            *(_WORD *)(v27 + 16) = v93;
            LOWORD(v93) = v28;
            LOWORD(v28) = *(_WORD *)(v27 + 18);
            *(_WORD *)(v27 + 18) = WORD1(v93);
            WORD1(v93) = v28;
          }
          ++v25;
          cleanup_argloc(&v91);
          v73 = v74 + 24;
          if ( v25 == v78 )
            goto LABEL_44;
        }
        cleanup_argloc(&v91);
        if ( v25 == v78 )
        {
LABEL_44:
          v13 = v86;
          if ( v5 && v23 )
          {
            *v5 = 2;
            *((_QWORD *)v5 + 1) = v23;
          }
          goto LABEL_11;
        }
        if ( v23 )
        {
          v53 = (char *)*v23;
          if ( *v23 )
          {
            v54 = v23[1];
            v55 = 0;
            if ( v54 )
            {
              do
              {
                v56 = 3 * v55++;
                cleanup_argloc(&v53[8 * v56]);
                v53 = (char *)*v23;
              }
              while ( v54 != v55 );
            }
            v23[1] = 0;
            qfree(v53);
          }
          qfree(v23);
        }
        return 0;
      }
    }
LABEL_11:
    *a3 = v13;
    return 1;
  }
  v14 = (v12 & 0x7F) - 1;
  if ( v12 > 0x80u )
  {
    v16 = (unsigned __int8)v11[1];
    v13 = v11 + 2;
    v86 = v11 + 2;
    if ( v16 )
    {
      if ( a2 )
      {
        *(_DWORD *)a2 = 4;
        *(_DWORD *)(a2 + 8) = v14 | ((v16 - 1) << 16);
      }
      goto LABEL_11;
    }
  }
  else
  {
    if ( (v12 & 0x7F) != 0 )
    {
      if ( a2 )
      {
        *(_DWORD *)a2 = 3;
        *(_DWORD *)(a2 + 8) = v14;
      }
      goto LABEL_11;
    }
    if ( !a4 )
    {
      if ( a2 )
      {
        *(_DWORD *)a2 = 1;
        *(_QWORD *)(a2 + 8) = 0;
      }
      goto LABEL_11;
    }
  }
  return 0;
}
