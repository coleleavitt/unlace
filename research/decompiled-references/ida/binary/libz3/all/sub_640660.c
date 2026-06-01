__int64 __fastcall sub_640660(__int64 a1, __int64 a2)
{
  char **exception; // rbp
  char **v3; // rbp
  char **v4; // rbp
  char *v7; // rdi
  int v8; // ecx
  char *v9; // rdx
  unsigned int v10; // esi
  char *v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // rbp
  void *v14; // rcx
  __int64 v15; // rax
  unsigned __int64 *v16; // rdx
  __int64 v17; // rbx
  __int64 result; // rax
  unsigned __int64 v19; // r12
  unsigned int v20; // eax
  unsigned int v21; // ebp
  unsigned int v22; // r15d
  size_t v23; // rsi
  unsigned int *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned __int64 *v27; // rbp
  unsigned __int64 v28; // r12
  __int64 v29; // r14
  int v30; // edi
  unsigned int v31; // r8d
  int v32; // r9d
  size_t v33; // r14
  unsigned __int64 *v34; // r15
  __int64 v35; // r8
  unsigned __int64 *v36; // rsi
  __int64 *v37; // rax
  __int64 v38; // rcx
  unsigned int v39; // ecx
  unsigned __int64 *v40; // rcx
  unsigned __int64 *v41; // rdx
  unsigned __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rcx
  unsigned __int64 *v45; // rax
  unsigned __int64 v46; // rcx
  unsigned __int64 *v47; // rax
  unsigned int v48; // ecx
  char *v49; // r9
  unsigned int v50; // r8d
  char *v51; // r10
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // r12
  unsigned int v54; // eax
  __int64 v55; // rcx
  unsigned __int64 *v56; // rcx
  __int64 v57; // rax
  unsigned __int64 *v58; // rdx
  unsigned __int64 *v59; // rax
  __int64 v60; // rax
  __int64 v61; // rbp
  __int64 *v62; // rcx
  __int64 v63; // rax
  int v64; // esi
  unsigned int v65; // edx
  __int64 *v66; // rdi
  __int64 v67; // rdx
  __int64 *v68; // r8
  __int64 *v69; // rax
  __int64 v70; // rdx
  unsigned __int64 v71; // r14
  __int64 v72; // rcx
  unsigned __int64 v73; // rsi
  unsigned int v74; // eax
  unsigned int v75; // ebp
  unsigned int v76; // ecx
  unsigned int *v77; // rax
  __int64 v78; // rcx
  _QWORD *v79; // rdx
  unsigned __int64 *v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rdx
  unsigned int v83; // r15d
  _QWORD *v84; // rcx
  size_t v85; // r14
  unsigned int v86; // r10d
  __int64 v87; // r8
  __int64 v88; // r10
  _QWORD *v89; // r9
  __int64 *v90; // rax
  __int64 *v91; // rdi
  __int64 v92; // rdx
  __int64 v93; // rax
  unsigned int v94; // ebp
  unsigned int v95; // ecx
  unsigned int *v96; // rax
  __int64 v97; // rcx
  _QWORD *v98; // rax
  _QWORD *v99; // rdi
  __int64 v100; // r11
  _QWORD *v101; // r9
  __int64 v102; // rax
  _QWORD *v103; // rdx
  _QWORD *v104; // rax
  _QWORD *v105; // rdx
  unsigned int v106; // [rsp+8h] [rbp-90h]
  unsigned int v107; // [rsp+8h] [rbp-90h]
  _QWORD *v108; // [rsp+8h] [rbp-90h]
  unsigned int v109; // [rsp+10h] [rbp-88h]
  _QWORD *v110; // [rsp+18h] [rbp-80h]
  __int64 v111[11]; // [rsp+40h] [rbp-58h] BYREF

  if ( *(_DWORD *)(a1 + 52) || *(_DWORD *)(a1 + 56) )
  {
    v7 = *(char **)(a1 + 40);
    v8 = 0;
    v9 = &v7[8 * *(unsigned int *)(a1 + 48)];
    v10 = *(_DWORD *)(a1 + 48);
    v11 = *(char **)(a1 + 40);
    if ( v7 == v9 )
      goto LABEL_14;
    do
    {
      while ( *(_QWORD *)v11 )
      {
        *(_QWORD *)v11 = 0;
        v11 += 8;
        if ( v9 == v11 )
          goto LABEL_8;
      }
      v11 += 8;
      ++v8;
    }
    while ( v9 != v11 );
LABEL_8:
    if ( v10 <= 0x10 || 3 * v10 >= 4 * v8 )
      goto LABEL_14;
    if ( v7 )
    {
      sub_186B220(v7);
      v12 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 40) = 0;
      v12 >>= 1;
      *(_DWORD *)(a1 + 48) = v12;
      v13 = v12;
      v14 = (void *)sub_186B270(8LL * v12);
      if ( !v12 )
      {
LABEL_13:
        *(_QWORD *)(a1 + 40) = v14;
LABEL_14:
        *(_QWORD *)(a1 + 52) = 0;
        goto LABEL_15;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 40) = 0;
      *(_DWORD *)(a1 + 48) = v10 >> 1;
      v13 = v10 >> 1;
      v14 = (void *)sub_186B270(8 * v13);
    }
    v14 = memset(v14, 0, 8 * v13);
    goto LABEL_13;
  }
LABEL_15:
  v15 = sub_639820(a1, *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL));
  v16 = *(unsigned __int64 **)(a1 + 32);
  v17 = v15;
  result = *(unsigned int *)(a2 + 56);
  if ( !(_DWORD)result )
    goto LABEL_21;
  v19 = *(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v16 )
  {
    v20 = *((_DWORD *)v16 - 1);
    v21 = 0;
    if ( v20 != *((_DWORD *)v16 - 2) )
      goto LABEL_41;
LABEL_18:
    v22 = (3 * v20 + 1) >> 1;
    v23 = 8 * v22 + 8;
    if ( 8 * v20 + 8 >= (unsigned int)v23 || v20 >= v22 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v111, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v111);
      sub_233E40((__int64)v111);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    ++v21;
    v24 = (unsigned int *)sub_186B300(v16 - 1, v23);
    v25 = v24[1];
    v16 = (unsigned __int64 *)(v24 + 2);
    *v24 = v22;
    *(_QWORD *)(a1 + 32) = v24 + 2;
    result = (unsigned int)(v25 + 1);
    v16[v25] = v19;
    *((_DWORD *)v16 - 1) = result;
    if ( v21 < *(_DWORD *)(a2 + 56) )
      goto LABEL_40;
LABEL_21:
    if ( !v16 )
      return result;
LABEL_22:
    result = *((unsigned int *)v16 - 1);
    if ( !(_DWORD)result )
      return result;
    v26 = (unsigned int)(result - 1);
    v27 = *(unsigned __int64 **)(a1 + 40);
    v28 = v16[v26];
    *((_DWORD *)v16 - 1) = v26;
    v29 = *(unsigned int *)(a1 + 48);
    v30 = *(_DWORD *)(v28 + 12);
    v31 = v29 - 1;
    v32 = *(_DWORD *)(a1 + 48);
    v33 = 8 * v29;
    v34 = &v27[v33 / 8];
    v35 = 8LL * (v30 & v31);
    v36 = &v27[(unsigned __int64)v35 / 8];
    if ( v35 == v33 )
    {
LABEL_44:
      if ( v27 != v36 )
      {
        v45 = v27;
        while ( 1 )
        {
          v46 = *v45;
          if ( *v45 > 1 )
          {
            if ( *(_DWORD *)(v46 + 12) == v30 && v28 == v46 )
              goto LABEL_22;
          }
          else if ( !v46 )
          {
            goto LABEL_51;
          }
          if ( v36 == ++v45 )
            goto LABEL_51;
        }
      }
      v35 = 0;
LABEL_51:
      v39 = 2 * v32;
      if ( 3 * v32 < (unsigned int)(4 * (*(_DWORD *)(a1 + 52) + *(_DWORD *)(a1 + 56))) )
        goto LABEL_52;
      goto LABEL_58;
    }
    v37 = (__int64 *)&v27[(unsigned __int64)v35 / 8];
    while ( 1 )
    {
      v38 = *v37;
      if ( (unsigned __int64)*v37 > 1 )
      {
        if ( *(_DWORD *)(v38 + 12) == v30 && v28 == v38 )
          goto LABEL_22;
      }
      else if ( !v38 )
      {
        v39 = 2 * v32;
        if ( 3 * v32 >= (unsigned int)(4 * (*(_DWORD *)(a1 + 52) + *(_DWORD *)(a1 + 56))) )
        {
          v40 = &v27[(unsigned __int64)v35 / 8];
LABEL_32:
          v41 = nullptr;
          while ( 1 )
          {
            v42 = *v36;
            if ( *v36 > 1 )
            {
              if ( *(_DWORD *)(v42 + 12) == v30 && v28 == v42 )
              {
                *v36 = v28;
                goto LABEL_69;
              }
            }
            else
            {
              if ( !v42 )
              {
                if ( v41 )
                  goto LABEL_89;
                v41 = v36;
                goto LABEL_90;
              }
              v41 = v36;
            }
            if ( ++v36 == v34 )
              goto LABEL_63;
          }
        }
LABEL_52:
        v106 = v39;
        v33 = 8LL * v39;
        v47 = (unsigned __int64 *)sub_186B270(v33);
        v48 = v106;
        v27 = v47;
        if ( v106 )
        {
          memset(v47, 0, v33);
          v48 = v106;
        }
        v49 = *(char **)(a1 + 40);
        v50 = v48 - 1;
        v34 = &v27[v33 / 8];
        v51 = &v49[8 * *(unsigned int *)(a1 + 48)];
        if ( v49 != v51 )
        {
          do
          {
            if ( *(_QWORD *)v49 > 1u )
            {
              v57 = 8LL * (*(_DWORD *)(*(_QWORD *)v49 + 12LL) & v50);
              v58 = &v27[(unsigned __int64)v57 / 8];
              if ( v33 == v57 )
              {
LABEL_83:
                if ( v27 == v58 )
                {
LABEL_108:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v59 = v27;
                while ( *v59 )
                {
                  if ( v58 == ++v59 )
                    goto LABEL_108;
                }
              }
              else
              {
                v59 = &v27[(unsigned __int64)v57 / 8];
                while ( *v59 )
                {
                  if ( v34 == ++v59 )
                    goto LABEL_83;
                }
              }
              *v59 = *(_QWORD *)v49;
            }
            v49 += 8;
          }
          while ( v51 != v49 );
          v51 = *(char **)(a1 + 40);
        }
        if ( v51 )
        {
          v109 = v48;
          v107 = v48 - 1;
          sub_186B220(v51);
          v48 = v109;
          v50 = v107;
        }
        v30 = *(_DWORD *)(v28 + 12);
        *(_QWORD *)(a1 + 40) = v27;
        *(_DWORD *)(a1 + 48) = v48;
        *(_DWORD *)(a1 + 56) = 0;
        v35 = 8LL * (v30 & v50);
        v36 = &v27[(unsigned __int64)v35 / 8];
LABEL_58:
        v40 = v36;
        if ( v35 != v33 )
          goto LABEL_32;
        v41 = nullptr;
LABEL_63:
        while ( 2 )
        {
          if ( v27 == v40 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v52 = *v27;
          if ( *v27 > 1 )
          {
            if ( *(_DWORD *)(v52 + 12) == v30 && v28 == v52 )
            {
              *v27 = v28;
              goto LABEL_69;
            }
            goto LABEL_62;
          }
          if ( v52 )
          {
            v41 = v27;
LABEL_62:
            ++v27;
            continue;
          }
          break;
        }
        if ( v41 )
LABEL_89:
          --*(_DWORD *)(a1 + 56);
        else
          v41 = v27;
LABEL_90:
        *v41 = v28;
        ++*(_DWORD *)(a1 + 52);
LABEL_69:
        result = *(unsigned __int16 *)(v28 + 4);
        if ( (_WORD)result )
        {
          v16 = *(unsigned __int64 **)(a1 + 32);
          if ( (_WORD)result == 2 )
          {
            v53 = *(_QWORD *)(v28 + 24);
            if ( v16 )
            {
              v54 = *((_DWORD *)v16 - 1);
              if ( v54 == *((_DWORD *)v16 - 2) )
              {
                v94 = (3 * v54 + 1) >> 1;
                v95 = 8 * v94 + 8;
                if ( 8 * v54 + 8 >= v95 || v54 >= v94 )
                {
                  v4 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v111, "Overflow encountered when expanding vector");
                  *v4 = (char *)off_1C63128;
                  sub_2333C0(v4 + 1, v111);
                  sub_233E40((__int64)v111);
                  __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v96 = (unsigned int *)sub_186B300(v16 - 1, v95);
                v97 = v96[1];
                v16 = (unsigned __int64 *)(v96 + 2);
                *v96 = v94;
                *(_QWORD *)(a1 + 32) = v96 + 2;
                LODWORD(v96) = v97;
                v56 = &v16[v97];
                result = (unsigned int)((_DWORD)v96 + 1);
              }
              else
              {
                v55 = v54;
                result = v54 + 1;
                v56 = &v16[v55];
              }
            }
            else
            {
              v105 = (_QWORD *)sub_186B270(0x18u);
              *v105 = 2;
              result = 1;
              v16 = v105 + 1;
              *(_QWORD *)(a1 + 32) = v16;
              v56 = v16;
            }
            *v56 = v53;
            *((_DWORD *)v16 - 1) = result;
          }
          goto LABEL_21;
        }
        v60 = *(_QWORD *)(a1 + 24);
        v61 = *(_QWORD *)(v28 + 16);
        v62 = *(__int64 **)(v60 + 2288);
        v63 = *(unsigned int *)(v60 + 2296);
        v64 = *(_DWORD *)(v61 + 12);
        v65 = v63 - 1;
        v63 *= 8;
        v66 = (__int64 *)((char *)v62 + v63);
        v67 = 8LL * (v64 & v65);
        v68 = &v62[(unsigned __int64)v67 / 8];
        if ( v67 == v63 )
        {
LABEL_111:
          if ( v62 == v68 )
            goto LABEL_99;
          while ( 1 )
          {
            v81 = *v62;
            if ( (unsigned __int64)*v62 > 1 )
            {
              if ( *(_DWORD *)(v81 + 12) == v64 && v61 == v81 )
                goto LABEL_119;
            }
            else if ( !v81 )
            {
              goto LABEL_99;
            }
            if ( v68 == ++v62 )
              goto LABEL_99;
          }
        }
        v69 = &v62[(unsigned __int64)v67 / 8];
        while ( 2 )
        {
          v70 = *v69;
          if ( (unsigned __int64)*v69 <= 1 )
          {
            if ( !v70 )
              goto LABEL_99;
LABEL_96:
            if ( v66 == ++v69 )
              goto LABEL_111;
            continue;
          }
          break;
        }
        if ( *(_DWORD *)(v70 + 12) != v64 || v61 != v70 )
          goto LABEL_96;
LABEL_119:
        v82 = *(unsigned int *)(v17 + 8);
        v83 = 2 * v82;
        if ( 3 * (int)v82 < (unsigned int)(4 * (*(_DWORD *)(v17 + 12) + *(_DWORD *)(v17 + 16))) )
        {
          v85 = 8LL * v83;
          v98 = (_QWORD *)sub_186B270(v85);
          v84 = v98;
          if ( v83 )
            v84 = memset(v98, 0, 8LL * v83);
          v99 = *(_QWORD **)v17;
          v86 = v83 - 1;
          v87 = (__int64)&v84[v85 / 8];
          v100 = *(_QWORD *)v17 + 8LL * *(unsigned int *)(v17 + 8);
          v101 = *(_QWORD **)v17;
          if ( *(_QWORD *)v17 != v100 )
          {
            do
            {
              if ( *v101 > 1u )
              {
                v102 = 8LL * (*(_DWORD *)(*v101 + 12LL) & v86);
                v103 = &v84[(unsigned __int64)v102 / 8];
                if ( v85 == v102 )
                {
LABEL_156:
                  if ( v84 == v103 )
                  {
LABEL_168:
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v104 = v84;
                  while ( *v104 )
                  {
                    if ( v103 == ++v104 )
                      goto LABEL_168;
                  }
                }
                else
                {
                  v104 = &v84[(unsigned __int64)v102 / 8];
                  while ( *v104 )
                  {
                    if ( (_QWORD *)v87 == ++v104 )
                      goto LABEL_156;
                  }
                }
                *v104 = *v101;
              }
              ++v101;
            }
            while ( (_QWORD *)v100 != v101 );
            v99 = *(_QWORD **)v17;
          }
          if ( v99 )
          {
            v110 = &v84[v85 / 8];
            v108 = v84;
            sub_186B220(v99);
            v87 = (__int64)v110;
            v86 = v83 - 1;
            v84 = v108;
          }
          *(_QWORD *)v17 = v84;
          v64 = *(_DWORD *)(v61 + 12);
          *(_DWORD *)(v17 + 8) = v83;
          *(_DWORD *)(v17 + 16) = 0;
        }
        else
        {
          v84 = *(_QWORD **)v17;
          v85 = 8 * v82;
          v86 = v82 - 1;
          v87 = *(_QWORD *)v17 + 8 * v82;
        }
        v88 = v64 & v86;
        v89 = &v84[v88];
        if ( 8 * v88 != v85 )
        {
          v90 = &v84[v88];
          v91 = nullptr;
          while ( 1 )
          {
            v92 = *v90;
            if ( (unsigned __int64)*v90 > 1 )
            {
              if ( *(_DWORD *)(v92 + 12) == v64 && v61 == v92 )
              {
                *v90 = v61;
                goto LABEL_144;
              }
            }
            else
            {
              if ( !v92 )
              {
                if ( v91 )
                  goto LABEL_166;
                v91 = v90;
                goto LABEL_167;
              }
              v91 = v90;
            }
            if ( ++v90 == (__int64 *)v87 )
              goto LABEL_132;
          }
        }
        v91 = nullptr;
LABEL_132:
        while ( 2 )
        {
          if ( v89 == v84 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v93 = *v84;
          if ( *v84 > 1u )
          {
            if ( *(_DWORD *)(v93 + 12) == v64 && v61 == v93 )
            {
              *v84 = v61;
              goto LABEL_144;
            }
            goto LABEL_131;
          }
          if ( v93 )
          {
            v91 = v84;
LABEL_131:
            ++v84;
            continue;
          }
          break;
        }
        if ( v91 )
LABEL_166:
          --*(_DWORD *)(v17 + 16);
        else
          v91 = v84;
LABEL_167:
        *v91 = v61;
        ++*(_DWORD *)(v17 + 12);
LABEL_144:
        sub_639820(a1, v61);
LABEL_99:
        result = *(unsigned int *)(v28 + 24);
        v16 = *(unsigned __int64 **)(a1 + 32);
        if ( (_DWORD)result )
        {
          v71 = v28 + 8 * result;
          if ( !v16 )
          {
            v79 = (_QWORD *)sub_186B270(0x18u);
            *v79 = 2;
            result = 1;
            v16 = v79 + 1;
            *(_QWORD *)(a1 + 32) = v16;
            v80 = v16;
            goto LABEL_103;
          }
          do
          {
            v74 = *((_DWORD *)v16 - 1);
            if ( v74 == *((_DWORD *)v16 - 2) )
            {
              v75 = (3 * v74 + 1) >> 1;
              v76 = 8 * v75 + 8;
              if ( 8 * v74 + 8 >= v76 || v74 >= v75 )
              {
                v3 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v111, "Overflow encountered when expanding vector");
                *v3 = (char *)off_1C63128;
                sub_2333C0(v3 + 1, v111);
                sub_233E40((__int64)v111);
                __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v77 = (unsigned int *)sub_186B300(v16 - 1, v76);
              v78 = v77[1];
              v16 = (unsigned __int64 *)(v77 + 2);
              *v77 = v75;
              *(_QWORD *)(a1 + 32) = v77 + 2;
              LODWORD(v77) = v78;
              v80 = &v16[v78];
              result = (unsigned int)((_DWORD)v77 + 1);
            }
            else
            {
              v72 = v74;
              result = v74 + 1;
              v80 = &v16[v72];
            }
LABEL_103:
            v73 = *(_QWORD *)(v28 + 32);
            v28 += 8LL;
            *v80 = v73;
            *((_DWORD *)v16 - 1) = result;
          }
          while ( v28 != v71 );
        }
        goto LABEL_21;
      }
      if ( v34 == (unsigned __int64 *)++v37 )
        goto LABEL_44;
    }
  }
  v43 = (_QWORD *)sub_186B270(0x18u);
  v21 = 1;
  v16 = v43 + 1;
  *v43 = 2;
  result = 1;
  *(_QWORD *)(a1 + 32) = v16;
  *v16 = v19;
  *((_DWORD *)v16 - 1) = 1;
  if ( *(_DWORD *)(a2 + 56) <= 1u )
    goto LABEL_21;
  do
  {
LABEL_40:
    v20 = *((_DWORD *)v16 - 1);
    v19 = *(_QWORD *)(a2 + 8LL * v21 + 80) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v20 == *((_DWORD *)v16 - 2) )
      goto LABEL_18;
LABEL_41:
    v44 = v20;
    result = v20 + 1;
    ++v21;
    v16[v44] = v19;
    *((_DWORD *)v16 - 1) = result;
  }
  while ( v21 < *(_DWORD *)(a2 + 56) );
  if ( v16 )
    goto LABEL_22;
  return result;
}

