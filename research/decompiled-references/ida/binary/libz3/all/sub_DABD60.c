__int64 __fastcall sub_DABD60(unsigned __int64 a1, __int64 a2)
{
  unsigned int *v2; // rbp
  __guard *v3; // rbx
  int v4; // r12d
  _QWORD *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 result; // rax
  unsigned int v9; // r12d
  unsigned int v10; // r14d
  unsigned int *v11; // rax
  unsigned int v12; // eax
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rax
  char v16; // r12
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __guard v23; // rcx
  unsigned int v24; // eax
  int i; // edx
  char v26; // al
  __guard v27; // r12
  __int64 v28; // r12
  __guard v29; // rax
  _BYTE *v30; // r12
  __int64 v31; // r13
  int v32; // r14d
  _QWORD *v33; // rdx
  __int64 v34; // rcx
  char v35; // al
  unsigned __int64 v36; // rdx
  __int64 v37; // r15
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rax
  char v40; // al
  __guard v41; // rax
  __guard v42; // rax
  __int64 j; // rsi
  __guard v44; // rax
  int v45; // edx
  __int64 v46; // rcx
  __int64 v47; // r12
  __int64 v48; // rax
  unsigned int v49; // r13d
  size_t v50; // rsi
  unsigned int *v51; // rax
  __int64 v52; // rcx
  unsigned int v53; // edx
  __guard *v54; // r12
  __int64 v55; // rax
  __int64 v56; // r14
  __int64 v57; // r12
  __int64 v58; // r12
  __int64 *v59; // rax
  bool v60; // zf
  _QWORD *v61; // rax
  unsigned __int64 v62; // r14
  __int64 *v63; // r13
  unsigned int v64; // r14d
  unsigned int v65; // ecx
  unsigned int v66; // r15d
  unsigned int *v67; // rax
  unsigned int v68; // eax
  __int64 v69; // r15
  __int64 v70; // rdx
  unsigned __int64 v71; // rcx
  __int64 *v72; // r15
  _QWORD *v73; // rax
  __int64 v74; // rax
  char v75; // dl
  char **exception; // rbx
  _QWORD *v77; // rbx
  const char *v78; // rax
  unsigned int v79; // [rsp+8h] [rbp-80h]
  __int64 v80; // [rsp+8h] [rbp-80h]
  unsigned __int64 v81; // [rsp+8h] [rbp-80h]
  __int64 v82; // [rsp+10h] [rbp-78h]
  __int64 v83; // [rsp+18h] [rbp-70h]
  __int64 v84[11]; // [rsp+30h] [rbp-58h] BYREF

  v2 = (unsigned int *)a2;
  v3 = (__guard *)a1;
  if ( *(_QWORD *)(a2 + 8) )
  {
    v4 = *(_DWORD *)a2;
    v5 = *(_QWORD **)(a1 + 24);
    v6 = (unsigned int)(*(_DWORD *)a2 - 0x7FFFFFFF);
    if ( v5 )
    {
      v7 = *((unsigned int *)v5 - 1);
      if ( (unsigned int)v6 < (unsigned int)v7 )
      {
        result = v5[v6];
        if ( result )
          return result;
        goto LABEL_15;
      }
      v9 = v4 - 2147483646;
      if ( v9 >= (unsigned int)v7 )
        goto LABEL_7;
      v62 = (unsigned __int64)&v5[v7];
      v63 = &v5[v9];
      if ( (unsigned __int64)v63 >= v62 )
      {
LABEL_96:
        *((_DWORD *)v5 - 1) = v9;
LABEL_15:
        if ( !(_BYTE)byte_1C7EDE8 )
        {
          a1 = (unsigned __int64)&byte_1C7EDE8;
          if ( __cxa_guard_acquire(&byte_1C7EDE8) )
          {
            qword_1C7EDF0 = 0;
            a1 = (unsigned __int64)&byte_1C7EDE8;
            __cxa_guard_release(&byte_1C7EDE8);
          }
        }
        if ( !(_BYTE)byte_1C7EDD8 )
        {
          a1 = (unsigned __int64)&byte_1C7EDD8;
          if ( __cxa_guard_acquire(&byte_1C7EDD8) )
          {
            qword_1C7EDE0 = 0;
            a1 = (unsigned __int64)&byte_1C7EDD8;
            __cxa_guard_release(&byte_1C7EDD8);
          }
        }
        if ( !(_BYTE)byte_1C7EDC8 )
        {
          a1 = (unsigned __int64)&byte_1C7EDC8;
          if ( __cxa_guard_acquire(&byte_1C7EDC8) )
          {
            qword_1C7EDD0 = 0;
            a1 = (unsigned __int64)&byte_1C7EDC8;
            __cxa_guard_release(&byte_1C7EDC8);
          }
        }
        v15 = *((_QWORD *)v2 + 1);
        v16 = 0;
        if ( v15 )
        {
          if ( (v15 & 1) != 0 )
          {
            v17 = *((_QWORD *)v2 + 2);
            if ( (v17 & 1) != 0 )
            {
              v18 = v15 & 0xFFFFFFFFFFFFFFFELL;
              v19 = v17 & 0xFFFFFFFFFFFFFFFELL;
              v20 = *(_QWORD *)(v18 + 8);
              if ( v20 )
              {
                a2 = *(_QWORD *)(v19 + 8);
                if ( a2 )
                {
                  a1 = v20 & 0xFFFFFFFFFFFFFFFELL;
                  if ( (v20 & 0xFFFFFFFFFFFFFFFELL) != (a2 & 0xFFFFFFFFFFFFFFFELL) || (v16 = 2, (v20 & 1) == (a2 & 1)) )
                  {
                    v21 = *(_QWORD *)(v19 + 16);
                    if ( a1 != (v21 & 0xFFFFFFFFFFFFFFFELL) || (v16 = 2, a1 = v21 & 1, (v20 & 1) == (_BYTE)a1) )
                    {
                      v22 = *(_QWORD *)(v18 + 16);
                      if ( (a2 & 0xFFFFFFFFFFFFFFFELL) != (v22 & 0xFFFFFFFFFFFFFFFELL)
                        || (a2 &= 1u, v16 = 2, a1 = v22 & 1, (_BYTE)a1 == (_BYTE)a2) )
                      {
                        v16 = 0;
                        if ( (v21 & 0xFFFFFFFFFFFFFFFELL) == (v22 & 0xFFFFFFFFFFFFFFFELL) )
                          v16 = 2 * ((v22 ^ v21) & 1);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        v23 = v3[4];
        if ( v23 )
        {
          v24 = *(_DWORD *)(v23 - 4);
          if ( v24 != *(_DWORD *)(v23 - 8) )
          {
            i = v24 + 1;
            a2 = v23 + 16LL * v24;
            v26 = *(_BYTE *)(a2 + 8);
            *(_QWORD *)a2 = v2;
            *(_BYTE *)(a2 + 8) = v16 | v26 & 0xFC | 4;
            *(_DWORD *)(v23 - 4) = i;
            goto LABEL_31;
          }
          v49 = (3 * v24 + 1) >> 1;
          v50 = 16 * v49 + 8;
          if ( 16 * v24 + 8 >= (unsigned int)v50 || v24 >= v49 )
          {
LABEL_130:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v84, "Overflow encountered when expanding vector");
            goto LABEL_131;
          }
          a1 = v23 - 8;
          v51 = (unsigned int *)sub_186B300((void *)(v23 - 8), v50);
          v52 = v51[1];
          *v51 = v49;
          v3[4] = (__guard)(v51 + 2);
          a2 = (__int64)&v51[4 * v52 + 2];
          v53 = v52 + 1;
          LOBYTE(v52) = *(_BYTE *)(a2 + 8);
          *(_QWORD *)a2 = v2;
          *(_BYTE *)(a2 + 8) = v16 | v52 & 0xFC | 4;
          v51[1] = v53;
          if ( v53 )
            goto LABEL_32;
LABEL_68:
          if ( *((_QWORD *)v2 + 1) )
            return *(_QWORD *)(v3[3] + 8LL * (*v2 - 0x7FFFFFFF));
          goto LABEL_62;
        }
        a1 = 40;
        v74 = sub_186B270(0x28u);
        *(_QWORD *)(v74 + 8) = v2;
        v3[4] = v74 + 8;
        v75 = *(_BYTE *)(v74 + 16);
        *(_QWORD *)v74 = 0x100000002LL;
        *(_BYTE *)(v74 + 16) = v16 | v75 & 0xFC | 4;
        for ( i = 1; ; i = *(_DWORD *)(v29 - 4) )
        {
LABEL_31:
          if ( !i )
            goto LABEL_68;
LABEL_32:
          v27 = *v3;
          if ( *(_QWORD *)(v27 + 672) < (unsigned __int64)Z3_get_estimated_alloc_size_0(a1, a2) )
          {
            v77 = __cxa_allocate_exception(0x28u);
            sub_DA7950(v77, off_1C7E178);
            goto LABEL_133;
          }
          a1 = *(_QWORD *)(v27 + 104);
          if ( !(unsigned __int8)sub_18290A0(a1) )
          {
            v77 = __cxa_allocate_exception(0x28u);
            v78 = (const char *)sub_1829130(*(_QWORD *)(v27 + 104));
            sub_DA7950(v77, v78);
LABEL_133:
            __cxa_throw(v77, (struct type_info *)&`typeinfo for'aig_exception, (void (*)(void *))sub_DA72D0);
          }
          v28 = 0xFFFFFFFF0LL;
          v29 = v3[4];
          if ( v29 )
            v28 = 16LL * (unsigned int)(*(_DWORD *)(v29 - 4) - 1);
          v30 = (_BYTE *)(v29 + v28);
          v31 = *(_QWORD *)v30;
          if ( !*(_QWORD *)(*(_QWORD *)v30 + 8LL) )
            goto LABEL_77;
          v32 = *(_DWORD *)v31;
          v33 = (_QWORD *)v3[3];
          v34 = (unsigned int)(*(_DWORD *)v31 - 0x7FFFFFFF);
          if ( !v33 )
            break;
          a1 = *((unsigned int *)v33 - 1);
          v79 = a1;
          if ( (unsigned int)v34 >= (unsigned int)a1 )
          {
            v64 = v32 - 2147483646;
            if ( v64 >= (unsigned int)a1 )
              goto LABEL_98;
            v71 = (unsigned __int64)&v33[(unsigned int)a1];
            v72 = &v33[v64];
            if ( (unsigned __int64)v72 >= v71 )
              goto LABEL_99;
            do
            {
              a2 = *v72;
              if ( *v72 )
              {
                a1 = v3[2];
                v60 = (*(_DWORD *)(a2 + 8))-- == 1;
                if ( v60 )
                {
                  v81 = v71;
                  sub_15D7BC0(a1, a2);
                  v71 = v81;
                }
              }
              ++v72;
            }
            while ( (unsigned __int64)v72 < v71 );
            v33 = (_QWORD *)v3[3];
            if ( v33 )
            {
              v79 = *((_DWORD *)v33 - 1);
LABEL_98:
              if ( v79 < v64 )
                goto LABEL_103;
LABEL_99:
              *((_DWORD *)v33 - 1) = v64;
              goto LABEL_40;
            }
            goto LABEL_115;
          }
          if ( v33[v34] )
            goto LABEL_77;
LABEL_40:
          v35 = v30[8];
          if ( (v35 & 4) == 0 )
            goto LABEL_51;
          v30[8] = v35 & 0xFB;
          LOBYTE(v84[0]) = 1;
          if ( (v35 & 3u) <= 1 )
          {
            sub_DA9880(v3, *(_QWORD *)(v31 + 8), v84);
            a2 = *(_QWORD *)(v31 + 16);
            a1 = (unsigned __int64)v3;
            sub_DA9880(v3, a2, v84);
          }
          else
          {
            if ( (v35 & 3) != 2 )
            {
              sub_1872CE0("");
              sub_1873130(114, 929);
            }
            v36 = *(_QWORD *)(v31 + 8) & 0xFFFFFFFFFFFFFFFELL;
            v37 = *(_QWORD *)(v36 + 16);
            v82 = *(_QWORD *)(v36 + 8);
            v38 = *(_QWORD *)(v31 + 16) & 0xFFFFFFFFFFFFFFFELL;
            v83 = *(_QWORD *)(v38 + 8);
            v80 = *(_QWORD *)(v38 + 16);
            sub_DA9360(v3, v82, v84);
            a1 = (unsigned __int64)v3;
            sub_DA9360(v3, v37, v84);
            v39 = v82 & 0xFFFFFFFFFFFFFFFELL;
            if ( (v82 & 0xFFFFFFFFFFFFFFFELL) != (v83 & 0xFFFFFFFFFFFFFFFELL)
              && (v83 & 0xFFFFFFFFFFFFFFFELL) != (v37 & 0xFFFFFFFFFFFFFFFELL) )
            {
              a1 = (unsigned __int64)v3;
              sub_DA9360(v3, v83, v84);
              v39 = v82 & 0xFFFFFFFFFFFFFFFELL;
            }
            a2 = v80;
            if ( v39 != (v80 & 0xFFFFFFFFFFFFFFFELL) && (v80 & 0xFFFFFFFFFFFFFFFELL) != (v37 & 0xFFFFFFFFFFFFFFFELL) )
            {
              a1 = (unsigned __int64)v3;
              sub_DA9360(v3, v80, v84);
            }
          }
          if ( LOBYTE(v84[0]) )
          {
            v35 = v30[8];
LABEL_51:
            v40 = v35 & 3;
            if ( v40 != 1 )
            {
              if ( v40 == 2 )
              {
                a2 = v31;
                a1 = (unsigned __int64)v3;
                sub_DA7AE0(v3, v31);
              }
              else
              {
                if ( v40 )
                {
                  sub_1872CE0("");
                  sub_1873130(114, 947);
                }
                v41 = v3[5];
                if ( v41 )
                  *(_DWORD *)(v41 - 4) = 0;
                v42 = v3[6];
                if ( v42 )
                  *(_DWORD *)(v42 - 4) = 0;
                sub_DAB7E0(v3, *(_QWORD *)(v31 + 8));
                for ( j = *(_QWORD *)(v31 + 16); ; j = *(_QWORD *)(v47 + 16) )
                {
                  sub_DAB7E0(v3, j);
                  v44 = v3[6];
                  if ( !v44 )
                    break;
                  v45 = *(_DWORD *)(v44 - 4);
                  if ( !v45 )
                    break;
                  v46 = (unsigned int)(v45 - 1);
                  v47 = *(_QWORD *)(v44 + 8 * v46);
                  *(_DWORD *)(v44 - 4) = v46;
                  sub_DAB7E0(v3, *(_QWORD *)(v47 + 8));
                }
                v54 = (__guard *)v3[1];
                sub_15E1AF0((int)v54);
                a1 = (unsigned __int64)v54;
                v55 = sub_15E1A70((int)v54);
                v56 = v55;
                v57 = (unsigned int)(*(_DWORD *)v31 - 0x7FFFFFFF);
                if ( v55 )
                  ++*(_DWORD *)(v55 + 8);
                v58 = 8 * v57;
                v59 = (__int64 *)(v58 + v3[3]);
                a2 = *v59;
                if ( *v59 )
                {
                  a1 = v3[2];
                  v60 = (*(_DWORD *)(a2 + 8))-- == 1;
                  if ( v60 )
                  {
                    sub_15D7BC0(a1, a2);
                    v59 = (__int64 *)(v58 + v3[3]);
                  }
                }
                *v59 = v56;
              }
            }
            v29 = v3[4];
LABEL_77:
            --*(_DWORD *)(v29 - 4);
            continue;
          }
          v29 = v3[4];
          if ( !v29 )
            goto LABEL_68;
        }
        v64 = v32 - 2147483646;
LABEL_115:
        if ( v64 )
        {
          v73 = (_QWORD *)sub_186B270(0x18u);
          v79 = 0;
          v33 = v73 + 1;
          *v73 = 2;
          v3[3] = (__guard)(v73 + 1);
LABEL_103:
          while ( 1 )
          {
            v68 = *((_DWORD *)v33 - 2);
            if ( v68 >= v64 )
              break;
            v65 = (3 * v68 + 1) >> 1;
            a2 = 8 * v65 + 8;
            v66 = v65;
            if ( 8 * v68 + 8 >= (unsigned int)a2 || v68 >= v65 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v84, "Overflow encountered when expanding vector");
LABEL_131:
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v84);
              sub_233E40((__int64)v84);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v67 = (unsigned int *)sub_186B300(v33 - 1, a2);
            v33 = v67 + 2;
            *v67 = v66;
            v3[3] = (__guard)(v67 + 2);
          }
          *((_DWORD *)v33 - 1) = v64;
          v69 = 8LL * v79;
          a1 = (unsigned __int64)&v33[(unsigned __int64)v69 / 8];
          v70 = 8LL * v64;
          if ( v69 != v70 )
          {
            a2 = 0;
            memset((void *)a1, 0, v70 - v69);
          }
        }
        goto LABEL_40;
      }
      do
      {
        a2 = *v63;
        if ( *v63 )
        {
          a1 = v3[2];
          v60 = (*(_DWORD *)(a2 + 8))-- == 1;
          if ( v60 )
            sub_15D7BC0(a1, a2);
        }
        ++v63;
      }
      while ( (unsigned __int64)v63 < v62 );
      v5 = (_QWORD *)v3[3];
      if ( v5 )
      {
        v7 = *((unsigned int *)v5 - 1);
LABEL_7:
        if ( (unsigned int)v7 < v9 )
          goto LABEL_12;
        goto LABEL_96;
      }
    }
    else
    {
      v9 = v4 - 2147483646;
    }
    if ( v9 )
    {
      v7 = 0;
      v61 = (_QWORD *)sub_186B270(0x18u);
      v5 = v61 + 1;
      *v61 = 2;
      v3[3] = (__guard)(v61 + 1);
LABEL_12:
      while ( 1 )
      {
        v12 = *((_DWORD *)v5 - 2);
        if ( v12 >= v9 )
          break;
        v10 = (3 * v12 + 1) >> 1;
        a2 = 8 * v10 + 8;
        if ( 8 * v12 + 8 >= (unsigned int)a2 || v12 >= v10 )
          goto LABEL_130;
        v11 = (unsigned int *)sub_186B300(v5 - 1, a2);
        v5 = v11 + 2;
        *v11 = v10;
        v3[3] = (__guard)(v11 + 2);
      }
      v13 = 8 * v7;
      *((_DWORD *)v5 - 1) = v9;
      a1 = (unsigned __int64)&v5[(unsigned __int64)v13 / 8];
      v14 = 8LL * v9;
      if ( v13 != v14 )
      {
        a2 = 0;
        memset((void *)a1, 0, v14 - v13);
      }
    }
    goto LABEL_15;
  }
LABEL_62:
  v48 = *v2;
  if ( (_DWORD)v48 )
    return *(_QWORD *)(*(_QWORD *)(*v3 + 112) + 8 * v48);
  else
    return *(_QWORD *)(v3[1] + 856);
}

