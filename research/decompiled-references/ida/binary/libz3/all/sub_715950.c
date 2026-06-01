__int64 __fastcall sub_715950(_QWORD *a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  char **exception; // rbp
  __int64 v5; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 result; // rax
  int v11; // edx
  __int64 v12; // rbp
  unsigned int v13; // r12d
  int v14; // edx
  int *v15; // rsi
  int v16; // edi
  __int64 *v17; // rcx
  __int64 v18; // rax
  int v19; // edi
  unsigned int v20; // edx
  __int64 *v21; // rsi
  __int64 v22; // rdx
  __int64 *v23; // r10
  __int64 *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  _DWORD *v27; // rax
  __int64 v28; // r10
  __int64 v29; // rdx
  char *v30; // rcx
  int v31; // edi
  unsigned int v32; // r11d
  char *v33; // rsi
  __int64 v34; // r11
  char *v35; // r8
  char *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned int **v40; // r12
  __int64 v41; // rax
  __int64 v42; // r15
  __int64 v43; // rcx
  int v44; // eax
  unsigned int **v45; // rcx
  unsigned int *v46; // r14
  unsigned int v47; // ecx
  _QWORD *v48; // rdx
  unsigned int v49; // eax
  unsigned int v50; // ecx
  size_t v51; // rsi
  unsigned int *v52; // rax
  __int64 v53; // rdi
  unsigned int v54; // r14d
  unsigned int v55; // r15d
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  __int64 v61; // r12
  int v62; // eax
  unsigned int v63; // edx
  unsigned int v64; // eax
  unsigned int v65; // edx
  unsigned int v66; // eax
  unsigned int v67; // edx
  _QWORD *v68; // rax
  unsigned int v69; // edx
  unsigned int v70; // ecx
  unsigned int v71; // esi
  unsigned int v72; // edx
  unsigned int v73; // eax
  unsigned int v74; // ecx
  bool v75; // zf
  _QWORD *v76; // rax
  unsigned int v77; // ecx
  unsigned int v78; // edx
  unsigned int v79; // eax
  unsigned int v80; // esi
  unsigned int v81; // edx
  unsigned int v82; // ecx
  __int64 v83; // rdx
  unsigned int v84; // [rsp+0h] [rbp-D8h]
  __int64 v85; // [rsp+0h] [rbp-D8h]
  unsigned __int64 v86; // [rsp+0h] [rbp-D8h]
  __int64 v87; // [rsp+8h] [rbp-D0h]
  __int64 v88; // [rsp+8h] [rbp-D0h]
  __int64 v89; // [rsp+10h] [rbp-C8h]
  __int64 v90; // [rsp+20h] [rbp-B8h]
  int v92; // [rsp+30h] [rbp-A8h]
  int v93; // [rsp+30h] [rbp-A8h]
  int v94; // [rsp+30h] [rbp-A8h]
  int v95; // [rsp+34h] [rbp-A4h]
  int v96; // [rsp+34h] [rbp-A4h]
  int v97; // [rsp+34h] [rbp-A4h]
  __int64 v98; // [rsp+38h] [rbp-A0h] BYREF
  unsigned __int64 v99; // [rsp+40h] [rbp-98h] BYREF
  __int64 v100; // [rsp+48h] [rbp-90h] BYREF
  __int64 v101; // [rsp+50h] [rbp-88h] BYREF
  __int64 v102; // [rsp+58h] [rbp-80h] BYREF
  __int64 v103; // [rsp+68h] [rbp-70h] BYREF
  void *v104; // [rsp+70h] [rbp-68h]
  __int64 v105; // [rsp+80h] [rbp-58h] BYREF
  __int64 v106; // [rsp+88h] [rbp-50h]

  v8 = *a1;
  v98 = a2;
  v90 = v8;
  v9 = a1[20];
  v103 = 0;
  v104 = nullptr;
  if ( v9 )
    v92 = *(_DWORD *)(v9 - 4);
  else
    v92 = 0;
  sub_712A90(a1 + 20, &v98);
  v101 = v98;
  if ( v98 )
    ++*(_DWORD *)(v98 + 8);
  sub_712A90(a1 + 18, &v101);
  result = a1[20];
  v89 = 0;
  v87 = 0;
LABEL_6:
  v11 = 0;
  if ( !result )
    goto LABEL_8;
  while ( 1 )
  {
    v11 = *(_DWORD *)(result - 4);
LABEL_8:
    if ( v92 == v11 )
      break;
    v12 = *(_QWORD *)(result + 8LL * (unsigned int)(v11 - 1));
    --*(_DWORD *)(result - 4);
    v13 = *(_DWORD *)v12;
    if ( *(_DWORD *)v12 >= (unsigned int)v103 )
    {
      sub_186B510(&v103, v13 + 1, 0);
      v14 = 1 << v13;
      v15 = (int *)((char *)v104 + 4 * (v13 >> 5));
      v16 = *v15;
LABEL_11:
      v17 = (__int64 *)a1[8];
      *v15 = v16 | v14;
      v18 = *((unsigned int *)a1 + 18);
      v19 = *(_DWORD *)(v12 + 12);
      v20 = v18 - 1;
      v18 *= 16;
      v21 = (__int64 *)((char *)v17 + v18);
      v22 = 16LL * (v19 & v20);
      v23 = &v17[(unsigned __int64)v22 / 8];
      if ( v22 == v18 )
      {
LABEL_45:
        while ( v23 != v17 )
        {
          v39 = *v17;
          if ( (unsigned __int64)*v17 > 1 )
          {
            if ( *(_DWORD *)(v39 + 12) == v19 && v12 == v39 )
            {
              v24 = v17;
              goto LABEL_27;
            }
          }
          else if ( !v39 )
          {
            v26 = *(unsigned int *)(v12 + 24);
            if ( *(_WORD *)(v12 + 4) )
              goto LABEL_53;
LABEL_19:
            if ( (_DWORD)v26 )
            {
              v40 = (unsigned int **)(v12 + 32);
              v42 = v12 + 32 + 8 * v26;
            }
            else
            {
              v27 = *(_DWORD **)(*(_QWORD *)(v12 + 16) + 24LL);
              if ( v27 && *v27 != -1 )
              {
                if ( !*v27 )
                  goto LABEL_23;
LABEL_85:
                if ( (unsigned __int8)sub_15D2CB0(*a1, v12) )
                {
                  sub_712560(&v105, a1, "p");
                  v85 = v105;
                  if ( v87 )
                  {
                    v53 = v106;
                    v95 = *(_DWORD *)(v87 + 8);
                    *(_DWORD *)(v87 + 8) = v95 - 1;
                    if ( v95 == 1 )
                      sub_15D7BC0(v53, v87);
                  }
                  v88 = sub_713C40((__int64)a1, v12);
                  v54 = _mm_cvtsi128_si32(_mm_shuffle_epi32((__m128i)(unsigned __int64)v88, 229));
                  v55 = v88;
                  v100 = v88;
                  sub_7155C0((__int64)a1, v85, v12);
                  v105 = v85;
                  v106 = v88;
                  sub_7183C0(a1 + 21, &v105, v56, v57, v58, v59);
                  v60 = sub_15E1B70(*a1);
                  v61 = v60;
                  if ( v60 )
                  {
                    v62 = *(_DWORD *)(v60 + 8) + 1;
                    *(_DWORD *)(v61 + 8) = v62;
                    if ( v89 )
                    {
                      v96 = *(_DWORD *)(v89 + 8);
                      *(_DWORD *)(v89 + 8) = v96 - 1;
                      if ( v96 == 1 )
                        sub_15D7BC0(v90, v89);
                      v102 = v61;
                      v62 = *(_DWORD *)(v61 + 8);
                    }
                    else
                    {
                      v102 = v61;
                    }
                    *(_DWORD *)(v61 + 8) = v62 + 1;
                  }
                  else
                  {
                    if ( v89 )
                    {
                      v97 = *(_DWORD *)(v89 + 8);
                      *(_DWORD *)(v89 + 8) = v97 - 1;
                      if ( v97 == 1 )
                        sub_15D7BC0(v90, v89);
                    }
                    v102 = 0;
                  }
                  sub_712A90((_QWORD *)(a4 + 8), &v102);
                  v63 = v54;
                  if ( (_DWORD)v88 != -1 )
                  {
                    v63 = v88;
                    if ( v54 >= (unsigned int)v88 )
                      v63 = v54;
                    if ( v54 == -1 )
                      v63 = v88;
                  }
                  if ( !sub_7117D0((__int64)a1, v12, v63) )
                  {
                    v100 = v88;
                    sub_713110(a1, v85, (unsigned int *)&v100);
                  }
                  v64 = *a3;
                  if ( *a3 != -1 )
                  {
                    v65 = *a3;
                    if ( (unsigned int)v88 >= v64 )
                      v65 = v88;
                    if ( (_DWORD)v88 != -1 )
                      v64 = v65;
                    v55 = v64;
                  }
                  v66 = a3[1];
                  *a3 = v55;
                  if ( v66 != -1 )
                  {
                    v67 = v66;
                    if ( v54 >= v66 )
                      v67 = v54;
                    if ( v54 != -1 )
                      v66 = v67;
                    v54 = v66;
                  }
                  a3[1] = v54;
                  v89 = v61;
                  result = a1[20];
                  v87 = v85;
                  goto LABEL_6;
                }
LABEL_25:
                result = a1[20];
                goto LABEL_6;
              }
              if ( (unsigned __int8)sub_15D2CB0(*a1, v12) )
              {
                v76 = sub_710940((_QWORD *)a1[21], *((_DWORD *)a1 + 44), v12);
                v77 = *a3;
                v86 = v76[1];
                v78 = _mm_cvtsi128_si32((__m128i)v86);
                v79 = _mm_cvtsi128_si32(_mm_shuffle_epi32((__m128i)v86, 229));
                if ( *a3 != -1 )
                {
                  v80 = *a3;
                  if ( v78 >= v77 )
                    v80 = v78;
                  if ( v78 != -1 )
                    v77 = v80;
                  v78 = v77;
                }
                *a3 = v78;
                v81 = a3[1];
                if ( v81 != -1 )
                {
                  v82 = a3[1];
                  if ( v79 >= v81 )
                    v82 = v79;
                  v75 = v79 == -1;
                  v79 = a3[1];
                  if ( !v75 )
                    v79 = v82;
                }
                a3[1] = v79;
                if ( !sub_7109E0((_QWORD *)a1[5], *((_DWORD *)a1 + 12), v12) )
                {
                  sub_7155C0((__int64)a1, v12, v83);
                  v99 = v86;
                  sub_713110(a1, v12, (unsigned int *)&v99);
                }
                goto LABEL_25;
              }
              v26 = *(unsigned int *)(v12 + 24);
LABEL_53:
              v40 = (unsigned int **)(v12 + 32);
              v41 = 8 * v26;
              v42 = v12 + 32 + v41;
              if ( !v41 )
              {
LABEL_74:
                v27 = *(_DWORD **)(*(_QWORD *)(v12 + 16) + 24LL);
                if ( !v27 || *v27 )
                  goto LABEL_85;
                if ( *(_WORD *)(v12 + 4) )
                {
                  result = a1[20];
                  goto LABEL_6;
                }
LABEL_23:
                if ( v27[1] == 2 )
                {
                  if ( !(unsigned __int8)sub_15D2CB0(*a1, *(_QWORD *)(v12 + 32)) )
                    goto LABEL_85;
                  if ( *(_WORD *)(v12 + 4) )
                    goto LABEL_25;
                  v27 = *(_DWORD **)(*(_QWORD *)(v12 + 16) + 24LL);
                  if ( !v27 )
                    goto LABEL_25;
                  if ( *v27 )
                  {
                    result = a1[20];
                    goto LABEL_6;
                  }
                }
                if ( v27[1] == 3 && *(_DWORD *)(v12 + 24) && !(unsigned __int8)sub_15D2CB0(*a1, *(_QWORD *)(v12 + 32)) )
                  goto LABEL_85;
                goto LABEL_25;
              }
            }
            do
            {
              v46 = *v40;
              v47 = **v40;
              if ( v47 >= (unsigned int)v103 || (*((_DWORD *)v104 + (v47 >> 5)) & (1 << v47)) == 0 )
              {
                v48 = (_QWORD *)a1[20];
                if ( v48 )
                {
                  v49 = *((_DWORD *)v48 - 1);
                  if ( v49 == *((_DWORD *)v48 - 2) )
                  {
                    v50 = (3 * v49 + 1) >> 1;
                    v51 = 8 * v50 + 8;
                    if ( 8 * v49 + 8 >= (unsigned int)v51 || v49 >= v50 )
                    {
                      exception = (char **)__cxa_allocate_exception(0x28u);
                      sub_109F38(&v105, "Overflow encountered when expanding vector", v5);
                      *exception = (char *)off_1C63128;
                      sub_2333C0(exception + 1, &v105);
                      sub_233E40((__int64)&v105);
                      __cxa_throw(
                        exception,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v84 = (3 * v49 + 1) >> 1;
                    v52 = (unsigned int *)sub_186B300(v48 - 1, v51);
                    v48 = v52 + 2;
                    a1[20] = v52 + 2;
                    *v52 = v84;
                    LODWORD(v52) = v52[1];
                    v45 = (unsigned int **)&v48[(unsigned int)v52];
                    v44 = (_DWORD)v52 + 1;
                  }
                  else
                  {
                    v43 = v49;
                    v44 = v49 + 1;
                    v45 = (unsigned int **)&v48[v43];
                  }
                }
                else
                {
                  v68 = (_QWORD *)sub_186B270(0x18u);
                  v48 = v68 + 1;
                  *v68 = 2;
                  v44 = 1;
                  a1[20] = v48;
                  v45 = (unsigned int **)v48;
                }
                *v45 = v46;
                *((_DWORD *)v48 - 1) = v44;
              }
              ++v40;
            }
            while ( (unsigned int **)v42 != v40 );
            goto LABEL_74;
          }
          v17 += 2;
        }
LABEL_18:
        v26 = *(unsigned int *)(v12 + 24);
        if ( *(_WORD *)(v12 + 4) )
          goto LABEL_53;
        goto LABEL_19;
      }
      v24 = &v17[(unsigned __int64)v22 / 8];
      while ( 1 )
      {
        v25 = *v24;
        if ( (unsigned __int64)*v24 > 1 )
          break;
        if ( !v25 )
          goto LABEL_18;
LABEL_15:
        v24 += 2;
        if ( v21 == v24 )
          goto LABEL_45;
      }
      if ( *(_DWORD *)(v25 + 12) != v19 || v12 != v25 )
        goto LABEL_15;
LABEL_27:
      v28 = v24[1];
      v29 = *((unsigned int *)a1 + 44);
      v30 = (char *)a1[21];
      v31 = *(_DWORD *)(v28 + 12);
      v32 = v29 - 1;
      v29 *= 16;
      v33 = &v30[v29];
      v34 = 16LL * (v31 & v32);
      v35 = &v30[v34];
      v36 = &v30[v34];
      if ( v34 == v29 )
      {
LABEL_35:
        while ( v35 != v30 )
        {
          v38 = *(_QWORD *)v30;
          if ( *(_QWORD *)v30 > 1u )
          {
            if ( *(_DWORD *)(v38 + 12) == v31 && v28 == v38 )
            {
              v36 = v30;
              goto LABEL_117;
            }
          }
          else if ( !v38 )
          {
            break;
          }
          v30 += 16;
        }
LABEL_153:
        BUG();
      }
      while ( 1 )
      {
        while ( 1 )
        {
          v37 = *(_QWORD *)v36;
          if ( *(_QWORD *)v36 > 1u )
            break;
          if ( !v37 )
            goto LABEL_153;
          v36 += 16;
          if ( v33 == v36 )
            goto LABEL_35;
        }
        if ( *(_DWORD *)(v37 + 12) == v31 && v28 == v37 )
          break;
        v36 += 16;
        if ( v33 == v36 )
          goto LABEL_35;
      }
LABEL_117:
      v69 = *a3;
      v70 = *((_DWORD *)v36 + 2);
      if ( *a3 == -1 )
      {
        v69 = *((_DWORD *)v36 + 2);
      }
      else
      {
        v71 = *((_DWORD *)v36 + 2);
        if ( v69 >= v70 )
          v71 = *a3;
        if ( v70 != -1 )
          v69 = v71;
      }
      *a3 = v69;
      v72 = a3[1];
      v73 = *((_DWORD *)v36 + 3);
      if ( v72 != -1 )
      {
        v74 = a3[1];
        if ( v73 >= v72 )
          v74 = v73;
        v75 = v73 == -1;
        v73 = a3[1];
        if ( !v75 )
          v73 = v74;
      }
      a3[1] = v73;
      result = a1[20];
      goto LABEL_6;
    }
    v15 = (int *)((char *)v104 + 4 * (v13 >> 5));
    v16 = *v15;
    v14 = 1 << v13;
    if ( (*v15 & (1 << v13)) == 0 )
      goto LABEL_11;
  }
  if ( v89 )
  {
    v93 = *(_DWORD *)(v89 + 8);
    result = (unsigned int)(v93 - 1);
    *(_DWORD *)(v89 + 8) = result;
    if ( v93 == 1 )
      result = sub_15D7BC0(v90, v89);
  }
  if ( v87 )
  {
    v94 = *(_DWORD *)(v87 + 8);
    result = (unsigned int)(v94 - 1);
    *(_DWORD *)(v87 + 8) = result;
    if ( v94 == 1 )
      result = sub_15D7BC0(v90, v87);
  }
  if ( v104 )
    return sub_186B220(v104);
  return result;
}

