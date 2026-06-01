__int64 __fastcall sub_DB5410(__int64 a1, __int64 *a2)
{
  char **exception; // rbp
  char **v3; // rbp
  __int64 result; // rax
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 i; // r13
  __int64 v8; // rbp
  __int64 v9; // rax
  _QWORD *v10; // rdx
  int v11; // esi
  unsigned int v12; // ecx
  __int64 v13; // r10
  _QWORD *v14; // rcx
  __int64 v15; // r10
  _QWORD *v16; // rdi
  _QWORD *j; // rax
  _QWORD *v18; // rbx
  _QWORD *v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rcx
  __int64 *v22; // rcx
  __int64 v23; // r12
  __int64 v24; // rbp
  __int64 v25; // r14
  _QWORD *v26; // r13
  __int64 *v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rax
  int v30; // edi
  unsigned int v31; // edx
  __int64 *v32; // rsi
  __int64 v33; // rdx
  __int64 *v34; // r10
  __int64 *v35; // rax
  __int64 v36; // rdx
  unsigned int v37; // edx
  __int64 v38; // rcx
  int v39; // edx
  _QWORD *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned int v43; // edi
  unsigned int v44; // r11d
  unsigned int v45; // r10d
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned int v48; // eax
  __int64 v49; // rax
  __int64 v50; // r10
  int v51; // esi
  __int64 v52; // r11
  __int64 v53; // rdx
  __int64 v54; // rdi
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rdx
  _DWORD *v58; // rax
  unsigned int v59; // ebx
  unsigned int v60; // ecx
  unsigned int *v61; // rax
  __int64 v62; // rcx
  unsigned int v63; // ebx
  unsigned int v64; // ecx
  unsigned int *v65; // rdx
  __int64 v66; // rcx
  _QWORD *v67; // rax
  _QWORD *v68; // rsi
  __int64 v69; // rdi
  unsigned int v70; // edx
  int v71; // eax
  __int64 v72; // rbp
  __int64 v73; // r12
  _QWORD *v74; // rax
  _QWORD *v75; // rdx
  __int64 v76; // rdx
  __int64 v77; // rdx
  __int64 v78; // rsi
  unsigned int v79; // edi
  __int64 v80; // rdx
  char *v81; // rbp
  __int64 v82; // r13
  __int64 v83; // rbx
  unsigned __int64 v84; // rcx
  __int64 v85; // rdx
  __int64 v86; // rsi
  __int64 v87; // rdx
  __int64 v88; // rcx
  _QWORD *v89; // rax
  char *v90; // rbx
  __int64 v91; // r13
  char *v92; // r12
  char *v93; // rbp
  __int64 v94; // rax
  __int64 v95; // [rsp+0h] [rbp-98h]
  __int64 v96; // [rsp+0h] [rbp-98h]
  _QWORD *v97; // [rsp+8h] [rbp-90h]
  __int64 v99; // [rsp+18h] [rbp-80h]
  __int64 v100; // [rsp+20h] [rbp-78h]
  __int64 v101; // [rsp+28h] [rbp-70h]
  __int64 v102[11]; // [rsp+40h] [rbp-58h] BYREF

  result = *(_QWORD *)(a1 + 152);
  if ( !result )
    return result;
  v5 = *(unsigned int *)(result - 4);
  if ( !(_DWORD)v5 )
    return result;
  v6 = 0;
  v97 = (_QWORD *)(a1 + 56);
  for ( i = a1; ; result = *(_QWORD *)(i + 152) )
  {
    v8 = *(_QWORD *)(result + 8 * v6);
    v9 = *(unsigned int *)(i + 128);
    v10 = *(_QWORD **)(i + 120);
    v11 = *(_DWORD *)(v8 + 12);
    v12 = v9 - 1;
    v9 *= 24;
    v13 = 3LL * (v11 & v12);
    v14 = (_QWORD *)((char *)v10 + v9);
    v15 = 8 * v13;
    v16 = &v10[(unsigned __int64)v15 / 8];
    if ( v15 != v9 )
    {
      for ( j = &v10[(unsigned __int64)v15 / 8]; v14 != j; j += 3 )
      {
        v18 = (_QWORD *)*j;
        if ( *j > 1u )
        {
          if ( *((_DWORD *)v18 + 3) == v11 && (_QWORD *)v8 == v18 )
          {
            v18 = j;
            goto LABEL_11;
          }
        }
        else if ( !v18 )
        {
          goto LABEL_11;
        }
      }
    }
    if ( v10 != v16 )
      break;
LABEL_26:
    v18 = nullptr;
    if ( *(_BYTE *)(i + 113) )
      goto LABEL_27;
LABEL_12:
    v19 = (_QWORD *)*a2;
    if ( *a2 )
    {
      v20 = *((_DWORD *)v19 - 1);
      if ( v20 == *((_DWORD *)v19 - 2) )
      {
        v59 = (3 * v20 + 1) >> 1;
        v60 = 8 * v59 + 8;
        if ( 8 * v20 + 8 >= v60 || v20 >= v59 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v102, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v102);
          sub_233E40((__int64)v102);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v61 = (unsigned int *)sub_186B300(v19 - 1, v60);
        v62 = v61[1];
        v19 = v61 + 2;
        *v61 = v59;
        *a2 = (__int64)(v61 + 2);
        LODWORD(v61) = v62;
        v22 = &v19[v62];
        result = (unsigned int)((_DWORD)v61 + 1);
      }
      else
      {
        v21 = v20;
        result = v20 + 1;
        v22 = &v19[v21];
      }
    }
    else
    {
      v67 = (_QWORD *)sub_186B270(0x18u);
      *v67 = 2;
      v19 = v67 + 1;
      *a2 = (__int64)(v67 + 1);
      v22 = v67 + 1;
      result = 1;
    }
    *v22 = v8;
    *((_DWORD *)v19 - 1) = result;
LABEL_16:
    if ( v5 == ++v6 )
      return result;
LABEL_17:
    ;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v18 = (_QWORD *)*v10;
      if ( *v10 > 1u )
        break;
      if ( !v18 )
        goto LABEL_11;
      v10 += 3;
      if ( v16 == v10 )
        goto LABEL_26;
    }
    if ( *((_DWORD *)v18 + 3) == v11 && (_QWORD *)v8 == v18 )
      break;
    v10 += 3;
    if ( v16 == v10 )
      goto LABEL_26;
  }
  v18 = v10;
LABEL_11:
  if ( !*(_BYTE *)(i + 113) )
    goto LABEL_12;
LABEL_27:
  v95 = v8;
  v23 = 0;
  v24 = v6;
  v25 = i;
  v26 = v18;
  do
  {
LABEL_28:
    if ( (_DWORD)v24 == (_DWORD)v23 )
      goto LABEL_36;
    v27 = *(__int64 **)(v25 + 120);
    v28 = *(_QWORD *)(*(_QWORD *)(v25 + 152) + 8 * v23);
    v29 = *(unsigned int *)(v25 + 128);
    v30 = *(_DWORD *)(v28 + 12);
    v31 = v29 - 1;
    v29 *= 24;
    v32 = (__int64 *)((char *)v27 + v29);
    v33 = 24LL * (v30 & v31);
    v34 = &v27[(unsigned __int64)v33 / 8];
    if ( v33 == v29 )
    {
LABEL_52:
      while ( v34 != v27 )
      {
        v47 = *v27;
        if ( (unsigned __int64)*v27 > 1 )
        {
          if ( *(_DWORD *)(v47 + 12) == v30 && v28 == v47 )
          {
            v35 = v27;
            goto LABEL_43;
          }
        }
        else if ( !v47 )
        {
          if ( v5 == ++v23 )
            goto LABEL_37;
          goto LABEL_28;
        }
        v27 += 3;
      }
LABEL_36:
      if ( v5 == ++v23 )
        break;
      goto LABEL_28;
    }
    v35 = &v27[(unsigned __int64)v33 / 8];
    while ( 1 )
    {
      v36 = *v35;
      if ( (unsigned __int64)*v35 > 1 )
        break;
      if ( !v36 )
        goto LABEL_36;
LABEL_33:
      v35 += 3;
      if ( v32 == v35 )
        goto LABEL_52;
    }
    if ( *(_DWORD *)(v36 + 12) != v30 || v28 != v36 )
      goto LABEL_33;
LABEL_43:
    v41 = v26[1];
    v42 = v35[1];
    if ( !v41 )
    {
      if ( !v42 )
        goto LABEL_67;
      v44 = *(_DWORD *)(v42 - 4);
      v45 = 0;
      goto LABEL_87;
    }
    v43 = *(_DWORD *)(v41 - 4);
    if ( !v42 )
    {
      if ( v43 )
      {
        v45 = 0;
        goto LABEL_62;
      }
LABEL_67:
      if ( !(unsigned __int8)sub_DB2B40(v97, *(_DWORD *)(v25 + 96), v95, *(_QWORD *)(*(_QWORD *)(v25 + 152) + 8 * v23))
        || (unsigned __int8)sub_DB2B40(v97, *(_DWORD *)(v25 + 96), v28, v95) )
      {
        goto LABEL_36;
      }
      i = v25;
      v6 = v24;
      v49 = *(unsigned int *)(i + 128);
      v50 = *(_QWORD *)(i + 120);
      v51 = *(_DWORD *)(v95 + 12);
      v52 = 24LL * (v51 & (unsigned int)(v49 - 1));
      v53 = 24 * v49;
      v54 = v50 + v52;
      v55 = v50 + 24 * v49;
      result = v50 + v52;
      if ( v52 == v53 )
      {
LABEL_77:
        if ( v50 != v54 )
        {
          result = *(_QWORD *)(i + 120);
          while ( 1 )
          {
            v57 = *(_QWORD *)result;
            if ( *(_QWORD *)result > 1u )
            {
              if ( *(_DWORD *)(v57 + 12) == v51 && v95 == v57 )
                goto LABEL_103;
            }
            else if ( !v57 )
            {
              goto LABEL_16;
            }
            result += 24;
            if ( v54 == result )
              goto LABEL_16;
          }
        }
        goto LABEL_16;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          v56 = *(_QWORD *)result;
          if ( *(_QWORD *)result > 1u )
            break;
          if ( !v56 )
            goto LABEL_16;
          result += 24;
          if ( v55 == result )
            goto LABEL_77;
        }
        if ( *(_DWORD *)(v56 + 12) == v51 && v95 == v56 )
          break;
        result += 24;
        if ( v55 == result )
          goto LABEL_77;
      }
LABEL_103:
      v68 = (_QWORD *)(result + 24);
      v69 = *(unsigned int *)(i + 132);
      if ( v55 == result + 24 )
        v68 = *(_QWORD **)(i + 120);
      v70 = v69 - 1;
      if ( !*v68 )
      {
        *(_QWORD *)result = 0;
        *(_DWORD *)(i + 132) = v70;
        goto LABEL_16;
      }
      *(_QWORD *)result = 1;
      v71 = *(_DWORD *)(i + 136);
      *(_DWORD *)(i + 132) = v70;
      result = (unsigned int)(v71 + 1);
      if ( v70 < 0x40 )
        v70 = 64;
      *(_DWORD *)(i + 136) = result;
      if ( v70 < (unsigned int)result )
      {
        result = sub_186AF10(v69);
        if ( !(_BYTE)result )
        {
          v72 = *(unsigned int *)(i + 128);
          v73 = sub_186B270(24 * v72);
          v74 = (_QWORD *)(v73 + 24 * v72);
          v75 = (_QWORD *)v73;
          if ( (_DWORD)v72 )
          {
            do
            {
              *v75 = 0;
              v75 += 3;
              *((_DWORD *)v75 - 2) = 0;
            }
            while ( v74 != v75 );
            v76 = v73;
            if ( ((24 * (_BYTE)v72) & 8) == 0 || (*(_QWORD *)(v73 + 8) = 0, v76 = v73 + 24, (_QWORD *)(v73 + 24) != v74) )
            {
              do
              {
                *(_QWORD *)(v76 + 8) = 0;
                v76 += 48;
                *(_QWORD *)(v76 - 16) = 0;
              }
              while ( (_QWORD *)v76 != v74 );
            }
          }
          v77 = *(unsigned int *)(i + 128);
          v78 = *(_QWORD *)(i + 120);
          v79 = v77 - 1;
          result = v77;
          v80 = 24 * v77;
          v81 = (char *)(v78 + v80);
          v99 = v73 + v80;
          if ( v78 == v78 + v80 )
          {
LABEL_134:
            if ( v81 )
            {
              if ( (_DWORD)result )
              {
                v96 = i;
                v90 = v81;
                v91 = v73;
                v92 = v81;
                v93 = &v81[24 * result];
                do
                {
                  while ( 1 )
                  {
                    v94 = *((_QWORD *)v90 + 1);
                    if ( !v94 )
                      break;
                    v90 += 24;
                    sub_186B220((void *)(v94 - 8));
                    if ( v93 == v90 )
                      goto LABEL_141;
                  }
                  v90 += 24;
                }
                while ( v90 != v93 );
LABEL_141:
                v81 = v92;
                v73 = v91;
                i = v96;
              }
              result = sub_186B220(v81);
            }
            *(_QWORD *)(i + 120) = v73;
            *(_DWORD *)(i + 136) = 0;
            goto LABEL_16;
          }
          v100 = i;
          v82 = v78 + 8;
          v83 = v80;
          while ( 2 )
          {
            v84 = *(_QWORD *)(v82 - 8);
            if ( v84 > 1 )
            {
              v85 = 24LL * (*(_DWORD *)(v84 + 12) & v79);
              v86 = v73 + v85;
              if ( v83 == v85 )
              {
LABEL_144:
                if ( v86 == v73 )
                {
LABEL_151:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v87 = v73;
                while ( *(_QWORD *)v87 )
                {
                  v87 += 24;
                  if ( v86 == v87 )
                    goto LABEL_151;
                }
                *(_QWORD *)v87 = v84;
                if ( v82 != v87 + 8 )
                {
                  v88 = *(_QWORD *)(v87 + 8);
                  if ( v88 )
                  {
LABEL_126:
                    v101 = v87;
                    sub_186B220((void *)(v88 - 8));
                    v87 = v101;
                  }
LABEL_127:
                  *(_QWORD *)(v87 + 8) = 0;
                  *(_QWORD *)(v87 + 8) = *(_QWORD *)v82;
                  *(_QWORD *)v82 = 0;
                }
              }
              else
              {
                v87 = v73 + v85;
                while ( *(_QWORD *)v87 )
                {
                  v87 += 24;
                  if ( v99 == v87 )
                    goto LABEL_144;
                }
                *(_QWORD *)v87 = v84;
                if ( v82 != v87 + 8 )
                {
                  v88 = *(_QWORD *)(v87 + 8);
                  if ( v88 )
                    goto LABEL_126;
                  goto LABEL_127;
                }
              }
              *(_DWORD *)(v87 + 16) = *(_DWORD *)(v82 + 8);
            }
            if ( v81 == (char *)(v82 + 16) )
            {
              i = v100;
              result = *(unsigned int *)(v100 + 128);
              v81 = *(char **)(v100 + 120);
              goto LABEL_134;
            }
            v82 += 24;
            continue;
          }
        }
      }
      goto LABEL_16;
    }
    v44 = *(_DWORD *)(v42 - 4);
    v45 = v44;
    if ( v43 <= v44 )
      v45 = *(_DWORD *)(v41 - 4);
    v46 = 0;
    if ( v45 )
    {
      while ( *(_DWORD *)(v41 + v46) == *(_DWORD *)(v42 + v46) )
      {
        v46 += 4;
        if ( 4LL * v45 == v46 )
          goto LABEL_61;
      }
      goto LABEL_36;
    }
LABEL_61:
    if ( v44 < v43 )
    {
LABEL_62:
      v48 = v45;
      do
      {
        if ( *(_DWORD *)(v41 + 4LL * v48) )
          goto LABEL_36;
        ++v48;
      }
      while ( v48 < v43 );
      if ( !v42 )
        goto LABEL_67;
      v44 = *(_DWORD *)(v42 - 4);
    }
LABEL_87:
    if ( v45 >= v44 )
      goto LABEL_67;
    v58 = (_DWORD *)(v42 + 4LL * v45);
    while ( !*v58 )
    {
      if ( ++v58 == (_DWORD *)(v42 + 4 * (v45 + (unsigned __int64)(v44 - 1 - v45)) + 4) )
        goto LABEL_67;
    }
    ++v23;
  }
  while ( v5 != v23 );
LABEL_37:
  i = v25;
  result = *a2;
  if ( *a2 )
  {
    v37 = *(_DWORD *)(result - 4);
    if ( v37 == *(_DWORD *)(result - 8) )
    {
      v63 = (3 * v37 + 1) >> 1;
      v64 = 8 * v63 + 8;
      if ( 8 * v37 + 8 >= v64 || v37 >= v63 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v102, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v102);
        sub_233E40((__int64)v102);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v65 = (unsigned int *)sub_186B300((void *)(result - 8), v64);
      result = (__int64)(v65 + 2);
      v66 = v65[1];
      *v65 = v63;
      *a2 = (__int64)(v65 + 2);
      LODWORD(v65) = v66;
      v40 = (_QWORD *)(result + 8 * v66);
      v39 = (_DWORD)v65 + 1;
    }
    else
    {
      v38 = v37;
      v39 = v37 + 1;
      v40 = (_QWORD *)(result + 8 * v38);
    }
  }
  else
  {
    v89 = (_QWORD *)sub_186B270(0x18u);
    v39 = 1;
    *v89 = 2;
    result = (__int64)(v89 + 1);
    *a2 = result;
    v40 = (_QWORD *)result;
  }
  v6 = v24 + 1;
  *v40 = v95;
  *(_DWORD *)(result - 4) = v39;
  if ( v5 != v24 + 1 )
    goto LABEL_17;
  return result;
}

