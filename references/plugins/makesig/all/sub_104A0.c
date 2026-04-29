unsigned __int64 __fastcall sub_104A0(_BYTE **a1, _BYTE *a2, __int64 *a3, char a4, __int64 a5, int a6)
{
  _BYTE *v8; // rcx
  char v9; // dl
  bool v10; // al
  _BYTE *v11; // rax
  void *v12; // rdi
  char v14; // dl
  _BYTE *v15; // rsi
  char v16; // bl
  bool v17; // al
  _BYTE *v18; // rax
  int v19; // ebp
  _BYTE *v20; // rcx
  char v21; // bl
  char v22; // dl
  bool v23; // cf
  bool v24; // al
  _BYTE *v25; // rax
  const char *v26; // r14
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // r9
  __int64 v32; // rcx
  const char *v33; // r14
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // r15
  _QWORD *v39; // rax
  __int64 *v40; // rax
  __int64 v41; // rsi
  int v42; // ecx
  int v43; // eax
  __int64 v44; // r8
  void **v45; // r14
  __int64 v46; // rdi
  char *v47; // r15
  int v48; // eax
  int *v49; // r13
  void *v50; // rbp
  int v51; // r15d
  int *v52; // r12
  const char *v53; // rsi
  int *v54; // rbx
  const char *v55; // rdi
  int v56; // eax
  int *v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rbx
  __int64 v61; // r15
  _QWORD *v62; // rax
  const char *v63; // rdx
  __int64 v64; // rdi
  _DWORD *v65; // rdx
  int *v66; // rcx
  const char *v67; // rsi
  const char *v68; // rdi
  char *v69; // rdx
  void *v70; // rbp
  void *i; // rbx
  __int64 *v72; // rax
  __int64 v73; // rdi
  __int64 v74; // r15
  const char *v75; // rcx
  __int64 v76; // rbx
  int v77; // eax
  __int64 v78; // rdx
  __int64 *v79; // r11
  void *v80; // rax
  __int64 v81; // rsi
  __int64 v82; // rax
  __int64 v83; // r8
  int v84; // eax
  int *v85; // r15
  void *v86; // rbp
  void *v87; // rdi
  __int64 v88; // rax
  __int64 v89; // rax
  char v90; // [rsp+0h] [rbp-98h]
  _BYTE *v91; // [rsp+0h] [rbp-98h]
  __int64 *v92; // [rsp+0h] [rbp-98h]
  char v96; // [rsp+27h] [rbp-71h]
  _BYTE *v98; // [rsp+38h] [rbp-60h] BYREF
  void *src; // [rsp+40h] [rbp-58h] BYREF
  __int128 v100; // [rsp+48h] [rbp-50h]
  unsigned __int64 v101; // [rsp+58h] [rbp-40h]

  v8 = *a1;
  v101 = __readfsqword(0x28u);
  v98 = v8;
  src = nullptr;
  v100 = 0;
  while ( 2 )
  {
    v9 = *v8;
    v10 = v8 < a2;
    if ( *v8 != 32 )
      goto LABEL_9;
LABEL_3:
    if ( !v10 )
    {
LABEL_9:
      while ( v10 && v9 == 9 )
      {
        v11 = v8;
        while ( 1 )
        {
          v9 = *++v11;
          if ( v9 != 9 )
            break;
          if ( v11 >= a2 )
            goto LABEL_7;
        }
        if ( v11 == v8 )
          goto LABEL_14;
LABEL_8:
        v8 = v11;
        v10 = v11 < a2;
        if ( v9 == 32 )
          goto LABEL_3;
      }
      v96 = 0;
      if ( a4 != v9 )
        goto LABEL_14;
      v14 = v8[1];
      v15 = v8 + 1;
      v16 = 0;
      v98 = v8 + 1;
      if ( v14 == 45 )
      {
        v15 = v8 + 2;
        v14 = v8[2];
        v16 = 1;
        v98 = v8 + 2;
      }
      v17 = v15 < a2;
      if ( v14 != 32 )
        goto LABEL_27;
LABEL_21:
      if ( v17 )
      {
        v18 = v15;
        do
          v14 = *++v18;
        while ( v14 == 32 && v18 < a2 );
LABEL_25:
        if ( v18 != v15 )
          goto LABEL_26;
      }
      else
      {
LABEL_27:
        while ( v14 == 9 && v17 )
        {
          v18 = v15;
          while ( 1 )
          {
            v14 = *++v18;
            if ( v14 != 9 )
              break;
            if ( v18 >= a2 )
              goto LABEL_25;
          }
          if ( v18 == v15 )
            break;
LABEL_26:
          v15 = v18;
          v17 = v18 < a2;
          if ( v14 == 32 )
            goto LABEL_21;
        }
      }
      v98 = v15;
      v19 = sub_103A0(&v98, (__int64)a2);
      if ( v16 )
        v19 = -v19;
      v20 = v98 + 1;
      v21 = *v98;
      v22 = v98[1];
      v23 = ++v98 < a2;
      v90 = v21;
      v24 = v23;
      if ( v22 != 32 )
        goto LABEL_42;
LABEL_36:
      if ( v24 )
      {
        v25 = v20;
        do
          v22 = *++v25;
        while ( v25 < a2 && v22 == 32 );
LABEL_40:
        if ( v25 != v20 )
          goto LABEL_41;
      }
      else
      {
LABEL_42:
        while ( v22 == 9 && v24 )
        {
          v25 = v20;
          while ( 1 )
          {
            v22 = *++v25;
            if ( v25 >= a2 )
              break;
            if ( v22 != 9 )
              goto LABEL_40;
          }
          if ( v25 == v20 )
            break;
LABEL_41:
          v20 = v25;
          v24 = v25 < a2;
          if ( v22 == 32 )
            goto LABEL_36;
        }
      }
      v98 = v20;
      *(_QWORD *)&v100 = 0;
      sub_AEA0((__int64 *)&src, &v98, a2);
      if ( (_QWORD)v100 )
      {
        v26 = (const char *)src;
        v27 = *(_QWORD *)(*(_QWORD *)a5 + 16LL);
        v28 = *(_QWORD *)a5 + 8LL;
        if ( !v27 )
          goto LABEL_101;
      }
      else
      {
        v26 = s1;
        v27 = *(_QWORD *)(*(_QWORD *)a5 + 16LL);
        v28 = *(_QWORD *)a5 + 8LL;
        if ( !v27 )
          goto LABEL_101;
      }
      v29 = v28;
      v30 = v27;
      do
      {
        while ( 1 )
        {
          v31 = *(_QWORD *)(v30 + 16);
          v32 = *(_QWORD *)(v30 + 24);
          if ( *(_DWORD *)(v30 + 32) < a6 )
            break;
          v29 = v30;
          v30 = *(_QWORD *)(v30 + 16);
          if ( !v31 )
            goto LABEL_54;
        }
        v30 = *(_QWORD *)(v30 + 24);
      }
      while ( v32 );
LABEL_54:
      if ( v28 == v29
        || *(_DWORD *)(v29 + 32) > a6
        || (v60 = *(_QWORD *)(v29 + 40), v61 = v60 + 24LL * *(_QWORD *)(v29 + 48), v60 == v61) )
      {
        if ( (_QWORD)v100 )
        {
          v33 = (const char *)src;
          v34 = v28;
        }
        else
        {
          v34 = v28;
          v33 = s1;
        }
        do
        {
LABEL_59:
          while ( 1 )
          {
            v35 = *(_QWORD *)(v27 + 16);
            v36 = *(_QWORD *)(v27 + 24);
            if ( *(int *)(v27 + 32) <= 2 )
              break;
            v28 = v27;
            v27 = *(_QWORD *)(v27 + 16);
            if ( !v35 )
              goto LABEL_61;
          }
          v27 = *(_QWORD *)(v27 + 24);
        }
        while ( v36 );
LABEL_61:
        if ( v34 != v28 && *(int *)(v28 + 32) <= 3 )
        {
          v37 = *(_QWORD *)(v28 + 40);
          v38 = v37 + 24LL * *(_QWORD *)(v28 + 48);
          if ( v37 != v38 )
          {
            while ( 1 )
            {
              v39 = sub_E410(&qword_20760, v37);
              if ( !(unsigned int)qregexec(*v39 + 16LL, v33, 0, 0, 0) )
                break;
              v37 += 24;
              if ( v38 == v37 )
                goto LABEL_101;
            }
            v40 = a3;
            v96 = 1;
            v41 = a3[1];
            v42 = v41;
            if ( (int)v41 > 0 )
              goto LABEL_102;
            goto LABEL_68;
          }
        }
      }
      else
      {
        do
        {
          v62 = sub_E410(&qword_20760, v60);
          if ( !(unsigned int)qregexec(*v62 + 16LL, v26, 0, 0, 0) )
          {
            if ( dword_2185C > 0 )
            {
              v63 = s1;
              if ( (_QWORD)v100 )
                v63 = (const char *)src;
              __printf_chk(1, "Ignoring function name: \"%s\"\n", v63);
            }
            goto LABEL_99;
          }
          v60 += 24;
        }
        while ( v61 != v60 );
        v33 = s1;
        if ( (_QWORD)v100 )
          v33 = (const char *)src;
        v27 = *(_QWORD *)(*(_QWORD *)a5 + 16LL);
        v28 = *(_QWORD *)a5 + 8LL;
        if ( v27 )
        {
          v34 = *(_QWORD *)a5 + 8LL;
          goto LABEL_59;
        }
      }
LABEL_101:
      v40 = a3;
      v41 = a3[1];
      v42 = v41;
      if ( (int)v41 > 0 )
      {
LABEL_102:
        v64 = *v40;
        v43 = 0;
        v65 = (_DWORD *)(v64 + 24);
        while ( *v65 != v19 )
        {
          ++v43;
          v65 += 16;
          if ( v42 == v43 )
            goto LABEL_132;
        }
LABEL_69:
        if ( v42 == v43 )
        {
          v64 = *a3;
LABEL_132:
          v83 = v64;
          if ( a3[2] < (unsigned __int64)(v41 + 1) )
          {
            v88 = qvector_reserve(a3, v64, v41 + 1, 64);
            *a3 = v88;
            v41 = a3[1];
            v83 = v88;
          }
          v45 = (void **)(v83 + (v41 << 6));
          *v45 = nullptr;
          v45[4] = nullptr;
          *(_OWORD *)(v45 + 1) = 0;
          *(_OWORD *)(v45 + 5) = 0;
          ++a3[1];
          *((_DWORD *)v45 + 6) = v19;
          if ( v45 == &src )
            goto LABEL_138;
          v47 = (char *)v100;
          if ( !(_QWORD)v100 )
            goto LABEL_137;
        }
        else
        {
          if ( v90 == 64 )
            goto LABEL_99;
          v44 = *a3 + ((__int64)v43 << 6);
          v45 = (void **)v44;
          if ( (*(_BYTE *)(v44 + 57) & 2) == 0 )
            goto LABEL_99;
          v46 = *(_QWORD *)v44;
          if ( *(_QWORD *)v44 )
          {
            *(_QWORD *)(v44 + 8) = 0;
            qfree(v46);
            *v45 = nullptr;
            v45[2] = nullptr;
          }
          *((_DWORD *)v45 + 6) = v19;
          if ( v45 == &src )
          {
            *((_WORD *)v45 + 28) = 0;
            goto LABEL_77;
          }
          v47 = (char *)v100;
          if ( !(_QWORD)v100 )
          {
            v45[1] = nullptr;
            *((_WORD *)v45 + 28) = 0;
LABEL_77:
            if ( v96 )
              *((_BYTE *)v45 + 56) = 1;
            if ( !qword_206B0 )
              goto LABEL_113;
            v48 = a6;
            v91 = a2;
            v49 = (int *)qword_206B0;
            v50 = v45[1];
            v51 = v48;
            v52 = &dword_206A8;
            while ( 1 )
            {
              v58 = *((_QWORD *)v49 + 5);
              if ( !v50 )
                break;
              v53 = (const char *)*v45;
              v54 = v49;
              v55 = s1;
              if ( v58 )
                goto LABEL_82;
LABEL_83:
              v56 = strcmp(v55, v53);
              v57 = *((int **)v49 + 2);
              v49 = *((int **)v49 + 3);
              if ( v56 >= 0 )
              {
                v52 = v54;
                v49 = v57;
              }
              if ( !v49 )
              {
                v66 = v52;
                a2 = v91;
                a6 = v51;
                goto LABEL_107;
              }
            }
            if ( !v58 )
            {
              while ( 1 )
              {
                v59 = *((_QWORD *)v49 + 2);
                if ( !v59 )
                  break;
                v52 = v49;
                v49 = *((int **)v49 + 2);
                if ( *(_QWORD *)(v59 + 40) )
                  goto LABEL_90;
              }
              v84 = v51;
              v85 = v49;
              a2 = v91;
              a6 = v84;
              v66 = v85;
LABEL_107:
              if ( v66 != &dword_206A8 )
              {
                if ( *((_QWORD *)v66 + 5) )
                {
                  v67 = *((const char **)v66 + 4);
                  v68 = s1;
                  if ( v50 )
                    goto LABEL_110;
LABEL_111:
                  if ( strcmp(v68, v67) >= 0 )
                    goto LABEL_112;
                }
                else
                {
                  v67 = s1;
                  if ( v50 )
                  {
LABEL_110:
                    v68 = (const char *)*v45;
                    goto LABEL_111;
                  }
LABEL_112:
                  *((_BYTE *)v45 + 57) |= 1u;
                }
              }
LABEL_113:
              v69 = (char *)v45[4];
              if ( v69 )
              {
                v70 = v45[5];
                if ( v70 )
                {
                  for ( i = nullptr; i != v70; i = (char *)i + 1 )
                  {
                    v72 = (__int64 *)&v69[32 * (_QWORD)i];
                    v73 = *v72;
                    if ( *v72 )
                    {
                      v72[1] = 0;
                      qfree(v73);
                      v69 = (char *)v45[4];
                    }
                  }
                }
                v45[5] = nullptr;
                qfree(v69);
                v45[4] = nullptr;
                v45[6] = nullptr;
              }
              v74 = qword_206F0;
              if ( 56LL * (_QWORD)xmmword_206F8 )
              {
                do
                {
                  v79 = sub_E410(&qword_20760, v74);
                  v80 = v45[5];
                  v81 = (__int64)v45[4];
                  if ( v45[6] < (char *)v80 + 1 )
                  {
                    v92 = v79;
                    v82 = qvector_reserve(v45 + 4, v81, (char *)v80 + 1, 32);
                    v45[4] = (void *)v82;
                    v81 = v82;
                    v79 = v92;
                    v80 = v45[5];
                  }
                  v75 = s1;
                  v76 = v81 + 32LL * (_QWORD)v80;
                  *(_QWORD *)v76 = 0;
                  *(_OWORD *)(v76 + 8) = 0;
                  v45[5] = (char *)v45[5] + 1;
                  if ( (_QWORD)v100 )
                    v75 = (const char *)src;
                  v77 = sub_AAE0((const char **)v76, v79, (char **)(v74 + 24), v75);
                  v78 = xmmword_206F8;
                  *(_DWORD *)(v76 + 24) = v77;
                  v74 += 56;
                  *(_BYTE *)(v76 + 28) = *(_BYTE *)(v74 - 8);
                }
                while ( v74 != qword_206F0 + 56 * v78 );
              }
LABEL_99:
              v8 = v98;
              continue;
            }
LABEL_90:
            v53 = s1;
LABEL_82:
            v55 = *((const char **)v49 + 4);
            v54 = v49;
            goto LABEL_83;
          }
        }
        if ( v47 != (_BYTE *)&dword_0 + 1 )
        {
          v86 = src;
          v87 = *v45;
          if ( v45[2] < v47 )
          {
            v89 = qvector_reserve(v45, *v45, v47, 1);
            *v45 = (void *)v89;
            v87 = (void *)v89;
          }
          v45[1] = v47;
          memmove(v87, v86, (size_t)(v47 - 1));
          v47[(_QWORD)*v45 - 1] = 0;
          goto LABEL_138;
        }
LABEL_137:
        v45[1] = nullptr;
LABEL_138:
        *((_WORD *)v45 + 28) = 0;
        if ( v90 == 64 )
          *((_BYTE *)v45 + 57) = 2;
        goto LABEL_77;
      }
LABEL_68:
      v43 = 0;
      goto LABEL_69;
    }
    break;
  }
  v11 = v8;
  do
    v9 = *++v11;
  while ( v9 == 32 && v11 < a2 );
LABEL_7:
  if ( v11 != v8 )
    goto LABEL_8;
LABEL_14:
  v12 = src;
  v98 = v8;
  *a1 = v8;
  if ( v12 )
  {
    *(_QWORD *)&v100 = 0;
    qfree(v12);
  }
  return v101 - __readfsqword(0x28u);
}
