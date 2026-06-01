unsigned int *__fastcall sub_CCACD0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rbp
  __int64 v7; // rdi
  _DWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _DWORD *v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // rsi
  unsigned int v15; // eax
  void *v16; // rdi
  __int64 *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // r15d
  _DWORD *v21; // rax
  __int64 v22; // r8
  __int64 v23; // rbp
  _DWORD *v24; // rax
  _DWORD *v25; // rax
  unsigned int v26; // eax
  unsigned int v27; // ebp
  unsigned int v28; // eax
  unsigned int v29; // edx
  _QWORD *v30; // rbx
  _QWORD *v31; // rdx
  __int64 v32; // rax
  unsigned int *result; // rax
  _DWORD *v34; // rax
  _DWORD *v35; // rax
  __int64 v36; // rsi
  char v37; // al
  _DWORD *v38; // rax
  __int64 v39; // rsi
  char v40; // al
  unsigned int v41; // r12d
  unsigned int v42; // ecx
  unsigned int *v43; // rax
  _QWORD *v44; // rax
  _DWORD *v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rbp
  unsigned int v48; // eax
  __int64 v49; // rdx
  unsigned int v50; // ecx
  unsigned int v51; // eax
  _QWORD *v52; // rbx
  _QWORD *v53; // rdx
  __int64 v54; // rax
  unsigned int *v55; // rax
  void *v56; // rbx
  unsigned int v57; // ebp
  size_t v58; // rsi
  unsigned int *v59; // rax
  _QWORD *v60; // rax
  _DWORD *v61; // rax
  __int64 v62; // rsi
  unsigned int v63; // eax
  __int64 v64; // rdx
  unsigned int v65; // ebp
  _QWORD *v66; // rbx
  _QWORD *v67; // rdx
  __int64 v68; // rax
  unsigned int *v69; // rax
  unsigned int v70; // ecx
  size_t v71; // rsi
  unsigned int *v72; // rax
  _QWORD *v73; // rax
  char **exception; // rbp
  __int64 v75; // rdx
  char **v76; // rbp
  __int64 v77; // rdx
  char **v78; // rbx
  __int64 v79; // rdx
  __int64 v80; // [rsp+0h] [rbp-A8h]
  void *v81; // [rsp+0h] [rbp-A8h]
  unsigned int v82; // [rsp+0h] [rbp-A8h]
  unsigned int v83; // [rsp+0h] [rbp-A8h]
  unsigned int v84; // [rsp+0h] [rbp-A8h]
  unsigned int v85; // [rsp+0h] [rbp-A8h]
  __int64 v86; // [rsp+8h] [rbp-A0h]
  void *v87; // [rsp+8h] [rbp-A0h]
  int v88; // [rsp+10h] [rbp-98h]
  __int64 v89; // [rsp+18h] [rbp-90h]
  char v90; // [rsp+2Fh] [rbp-79h] BYREF
  _QWORD v91[2]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v92[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v93; // [rsp+50h] [rbp-58h] BYREF
  __int64 v94; // [rsp+58h] [rbp-50h]
  __int64 v95; // [rsp+60h] [rbp-48h] BYREF
  __int64 v96; // [rsp+68h] [rbp-40h]

  v3 = a1 + 8;
  v5 = a2;
  v7 = a2;
  v80 = v3;
  v8 = *(_DWORD **)(sub_15D1F10(a2) + 24);
  if ( !v8 || *v8 != 5 || v8[1] != 1 )
    goto LABEL_3;
  if ( *(_WORD *)(a2 + 4) )
    goto LABEL_10;
  v11 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( *(_DWORD *)(a2 + 24) )
  {
    if ( !v11 || *v11 != 5 )
      goto LABEL_10;
    goto LABEL_35;
  }
  if ( v11 && *v11 != -1 )
  {
    if ( *v11 != 5 )
      goto LABEL_10;
LABEL_35:
    if ( !v11[1] )
    {
      v5 = a3;
      a3 = a2;
    }
LABEL_10:
    v91[0] = 0;
    v91[1] = 0;
    v92[0] = 1;
    v92[1] = 0;
    if ( !(unsigned __int8)sub_1666AE0(v80, a3, v91, &v93) )
      ((void (__noreturn *)(void))sub_163AEC)();
    v12 = a1 + 136;
    if ( (v92[0] & 0x100000000LL) != 0
      || LODWORD(v92[0]) != 1
      || (*(_BYTE *)(a1 + 156) & 1) != 0
      || *(_DWORD *)(a1 + 152) != 1 )
    {
      LOBYTE(v13) = sub_1848D40(qword_1C7F2C0, v91, v12);
    }
    else if ( (v91[0] & 0x100000000LL) != 0 || (*(_BYTE *)(a1 + 140) & 1) != 0 )
    {
      v13 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v91, v12) >> 31;
    }
    else
    {
      LOBYTE(v13) = SLODWORD(v91[0]) < *(_DWORD *)(a1 + 136);
    }
    if ( (_BYTE)v13
      || ((v14 = a1 + 104, (*(_BYTE *)(a1 + 124) & 1) != 0)
       || *(_DWORD *)(a1 + 120) != 1
       || (v92[0] & 0x100000000LL) != 0
       || LODWORD(v92[0]) != 1
        ? (LOBYTE(v15) = sub_1848D40(qword_1C7F2C0, v14, v91))
        : (*(_BYTE *)(a1 + 108) & 1) != 0 || (v91[0] & 0x100000000LL) != 0
        ? (v15 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v14, v91) >> 31)
        : (LOBYTE(v15) = *(_DWORD *)(a1 + 104) < SLODWORD(v91[0])),
          (_BYTE)v15) )
    {
      ((void (__noreturn *)(void))sub_163AEC)();
    }
    v16 = qword_1C7F2C0;
    v17 = v91;
    v88 = sub_182D050(qword_1C7F2C0, v91);
    v20 = v88;
    if ( *(_WORD *)(v5 + 4)
      || (v21 = *(_DWORD **)(*(_QWORD *)(v5 + 16) + 24LL)) == nullptr
      || *v21 != 5
      || v21[1] != 6
      || *(_DWORD *)(v5 + 24) != 2 )
    {
      sub_163AEC(v16, v91, v18, v19);
    }
    v22 = *(_QWORD *)(v5 + 32);
    v23 = *(_QWORD *)(v5 + 40);
    if ( !*(_WORD *)(v22 + 4) )
    {
      v16 = (void *)*(unsigned int *)(v22 + 24);
      if ( !(_DWORD)v16 )
      {
        v24 = *(_DWORD **)(*(_QWORD *)(v22 + 16) + 24LL);
        if ( !v24 || *v24 == -1 )
        {
          if ( *(_WORD *)(v23 + 4) )
            goto LABEL_34;
          v18 = *(_QWORD *)(v23 + 16);
          v19 = *(unsigned int *)(v23 + 24);
          v38 = *(_DWORD **)(v18 + 24);
          if ( !v38 )
          {
            if ( (_DWORD)v19 )
              goto LABEL_34;
            goto LABEL_50;
          }
          if ( *v38 != 5 || v38[1] != 9 || (_DWORD)v19 != 2 )
          {
            if ( (_DWORD)v19 )
              goto LABEL_34;
            v34 = *(_DWORD **)(v18 + 24);
            goto LABEL_49;
          }
          v39 = *(_QWORD *)(v23 + 32);
          v89 = v22;
          v93 = 0;
          v94 = 0;
          v95 = 1;
          v96 = 0;
          v40 = sub_1666AE0(v80, v39, &v93, &v90);
          v87 = qword_1C7F2C0;
          if ( v40 && (v93 & 0x100000000LL) == 0 && (_DWORD)v93 == -1 && (v95 & 0x100000000LL) == 0 && (_DWORD)v95 == 1 )
          {
            sub_182CBA0(qword_1C7F2C0, &v93);
            v16 = v87;
            v17 = &v95;
            sub_182CBA0(v87, &v95);
            v19 = *(_QWORD *)(v23 + 40);
            v22 = v89;
            if ( !*(_WORD *)(v19 + 4) )
            {
              v17 = (__int64 *)*(unsigned int *)(v19 + 24);
              if ( !(_DWORD)v17 )
              {
                v61 = *(_DWORD **)(*(_QWORD *)(v19 + 16) + 24LL);
                if ( !v61 || *v61 == -1 )
                {
                  v62 = *(_QWORD *)(v23 + 40);
                  v84 = sub_CCA120(a1, v89);
                  v63 = sub_CCA120(a1, v62);
                  v64 = v84;
                  v65 = v63;
                  if ( v84 == v63 )
                    ((void (__noreturn *)(void))sub_163AEC)();
                  if ( v84 < v63 )
                  {
                    v64 = v63;
                    v65 = v84;
                    v20 = -v88;
                  }
                  v66 = (_QWORD *)(*(_QWORD *)(a1 + 80) + 8 * v64);
                  v67 = (_QWORD *)*v66;
                  if ( *v66 )
                  {
                    v68 = *((unsigned int *)v67 - 1);
                    if ( (_DWORD)v68 == *((_DWORD *)v67 - 2) )
                    {
                      v70 = (unsigned int)(3 * v68 + 1) >> 1;
                      v71 = 8 * v70 + 8;
                      if ( 8 * (int)v68 + 8 >= (unsigned int)v71 || (unsigned int)v68 >= v70 )
                      {
                        exception = (char **)__cxa_allocate_exception(0x28u);
                        sub_163A6C(&v93, "Overflow encountered when expanding vector", v75);
                        *exception = (char *)off_1C63128;
                        sub_2333C0(exception + 1, &v93);
                        sub_233E40((__int64)&v93);
                        __cxa_throw(
                          exception,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v85 = (unsigned int)(3 * v68 + 1) >> 1;
                      v72 = (unsigned int *)sub_186B300(v67 - 1, v71);
                      v67 = v72 + 2;
                      *v66 = v72 + 2;
                      *v72 = v85;
                      v69 = &v72[2 * v72[1] + 2];
                    }
                    else
                    {
                      v69 = (unsigned int *)&v67[v68];
                    }
                  }
                  else
                  {
                    v73 = (_QWORD *)sub_186B270(0x18u);
                    *v73 = 2;
                    v67 = v73 + 1;
                    *v66 = v73 + 1;
                    v69 = (unsigned int *)(v73 + 1);
                  }
                  *v69 = v65;
                  v69[1] = v20;
                  ++*((_DWORD *)v67 - 1);
LABEL_101:
                  v56 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, v91);
                  return (unsigned int *)sub_182CBA0(v56, v92);
                }
              }
            }
          }
          else
          {
            sub_182CBA0(qword_1C7F2C0, &v93);
            v16 = v87;
            v17 = &v95;
            sub_182CBA0(v87, &v95);
            v22 = v89;
          }
        }
      }
    }
    if ( *(_WORD *)(v23 + 4) )
      goto LABEL_34;
    v18 = *(unsigned int *)(v23 + 24);
    if ( (_DWORD)v18 )
      goto LABEL_34;
    v34 = *(_DWORD **)(*(_QWORD *)(v23 + 16) + 24LL);
    if ( !v34 )
    {
LABEL_50:
      if ( *(_WORD *)(v22 + 4) )
        goto LABEL_34;
      v35 = *(_DWORD **)(*(_QWORD *)(v22 + 16) + 24LL);
      if ( !v35 || *v35 != 5 || v35[1] != 9 || *(_DWORD *)(v22 + 24) != 2 )
        goto LABEL_34;
      v36 = *(_QWORD *)(v22 + 32);
      v86 = v22;
      v93 = 0;
      v94 = 0;
      v95 = 1;
      v96 = 0;
      v37 = sub_1666AE0(v80, v36, &v93, &v90);
      v81 = qword_1C7F2C0;
      if ( !v37 || (v93 & 0x100000000LL) != 0 || (_DWORD)v93 != -1 || (v95 & 0x100000000LL) != 0 || (_DWORD)v95 != 1 )
      {
        sub_182CBA0(qword_1C7F2C0, &v93);
        v17 = &v95;
        v16 = v81;
        sub_182CBA0(v81, &v95);
        goto LABEL_34;
      }
      sub_182CBA0(qword_1C7F2C0, &v93);
      v16 = v81;
      v17 = &v95;
      sub_182CBA0(v81, &v95);
      v18 = *(_QWORD *)(v86 + 40);
      if ( *(_WORD *)(v18 + 4)
        || *(_DWORD *)(v18 + 24)
        || (v45 = *(_DWORD **)(*(_QWORD *)(v18 + 16) + 24LL)) != nullptr && *v45 != -1 )
      {
LABEL_34:
        sub_163AEC(v16, v17, v18, v19);
      }
      v46 = *(_QWORD *)(v86 + 40);
      v47 = (unsigned int)sub_CCA120(a1, v23);
      v48 = sub_CCA120(a1, v46);
      v50 = v48;
      if ( (_DWORD)v47 == v48 )
        sub_163AEC(a1, v46, v49, v48);
      if ( (unsigned int)v47 < v48 )
      {
        v51 = v47;
        v47 = v50;
        v50 = v51;
        v20 = -v88;
      }
      v52 = (_QWORD *)(*(_QWORD *)(a1 + 80) + 8 * v47);
      v53 = (_QWORD *)*v52;
      if ( *v52 )
      {
        v54 = *((unsigned int *)v53 - 1);
        if ( (_DWORD)v54 == *((_DWORD *)v53 - 2) )
        {
          v57 = (unsigned int)(3 * v54 + 1) >> 1;
          v58 = 8 * v57 + 8;
          if ( 8 * (int)v54 + 8 >= (unsigned int)v58 || (unsigned int)v54 >= v57 )
          {
            v76 = (char **)__cxa_allocate_exception(0x28u);
            sub_163A6C(&v93, "Overflow encountered when expanding vector", v77);
            *v76 = (char *)off_1C63128;
            sub_2333C0(v76 + 1, &v93);
            sub_233E40((__int64)&v93);
            __cxa_throw(v76, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v82 = v50;
          v59 = (unsigned int *)sub_186B300(v53 - 1, v58);
          v53 = v59 + 2;
          v50 = v82;
          *v52 = v59 + 2;
          *v59 = v57;
          v55 = &v59[2 * v59[1] + 2];
        }
        else
        {
          v55 = (unsigned int *)&v53[v54];
        }
      }
      else
      {
        v83 = v50;
        v60 = (_QWORD *)sub_186B270(0x18u);
        v53 = v60 + 1;
        *v60 = 2;
        v50 = v83;
        *v52 = v60 + 1;
        v55 = (unsigned int *)(v60 + 1);
      }
      *v55 = v50;
      v55[1] = v20;
      ++*((_DWORD *)v53 - 1);
      goto LABEL_101;
    }
LABEL_49:
    if ( *v34 != -1 )
      goto LABEL_34;
    goto LABEL_50;
  }
  if ( *(_WORD *)(a3 + 4) )
    goto LABEL_10;
  if ( *(_DWORD *)(a3 + 24) )
    goto LABEL_10;
  v25 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
  if ( v25 )
  {
    if ( *v25 != -1 )
      goto LABEL_10;
  }
  v26 = sub_CCA120(a1, a2);
  a2 = a3;
  v7 = a1;
  v27 = v26;
  v28 = sub_CCA120(a1, a3);
  if ( v27 == v28 )
LABEL_3:
    sub_163AEC(v7, a2, v9, v10);
  if ( v27 >= v28 )
  {
    v29 = v28;
    v28 = v27;
    v27 = v29;
  }
  v30 = (_QWORD *)(*(_QWORD *)(a1 + 80) + 8LL * v28);
  v31 = (_QWORD *)*v30;
  if ( *v30 )
  {
    v32 = *((unsigned int *)v31 - 1);
    if ( (_DWORD)v32 == *((_DWORD *)v31 - 2) )
    {
      v41 = (unsigned int)(3 * v32 + 1) >> 1;
      v42 = 8 * v41 + 8;
      if ( 8 * (int)v32 + 8 >= v42 || (unsigned int)v32 >= v41 )
      {
        v78 = (char **)__cxa_allocate_exception(0x28u);
        sub_163A6C(&v93, "Overflow encountered when expanding vector", v79);
        *v78 = (char *)off_1C63128;
        sub_2333C0(v78 + 1, &v93);
        sub_233E40((__int64)&v93);
        __cxa_throw(v78, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v43 = (unsigned int *)sub_186B300(v31 - 1, v42);
      v31 = v43 + 2;
      *v30 = v43 + 2;
      *v43 = v41;
      result = &v43[2 * v43[1] + 2];
    }
    else
    {
      result = (unsigned int *)&v31[v32];
    }
  }
  else
  {
    v44 = (_QWORD *)sub_186B270(0x18u);
    *v44 = 2;
    v31 = v44 + 1;
    *v30 = v44 + 1;
    result = (unsigned int *)(v44 + 1);
  }
  *result = v27;
  result[1] = 0;
  ++*((_DWORD *)v31 - 1);
  return result;
}

