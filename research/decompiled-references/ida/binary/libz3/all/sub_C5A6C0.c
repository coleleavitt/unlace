__int64 __fastcall sub_C5A6C0(__int64 *a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v3; // r15
  int v5; // r12d
  __int64 v6; // rbp
  __int64 result; // rax
  int v8; // edx
  __int64 v9; // rdx
  _QWORD *v10; // r13
  __int16 v11; // cx
  char *v12; // r14
  unsigned int v13; // ebp
  unsigned int v14; // esi
  __int64 v15; // rdx
  unsigned int *v16; // r9
  unsigned int v17; // r13d
  int v18; // edx
  int *v19; // rdi
  int v20; // r10d
  __int16 v21; // dx
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 *v24; // rcx
  __int64 v25; // rax
  int v26; // edi
  unsigned int v27; // edx
  __int64 *v28; // rsi
  __int64 v29; // rdx
  __int64 *v30; // r8
  __int64 *j; // rax
  __int64 v32; // rdx
  void *v33; // r13
  void *v34; // rbp
  unsigned int v35; // ecx
  unsigned int v36; // edx
  unsigned int v37; // esi
  unsigned int *v38; // r9
  bool v39; // cc
  unsigned int v40; // ebp
  __int64 v41; // rdi
  __int64 v42; // rdx
  unsigned int **v43; // rdx
  __int64 v44; // rax
  int v45; // edx
  __int64 v46; // r10
  __int64 v47; // rdx
  __int64 *v48; // rsi
  __int64 v49; // rdx
  int v50; // edi
  unsigned int v51; // ecx
  __int64 *v52; // r11
  __int64 v53; // rcx
  __int64 *v54; // r9
  __int64 *i; // rdx
  __int64 v56; // rax
  void *v57; // r13
  void *v58; // r13
  __int64 v59; // rdx
  unsigned int **v60; // rax
  __int64 v61; // r9
  __int64 v62; // rax
  __int64 v63; // rbp
  unsigned __int64 v64; // rax
  char *v65; // rdi
  __int64 v66; // rcx
  __int64 v67; // rbp
  unsigned __int64 v68; // rax
  char *v69; // rdi
  __int64 v70; // rcx
  __int64 v71; // rax
  unsigned int v72; // edx
  unsigned int **v73; // rax
  __int64 v74; // rbp
  unsigned __int64 v75; // rax
  char *v76; // rdi
  __int64 v77; // rcx
  void *v78; // rbp
  void *v79; // rbx
  void *v80; // rax
  void *v81; // rbp
  void *v82; // rbx
  void *exception; // rax
  unsigned int *v85; // [rsp+10h] [rbp-1A8h]
  unsigned int *v86; // [rsp+10h] [rbp-1A8h]
  unsigned int *v87; // [rsp+10h] [rbp-1A8h]
  unsigned int *v88; // [rsp+10h] [rbp-1A8h]
  unsigned int *v89; // [rsp+10h] [rbp-1A8h]
  __int64 v90; // [rsp+30h] [rbp-188h] BYREF
  __int64 v91; // [rsp+38h] [rbp-180h]
  __int64 v92; // [rsp+40h] [rbp-178h] BYREF
  __int64 v93; // [rsp+48h] [rbp-170h]
  __int64 v94; // [rsp+50h] [rbp-168h] BYREF
  __int64 v95; // [rsp+58h] [rbp-160h]
  __int64 v96; // [rsp+60h] [rbp-158h] BYREF
  __int64 v97; // [rsp+68h] [rbp-150h]
  void *ptr; // [rsp+70h] [rbp-148h]
  __int64 v99; // [rsp+78h] [rbp-140h]
  _DWORD *v100; // [rsp+80h] [rbp-138h] BYREF
  int v101; // [rsp+88h] [rbp-130h]

  v3 = a3;
  if ( a3[2] > 1u )
  {
    v5 = 1 << *a3;
    v6 = 4LL * (*a3 >> 5);
    if ( *a3 >= *(_DWORD *)(a2 + 8) )
    {
      sub_186B510(a2 + 8, (unsigned int)(*a3 + 1), 0);
      result = v6 + *(_QWORD *)(a2 + 16);
      v8 = *(_DWORD *)result;
    }
    else
    {
      result = v6 + *(_QWORD *)(a2 + 16);
      v8 = *(_DWORD *)result;
      if ( (v5 & *(_DWORD *)result) != 0 )
        return result;
    }
    *(_DWORD *)result = v5 | v8;
  }
  LODWORD(v9) = 0;
  v10 = &v100;
  v100 = v3;
  ptr = &v100;
  v101 = 0;
  v99 = 0x1000000001LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v11 = *((_WORD *)v3 + 2);
      result = 16LL * (unsigned int)v9;
      v12 = (char *)v10 + result;
      if ( v11 == 1 )
        goto LABEL_37;
      if ( v11 != 2 )
        break;
      v35 = v3[18];
      v36 = *((_DWORD *)v12 + 2);
      v37 = v35 + v3[19] + 1;
      if ( v36 >= v37 )
      {
LABEL_36:
        result = (unsigned int)v99;
        LODWORD(v9) = v99 - 1;
LABEL_37:
        LODWORD(v99) = v9;
        if ( !(_DWORD)v9 )
          goto LABEL_31;
        goto LABEL_38;
      }
      if ( !v36 )
      {
        v38 = *((unsigned int **)v3 + 3);
        goto LABEL_43;
      }
      while ( 1 )
      {
        v61 = v36 - 1;
        if ( v35 < v36 )
          v61 = (unsigned int)v61 - v35;
        v38 = *(unsigned int **)&v3[4 * (unsigned int)v3[5] + 20 + 2 * v61];
LABEL_43:
        ++v36;
        v39 = v38[2] <= 1;
        *((_DWORD *)v12 + 2) = v36;
        if ( v39 )
          break;
        v40 = *v38;
        if ( *v38 >= *(_DWORD *)(a2 + 8) )
        {
          v86 = v38;
          sub_186B510(a2 + 8, v40 + 1, 0);
          v41 = *(_QWORD *)(a2 + 16);
          v38 = v86;
LABEL_46:
          *(_DWORD *)(v41 + 4LL * (v40 >> 5)) |= 1 << v40;
          break;
        }
        v41 = *(_QWORD *)(a2 + 16);
        if ( (*(_DWORD *)(v41 + 4LL * (v40 >> 5)) & (1 << v40)) == 0 )
          goto LABEL_46;
        if ( v36 >= v37 )
          goto LABEL_36;
        v35 = v3[18];
      }
      v42 = (unsigned int)v99;
      if ( (unsigned int)v99 >= HIDWORD(v99) )
      {
        v87 = v38;
        v63 = (unsigned int)(2 * HIDWORD(v99));
        v10 = (_QWORD *)sub_186B270(16 * v63);
        v64 = 0;
        v65 = (char *)ptr;
        v38 = v87;
        v42 = (unsigned int)v99;
        v66 = 16LL * (unsigned int)v99;
        if ( (_DWORD)v99 )
        {
          do
          {
            *(__m128i *)&v10[v64 / 8] = _mm_loadu_si128((const __m128i *)&v65[v64]);
            v64 += 16LL;
          }
          while ( v64 != v66 );
        }
        if ( v65 && v65 != (char *)&v100 )
        {
          sub_186B220(v65);
          v42 = (unsigned int)v99;
          v38 = v87;
        }
        ptr = v10;
        HIDWORD(v99) = v63;
      }
      else
      {
        v10 = ptr;
      }
      v43 = (unsigned int **)&v10[2 * v42];
      *((_DWORD *)v43 + 2) = 0;
      v44 = (unsigned int)v99;
      *v43 = v38;
      v45 = v44 + 1;
LABEL_50:
      LODWORD(v99) = v45;
      LODWORD(v9) = v45 - 1;
      v3 = (_DWORD *)v10[2 * v44];
    }
    if ( v11 )
    {
      sub_1872CE0("");
      sub_1873130(114, 100);
    }
    v13 = v3[6];
    v14 = *((_DWORD *)v12 + 2);
    if ( v14 < v13 )
    {
      while ( 1 )
      {
        v15 = v14++;
        v16 = *(unsigned int **)&v3[2 * v15 + 8];
        *((_DWORD *)v12 + 2) = v14;
        if ( v16[2] > 1 )
        {
          v17 = *v16;
          if ( *v16 < *(_DWORD *)(a2 + 8) )
          {
            v19 = (int *)(*(_QWORD *)(a2 + 16) + 4LL * (v17 >> 5));
            v20 = *v19;
            v18 = 1 << v17;
            if ( ((1 << v17) & *v19) != 0 )
              goto LABEL_21;
          }
          else
          {
            v85 = v16;
            sub_186B510(a2 + 8, v17 + 1, 0);
            v16 = v85;
            v18 = 1 << v17;
            v19 = (int *)(*(_QWORD *)(a2 + 16) + 4LL * (v17 >> 5));
            v20 = *v19;
          }
          *v19 = v20 | v18;
        }
        v21 = *((_WORD *)v16 + 2);
        if ( v21 == 1 )
        {
          v14 = *((_DWORD *)v12 + 2);
        }
        else
        {
          if ( v21 == 2 )
          {
            v59 = (unsigned int)v99;
            if ( (unsigned int)v99 >= HIDWORD(v99) )
            {
              v88 = v16;
              v67 = (unsigned int)(2 * HIDWORD(v99));
              v10 = (_QWORD *)sub_186B270(16 * v67);
              v68 = 0;
              v69 = (char *)ptr;
              v16 = v88;
              v59 = (unsigned int)v99;
              v70 = 16LL * (unsigned int)v99;
              if ( (_DWORD)v99 )
              {
                do
                {
                  *(__m128i *)&v10[v68 / 8] = _mm_loadu_si128((const __m128i *)&v69[v68]);
                  v68 += 16LL;
                }
                while ( v68 != v70 );
              }
              if ( v69 != (char *)&v100 && v69 )
              {
                sub_186B220(v69);
                v59 = (unsigned int)v99;
                v16 = v88;
              }
              ptr = v10;
              HIDWORD(v99) = v67;
            }
            else
            {
              v10 = ptr;
            }
            v60 = (unsigned int **)&v10[2 * v59];
            *v60 = v16;
            *((_DWORD *)v60 + 2) = 0;
            v44 = (unsigned int)v99;
            v45 = v99 + 1;
            goto LABEL_50;
          }
          if ( v21 )
          {
            sub_1872CE0("");
            sub_1873130(114, 73);
          }
          if ( v16[6] )
          {
            v72 = v99;
            if ( (unsigned int)v99 >= HIDWORD(v99) )
            {
              v89 = v16;
              v74 = (unsigned int)(2 * HIDWORD(v99));
              v10 = (_QWORD *)sub_186B270(16 * v74);
              v75 = 0;
              v76 = (char *)ptr;
              v16 = v89;
              v72 = v99;
              v77 = 16LL * (unsigned int)v99;
              if ( (_DWORD)v99 )
              {
                do
                {
                  *(__m128i *)&v10[v75 / 8] = _mm_loadu_si128((const __m128i *)&v76[v75]);
                  v75 += 16LL;
                }
                while ( v75 != v77 );
              }
              if ( v76 != (char *)&v100 && v76 )
              {
                sub_186B220(v76);
                v72 = v99;
                v16 = v89;
              }
              ptr = v10;
              HIDWORD(v99) = v74;
            }
            else
            {
              v10 = ptr;
            }
            v73 = (unsigned int **)&v10[2 * v72];
            *v73 = v16;
            *((_DWORD *)v73 + 2) = 0;
            v44 = (unsigned int)v99;
            v45 = v99 + 1;
            goto LABEL_50;
          }
          v46 = *((_QWORD *)v16 + 2);
          v90 = 0;
          v92 = 1;
          v47 = *a1;
          v94 = 0;
          v96 = 1;
          v48 = *(__int64 **)(v47 + 136);
          v49 = *(unsigned int *)(v47 + 144);
          v91 = 0;
          v50 = *(_DWORD *)(v46 + 12);
          v93 = 0;
          v51 = v49 - 1;
          v95 = 0;
          v49 *= 80;
          v52 = (__int64 *)((char *)v48 + v49);
          v97 = 0;
          v53 = 80LL * (v50 & v51);
          v54 = &v48[(unsigned __int64)v53 / 8];
          if ( v53 != v49 )
          {
            for ( i = &v48[(unsigned __int64)v53 / 8]; v52 != i; i += 10 )
            {
              v56 = *i;
              if ( (unsigned __int64)*i > 1 )
              {
                if ( *(_DWORD *)(v56 + 12) == v50 && v46 == v56 )
                {
LABEL_107:
                  v81 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, &v94);
                  sub_182CBA0(v81, &v96);
                  v82 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, &v90);
                  sub_182CBA0(v82, &v92);
                  exception = __cxa_allocate_exception(1u);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'bv2real_util::contains_bv2real_proc::found,
                    nullptr);
                }
              }
              else if ( !v56 )
              {
                goto LABEL_59;
              }
            }
          }
          for ( ; v54 != v48; v48 += 10 )
          {
            v62 = *v48;
            if ( (unsigned __int64)*v48 > 1 )
            {
              if ( *(_DWORD *)(v62 + 12) == v50 && v46 == v62 )
                goto LABEL_107;
            }
            else if ( !v62 )
            {
              break;
            }
          }
LABEL_59:
          v57 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v94);
          sub_182CBA0(v57, &v96);
          v58 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v90);
          sub_182CBA0(v58, &v92);
          v14 = *((_DWORD *)v12 + 2);
        }
LABEL_21:
        if ( v14 >= v13 )
        {
          LODWORD(v9) = v99 - 1;
          break;
        }
      }
    }
    v22 = *((_QWORD *)v3 + 2);
    LODWORD(v99) = v9;
    v90 = 0;
    v23 = *a1;
    v92 = 1;
    v94 = 0;
    v96 = 1;
    v24 = *(__int64 **)(v23 + 136);
    v25 = *(unsigned int *)(v23 + 144);
    v91 = 0;
    v26 = *(_DWORD *)(v22 + 12);
    v93 = 0;
    v27 = v25 - 1;
    v95 = 0;
    v25 *= 80;
    v28 = (__int64 *)((char *)v24 + v25);
    v97 = 0;
    v29 = 80LL * (v26 & v27);
    v30 = &v24[(unsigned __int64)v29 / 8];
    if ( v29 != v25 )
    {
      for ( j = &v24[(unsigned __int64)v29 / 8]; v28 != j; j += 10 )
      {
        v32 = *j;
        if ( (unsigned __int64)*j > 1 )
        {
          if ( *(_DWORD *)(v32 + 12) == v26 && v22 == v32 )
          {
LABEL_106:
            v78 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v94);
            sub_182CBA0(v78, &v96);
            v79 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v90);
            sub_182CBA0(v79, &v92);
            v80 = __cxa_allocate_exception(1u);
            __cxa_throw(v80, (struct type_info *)&`typeinfo for'bv2real_util::contains_bv2real_proc::found, nullptr);
          }
        }
        else if ( !v32 )
        {
          goto LABEL_30;
        }
      }
    }
    for ( ; v30 != v24; v24 += 10 )
    {
      v71 = *v24;
      if ( (unsigned __int64)*v24 > 1 )
      {
        if ( *(_DWORD *)(v71 + 12) == v26 && v22 == v71 )
          goto LABEL_106;
      }
      else if ( !v71 )
      {
        break;
      }
    }
LABEL_30:
    v33 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v94);
    sub_182CBA0(v33, &v96);
    v34 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v90);
    result = sub_182CBA0(v34, &v92);
    LODWORD(v9) = v99;
    v10 = ptr;
    if ( !(_DWORD)v99 )
      break;
LABEL_38:
    v9 = (unsigned int)(v9 - 1);
    v3 = (_DWORD *)v10[2 * v9];
  }
LABEL_31:
  if ( v10 )
  {
    result = (__int64)&v100;
    if ( v10 != &v100 )
      return sub_186B220(v10);
  }
  return result;
}

