__int64 __fastcall sub_4ADDA0(__int64 a1, __int64 a2)
{
  char **v2; // r12
  char **exception; // r12
  __int64 v4; // rbp
  int v5; // eax
  _QWORD *v6; // r13
  __int64 v7; // rdx
  _QWORD *v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r12
  void *v12; // rbp
  __int64 v13; // rsi
  int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // r12d
  unsigned int v17; // edi
  __int64 v18; // r14
  void *v19; // r12
  int v20; // eax
  int v21; // eax
  void *v22; // r12
  _QWORD *v23; // rsi
  int v24; // eax
  int v25; // eax
  void *v26; // r14
  _QWORD *v27; // r12
  int v28; // eax
  int v29; // eax
  unsigned __int64 v30; // r11
  __int64 v31; // rax
  _QWORD *v32; // r12
  unsigned int v33; // r14d
  unsigned __int64 *v34; // rax
  _QWORD *v35; // rbx
  unsigned __int64 v36; // xmm0_8
  __int64 v37; // r14
  _QWORD *v38; // r15
  _QWORD *v39; // r12
  int v40; // eax
  void *v41; // r14
  int v42; // eax
  void *v43; // r14
  int v44; // eax
  int v45; // eax
  void *v46; // r14
  int v47; // eax
  int v48; // eax
  void *v49; // rdi
  _QWORD *v50; // r12
  __int64 v51; // rax
  _QWORD *v52; // r12
  _QWORD *v53; // rbx
  void *v54; // r14
  _QWORD *v55; // rsi
  void *v56; // rbx
  void *v57; // rbx
  void *v58; // rbx
  unsigned int v60; // r15d
  size_t v61; // rdi
  unsigned int *v62; // rcx
  __int64 *v63; // r14
  __int64 v64; // r9
  __int64 v65; // rsi
  __int64 *v66; // r10
  __int64 *v67; // rdx
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // rdi
  __m128i v70; // xmm0
  unsigned __int64 v71; // rdi
  __int64 *v72; // rdx
  __int64 v73; // rsi
  __int64 *v74; // r12
  __int64 v75; // r15
  __int64 v76; // rcx
  __int64 v77; // rbx
  void *v78; // rbp
  __int64 v79; // rsi
  _DWORD *v80; // rsi
  __int64 v81; // rax
  _QWORD *v82; // rax
  unsigned int v83; // ecx
  unsigned int i; // eax
  unsigned int v85; // r12d
  size_t v86; // rdi
  unsigned int *v87; // r14
  _DWORD *v88; // rsi
  __int64 v89; // rax
  _DWORD *v90; // rdx
  _QWORD *v91; // rdi
  _QWORD *j; // rax
  int v93; // ecx
  char v94; // r8
  __int64 v95; // rcx
  char v96; // r8
  __int64 v97; // rcx
  __int64 v98; // rax
  _QWORD *v99; // rbx
  _QWORD *v100; // rbp
  void *v101; // r12
  _QWORD *v102; // rsi
  _QWORD *v103; // rax
  unsigned int v104; // [rsp+8h] [rbp-140h]
  unsigned int v105; // [rsp+10h] [rbp-138h]
  void *v106; // [rsp+18h] [rbp-130h]
  unsigned int v107; // [rsp+28h] [rbp-120h]
  _QWORD *v108; // [rsp+30h] [rbp-118h]
  _QWORD *v109; // [rsp+38h] [rbp-110h]
  _QWORD *v111; // [rsp+48h] [rbp-100h]
  unsigned int v112; // [rsp+60h] [rbp-E8h]
  unsigned int v113; // [rsp+60h] [rbp-E8h]
  unsigned int *v114; // [rsp+60h] [rbp-E8h]
  unsigned int *v115; // [rsp+68h] [rbp-E0h]
  unsigned __int64 v116; // [rsp+68h] [rbp-E0h]
  _DWORD *v117; // [rsp+70h] [rbp-D8h]
  __int64 v118; // [rsp+78h] [rbp-D0h]
  _QWORD v119[2]; // [rsp+90h] [rbp-B8h] BYREF
  _QWORD v120[2]; // [rsp+A0h] [rbp-A8h] BYREF
  _QWORD v121[2]; // [rsp+B0h] [rbp-98h] BYREF
  _QWORD v122[2]; // [rsp+C0h] [rbp-88h] BYREF
  _QWORD v123[2]; // [rsp+D0h] [rbp-78h] BYREF
  _QWORD v124[2]; // [rsp+E0h] [rbp-68h] BYREF
  __int64 v125[11]; // [rsp+F0h] [rbp-58h] BYREF

  v4 = a1;
  v5 = *(_DWORD *)(a1 + 4);
  v6 = *(_QWORD **)(a2 + 8);
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 4) = v5 + 1;
  if ( v6 )
  {
    v7 = *((unsigned int *)v6 - 1);
    if ( (_DWORD)v7 )
    {
      v8 = &v6[v7];
      do
      {
        v9 = *v6;
        if ( *v6 )
        {
          v10 = *(unsigned int *)(v9 - 4);
          if ( (_DWORD)v10 )
          {
            v11 = v9 + 32 * v10;
            do
            {
              v12 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v9);
              v13 = v9 + 16;
              v9 += 32;
              sub_182CBA0(v12, v13);
            }
            while ( v9 != v11 );
            v9 = *v6;
          }
          sub_186B220((void *)(v9 - 8));
        }
        ++v6;
      }
      while ( v6 != v8 );
      v4 = a1;
      v6 = *(_QWORD **)(a2 + 8);
    }
    *((_DWORD *)v6 - 1) = 0;
  }
  v119[0] = 0;
  v14 = *(_DWORD *)(v4 + 4);
  v119[1] = 0;
  v120[0] = 1;
  v120[1] = 0;
  v121[0] = 0;
  v121[1] = 0;
  v122[0] = 1;
  v122[1] = 0;
  v123[0] = 0;
  v123[1] = 0;
  v124[0] = 1;
  v124[1] = 0;
  v104 = v14 + 1;
  if ( v14 == -1 )
  {
    v108 = nullptr;
    v15 = -1;
LABEL_15:
    v107 = 0;
    v109 = v108;
    while ( 1 )
    {
      v16 = v107;
      v17 = v107 + 1;
      v107 = v17;
      if ( v17 >= v15 )
        goto LABEL_52;
      v18 = v17;
      while ( !(unsigned __int8)sub_4A9110(v4, v16, v18, (__int64)v119, (__int64)v121, (int *)v123) )
      {
        v15 = *(_DWORD *)(v4 + 4);
        v18 = (unsigned int)(v18 + 1);
        if ( (unsigned int)v18 >= v15 )
          goto LABEL_51;
      }
      v19 = qword_1C7F2C0;
      if ( (v119[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(qword_1C7F2C0, v109, v119);
      }
      else
      {
        v20 = v119[0];
        *((_BYTE *)v109 + 4) &= ~1u;
        *(_DWORD *)v109 = v20;
      }
      if ( (v120[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v19, v109 + 2, v120);
      }
      else
      {
        v21 = v120[0];
        *((_BYTE *)v109 + 20) &= ~1u;
        *((_DWORD *)v109 + 4) = v21;
      }
      v22 = qword_1C7F2C0;
      v23 = &v108[4 * v18];
      v111 = v23;
      if ( (v121[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(qword_1C7F2C0, v23, v121);
      }
      else
      {
        v24 = v121[0];
        *((_BYTE *)v23 + 4) &= ~1u;
        *(_DWORD *)v23 = v24;
      }
      if ( (v122[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v22, v23 + 2, v122);
      }
      else
      {
        v25 = v122[0];
        *((_BYTE *)v23 + 20) &= ~1u;
        *((_DWORD *)v23 + 4) = v25;
      }
      v26 = qword_1C7F2C0;
      v27 = &v108[4 * *(unsigned int *)(v4 + 4)];
      if ( (v123[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(qword_1C7F2C0, &v108[4 * *(unsigned int *)(v4 + 4)], v123);
      }
      else
      {
        v28 = v123[0];
        *((_BYTE *)v27 + 4) &= ~1u;
        *(_DWORD *)v27 = v28;
      }
      if ( (v124[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v26, v27 + 2, v124);
        v30 = *(_QWORD *)(a2 + 8);
        if ( !v30 )
        {
LABEL_83:
          v31 = sub_186B270(0x18u);
          v30 = v31 + 8;
          *(_QWORD *)v31 = 2;
          v32 = (_QWORD *)(v31 + 8);
          *(_QWORD *)(a2 + 8) = v31 + 8;
          LODWORD(v31) = 0;
          goto LABEL_33;
        }
      }
      else
      {
        v29 = v124[0];
        *((_BYTE *)v27 + 20) &= ~1u;
        *((_DWORD *)v27 + 4) = v29;
        v30 = *(_QWORD *)(a2 + 8);
        if ( !v30 )
          goto LABEL_83;
      }
      LODWORD(v31) = *(_DWORD *)(v30 - 4);
      v32 = (_QWORD *)(v30 + 8LL * (unsigned int)v31);
      if ( (_DWORD)v31 == *(_DWORD *)(v30 - 8) )
      {
        v60 = (unsigned int)(3 * v31 + 1) >> 1;
        v61 = 8 * v60 + 8;
        if ( 8 * (int)v31 + 8 >= (unsigned int)v61 || (unsigned int)v31 >= v60 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v125, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v125);
          sub_233E40((__int64)v125);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v62 = (unsigned int *)sub_186B270(v61);
        v30 = (unsigned __int64)(v62 + 2);
        v63 = *(__int64 **)(a2 + 8);
        if ( v63 )
        {
          v64 = *((unsigned int *)v63 - 1);
          v65 = 8 * v64;
          v62[1] = v64;
          v66 = &v63[v64];
          if ( v63 != v66 )
          {
            v67 = v63;
            if ( (unsigned __int64)(v65 - 8) <= 8 || v63 < (__int64 *)v62 + 3 && v30 < (unsigned __int64)(v63 + 2) )
            {
              v80 = v62 + 2;
              do
              {
                v81 = *v67;
                *v67++ = 0;
                v80 += 2;
                *((_QWORD *)v80 - 1) = v81;
              }
              while ( v66 != v67 );
            }
            else
            {
              v68 = 0;
              v69 = ((unsigned __int64)(v65 - 8) >> 3) + 1;
              do
              {
                v70 = _mm_loadu_si128((const __m128i *)&v63[v68 / 2]);
                *(_OWORD *)&v63[v68 / 2] = 0;
                *(__m128i *)&v62[v68 + 2] = v70;
                v68 += 4LL;
              }
              while ( 4 * (v69 >> 1) != v68 );
              if ( (v69 & 1) != 0 )
              {
                v71 = v69 & 0xFFFFFFFFFFFFFFFELL;
                v72 = &v63[v71];
                v73 = *v72;
                *v72 = 0;
                *(_QWORD *)(v30 + 8 * v71) = v73;
              }
            }
          }
          v74 = &v63[v64];
          if ( (_DWORD)v64 )
          {
            v113 = v60;
            v115 = v62;
            v117 = v62 + 2;
            v118 = v4;
            do
            {
              v75 = *v63;
              if ( *v63 )
              {
                v76 = *(unsigned int *)(v75 - 4);
                if ( (_DWORD)v76 )
                {
                  v77 = v75 + 32 * v76;
                  do
                  {
                    v78 = qword_1C7F2C0;
                    sub_182CBA0(qword_1C7F2C0, v75);
                    v79 = v75 + 16;
                    v75 += 32;
                    sub_182CBA0(v78, v79);
                  }
                  while ( v75 != v77 );
                  v75 = *v63;
                }
                sub_186B220((void *)(v75 - 8));
              }
              ++v63;
            }
            while ( v63 != v74 );
            v60 = v113;
            v62 = v115;
            v30 = (unsigned __int64)v117;
            v4 = v118;
            v63 = *(__int64 **)(a2 + 8);
          }
          v116 = v30;
          v114 = v62;
          sub_186B220(v63 - 1);
          v62 = v114;
          v30 = v116;
          v31 = v114[1];
          v32 = (_QWORD *)(v116 + 8 * v31);
        }
        else
        {
          v62[1] = 0;
          v32 = v62 + 2;
          LODWORD(v31) = 0;
        }
        *v62 = v60;
        *(_QWORD *)(a2 + 8) = v30;
      }
LABEL_33:
      *v32 = 0;
      if ( !v108 )
        goto LABEL_42;
      v33 = *((_DWORD *)v108 - 1);
      v112 = *((_DWORD *)v108 - 2);
      v34 = (unsigned __int64 *)sub_186B270(32LL * v112 + 8);
      v35 = v34 + 1;
      v36 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v112), _mm_cvtsi32_si128(v33)).m128i_u64[0];
      v37 = 4LL * *((unsigned int *)v108 - 1);
      *v34 = v36;
      v38 = &v108[v37];
      *v32 = v34 + 1;
      v39 = v108;
      if ( v108 != &v108[v37] )
      {
        while ( 1 )
        {
          *((_BYTE *)v35 + 4) &= 0xFCu;
          v41 = qword_1C7F2C0;
          *((_BYTE *)v35 + 20) &= 0xFCu;
          *(_DWORD *)v35 = 0;
          v35[1] = 0;
          *((_DWORD *)v35 + 4) = 1;
          v35[3] = 0;
          if ( (*((_BYTE *)v39 + 4) & 1) != 0 )
          {
            sub_182C690(v41, v35, v39);
            if ( (*((_BYTE *)v39 + 20) & 1) != 0 )
              goto LABEL_40;
LABEL_37:
            v40 = *((_DWORD *)v39 + 4);
            v39 += 4;
            *((_BYTE *)v35 + 20) &= ~1u;
            v35 += 4;
            *((_DWORD *)v35 - 4) = v40;
            if ( v38 == v39 )
              break;
          }
          else
          {
            *(_DWORD *)v35 = *(_DWORD *)v39;
            if ( (*((_BYTE *)v39 + 20) & 1) == 0 )
              goto LABEL_37;
LABEL_40:
            sub_182C690(v41, v35 + 2, v39 + 2);
            v39 += 4;
            v35 += 4;
            if ( v38 == v39 )
              break;
          }
        }
      }
      v30 = *(_QWORD *)(a2 + 8);
      LODWORD(v31) = *(_DWORD *)(v30 - 4);
LABEL_42:
      v42 = v31 + 1;
      *(_DWORD *)(v30 - 4) = v42;
      v43 = qword_1C7F2C0;
      *(_DWORD *)a2 = v42;
      if ( (*(_BYTE *)(&qword_1C7F2A0 + 1) & 1) != 0 )
      {
        sub_182C690(v43, v109, &qword_1C7F2A0);
      }
      else
      {
        v44 = qword_1C7F2A0;
        *((_BYTE *)v109 + 4) &= ~1u;
        *(_DWORD *)v109 = v44;
      }
      if ( (qword_1C7F2B0 & 0x100000000LL) != 0 )
      {
        sub_182C690(v43, v109 + 2, &qword_1C7F2B0);
      }
      else
      {
        v45 = qword_1C7F2B0;
        *((_BYTE *)v109 + 20) &= ~1u;
        *((_DWORD *)v109 + 4) = v45;
      }
      v46 = qword_1C7F2C0;
      if ( (*(_BYTE *)(&qword_1C7F2A0 + 1) & 1) != 0 )
      {
        sub_182C690(qword_1C7F2C0, v111, &qword_1C7F2A0);
      }
      else
      {
        v47 = qword_1C7F2A0;
        *((_BYTE *)v111 + 4) &= ~1u;
        *(_DWORD *)v111 = v47;
      }
      if ( (qword_1C7F2B0 & 0x100000000LL) != 0 )
      {
        sub_182C690(v46, v111 + 2, &qword_1C7F2B0);
      }
      else
      {
        v48 = qword_1C7F2B0;
        *((_BYTE *)v111 + 20) &= ~1u;
        *((_DWORD *)v111 + 4) = v48;
      }
      v49 = qword_1C7F2C0;
      v50 = &v108[4 * *(unsigned int *)(v4 + 4)];
      *((_BYTE *)v50 + 4) &= ~1u;
      *(_DWORD *)v50 = 0;
      sub_182CBA0(v49, v50 + 2);
      *((_BYTE *)v50 + 20) &= ~1u;
      v15 = *(_DWORD *)(v4 + 4);
      *((_DWORD *)v50 + 4) = 1;
LABEL_51:
      v109 += 4;
      if ( v107 >= v15 )
      {
LABEL_52:
        LOBYTE(v4) = *(_DWORD *)a2 != 0;
        if ( !v108 )
          goto LABEL_57;
        goto LABEL_53;
      }
    }
  }
  v82 = (_QWORD *)sub_186B270(0x48u);
  *v82 = 2;
  v83 = v104;
  v108 = v82 + 1;
  for ( i = *(_DWORD *)v82; i < v104; i = *(v88 - 2) )
  {
    v85 = (3 * i + 1) >> 1;
    v86 = 32 * v85 + 8;
    if ( 32 * i + 8 >= (unsigned int)v86 || i >= v85 )
    {
      v2 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v125, "Overflow encountered when expanding vector");
      *v2 = (char *)off_1C63128;
      sub_2333C0(v2 + 1, v125);
      sub_233E40((__int64)v125);
      __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v87 = (unsigned int *)sub_186B270(v86);
    v88 = v87 + 2;
    v89 = *((unsigned int *)v108 - 1);
    v90 = v87 + 2;
    v87[1] = v89;
    v91 = &v108[4 * v89];
    for ( j = v108; v91 != j; *((_QWORD *)v90 - 1) = v97 )
    {
      v93 = *(_DWORD *)j;
      v94 = *((_BYTE *)j + 4);
      j += 4;
      v90 += 8;
      *(v90 - 8) = v93;
      *((_BYTE *)v90 - 28) = v94 & 3 | *(_BYTE *)(v90 - 7) & 0xFC;
      v95 = *(j - 3);
      *(j - 3) = 0;
      *((_QWORD *)v90 - 3) = v95;
      v96 = *((_BYTE *)j - 12);
      *(v90 - 4) = *((_DWORD *)j - 4);
      *((_BYTE *)v90 - 12) = v96 & 3 | *(_BYTE *)(v90 - 3) & 0xFC;
      v97 = *(j - 1);
      *(j - 1) = 0;
    }
    v98 = *((unsigned int *)v108 - 1);
    if ( (_DWORD)v98 )
    {
      v105 = v85;
      v106 = (void *)v4;
      v99 = &v108[4 * v98];
      v100 = v108;
      do
      {
        v101 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v100);
        v102 = v100 + 2;
        v100 += 4;
        sub_182CBA0(v101, v102);
      }
      while ( v100 != v99 );
      v85 = v105;
      v4 = (__int64)v106;
      v88 = v87 + 2;
    }
    sub_186B220(v108 - 1);
    v83 = v104;
    *v87 = v85;
    v108 = v88;
  }
  v103 = v108;
  *((_DWORD *)v108 - 1) = v83;
  do
  {
    *((_OWORD *)v103 + 1) = 0;
    v103 += 4;
    *((_OWORD *)v103 - 2) = 0;
    *((_DWORD *)v103 - 4) = 1;
    *((_BYTE *)v103 - 28) = 0;
    *((_BYTE *)v103 - 12) = 0;
  }
  while ( &v108[4 * v83] != v103 );
  v15 = *(_DWORD *)(v4 + 4);
  if ( v15 )
    goto LABEL_15;
  LOBYTE(v4) = *(_DWORD *)a2 != 0;
LABEL_53:
  v51 = *((unsigned int *)v108 - 1);
  if ( (_DWORD)v51 )
  {
    v52 = v108;
    v53 = &v108[4 * v51];
    do
    {
      v54 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v52);
      v55 = v52 + 2;
      v52 += 4;
      sub_182CBA0(v54, v55);
    }
    while ( v53 != v52 );
  }
  sub_186B220(v108 - 1);
LABEL_57:
  v56 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v123);
  sub_182CBA0(v56, v124);
  v57 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v121);
  sub_182CBA0(v57, v122);
  v58 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v119);
  sub_182CBA0(v58, v120);
  return (unsigned int)v4;
}

