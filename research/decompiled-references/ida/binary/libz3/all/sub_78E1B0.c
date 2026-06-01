int *__fastcall sub_78E1B0(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  unsigned int v8; // eax
  int v9; // ebp
  __int64 *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rdi
  __int64 v14; // rax
  int *result; // rax
  __int64 v16; // rax
  unsigned int v17; // r12d
  size_t v18; // rsi
  unsigned int *v19; // rax
  __int64 v20; // rax
  __int64 v21; // r13
  _QWORD *v22; // rdx
  unsigned int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  _QWORD *v26; // rcx
  unsigned int v27; // r13d
  _DWORD *v28; // rax
  __int64 v29; // rax
  int v30; // edi
  unsigned int v31; // edx
  __int64 *v32; // rsi
  __int64 v33; // rdx
  __int64 *i; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  int v39; // r14d
  int v40; // r13d
  unsigned int v41; // r14d
  size_t v42; // rsi
  unsigned int *v43; // rax
  __int64 v44; // rcx
  __int64 *v45; // rdi
  __int64 v46; // rax
  char v47; // r13
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  _DWORD *v51; // rax
  _QWORD *v52; // rdi
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rdx
  unsigned int v56; // edx
  size_t v57; // rsi
  unsigned int v58; // r14d
  unsigned int *v59; // rax
  unsigned int v60; // eax
  __int64 v61; // rax
  __int64 v62; // rsi
  int v63; // r14d
  _QWORD *v64; // rax
  _QWORD *v65; // rdi
  __int64 v66; // rax
  _QWORD *v67; // rax
  _QWORD *v68; // rcx
  __int64 v69; // rax
  unsigned int v70; // edx
  size_t v71; // rsi
  unsigned int v72; // r14d
  unsigned int *v73; // rax
  unsigned int v74; // eax
  __int64 v75; // rax
  __int64 v76; // rsi
  __int64 v77; // rax
  _QWORD *v78; // rax
  _QWORD *v79; // rcx
  _QWORD *v80; // rcx
  unsigned int v81; // r14d
  unsigned int v82; // ecx
  unsigned int *v83; // rdx
  unsigned int v84; // r14d
  unsigned int v85; // edx
  unsigned int *v86; // rax
  _QWORD *v87; // rax
  _QWORD *v88; // rax
  char **exception; // rbx
  char **v90; // r12
  _QWORD *v91; // [rsp+8h] [rbp-200h]
  __int64 v92; // [rsp+8h] [rbp-200h]
  _QWORD *v93; // [rsp+8h] [rbp-200h]
  __int64 v94; // [rsp+8h] [rbp-200h]
  unsigned int v95; // [rsp+14h] [rbp-1F4h]
  unsigned int v96; // [rsp+14h] [rbp-1F4h]
  unsigned int v97; // [rsp+18h] [rbp-1F0h]
  unsigned int v98; // [rsp+18h] [rbp-1F0h]
  unsigned int v99; // [rsp+1Ch] [rbp-1ECh]
  unsigned int v100; // [rsp+1Ch] [rbp-1ECh]
  _BYTE *v101[2]; // [rsp+20h] [rbp-1E8h] BYREF
  char v102[32]; // [rsp+30h] [rbp-1D8h] BYREF
  __int64 v103; // [rsp+50h] [rbp-1B8h] BYREF
  char v104[432]; // [rsp+58h] [rbp-1B0h] BYREF

  v8 = sub_7E6C80(*(_QWORD *)(a1 + 200));
  if ( v8 != 0x7FFFFFFF )
  {
    v9 = a4 + 2 * v8;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 192) + 40LL))(*(_QWORD *)(a1 + 192), v8, 0);
LABEL_3:
    if ( a3 )
    {
      LODWORD(v103) = v9;
      return (int *)sub_7872D0(a1, 1u, (__int64)&v103, (__int64)v10, v11, v12);
    }
    v13 = *(_QWORD **)(a1 + 88);
    if ( !v13 )
    {
      v64 = (_QWORD *)sub_186B270(0x10u);
      v13 = v64 + 1;
      *v64 = 2;
      *(_QWORD *)(a1 + 88) = v64 + 1;
      result = (int *)(v64 + 1);
      goto LABEL_7;
    }
    v14 = *((unsigned int *)v13 - 1);
    if ( (_DWORD)v14 != *((_DWORD *)v13 - 2) )
    {
      result = (int *)v13 + v14;
LABEL_7:
      *result = v9;
      ++*((_DWORD *)v13 - 1);
      return result;
    }
    v17 = (unsigned int)(3 * v14 + 1) >> 1;
    v18 = 4 * v17 + 8;
    if ( 4 * (int)v14 + 8 < (unsigned int)v18 && (unsigned int)v14 < v17 )
    {
      v19 = (unsigned int *)sub_186B300(v13 - 1, v18);
      v13 = v19 + 2;
      *v19 = v17;
      v20 = v19[1];
      *(_QWORD *)(a1 + 88) = v13;
      result = (int *)v13 + v20;
      goto LABEL_7;
    }
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(&v103, "Overflow encountered when expanding vector");
LABEL_104:
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, &v103);
    sub_233E40((__int64)&v103);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v16 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v16 + 856) == a2 )
  {
    v39 = sub_78B300(a1, a2);
    v40 = 2 * v39;
    if ( *(_BYTE *)(a1 + 273) )
    {
      v52 = sub_789F10(a1);
      v53 = v52[3];
      if ( v53 )
      {
        if ( *(_BYTE *)(v53 + 352) )
        {
          sub_7A4170(v52);
          v97 = v39 & 0x7FFFFFFF;
          v91 = sub_789F10(a1);
          v54 = (_QWORD *)v91[297];
          if ( v54 )
          {
            v55 = *((unsigned int *)v54 - 1);
            if ( (_DWORD)v55 == *((_DWORD *)v54 - 2) )
            {
              v81 = (unsigned int)(3 * v55 + 1) >> 1;
              v82 = 4 * v81 + 8;
              if ( 4 * (int)v55 + 8 >= v82 || (unsigned int)v55 >= v81 )
                goto LABEL_106;
              v83 = (unsigned int *)sub_186B300(v54 - 1, v82);
              v54 = v83 + 2;
              v91[297] = v83 + 2;
              *v83 = v81;
              v55 = v83[1];
            }
          }
          else
          {
            v87 = (_QWORD *)sub_186B270(0x10u);
            v55 = 0;
            *v87 = 2;
            v54 = v87 + 1;
            v91[297] = v54;
          }
          *((_DWORD *)v54 + v55) = v97;
          ++*((_DWORD *)v54 - 1);
          v36 = v91[291];
          if ( v36 )
          {
            v99 = *(_DWORD *)(v36 - 4);
            if ( v97 >= v99 )
            {
              v95 = v97 + 1;
              goto LABEL_62;
            }
          }
          else
          {
            v95 = v97 + 1;
            v99 = 0;
            v79 = (_QWORD *)sub_186B270(0x18u);
            *v79 = 2;
            v36 = (__int64)(v79 + 1);
            v91[291] = v36;
LABEL_62:
            while ( 1 )
            {
              v60 = *(_DWORD *)(v36 - 8);
              if ( v60 >= v95 )
                break;
              v56 = (3 * v60 + 1) >> 1;
              v57 = 8 * v56 + 8;
              v58 = v56;
              if ( 8 * v60 + 8 >= (unsigned int)v57 || v60 >= v56 )
                goto LABEL_103;
              v59 = (unsigned int *)sub_186B300((void *)(v36 - 8), v57);
              v36 = (__int64)(v59 + 2);
              v91[291] = v59 + 2;
              *v59 = v58;
            }
            *(_DWORD *)(v36 - 4) = v95;
            v61 = 8LL * v95;
            v62 = 8LL * v99;
            if ( v62 != v61 )
            {
              v92 = v36;
              memset((void *)(v36 + v62), 0, v61 - v62);
              v36 = v92;
            }
          }
          *(_QWORD *)(v36 + 8LL * v97) = a2;
        }
      }
    }
    LODWORD(v103) = v40;
LABEL_42:
    sub_7872D0(a1, 1u, (__int64)&v103, v36, v37, v38);
    v9 = v40 ^ a4;
    goto LABEL_3;
  }
  if ( *(_QWORD *)(v16 + 864) == a2 )
  {
    v63 = sub_78B300(a1, a2);
    v40 = 2 * v63;
    if ( !*(_BYTE *)(a1 + 273) || (v65 = sub_789F10(a1), (v66 = v65[3]) == 0) || !*(_BYTE *)(v66 + 352) )
    {
LABEL_67:
      LODWORD(v103) = v40 ^ 1;
      goto LABEL_42;
    }
    sub_7A4170(v65);
    v67 = sub_789F10(a1);
    v98 = v63 & 0x7FFFFFFF;
    v68 = (_QWORD *)v67[297];
    v93 = v67;
    if ( !v68 )
    {
      v88 = (_QWORD *)sub_186B270(0x10u);
      v68 = v88 + 1;
      *v88 = 2;
      v93[297] = v88 + 1;
      v69 = 0;
      goto LABEL_74;
    }
    v69 = *((unsigned int *)v68 - 1);
    if ( (_DWORD)v69 != *((_DWORD *)v68 - 2) )
    {
LABEL_74:
      *((_DWORD *)v68 + v69) = v98;
      ++*((_DWORD *)v68 - 1);
      v36 = v93[291];
      if ( v36 )
      {
        v100 = *(_DWORD *)(v36 - 4);
        if ( v98 >= v100 )
        {
          v96 = v98 + 1;
          goto LABEL_80;
        }
      }
      else
      {
        v96 = v98 + 1;
        v100 = 0;
        v80 = (_QWORD *)sub_186B270(0x18u);
        *v80 = 2;
        v36 = (__int64)(v80 + 1);
        v93[291] = v36;
LABEL_80:
        while ( 1 )
        {
          v74 = *(_DWORD *)(v36 - 8);
          if ( v74 >= v96 )
            break;
          v70 = (3 * v74 + 1) >> 1;
          v71 = 8 * v70 + 8;
          v72 = v70;
          if ( 8 * v74 + 8 >= (unsigned int)v71 || v74 >= v70 )
            goto LABEL_103;
          v73 = (unsigned int *)sub_186B300((void *)(v36 - 8), v71);
          v36 = (__int64)(v73 + 2);
          v93[291] = v73 + 2;
          *v73 = v72;
        }
        *(_DWORD *)(v36 - 4) = v96;
        v75 = 8LL * v96;
        v76 = 8LL * v100;
        if ( v76 != v75 )
        {
          v94 = v36;
          memset((void *)(v36 + v76), 0, v75 - v76);
          v36 = v94;
        }
      }
      *(_QWORD *)(v36 + 8LL * v98) = a2;
      goto LABEL_67;
    }
    v84 = (unsigned int)(3 * v69 + 1) >> 1;
    v85 = 4 * v84 + 8;
    if ( 4 * (int)v69 + 8 < v85 && (unsigned int)v69 < v84 )
    {
      v86 = (unsigned int *)sub_186B300(v68 - 1, v85);
      v68 = v86 + 2;
      v93[297] = v86 + 2;
      *v86 = v84;
      v69 = v86[1];
      goto LABEL_74;
    }
LABEL_106:
    v90 = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(&v103, "Overflow encountered when expanding vector");
    *v90 = (char *)off_1C63128;
    sub_2333C0(v90 + 1, &v103);
    sub_233E40((__int64)&v103);
    __cxa_throw(v90, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  if ( !*(_BYTE *)(a1 + 273) )
  {
    if ( *(_WORD *)(a2 + 4) )
    {
      std::ostringstream::basic_ostringstream(&v103);
      sub_1606360(v101, a2, *(_QWORD *)(a1 + 8), 0, 0, 0);
      sub_160E8B0(&v103, v101);
      sub_18572D0(v102);
      std::stringbuf::str(v101, v104);
      sub_787480(v101[0], (size_t)v101[1]);
    }
    v21 = *(_QWORD *)(a2 + 16);
    if ( *(_DWORD *)(a2 + 24) )
    {
      if ( !v21 )
      {
LABEL_21:
        v22 = *(_QWORD **)(a1 + 264);
        if ( v22 )
        {
          v23 = *((_DWORD *)v22 - 1);
          if ( v23 == *((_DWORD *)v22 - 2) )
          {
            v41 = (3 * v23 + 1) >> 1;
            v42 = 8 * v41 + 8;
            if ( 8 * v23 + 8 >= (unsigned int)v42 || v23 >= v41 )
            {
LABEL_103:
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v103, "Overflow encountered when expanding vector");
              goto LABEL_104;
            }
            v43 = (unsigned int *)sub_186B300(v22 - 1, v42);
            v44 = v43[1];
            v22 = v43 + 2;
            *v43 = v41;
            *(_QWORD *)(a1 + 264) = v43 + 2;
            LODWORD(v43) = v44;
            v26 = &v22[v44];
            v25 = (_DWORD)v43 + 1;
          }
          else
          {
            v24 = v23;
            v25 = v23 + 1;
            v26 = &v22[v24];
          }
        }
        else
        {
          v78 = (_QWORD *)sub_186B270(0x18u);
          v22 = v78 + 1;
          *v78 = 2;
          v25 = 1;
          *(_QWORD *)(a1 + 264) = v22;
          v26 = v22;
        }
        *v26 = v21;
        *((_DWORD *)v22 - 1) = v25;
        goto LABEL_25;
      }
    }
    else
    {
      v51 = *(_DWORD **)(v21 + 24);
      if ( !v51 || *v51 == -1 )
      {
LABEL_25:
        v27 = sub_78B300(a1, a2);
        if ( *(_BYTE *)(a1 + 272)
          || *(_WORD *)(a2 + 4)
          || *(_DWORD *)(a2 + 24)
          || (v28 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) != nullptr && *v28 != -1 )
        {
LABEL_38:
          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 192) + 32LL))(*(_QWORD *)(a1 + 192), v27);
        }
        else
        {
          v29 = *(unsigned int *)(a1 + 176);
          v30 = *(_DWORD *)(a2 + 12);
          v10 = *(__int64 **)(a1 + 168);
          v31 = v29 - 1;
          v29 *= 8;
          v32 = (__int64 *)((char *)v10 + v29);
          v33 = 8LL * (v30 & v31);
          v11 = (__int64)&v10[(unsigned __int64)v33 / 8];
          if ( v33 != v29 )
          {
            for ( i = &v10[(unsigned __int64)v33 / 8]; v32 != i; ++i )
            {
              v35 = *i;
              if ( (unsigned __int64)*i > 1 )
              {
                if ( *(_DWORD *)(v35 + 12) == v30 && v35 == a2 )
                  goto LABEL_38;
              }
              else if ( !v35 )
              {
                goto LABEL_39;
              }
            }
          }
          for ( ; (__int64 *)v11 != v10; ++v10 )
          {
            v77 = *v10;
            if ( (unsigned __int64)*v10 > 1 )
            {
              if ( *(_DWORD *)(v77 + 12) == v30 && v77 == a2 )
                goto LABEL_38;
            }
            else if ( !v77 )
            {
              break;
            }
          }
        }
LABEL_39:
        v9 = a4 + 2 * v27;
        goto LABEL_3;
      }
    }
    ++*(_DWORD *)(v21 + 8);
    goto LABEL_21;
  }
  v45 = (__int64 *)sub_789F10(a1);
  v46 = *v45;
  v47 = *(_BYTE *)(a1 + 274);
  *(_BYTE *)(a1 + 274) = 0;
  result = (int *)(*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(v46 + 472))(v45, a2, a4, a3);
  LODWORD(v101[0]) = (_DWORD)result;
  *(_BYTE *)(a1 + 274) = v47;
  if ( (_DWORD)result != -2 )
  {
    if ( a3 )
    {
      LODWORD(v103) = (_DWORD)result;
      return (int *)sub_7872D0(a1, 1u, (__int64)&v103, v48, v49, v50);
    }
    else
    {
      return (int *)sub_787180((_QWORD *)(a1 + 88), (unsigned int *)v101);
    }
  }
  return result;
}

