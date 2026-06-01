__int64 __fastcall sub_607C80(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 *v8; // rcx
  int v9; // edx
  char *v10; // r10
  __int64 v11; // rdx
  __int64 *v12; // r9
  _QWORD *v13; // rbx
  __int64 v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rax
  unsigned int v18; // ebx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // r12
  __int64 v28; // rsi
  __int64 v29; // rdi
  bool v30; // zf
  unsigned __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // r14
  __int64 v34; // rbx
  unsigned int v35; // r13d
  __int64 v36; // rax
  __int64 v37; // r12
  __int64 v38; // rax
  __int64 v39; // r15
  int *v40; // rax
  int v41; // eax
  int v42; // r14d
  __int64 v43; // rax
  __int64 v44; // r12
  int v45; // edx
  int v46; // ecx
  int v47; // r8d
  int v48; // r9d
  _QWORD *v49; // r12
  void *v50; // rdi
  __int64 *v51; // r12
  unsigned __int64 v52; // r13
  __int64 v53; // rsi
  unsigned __int64 v54; // rdi
  __int64 *v55; // r12
  unsigned __int64 v56; // r13
  __int64 v57; // rsi
  unsigned __int64 v58; // rdi
  __int64 *v59; // r12
  unsigned __int64 v60; // r13
  __int64 v61; // rsi
  __int64 v62; // rdi
  __int64 v63; // rsi
  __int64 v64; // rdi
  __int64 v65; // [rsp+8h] [rbp-158h]
  __int64 v67; // [rsp+20h] [rbp-140h]
  __int64 v68; // [rsp+28h] [rbp-138h]
  unsigned __int64 v69; // [rsp+30h] [rbp-130h]
  __int64 v70; // [rsp+38h] [rbp-128h]
  __int64 v71; // [rsp+48h] [rbp-118h]
  unsigned int v72; // [rsp+58h] [rbp-108h]
  unsigned int v73; // [rsp+5Ch] [rbp-104h]
  _QWORD *v74; // [rsp+68h] [rbp-F8h]
  __int64 v75; // [rsp+78h] [rbp-E8h] BYREF
  __int64 v76; // [rsp+80h] [rbp-E0h] BYREF
  __int64 v77; // [rsp+88h] [rbp-D8h]
  int v78; // [rsp+90h] [rbp-D0h] BYREF
  char v79; // [rsp+98h] [rbp-C8h]
  __m128i v80; // [rsp+A0h] [rbp-C0h] BYREF
  __int64 *v81; // [rsp+B0h] [rbp-B0h]
  unsigned __int64 v82; // [rsp+B8h] [rbp-A8h]
  __int64 *v83; // [rsp+C0h] [rbp-A0h]
  __int64 v84; // [rsp+C8h] [rbp-98h]
  __int64 v85; // [rsp+D0h] [rbp-90h]
  __int64 v86; // [rsp+D8h] [rbp-88h]
  unsigned __int64 v87; // [rsp+E0h] [rbp-80h]
  __int64 *v88; // [rsp+E8h] [rbp-78h]
  void *s; // [rsp+F0h] [rbp-70h]
  __int64 v90; // [rsp+F8h] [rbp-68h]
  void *v91; // [rsp+100h] [rbp-60h]
  __int64 v92; // [rsp+108h] [rbp-58h]
  int v93; // [rsp+110h] [rbp-50h]
  __int64 v94; // [rsp+118h] [rbp-48h]
  _QWORD v95[8]; // [rsp+120h] [rbp-40h] BYREF

  result = (__int64)a1;
  v74 = a1;
  v3 = a1[11];
  v72 = 0;
  if ( v3 )
  {
    v67 = result + 40;
    do
    {
      result = v72;
      if ( v72 >= *(_DWORD *)(v3 - 4) )
        break;
      v4 = *a2;
      v5 = *(_QWORD *)(v3 + 8LL * v72);
      v6 = *(unsigned int *)(*a2 + 56LL);
      v7 = *(unsigned int *)(v5 + 12);
      v8 = *(__int64 **)(*a2 + 48LL);
      v9 = v6 - 1;
      result = 16 * v6;
      v10 = (char *)v8 + result;
      v11 = 16LL * ((unsigned int)v7 & v9);
      v12 = (__int64 *)((char *)v8 + v11);
      if ( v11 != result )
      {
        v13 = v74;
        result = (__int64)v8 + v11;
        do
        {
          v11 = *(_QWORD *)result;
          if ( *(_QWORD *)result > 1u )
          {
            if ( *(_DWORD *)(v11 + 12) == (_DWORD)v7 && v5 == v11 )
              goto LABEL_22;
          }
          else if ( !v11 )
          {
LABEL_11:
            v74 = v13;
            goto LABEL_12;
          }
          result += 16;
        }
        while ( v10 != (char *)result );
      }
      if ( v8 != v12 )
      {
        v13 = v74;
        while ( 1 )
        {
          result = *v8;
          if ( (unsigned __int64)*v8 > 1 )
          {
            if ( *(_DWORD *)(result + 12) == (_DWORD)v7 && v5 == result )
            {
              result = (__int64)v8;
LABEL_22:
              v14 = *(_QWORD *)(result + 8);
              if ( v14 )
              {
                v15 = *(_QWORD *)(result + 8);
                v16 = *(_QWORD *)(v74[9] + 8LL * v72);
                v17 = v74[4];
                v76 = 0;
                v70 = v16;
                v18 = *(_DWORD *)(v16 + 32);
                v77 = v17;
                v19 = sub_13495F0(v15, v7, v11, v8, v72);
                sub_135F980(v4, v5, v19);
                v20 = sub_186B270(0x38u);
                v21 = v74[4];
                v65 = v20;
                sub_13478B0(v20, v21, v18);
                v26 = sub_1348CA0(v14, v21, v22, v23, v24, v25);
                v27 = v26;
                if ( v26 )
                  ++*(_DWORD *)(v26 + 8);
                v28 = v76;
                if ( v76 )
                {
                  v29 = v77;
                  v30 = (*(_DWORD *)(v76 + 8))-- == 1;
                  if ( v30 )
                    sub_15D7BC0(v29, v28);
                }
                v76 = v27;
                v81 = nullptr;
                v31 = v74[4];
                v83 = nullptr;
                v84 = 0;
                v87 = v31;
                s = v95;
                v69 = v31;
                v82 = v31;
                v85 = 0;
                v86 = 0;
                v88 = nullptr;
                v90 = 1;
                v91 = nullptr;
                v92 = 0;
                v93 = 1065353216;
                v94 = 0;
                v95[0] = 0;
                v80 = _mm_unpacklo_epi64((__m128i)v31, (__m128i)v31);
                if ( v18 )
                {
                  v32 = v18;
                  v33 = 0;
                  v34 = 0;
                  v35 = 0;
                  v68 = v32;
                  v71 = 0;
                  while ( 1 )
                  {
                    v37 = *(_QWORD *)(v70 + 8 * v71 + 48);
                    v38 = sub_15DB5C0(v31, (unsigned int)v71, v37);
                    v39 = v38;
                    if ( v38 )
                      ++*(_DWORD *)(v38 + 8);
                    if ( v33 )
                    {
                      v30 = (*(_DWORD *)(v33 + 8))-- == 1;
                      if ( v30 )
                        sub_15D7BC0(v69, v33);
                    }
                    v75 = v39;
                    if ( (unsigned __int8)sub_1673B10(v67, v37) )
                    {
                      v40 = *(int **)(*(_QWORD *)(v37 + 24) + 8LL);
                      if ( *((_BYTE *)v40 + 8) )
                        sub_A8ADA((__int64)"std::get: wrong index for variant");
                      v41 = *v40;
                      if ( v41 )
                      {
                        v42 = 0;
                        v73 = v35 + v41;
                        while ( 1 )
                        {
                          v44 = v34;
                          v78 = v42;
                          v79 = 0;
                          v34 = sub_15DCAD0(v74[4], (int)&v75, 0);
                          if ( v34 )
                            ++*(_DWORD *)(v34 + 8);
                          if ( v44 )
                          {
                            v30 = (*(_DWORD *)(v44 + 8))-- == 1;
                            if ( v30 )
                              sub_15D7BC0(v69, v44);
                          }
                          v43 = sub_15DB5C0(v74[4], v35, *(_QWORD *)(v74[4] + 840LL));
                          sub_14EA0D0(&v80, v43, v34);
                          ++v42;
                          sub_15D0DF0(&v78);
                          if ( v35 + 1 == v73 )
                            break;
                          ++v35;
                        }
                      }
                      else
                      {
                        v73 = v35;
                      }
                    }
                    else
                    {
                      v73 = v35 + 1;
                      v36 = sub_15DB5C0(v74[4], v35, v37);
                      sub_14EA0D0(&v80, v36, v39);
                    }
                    if ( ++v71 == v68 )
                      break;
                    v35 = v73;
                    v33 = v39;
                    v31 = v74[4];
                  }
                  sub_14EA2A0(&v80, v76, &v76);
                }
                else
                {
                  v34 = 0;
                  v39 = 0;
                  sub_14EA2A0(&v80, v27, &v76);
                }
                sub_1349280(v65, v76, v45, v46, v47, v48);
                sub_135F980(*a2, v70, v65);
                v49 = v91;
                if ( v91 )
                {
                  do
                  {
                    v50 = v49;
                    v49 = (_QWORD *)*v49;
                    operator delete(v50, 0x18u);
                  }
                  while ( v49 );
                }
                memset(s, 0, 8 * v90);
                v92 = 0;
                v91 = nullptr;
                if ( s != v95 )
                  operator delete(s, 8 * v90);
                v51 = v88;
                if ( v88 )
                {
                  v52 = (unsigned __int64)&v88[*((unsigned int *)v88 - 1)];
                  if ( (unsigned __int64)v88 >= v52 )
                    goto LABEL_62;
                  do
                  {
                    while ( 1 )
                    {
                      v53 = *v51;
                      if ( *v51 )
                      {
                        v54 = v87;
                        v30 = (*(_DWORD *)(v53 + 8))-- == 1;
                        if ( v30 )
                          break;
                      }
                      if ( (unsigned __int64)++v51 >= v52 )
                        goto LABEL_61;
                    }
                    sub_15D7BC0(v54, v53);
                    ++v51;
                  }
                  while ( (unsigned __int64)v51 < v52 );
LABEL_61:
                  v51 = v88;
                  if ( v88 )
LABEL_62:
                    sub_186B220(v51 - 1);
                }
                if ( v86 )
                  sub_186B220((void *)(v86 - 8));
                if ( v85 )
                  sub_186B220((void *)(v85 - 8));
                if ( v84 )
                  sub_186B220((void *)(v84 - 8));
                v55 = v83;
                if ( v83 )
                {
                  v56 = (unsigned __int64)&v83[*((unsigned int *)v83 - 1)];
                  if ( (unsigned __int64)v83 >= v56 )
                    goto LABEL_77;
                  do
                  {
                    while ( 1 )
                    {
                      v57 = *v55;
                      if ( *v55 )
                      {
                        v58 = v82;
                        v30 = (*(_DWORD *)(v57 + 8))-- == 1;
                        if ( v30 )
                          break;
                      }
                      if ( (unsigned __int64)++v55 >= v56 )
                        goto LABEL_76;
                    }
                    sub_15D7BC0(v58, v57);
                    ++v55;
                  }
                  while ( (unsigned __int64)v55 < v56 );
LABEL_76:
                  v55 = v83;
                  if ( v83 )
LABEL_77:
                    sub_186B220(v55 - 1);
                }
                v59 = v81;
                if ( v81 )
                {
                  v60 = (unsigned __int64)&v81[*((unsigned int *)v81 - 1)];
                  if ( (unsigned __int64)v81 >= v60 )
                    goto LABEL_86;
                  do
                  {
                    while ( 1 )
                    {
                      v61 = *v59;
                      if ( *v59 )
                      {
                        v62 = v80.m128i_i64[1];
                        v30 = (*(_DWORD *)(v61 + 8))-- == 1;
                        if ( v30 )
                          break;
                      }
                      if ( (unsigned __int64)++v59 >= v60 )
                        goto LABEL_85;
                    }
                    sub_15D7BC0(v62, v61);
                    ++v59;
                  }
                  while ( (unsigned __int64)v59 < v60 );
LABEL_85:
                  v59 = v81;
                  if ( v81 )
LABEL_86:
                    sub_186B220(v59 - 1);
                }
                if ( v34 )
                {
                  v30 = (*(_DWORD *)(v34 + 8))-- == 1;
                  if ( v30 )
                    sub_15D7BC0(v69, v34);
                }
                if ( v39 )
                {
                  v30 = (*(_DWORD *)(v39 + 8))-- == 1;
                  if ( v30 )
                    sub_15D7BC0(v69, v39);
                }
                v63 = v76;
                if ( v76 )
                {
                  v64 = v77;
                  v30 = (*(_DWORD *)(v76 + 8))-- == 1;
                  if ( v30 )
                    sub_15D7BC0(v64, v63);
                }
                result = (__int64)v74;
                v3 = v74[11];
              }
              break;
            }
          }
          else if ( !result )
          {
            goto LABEL_11;
          }
          v8 += 2;
          if ( v12 == v8 )
            goto LABEL_11;
        }
      }
LABEL_12:
      ++v72;
    }
    while ( v3 );
  }
  return result;
}

