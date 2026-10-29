__int64 __fastcall sub_CE5D50(int a1, __int64 *a2, __int64 a3, unsigned int a4, int a5)
{
  char **exception; // r12
  __int64 v6; // rdx
  __int64 *v10; // r12
  __int64 v11; // rax
  char *v12; // rdx
  int v13; // esi
  unsigned int v14; // ecx
  __int64 v15; // r8
  char *v16; // rcx
  __int64 v17; // r8
  char *v18; // rdi
  char *v19; // rbp
  __int64 v20; // rax
  int v21; // edx
  _QWORD *v22; // rax
  _DWORD *v23; // rbx
  int v24; // edx
  unsigned int v25; // r9d
  unsigned int *v26; // rax
  unsigned int v27; // ebp
  __int64 v28; // rax
  __int64 v29; // rax
  size_t v30; // rdx
  __int64 v31; // rdx
  int v32; // edi
  unsigned int v33; // r13d
  __int64 v34; // rax
  __int64 v35; // rcx
  int v36; // esi
  __int64 v37; // rbp
  __int64 v38; // r8
  __int64 v39; // rbp
  __int64 v40; // r13
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned int v45; // r8d
  __int64 v46; // rax
  unsigned int *v47; // rax
  unsigned int v48; // ecx
  unsigned int v49; // r8d
  unsigned int *v50; // r15
  unsigned int *v51; // rsi
  size_t v52; // rdx
  bool v53; // zf
  unsigned int v54; // ebp
  size_t v55; // rsi
  unsigned int *v56; // rax
  __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // r11
  char *v61; // rbp
  __int64 v62; // rdx
  unsigned __int64 v63; // rdx
  __int64 v64; // rdi
  __int64 v65; // rsi
  __int64 v66; // r15
  __int64 v67; // rdx
  char *v68; // r15
  __int64 *v69; // r14
  char *v70; // r12
  __int64 v71; // r13
  __int64 v72; // rbp
  __int64 v73; // rdi
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rdx
  int v77; // [rsp+8h] [rbp-A0h]
  unsigned int v78; // [rsp+8h] [rbp-A0h]
  unsigned int v79; // [rsp+8h] [rbp-A0h]
  unsigned int v80; // [rsp+8h] [rbp-A0h]
  int v81; // [rsp+8h] [rbp-A0h]
  __int64 v82; // [rsp+8h] [rbp-A0h]
  unsigned int v83; // [rsp+10h] [rbp-98h]
  unsigned int v84; // [rsp+10h] [rbp-98h]
  unsigned int v85; // [rsp+10h] [rbp-98h]
  size_t v86; // [rsp+10h] [rbp-98h]
  char *v87; // [rsp+10h] [rbp-98h]
  __int64 v88; // [rsp+10h] [rbp-98h]
  __int64 v89; // [rsp+18h] [rbp-90h]
  unsigned int v90; // [rsp+18h] [rbp-90h]
  int v91; // [rsp+24h] [rbp-84h]
  __int64 v92; // [rsp+28h] [rbp-80h]
  __int64 v93; // [rsp+38h] [rbp-70h]
  __int64 v94; // [rsp+38h] [rbp-70h]
  __int64 v95; // [rsp+38h] [rbp-70h]
  __int64 v96; // [rsp+40h] [rbp-68h]
  unsigned int v97; // [rsp+40h] [rbp-68h]
  __int64 v98; // [rsp+48h] [rbp-60h]
  __int64 v99[11]; // [rsp+50h] [rbp-58h] BYREF

  v10 = a2;
  v11 = *((unsigned int *)a2 + 2);
  v12 = (char *)*a2;
  v13 = *(_DWORD *)(a3 + 12);
  v14 = v11 - 1;
  v11 *= 24;
  v15 = 3LL * (v13 & v14);
  v16 = &v12[v11];
  v17 = 8 * v15;
  v18 = &v12[v17];
  if ( v17 == v11 )
  {
LABEL_29:
    while ( v18 != v12 )
    {
      v43 = *(_QWORD *)v12;
      if ( *(_QWORD *)v12 > 1u )
      {
        if ( *(_DWORD *)(v43 + 12) == v13 && a3 == v43 )
        {
          v19 = v12;
          goto LABEL_38;
        }
      }
      else if ( !v43 )
      {
        break;
      }
      v12 += 24;
    }
LABEL_8:
    v21 = 0;
    goto LABEL_9;
  }
  v19 = &v12[v17];
  while ( 1 )
  {
    v20 = *(_QWORD *)v19;
    if ( *(_QWORD *)v19 > 1u )
      break;
    if ( !v20 )
      goto LABEL_8;
LABEL_5:
    v19 += 24;
    if ( v16 == v19 )
      goto LABEL_29;
  }
  if ( *(_DWORD *)(v20 + 12) != v13 || a3 != v20 )
    goto LABEL_5;
LABEL_38:
  v44 = *((_QWORD *)v19 + 1);
  if ( !v44 )
  {
    v21 = *((_DWORD *)v19 + 4);
LABEL_9:
    v83 = a4;
    v77 = v21;
    v22 = (_QWORD *)sub_186B270(0x10u);
    v23 = v22 + 1;
    v24 = v77;
    v25 = v83;
    *v22 = 2;
    v26 = (unsigned int *)(v22 + 1);
    goto LABEL_10;
  }
  v45 = *(_DWORD *)(v44 - 4);
  v46 = *(unsigned int *)(v44 - 8);
  v90 = a4;
  v84 = v45;
  v80 = v46;
  v47 = (unsigned int *)sub_186B270(4 * v46 + 8);
  v48 = v80;
  v49 = v84;
  v50 = v47;
  v23 = v47 + 2;
  v51 = *((unsigned int **)v19 + 1);
  v25 = v90;
  *(_QWORD *)v47 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v80), _mm_cvtsi32_si128(v84)).m128i_u64[0];
  if ( v51 )
  {
    v52 = 4LL * *(v51 - 1);
    v53 = v52 == 4;
    if ( v52 > 4 )
    {
      memmove(v47 + 2, v51, v52);
      v24 = *((_DWORD *)v19 + 4);
      v25 = v90;
      goto LABEL_42;
    }
    v24 = *((_DWORD *)v19 + 4);
    if ( v53 )
    {
      v47[2] = *v51;
LABEL_42:
      v49 = v50[1];
      v48 = *v50;
    }
  }
  else
  {
    v24 = *((_DWORD *)v19 + 4);
  }
  v26 = &v23[v49];
  if ( v49 == v48 )
  {
    v54 = (3 * v49 + 1) >> 1;
    v55 = 4 * v54 + 8;
    if ( 4 * v49 + 8 >= (unsigned int)v55 || v49 >= v54 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_1643DA(v99, "Overflow encountered when expanding vector", v6);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v99);
      sub_233E40((__int64)v99);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v85 = v25;
    v81 = v24;
    v56 = (unsigned int *)sub_186B300(v50, v55);
    v23 = v56 + 2;
    v24 = v81;
    v25 = v85;
    *v56 = v54;
    v26 = &v56[v56[1] + 2];
  }
LABEL_10:
  *v26 = v25;
  v91 = v24 | a5;
  v27 = *(v23 - 1) + 1;
  v28 = (unsigned int)*(v23 - 2);
  *(v23 - 1) = v27;
  v78 = v28;
  v29 = sub_186B270(4 * v28 + 8);
  v92 = v29 + 8;
  v30 = 4LL * (unsigned int)*(v23 - 1);
  *(_QWORD *)v29 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v78), _mm_cvtsi32_si128(v27)).m128i_u64[0];
  if ( v30 <= 4 )
  {
    if ( v30 == 4 )
      *(_DWORD *)(v29 + 8) = *v23;
  }
  else
  {
    memcpy((void *)(v29 + 8), v23, v30);
  }
  v31 = *((unsigned int *)v10 + 2);
  v32 = *((_DWORD *)v10 + 4);
  v33 = 2 * v31;
  if ( 3 * (int)v31 >= (unsigned int)(4 * (v32 + *((_DWORD *)v10 + 3))) )
  {
    v79 = v31 - 1;
    v34 = *v10;
    v89 = 24 * v31;
    v35 = *v10 + 24 * v31;
    goto LABEL_14;
  }
  v86 = 24LL * v33;
  v89 = v86;
  v34 = sub_186B270(v86);
  if ( v33 )
  {
    v58 = v34;
    do
    {
      *(_DWORD *)(v58 + 16) = 0;
      v58 += 24;
      *(_OWORD *)(v58 - 24) = 0;
    }
    while ( v58 != v34 + 24LL * v33 );
  }
  v79 = v33 - 1;
  v59 = *((unsigned int *)v10 + 2);
  v60 = *v10 + 8;
  v61 = (char *)(*v10 + 24 * v59);
  v35 = v34 + v86;
  if ( (char *)*v10 != v61 )
  {
    while ( 1 )
    {
      v63 = *(_QWORD *)(v60 - 8);
      if ( v63 <= 1 )
      {
        v62 = v60 + 24;
        if ( v61 == (char *)(v60 + 16) )
          goto LABEL_67;
        goto LABEL_56;
      }
      v64 = 24LL * (*(_DWORD *)(v63 + 12) & v79);
      v65 = v34 + v64;
      if ( v86 == v64 )
      {
LABEL_76:
        if ( v34 == v65 )
        {
LABEL_90:
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        v66 = v34;
        while ( *(_QWORD *)v66 )
        {
          v66 += 24;
          if ( v65 == v66 )
            goto LABEL_90;
        }
        *(_QWORD *)v66 = v63;
        if ( v60 != v66 + 8 )
        {
          v67 = *(_QWORD *)(v66 + 8);
          if ( v67 )
          {
LABEL_64:
            v98 = v35;
            v96 = v60;
            v93 = v34;
            sub_186B220((void *)(v67 - 8));
            v35 = v98;
            v60 = v96;
            v34 = v93;
          }
LABEL_65:
          *(_QWORD *)(v66 + 8) = 0;
          *(_QWORD *)(v66 + 8) = *(_QWORD *)v60;
          *(_QWORD *)v60 = 0;
        }
      }
      else
      {
        v66 = v34 + v64;
        while ( *(_QWORD *)v66 )
        {
          v66 += 24;
          if ( v35 == v66 )
            goto LABEL_76;
        }
        *(_QWORD *)v66 = v63;
        if ( v60 != v66 + 8 )
        {
          v67 = *(_QWORD *)(v66 + 8);
          if ( v67 )
            goto LABEL_64;
          goto LABEL_65;
        }
      }
      *(_DWORD *)(v66 + 16) = *(_DWORD *)(v60 + 8);
      v62 = v60 + 24;
      if ( v61 == (char *)(v60 + 16) )
      {
LABEL_67:
        v59 = *((unsigned int *)v10 + 2);
        v61 = (char *)*v10;
        break;
      }
LABEL_56:
      v60 = v62;
    }
  }
  if ( v61 )
  {
    if ( (_DWORD)v59 )
    {
      v94 = a3;
      v68 = v61;
      v69 = v10;
      v97 = v33;
      v70 = v61;
      v71 = v35;
      v87 = &v61[24 * v59];
      v72 = v34;
      do
      {
        while ( 1 )
        {
          v73 = *((_QWORD *)v68 + 1);
          if ( !v73 )
            break;
          v68 += 24;
          sub_186B220((void *)(v73 - 8));
          if ( v87 == v68 )
            goto LABEL_73;
        }
        v68 += 24;
      }
      while ( v68 != v87 );
LABEL_73:
      v34 = v72;
      v35 = v71;
      v61 = v70;
      v33 = v97;
      v10 = v69;
      a3 = v94;
    }
    v95 = v35;
    v88 = v34;
    sub_186B220(v61);
    v34 = v88;
    v35 = v95;
  }
  *v10 = v34;
  v32 = 0;
  *((_DWORD *)v10 + 2) = v33;
  *((_DWORD *)v10 + 4) = 0;
LABEL_14:
  v36 = *(_DWORD *)(a3 + 12);
  v37 = v36 & v79;
  v38 = v34 + 24 * v37;
  if ( 24 * v37 == v89 )
  {
    v40 = 0;
    while ( 1 )
    {
LABEL_25:
      if ( v38 == v34 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v42 = *(_QWORD *)v34;
      if ( *(_QWORD *)v34 > 1u )
      {
        if ( *(_DWORD *)(v42 + 12) == v36 && a3 == v42 )
        {
          v76 = *(_QWORD *)(v34 + 8);
          *(_QWORD *)v34 = a3;
          if ( v76 )
          {
            v82 = v34;
            sub_186B220((void *)(v76 - 8));
            v34 = v82;
          }
          *(_QWORD *)(v34 + 8) = v92;
          *(_DWORD *)(v34 + 16) = v91;
          return sub_186B220(v23 - 2);
        }
      }
      else
      {
        if ( !v42 )
        {
          if ( v40 )
            *((_DWORD *)v10 + 4) = v32 - 1;
          else
            v40 = v34;
          v74 = *(_QWORD *)(v40 + 8);
          *(_QWORD *)v40 = a3;
          if ( v74 )
            goto LABEL_88;
          goto LABEL_89;
        }
        v40 = v34;
      }
      v34 += 24;
    }
  }
  v39 = v34 + 24 * v37;
  v40 = 0;
  while ( 2 )
  {
    v41 = *(_QWORD *)v39;
    if ( *(_QWORD *)v39 > 1u )
    {
      if ( *(_DWORD *)(v41 + 12) == v36 && a3 == v41 )
      {
        v75 = *(_QWORD *)(v39 + 8);
        *(_QWORD *)v39 = a3;
        if ( v75 )
          sub_186B220((void *)(v75 - 8));
        *(_QWORD *)(v39 + 8) = v92;
        *(_DWORD *)(v39 + 16) = v91;
        return sub_186B220(v23 - 2);
      }
      goto LABEL_18;
    }
    if ( v41 )
    {
      v40 = v39;
LABEL_18:
      v39 += 24;
      if ( v39 == v35 )
        goto LABEL_25;
      continue;
    }
    break;
  }
  if ( v40 )
    *((_DWORD *)v10 + 4) = v32 - 1;
  else
    v40 = v39;
  v74 = *(_QWORD *)(v40 + 8);
  *(_QWORD *)v40 = a3;
  if ( !v74 )
    goto LABEL_89;
LABEL_88:
  sub_186B220((void *)(v74 - 8));
LABEL_89:
  *(_QWORD *)(v40 + 8) = v92;
  *(_DWORD *)(v40 + 16) = v91;
  ++*((_DWORD *)v10 + 3);
  return sub_186B220(v23 - 2);
}

