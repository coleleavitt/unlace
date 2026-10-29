__int64 __fastcall sub_E28FA0(__int64 *a1, __int64 a2, __int64 a3, char a4)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  int v10; // eax
  __int64 v11; // r15
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r13
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r14
  unsigned int v22; // eax
  __int64 v23; // rdx
  int v24; // eax
  _QWORD *v25; // rdx
  __int64 v26; // r14
  unsigned int v27; // eax
  unsigned int v28; // r13d
  unsigned int v29; // edx
  unsigned int *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r9
  int v33; // edi
  __int64 v34; // rax
  __int64 *v35; // rcx
  __int64 v36; // r13
  unsigned int v37; // edx
  __int64 *v38; // rsi
  __int64 v39; // rdx
  __int64 *v40; // r10
  __int64 *i; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  unsigned int v44; // edx
  unsigned int v45; // esi
  int v46; // r11d
  unsigned int v47; // r13d
  int v48; // r10d
  _QWORD *v49; // rcx
  __int64 v50; // rax
  _QWORD *v51; // rdi
  __int64 v52; // rdx
  _QWORD *v53; // r14
  _QWORD *v54; // rax
  _QWORD *v55; // rsi
  __int64 v56; // rdx
  __int64 v57; // rax
  unsigned int v58; // r14d
  unsigned int v59; // edx
  unsigned int *v60; // rax
  _QWORD *v61; // rdi
  unsigned int v62; // r13d
  unsigned int v63; // edx
  unsigned int *v64; // rax
  __int64 v65; // rax
  _QWORD *v66; // rdi
  _QWORD *v67; // rax
  _QWORD *v68; // r14
  char *v69; // rdi
  char *v70; // rcx
  char *v71; // r11
  __int64 v72; // rax
  _QWORD *v73; // rdx
  _QWORD *v74; // rax
  _QWORD *v75; // rdi
  char **exception; // rbp
  char **v77; // rbp
  char **v78; // rbp
  unsigned int v79; // [rsp+Ch] [rbp-9Ch]
  size_t v80; // [rsp+10h] [rbp-98h]
  __int64 v81; // [rsp+10h] [rbp-98h]
  __int64 v82; // [rsp+20h] [rbp-88h]
  _QWORD *v83; // [rsp+48h] [rbp-60h] BYREF
  __int64 v84[11]; // [rsp+50h] [rbp-58h] BYREF

  v8 = (_QWORD *)sub_186B270(0x18u);
  v9 = v8 + 1;
  v8[1] = a3;
  v83 = v8 + 1;
  *v8 = 0x100000002LL;
  v10 = 1;
  do
  {
    v11 = v9[v10 - 1];
    result = sub_15D37A0(a2, v11);
    if ( (_BYTE)result )
    {
LABEL_8:
      v9 = v83;
      --*((_DWORD *)v83 - 1);
    }
    else
    {
      switch ( *(_WORD *)(v11 + 4) )
      {
        case 0:
          if ( (unsigned __int8)sub_15D37A0(a2, *(_QWORD *)(v11 + 16)) )
          {
            result = sub_DBE3E0(&v83, a2, *(_DWORD *)(v11 + 24), (_QWORD *)(v11 + 32));
LABEL_6:
            if ( (_BYTE)result )
            {
LABEL_7:
              (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, v11, 1);
              goto LABEL_8;
            }
LABEL_27:
            v9 = v83;
            if ( !v83 )
              return result;
          }
          else
          {
            v9 = v83;
            v21 = *(_QWORD *)(v11 + 16);
            if ( v83 )
            {
              v22 = *((_DWORD *)v83 - 1);
              if ( v22 == *((_DWORD *)v83 - 2) )
              {
                v28 = (3 * v22 + 1) >> 1;
                v29 = 8 * v28 + 8;
                if ( 8 * v22 + 8 >= v29 || v22 >= v28 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v84, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v84);
                  sub_233E40((__int64)v84);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v30 = (unsigned int *)sub_186B300(v83 - 1, v29);
                v31 = v30[1];
                v9 = v30 + 2;
                *v30 = v28;
                v83 = v9;
                LODWORD(v30) = v31;
                v25 = &v9[v31];
                v24 = (_DWORD)v30 + 1;
              }
              else
              {
                v23 = v22;
                v24 = v22 + 1;
                v25 = &v83[v23];
              }
            }
            else
            {
              v61 = (_QWORD *)sub_186B270(0x18u);
              *v61 = 2;
              v24 = 1;
              v9 = v61 + 1;
              v83 = v9;
              v25 = v9;
            }
            *v25 = v21;
            *((_DWORD *)v9 - 1) = v24;
          }
          break;
        case 1:
          goto LABEL_7;
        case 2:
          result = sub_DBE3E0(
                     &v83,
                     a2,
                     *(_DWORD *)(v11 + 72),
                     (_QWORD *)(v11 + 80 + 16LL * *(unsigned int *)(v11 + 20)));
          if ( !(_BYTE)result )
            goto LABEL_27;
          result = sub_DBE3E0(
                     &v83,
                     a2,
                     *(_DWORD *)(v11 + 76),
                     (_QWORD *)(v11 + 80 + 16LL * *(unsigned int *)(v11 + 20)));
          if ( !(_BYTE)result )
            goto LABEL_27;
          if ( (unsigned __int8)sub_15D37A0(a2, *(_QWORD *)(v11 + 24)) )
            goto LABEL_7;
          v9 = v83;
          v26 = *(_QWORD *)(v11 + 24);
          if ( v83 )
          {
            v27 = *((_DWORD *)v83 - 1);
            if ( v27 == *((_DWORD *)v83 - 2) )
            {
              v62 = (3 * v27 + 1) >> 1;
              v63 = 8 * v62 + 8;
              if ( 8 * v27 + 8 >= v63 || v27 >= v62 )
              {
                v78 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v84, "Overflow encountered when expanding vector");
                *v78 = (char *)off_1C63128;
                sub_2333C0(v78 + 1, v84);
                sub_233E40((__int64)v84);
                __cxa_throw(v78, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v64 = (unsigned int *)sub_186B300(v83 - 1, v63);
              v9 = v64 + 2;
              *v64 = v62;
              v27 = v64[1];
              v83 = v9;
            }
          }
          else
          {
            v75 = (_QWORD *)sub_186B270(0x18u);
            *v75 = 2;
            v27 = 0;
            v9 = v75 + 1;
            v83 = v9;
          }
          v9[v27] = v26;
          *((_DWORD *)v9 - 1) = v27 + 1;
          break;
        case 3:
          if ( !a4 )
            goto LABEL_7;
          v18 = *(_QWORD *)(v11 + 24);
          if ( v18 && (v19 = *(_QWORD *)(v18 + 8)) != 0 )
            v20 = *(unsigned int *)(v19 - 4);
          else
            v20 = 0;
          result = sub_1681830(&v83, a2, v20);
          goto LABEL_6;
        case 4:
          if ( a4 )
          {
            v13 = *(_QWORD *)(v11 + 24);
            if ( v13 && (v14 = *(_QWORD *)(v13 + 8)) != 0 )
              v15 = *(unsigned int *)(v14 - 4);
            else
              v15 = 0;
            result = sub_1681830(&v83, a2, v15);
            if ( !(_BYTE)result )
              goto LABEL_27;
          }
          result = sub_E281F0(&v83, a2, *(_DWORD *)(v11 + 32), (_QWORD *)(v11 + 48));
          if ( !(_BYTE)result )
            goto LABEL_27;
          if ( (unsigned __int8)sub_15D37A0(a2, *(_QWORD *)(v11 + 40)) )
          {
            v32 = *a1;
            v33 = *(_DWORD *)(v11 + 12);
            v34 = *(unsigned int *)(*a1 + 176);
            v35 = *(__int64 **)(*a1 + 168);
            v36 = *a1;
            v37 = v34 - 1;
            v34 *= 8;
            v38 = (__int64 *)((char *)v35 + v34);
            v39 = 8LL * (v33 & v37);
            v40 = &v35[(unsigned __int64)v39 / 8];
            if ( v39 != v34 )
            {
              for ( i = &v35[(unsigned __int64)v39 / 8]; v38 != i; ++i )
              {
                v42 = *i;
                if ( (unsigned __int64)*i > 1 )
                {
                  if ( *(_DWORD *)(v42 + 12) == v33 && v11 == v42 )
                    goto LABEL_7;
                }
                else if ( !v42 )
                {
                  goto LABEL_50;
                }
              }
            }
            for ( ; v40 != v35; ++v35 )
            {
              v57 = *v35;
              if ( (unsigned __int64)*v35 > 1 )
              {
                if ( *(_DWORD *)(v57 + 12) == v33 && v11 == v57 )
                  goto LABEL_7;
              }
              else if ( !v57 )
              {
                break;
              }
            }
LABEL_50:
            v43 = *(_QWORD *)(v32 + 192);
            if ( !v43 || *(_DWORD *)(v43 - 4) == *(_DWORD *)(v43 - 8) )
            {
              sub_E28110((unsigned int **)(v32 + 192));
              v32 = *a1;
              v43 = *(_QWORD *)(v36 + 192);
            }
            v44 = *(_DWORD *)(v43 - 4);
            *(_QWORD *)(v43 + 8LL * v44) = v11;
            *(_DWORD *)(v43 - 4) = v44 + 1;
            v45 = *(_DWORD *)(v32 + 176);
            v46 = *(_DWORD *)(v32 + 184);
            v47 = 2 * v45;
            v79 = v45;
            if ( 3 * v45 < 4 * (v46 + *(_DWORD *)(v32 + 180)) )
            {
              v82 = v32;
              v79 = 2 * v45;
              v80 = 8LL * v47;
              v67 = (_QWORD *)sub_186B270(v80);
              v32 = v82;
              v68 = v67;
              if ( v47 )
              {
                memset(v67, 0, 8LL * v47);
                v32 = v82;
              }
              v69 = *(char **)(v32 + 168);
              v70 = v69;
              v71 = &v69[8 * *(unsigned int *)(v32 + 176)];
              if ( v69 != v71 )
              {
                do
                {
                  if ( *(_QWORD *)v70 > 1u )
                  {
                    v72 = 8LL * (*(_DWORD *)(*(_QWORD *)v70 + 12LL) & (v47 - 1));
                    v73 = &v68[(unsigned __int64)v72 / 8];
                    if ( v80 == v72 )
                    {
LABEL_99:
                      if ( v68 == v73 )
                      {
LABEL_111:
                        sub_1872CE0("");
                        sub_1873130(114, 213);
                      }
                      v74 = v68;
                      while ( *v74 )
                      {
                        if ( v73 == ++v74 )
                          goto LABEL_111;
                      }
                    }
                    else
                    {
                      v74 = &v68[(unsigned __int64)v72 / 8];
                      while ( *v74 )
                      {
                        if ( &v68[v80 / 8] == ++v74 )
                          goto LABEL_99;
                      }
                    }
                    *v74 = *(_QWORD *)v70;
                  }
                  v70 += 8;
                }
                while ( v71 != v70 );
                v69 = *(char **)(v32 + 168);
              }
              if ( v69 )
              {
                v81 = v32;
                sub_186B220(v69);
                v32 = v81;
              }
              *(_QWORD *)(v32 + 168) = v68;
              v46 = 0;
              *(_DWORD *)(v32 + 176) = v47;
              *(_DWORD *)(v32 + 184) = 0;
            }
            v48 = *(_DWORD *)(v11 + 12);
            v49 = *(_QWORD **)(v32 + 168);
            v50 = 8LL * v79;
            v51 = &v49[(unsigned __int64)v50 / 8];
            v52 = 8LL * (v48 & (v79 - 1));
            v53 = &v49[(unsigned __int64)v52 / 8];
            if ( v52 == v50 )
            {
              v55 = nullptr;
LABEL_77:
              if ( v49 == v53 )
              {
LABEL_87:
                sub_1872CE0("");
                sub_1873130(114, 405);
              }
              while ( 1 )
              {
                v65 = *v49;
                if ( *v49 > 1u )
                {
                  if ( *(_DWORD *)(v65 + 12) == v48 && v11 == v65 )
                  {
                    *v49 = v11;
                    goto LABEL_7;
                  }
                }
                else
                {
                  if ( !v65 )
                  {
                    if ( v55 )
                    {
                      v49 = v55;
                      *(_DWORD *)(v32 + 184) = v46 - 1;
                    }
                    *v49 = v11;
                    ++*(_DWORD *)(v32 + 180);
                    goto LABEL_7;
                  }
                  v55 = v49;
                }
                if ( v53 == ++v49 )
                  goto LABEL_87;
              }
            }
            v54 = &v49[(unsigned __int64)v52 / 8];
            v55 = nullptr;
            while ( 1 )
            {
              v56 = *v54;
              if ( *v54 > 1u )
              {
                if ( *(_DWORD *)(v56 + 12) == v48 && v11 == v56 )
                {
                  *v54 = v11;
                  goto LABEL_7;
                }
              }
              else
              {
                if ( !v56 )
                {
                  if ( v55 )
                  {
                    v54 = v55;
                    *(_DWORD *)(v32 + 184) = v46 - 1;
                  }
                  *v54 = v11;
                  ++*(_DWORD *)(v32 + 180);
                  goto LABEL_7;
                }
                v55 = v54;
              }
              if ( v51 == ++v54 )
                goto LABEL_77;
            }
          }
          v9 = v83;
          v16 = *(_QWORD *)(v11 + 40);
          if ( v83 )
          {
            v17 = *((_DWORD *)v83 - 1);
            if ( v17 == *((_DWORD *)v83 - 2) )
            {
              v58 = (3 * v17 + 1) >> 1;
              v59 = 8 * v58 + 8;
              if ( 8 * v17 + 8 >= v59 || v17 >= v58 )
              {
                v77 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v84, "Overflow encountered when expanding vector");
                *v77 = (char *)off_1C63128;
                sub_2333C0(v77 + 1, v84);
                sub_233E40((__int64)v84);
                __cxa_throw(v77, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v60 = (unsigned int *)sub_186B300(v83 - 1, v59);
              v9 = v60 + 2;
              *v60 = v58;
              v17 = v60[1];
              v83 = v9;
            }
          }
          else
          {
            v66 = (_QWORD *)sub_186B270(0x18u);
            *v66 = 2;
            v17 = 0;
            v9 = v66 + 1;
            v83 = v9;
          }
          v9[v17] = v16;
          *((_DWORD *)v9 - 1) = v17 + 1;
          break;
        default:
          goto LABEL_27;
      }
    }
    v10 = *((_DWORD *)v9 - 1);
  }
  while ( v10 );
  return sub_186B220(v9 - 1);
}

