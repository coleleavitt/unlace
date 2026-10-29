/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400019D0
// Address: 0x00000001400019D0

//----- (00000001400019D0) ----------------------------------------------------
__int64 __fastcall sub_1400019D0(_QWORD *a1, int a2, unsigned __int64 a3, __int64 a4, _QWORD *a5, _QWORD *a6)
{
  int v10; // ebx
  _QWORD *v11; // rax
  __int64 result; // rax
  void *v13; // rax
  char *v14; // r13
  void **v15; // rsi
  unsigned __int64 v16; // r8
  char *v17; // r13
  _OWORD *v18; // rax
  char *v19; // rcx
  const char *v20; // r12
  unsigned __int64 v21; // rdi
  char *v22; // rcx
  size_t v24; // rax
  void *v25; // rdi
  void *v26; // rcx
  char *v27; // rcx
  const char *v28; // rdx
  size_t v30; // rax
  size_t v31; // r12
  size_t v32; // rdi
  void *v33; // rax
  const char *v34; // r12
  char *v35; // rcx
  size_t v37; // rax
  size_t v38; // r13
  size_t v39; // rdi
  void *v40; // rax
  char *v41; // rdi
  unsigned __int64 v42; // rdx
  void *v43; // rcx
  void *v44; // rax
  int v45; // eax
  __int64 v46; // rdx
  unsigned __int64 v47; // r8
  __int64 *k; // rcx
  __int64 v49; // r13
  __int64 v50; // rax
  __int64 v51; // r12
  unsigned int v52; // eax
  unsigned int v53; // eax
  unsigned int v54; // eax
  char *v55; // r12
  size_t v56; // rax
  size_t v57; // r13
  char *v58; // rax
  char *v59; // rdi
  unsigned __int64 v60; // rbx
  char *v61; // rcx
  const char *v62; // rax
  const char *v63; // r12
  size_t v64; // rax
  size_t v65; // rdx
  char *v66; // rax
  char *v67; // rcx
  unsigned __int64 v68; // r13
  char *v69; // rcx
  char *v70; // rdx
  void *v71; // rcx
  void *v72; // rax
  __int64 v73; // rbx
  unsigned __int64 v74; // rdx
  __int64 *j; // rcx
  __int64 v76; // rdi
  int v77; // eax
  int v78; // ebx
  char v79; // al
  int v80; // eax
  char v81; // bl
  size_t v82; // rsi
  void *v83; // rax
  void *v84; // r12
  int v85; // eax
  __int64 v86; // rbx
  unsigned __int64 v87; // r8
  __int64 i; // rcx
  __int64 v89; // rbx
  unsigned __int64 v90; // rdx
  __int64 *m; // rcx
  __int64 v92; // rdi
  __int64 v93; // rbx
  __int64 v94; // rax
  char v95; // al
  char v96; // r12
  size_t v97; // rbx
  void *v98; // rax
  void *v99; // rsi
  __int64 v100; // rbx
  unsigned __int64 v101; // rdx
  __int64 *n; // rcx
  __int64 v103; // rsi
  int v104; // edi
  int v105; // ebx
  int v106; // eax
  char v107; // al
  void *v108; // rax
  void *v109; // rdi
  __int64 v110; // rbx
  unsigned __int64 v111; // rdx
  __int64 *ii; // rcx
  __int64 v113; // rdi
  __int64 v114; // rbx
  int v115; // eax
  __int64 v116; // rbx
  unsigned __int64 v117; // rdx
  __int64 *jj; // rcx
  int v119; // eax
  __int64 v120; // rbx
  unsigned __int64 v121; // rdx
  __int64 *kk; // rcx
  int v123; // eax
  __int64 v124; // rbx
  unsigned __int64 v125; // rdx
  __int64 *mm; // rcx
  int v127; // eax
  unsigned __int64 v128; // rdx
  unsigned __int64 v129; // r8
  __int64 *v130; // rcx
  __int64 v131; // rdi
  char *v132; // rcx
  const char *v133; // r12
  const char *v135; // rax
  unsigned __int64 v136; // rcx
  char *v137; // rax
  char *v138; // r13
  void *v139; // rcx
  const char *v140; // rdx
  char v141; // al
  size_t v142; // r12
  void *v143; // rax
  void *v144; // r13
  unsigned int v145; // edi
  char *v146[2]; // [rsp+20h] [rbp-E0h] BYREF
  void *Src; // [rsp+30h] [rbp-D0h] BYREF
  char *v148; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v149; // [rsp+40h] [rbp-C0h]
  char v150; // [rsp+48h] [rbp-B8h]
  char *Str; // [rsp+50h] [rbp-B0h] BYREF
  void *Block; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v153; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v154; // [rsp+68h] [rbp-98h]
  size_t Size; // [rsp+70h] [rbp-90h]
  size_t v156; // [rsp+78h] [rbp-88h]
  void *v157[2]; // [rsp+80h] [rbp-80h] BYREF
  void *v158[2]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v159; // [rsp+A0h] [rbp-60h]
  __int128 v160; // [rsp+B0h] [rbp-50h]
  __int64 v161; // [rsp+C0h] [rbp-40h]
  void *v162; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v163; // [rsp+D0h] [rbp-30h]
  __int64 v164; // [rsp+E0h] [rbp-20h]
  __int64 v165; // [rsp+E8h] [rbp-18h]
  int v166; // [rsp+F0h] [rbp-10h]

  switch ( a2 )
  {
    case 0:
      if ( a4 != 8 )
      {
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(30119);
      }
      v10 = sub_1400195E0((__int64)a1, *(_DWORD *)a3, &Str);
      if ( v10 >= 0 )
      {
        v11 = sub_14005AA50(8);
        *a5 = v11;
        if ( v11 )
        {
          *v11 = Str;
          *a6 = 8;
        }
      }
      return (unsigned int)v10;
    case 1:
      if ( a4 != 16 )
      {
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(30120);
      }
      return sub_14001D080((__int64)a1, *(_DWORD *)a3, *(_QWORD *)(a3 + 8));
    case 3:
      sub_140008E10((__int64)&qword_1400CAE08);
      Src = (void *)a3;
      v148 = (char *)(a3 + a4);
      v13 = operator new(0x148u);
      v156 = (size_t)v13;
      if ( v13 )
        v14 = (char *)sub_140003280((__int64)v13);
      else
        v14 = nullptr;
      Str = v14;
      v15 = (void **)(a1 + 165);
      v16 = a1[166] + 1LL;
      if ( v16 > a1[167] )
        *v15 = sub_14005ABE0((__int64)(a1 + 165), *v15, v16, 8u);
      *((_QWORD *)*v15 + a1[166]++) = v14;
      v146[0] = nullptr;
      LOWORD(v146[1]) = 0;
      HIDWORD(v146[1]) = 0;
      v17 = (char *)Src;
      v18 = Src;
      v19 = (char *)Src + 16;
      v20 = (const char *)Src;
      v21 = (unsigned __int64)v148;
      if ( (char *)Src + 16 >= Src && v19 <= v148 )
      {
        v17 = (char *)Src + 16;
        Src = (char *)Src + 16;
        *(_OWORD *)v146 = *v18;
        v20 = v19;
      }
      *(_OWORD *)v157 = 0;
      *(_OWORD *)v158 = 0;
      v159 = 0;
      v160 = 0;
      v161 = 0;
      v162 = nullptr;
      v163 = 0;
      v164 = -1;
      v165 = 0;
      v166 = 18;
      v22 = (char *)v20;
      do
      {
        if ( v22 >= v148 )
          goto LABEL_26;
      }
      while ( *v22++ );
      v17 = v22;
      Src = v22;
      if ( !v20 || (v24 = strlen(v20), (Size = v24) == 0) )
      {
LABEL_26:
        v157[1] = nullptr;
        goto LABEL_27;
      }
      v25 = (void *)(v24 + 1);
      if ( v24 == -1 )
      {
        v26 = v157[0];
      }
      else
      {
        v26 = sub_14005ABE0((__int64)v157, v157[0], v24 + 1, 1u);
        v157[0] = v26;
        v24 = Size;
      }
      v157[1] = v25;
      memcpy(v26, v20, v24);
      *((_BYTE *)v157[0] + Size) = 0;
      v21 = (unsigned __int64)v148;
      v17 = (char *)Src;
LABEL_27:
      v27 = v17;
      v28 = v17;
      Size = (size_t)v17;
      do
      {
        if ( (unsigned __int64)v27 >= v21 )
          goto LABEL_36;
      }
      while ( *v27++ );
      v17 = v27;
      Src = v27;
      if ( !v28 || (v30 = strlen(v28), (v31 = v30) == 0) )
      {
LABEL_36:
        *(_QWORD *)&v159 = 0;
        goto LABEL_37;
      }
      v32 = v30 + 1;
      if ( v30 + 1 <= *((_QWORD *)&v159 + 1) )
      {
        v33 = v158[1];
      }
      else
      {
        v33 = sub_14005ABE0((__int64)&v158[1], v158[1], v30 + 1, 1u);
        v158[1] = v33;
      }
      *(_QWORD *)&v159 = v32;
      memcpy(v33, (const void *)Size, v31);
      *((_BYTE *)v158[1] + v31) = 0;
      v21 = (unsigned __int64)v148;
      v17 = (char *)Src;
LABEL_37:
      v34 = v17;
      if ( v17 + 24 >= v17 && (unsigned __int64)(v17 + 24) <= v21 )
      {
        Src = v17 + 24;
        v160 = *(_OWORD *)v17;
        v161 = *((_QWORD *)v17 + 2);
        v34 = v17 + 24;
      }
      v35 = (char *)v34;
      do
      {
        if ( (unsigned __int64)v35 >= v21 )
          goto LABEL_49;
      }
      while ( *v35++ );
      Src = v35;
      if ( !v34 || (v37 = strlen(v34), (v38 = v37) == 0) )
      {
LABEL_49:
        *(_QWORD *)&v163 = 0;
        goto LABEL_50;
      }
      v39 = v37 + 1;
      if ( v37 + 1 <= *((_QWORD *)&v163 + 1) )
      {
        v40 = v162;
      }
      else
      {
        v40 = sub_14005ABE0((__int64)&v162, v162, v37 + 1, 1u);
        v162 = v40;
      }
      *(_QWORD *)&v163 = v39;
      memcpy(v40, v34, v38);
      *((_BYTE *)v162 + v38) = 0;
      v21 = (unsigned __int64)v148;
LABEL_50:
      v164 = sub_14005B7B0((unsigned __int64 *)&Src, v21) - 1;
      v166 = sub_14005B690((unsigned __int64 *)&Src, (unsigned __int64)v148);
      v41 = Str;
      sub_140005F20((__int64)Str, v146, (__int64)v157);
      Block = nullptr;
      v153 = 0;
      v154 = 0;
      sub_140002D20(&Block, *((_DWORD *)v41 + 80));
      v42 = v153;
      *a6 = v153;
      v43 = Block;
      if ( v154 > v42 )
      {
        if ( Block )
        {
          if ( v42 )
          {
            v44 = sub_14005AAF0(Block, v42);
            v43 = Block;
            if ( v44 )
              v43 = v44;
          }
        }
      }
      v154 = 0;
      v153 = 0;
      Block = nullptr;
      *a5 = v43;
      v41[113] = 1;
      if ( Block )
      {
        v153 = 0;
        j_free(Block);
        Block = nullptr;
        v154 = 0;
      }
      if ( v162 )
      {
        *(_QWORD *)&v163 = 0;
        j_free(v162);
        v162 = nullptr;
        *((_QWORD *)&v163 + 1) = 0;
      }
      if ( v158[1] )
      {
        *(_QWORD *)&v159 = 0;
        j_free(v158[1]);
        v158[1] = nullptr;
        *((_QWORD *)&v159 + 1) = 0;
      }
      if ( v157[0] )
      {
        v157[1] = nullptr;
        j_free(v157[0]);
      }
      return 1;
    case 4:
      if ( !(unsigned __int8)sub_140005AD0((__int64)&qword_1400CAE08) )
        return sub_140002E60(a5, a6, "PDB thread not running?!?\n");
      v146[0] = (char *)a3;
      v146[1] = (char *)(a3 + a4);
      if ( a3 >= a3 + a4 )
        return 4294967294LL;
      v85 = sub_14005B690((unsigned __int64 *)v146, a3 + a4);
      v86 = 0;
      v87 = a1[166];
      if ( !v87 )
        return 1;
      for ( i = a1[165]; *(_DWORD *)(*(_QWORD *)i + 320LL) != v85; i += 8 )
      {
        if ( ++v86 >= v87 )
          return 1;
      }
      if ( *(_QWORD *)i )
        sub_1400018E0((__int64)a1, v85);
      return 1;
    case 5:
    case 6:
      if ( !(unsigned __int8)sub_140005AD0((__int64)&qword_1400CAE08) )
        return sub_140002E60(a5, a6, "PDB thread not running?!?\n");
      v146[0] = (char *)a3;
      v146[1] = (char *)(a3 + a4);
      if ( a3 >= a3 + a4 )
        return 4294967294LL;
      v45 = sub_14005B690((unsigned __int64 *)v146, a3 + a4);
      v73 = 0;
      v74 = a1[166];
      if ( !v74 )
        return sub_140002E60(a5, a6, "Unknown PDB session #%d\n", v45);
      for ( j = (__int64 *)a1[165]; ; ++j )
      {
        v76 = *j;
        if ( *(_DWORD *)(*j + 320) == v45 )
          break;
        if ( ++v73 >= v74 )
          return sub_140002E60(a5, a6, "Unknown PDB session #%d\n", v45);
      }
      if ( !v76 )
        return sub_140002E60(a5, a6, "Unknown PDB session #%d\n", v45);
      v77 = sub_14005B690((unsigned __int64 *)v146, (unsigned __int64)v146[1]);
      v78 = v77;
      if ( a2 == 5 )
      {
        v79 = sub_1400055A0(v76, v77);
      }
      else
      {
        v80 = sub_14005B690((unsigned __int64 *)v146, (unsigned __int64)v146[1]);
        v79 = sub_140005330(v76, v78, v80);
      }
      v81 = v79;
      if ( v79 )
      {
        v82 = *(_QWORD *)(v76 + 272);
        v83 = sub_14005AA50(v82);
        v84 = v83;
        if ( !v83 )
          return 4294967294LL;
        memcpy(v83, *(const void **)(v76 + 264), v82);
        *a5 = v84;
        *a6 = v82;
      }
      result = 4294967294LL;
      if ( v81 )
        return 1;
      return result;
    case 7:
      if ( !(unsigned __int8)sub_140005AD0((__int64)&qword_1400CAE08) )
        return sub_140002E60(a5, a6, "PDB thread not running?!?\n");
      v146[0] = (char *)a3;
      v146[1] = (char *)(a3 + a4);
      if ( a3 >= a3 + a4 )
        return 4294967294LL;
      v45 = sub_14005B690((unsigned __int64 *)v146, a3 + a4);
      LODWORD(Size) = v45;
      v46 = 0;
      v47 = a1[166];
      if ( !v47 )
        return sub_140002E60(a5, a6, "Unknown PDB session #%d\n", v45);
      for ( k = (__int64 *)a1[165]; ; ++k )
      {
        v49 = *k;
        if ( *(_DWORD *)(*k + 320) == v45 )
          break;
        if ( ++v46 >= v47 )
          return sub_140002E60(a5, a6, "Unknown PDB session #%d\n", v45);
      }
      if ( !v49 )
        return sub_140002E60(a5, a6, "Unknown PDB session #%d\n", v45);
      if ( sub_14005D750(*(void **)(v49 + 32), 0) )
        sub_140002A40((__int64)a1, v49);
      Src = nullptr;
      v148 = nullptr;
      v149 = 0;
      if ( sub_14005D750(*(void **)(v49 + 288), 0) )
      {
        *(_BYTE *)(v49 + 113) = 0;
        v50 = *(_QWORD *)(v49 + 120);
        Str = *(char **)(v50 + 80);
        v51 = *(_QWORD *)(v50 + 16);
        if ( v51 )
        {
          sub_140002D20(&Src, 1u);
          v52 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v51 + 88LL))(v51);
          sub_140002D20(&Src, v52);
          v53 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v51 + 104LL))(v51);
          sub_140002D20(&Src, v53);
          v54 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v51 + 112LL))(v51);
          sub_140002D20(&Src, v54);
          v55 = (char *)pNodeName;
          if ( Str )
            v55 = Str;
          v56 = strlen(v55);
          v57 = v56 + 1;
          if ( v56 != -1 )
          {
            v58 = v148;
            v59 = v148;
            v60 = (unsigned __int64)&v148[v57];
            if ( &v148[v57] < v148 )
              v60 = 0x7FFFFFFFFFFFFFFFLL;
            if ( v60 <= (unsigned __int64)v148 )
            {
              if ( (char *)v60 != v148 )
              {
                if ( v60 < (unsigned __int64)v148 )
                  v58 = (char *)v60;
                v148 = v58;
              }
            }
            else
            {
              if ( v60 <= v149 )
              {
                v61 = (char *)Src;
              }
              else
              {
                v61 = (char *)sub_14005ABE0((__int64)&Src, Src, v60, 1u);
                Src = v61;
                v58 = v148;
              }
              memset(&v61[(_QWORD)v58], 0, v60 - (_QWORD)v58);
              v148 = (char *)v60;
            }
            memcpy((char *)Src + (_QWORD)v59, v55, v57);
          }
        }
        else
        {
          sub_140002D20(&Src, 0xFFFFFFFF);
          Block = nullptr;
          v153 = 0;
          v154 = 0;
          v62 = sub_140007A70(0x80004005);
          sub_140002FB0((__int64)&Block, "%s: %s\n", Str, v62);
          if ( v153 )
          {
            v63 = pNodeName;
            if ( Block )
              v63 = (const char *)Block;
          }
          else
          {
            v63 = Str1;
          }
          v64 = strlen(v63);
          v65 = v64 + 1;
          v156 = v64 + 1;
          if ( v64 != -1 )
          {
            v66 = v148;
            v67 = v148;
            Str = v148;
            v68 = (unsigned __int64)&v148[v65];
            if ( &v148[v65] < v148 )
              v68 = 0x7FFFFFFFFFFFFFFFLL;
            if ( v68 <= (unsigned __int64)v148 )
            {
              if ( (char *)v68 != v148 )
              {
                if ( v68 < (unsigned __int64)v148 )
                  v66 = (char *)v68;
                v148 = v66;
              }
            }
            else
            {
              if ( v68 <= v149 )
              {
                v69 = (char *)Src;
              }
              else
              {
                v69 = (char *)sub_14005ABE0((__int64)&Src, Src, v68, 1u);
                Src = v69;
                v66 = v148;
              }
              memset(&v69[(_QWORD)v66], 0, v68 - (_QWORD)v66);
              v148 = (char *)v68;
              v67 = Str;
              v65 = v156;
            }
            memcpy(&v67[(_QWORD)Src], v63, v65);
          }
          sub_1400018E0((__int64)a1, Size);
          if ( Block )
          {
            v153 = 0;
            j_free(Block);
          }
        }
      }
      else
      {
        sub_140002D20(&Src, 0);
      }
      v70 = v148;
      *a6 = v148;
      v71 = Src;
      if ( v149 > (unsigned __int64)v70 )
      {
        if ( Src )
        {
          if ( v70 )
          {
            v72 = sub_14005AAF0(Src, (signed __int64)v70);
            v71 = Src;
            if ( v72 )
              v71 = v72;
          }
        }
      }
      *a5 = v71;
      return 1;
    case 8:
      if ( !(unsigned __int8)sub_140005AD0((__int64)&qword_1400CAE08) )
        return sub_140002E60(a5, a6, "PDB thread not running?!?\n");
      v146[0] = (char *)a3;
      v146[1] = (char *)(a3 + a4);
      if ( a3 >= a3 + a4 )
        return 4294967294LL;
      v45 = sub_14005B690((unsigned __int64 *)v146, a3 + a4);
      v89 = 0;
      v90 = a1[166];
      if ( !v90 )
        return sub_140002E60(a5, a6, "Unknown PDB session #%d\n", v45);
      for ( m = (__int64 *)a1[165]; ; ++m )
      {
        v92 = *m;
        if ( *(_DWORD *)(*m + 320) == v45 )
          break;
        if ( ++v89 >= v90 )
          return sub_140002E60(a5, a6, "Unknown PDB session #%d\n", v45);
      }
      if ( !v92 )
        return sub_140002E60(a5, a6, "Unknown PDB session #%d\n", v45);
      v93 = sub_14005B7B0((unsigned __int64 *)v146, (unsigned __int64)v146[1]) - 1;
      v94 = sub_14005B7B0((unsigned __int64 *)v146, (unsigned __int64)v146[1]);
      v95 = sub_140005540(v92, v93, v94);
      goto LABEL_155;
    case 9:
      if ( !(unsigned __int8)sub_140005AD0((__int64)&qword_1400CAE08) )
        return sub_140002E60(a5, a6, "PDB thread not running?!?\n");
      v146[0] = (char *)a3;
      v146[1] = (char *)(a3 + a4);
      if ( a3 >= a3 + a4 )
        return 4294967294LL;
      v45 = sub_14005B690((unsigned __int64 *)v146, a3 + a4);
      v100 = 0;
      v101 = a1[166];
      if ( !v101 )
        return sub_140002E60(a5, a6, "Unknown PDB session #%d\n", v45);
      for ( n = (__int64 *)a1[165]; ; ++n )
      {
        v103 = *n;
        if ( *(_DWORD *)(*n + 320) == v45 )
          break;
        if ( ++v100 >= v101 )
          return sub_140002E60(a5, a6, "Unknown PDB session #%d\n", v45);
      }
      if ( !v103 )
        return sub_140002E60(a5, a6, "Unknown PDB session #%d\n", v45);
      v104 = sub_14005B690((unsigned __int64 *)v146, (unsigned __int64)v146[1]);
      v105 = sub_14005B690((unsigned __int64 *)v146, (unsigned __int64)v146[1]);
      v106 = sub_14005B690((unsigned __int64 *)v146, (unsigned __int64)v146[1]);
      v107 = sub_1400054E0(v103, v104, v105, v106);
      goto LABEL_171;
    case 10:
      if ( !(unsigned __int8)sub_140005AD0((__int64)&qword_1400CAE08) )
        return sub_140002E60(a5, a6, "PDB thread not running?!?\n");
      v146[0] = (char *)a3;
      v146[1] = (char *)(a3 + a4);
      if ( a3 >= a3 + a4 )
        return 4294967294LL;
      v45 = sub_14005B690((unsigned __int64 *)v146, a3 + a4);
      v110 = 0;
      v111 = a1[166];
      if ( !v111 )
        return sub_140002E60(a5, a6, "Unknown PDB session #%d\n", v45);
      for ( ii = (__int64 *)a1[165]; ; ++ii )
      {
        v103 = *ii;
        if ( *(_DWORD *)(*ii + 320) == v45 )
          break;
        if ( ++v110 >= v111 )
          return sub_140002E60(a5, a6, "Unknown PDB session #%d\n", v45);
      }
      if ( !v103 )
        return sub_140002E60(a5, a6, "Unknown PDB session #%d\n", v45);
      v113 = sub_14005B7B0((unsigned __int64 *)v146, (unsigned __int64)v146[1]) - 1;
      v114 = sub_14005B7B0((unsigned __int64 *)v146, (unsigned __int64)v146[1]);
      v115 = sub_14005B690((unsigned __int64 *)v146, (unsigned __int64)v146[1]);
      v107 = sub_140005660(v103, v113, v114, v115);
LABEL_171:
      v96 = v107;
      if ( !v107 )
        goto LABEL_159;
      v97 = *(_QWORD *)(v103 + 272);
      v108 = sub_14005AA50(v97);
      v109 = v108;
      if ( !v108 )
        return 4294967294LL;
      memcpy(v108, *(const void **)(v103 + 264), v97);
      *a5 = v109;
      goto LABEL_158;
    case 11:
      if ( !(unsigned __int8)sub_140005AD0((__int64)&qword_1400CAE08) )
        return sub_140002E60(a5, a6, "PDB thread not running?!?\n");
      v146[0] = (char *)a3;
      v146[1] = (char *)(a3 + a4);
      if ( a3 >= a3 + a4 )
        return 4294967294LL;
      v45 = sub_14005B690((unsigned __int64 *)v146, a3 + a4);
      v116 = 0;
      v117 = a1[166];
      if ( !v117 )
        return sub_140002E60(a5, a6, "Unknown PDB session #%d\n", v45);
      for ( jj = (__int64 *)a1[165]; ; ++jj )
      {
        v92 = *jj;
        if ( *(_DWORD *)(*jj + 320) == v45 )
          break;
        if ( ++v116 >= v117 )
          return sub_140002E60(a5, a6, "Unknown PDB session #%d\n", v45);
      }
      if ( !v92 )
        return sub_140002E60(a5, a6, "Unknown PDB session #%d\n", v45);
      v119 = sub_14005B690((unsigned __int64 *)v146, (unsigned __int64)v146[1]);
      v95 = sub_140005390(v92, v119);
      goto LABEL_155;
    case 12:
      if ( !(unsigned __int8)sub_140005AD0((__int64)&qword_1400CAE08) )
        return sub_140002E60(a5, a6, "PDB thread not running?!?\n");
      v146[0] = (char *)a3;
      v146[1] = (char *)(a3 + a4);
      if ( a3 >= a3 + a4 )
        return 4294967294LL;
      v45 = sub_14005B690((unsigned __int64 *)v146, a3 + a4);
      v120 = 0;
      v121 = a1[166];
      if ( !v121 )
        return sub_140002E60(a5, a6, "Unknown PDB session #%d\n", v45);
      for ( kk = (__int64 *)a1[165]; ; ++kk )
      {
        v92 = *kk;
        if ( *(_DWORD *)(*kk + 320) == v45 )
          break;
        if ( ++v120 >= v121 )
          return sub_140002E60(a5, a6, "Unknown PDB session #%d\n", v45);
      }
      if ( !v92 )
        return sub_140002E60(a5, a6, "Unknown PDB session #%d\n", v45);
      v123 = sub_14005B690((unsigned __int64 *)v146, (unsigned __int64)v146[1]);
      v95 = sub_1400053F0(v92, v123);
      goto LABEL_155;
    case 13:
      if ( !(unsigned __int8)sub_140005AD0((__int64)&qword_1400CAE08) )
        return sub_140002E60(a5, a6, "PDB thread not running?!?\n");
      v146[0] = (char *)a3;
      v146[1] = (char *)(a3 + a4);
      if ( a3 >= a3 + a4 )
        return 4294967294LL;
      v45 = sub_14005B690((unsigned __int64 *)v146, a3 + a4);
      v124 = 0;
      v125 = a1[166];
      if ( !v125 )
        return sub_140002E60(a5, a6, "Unknown PDB session #%d\n", v45);
      for ( mm = (__int64 *)a1[165]; ; ++mm )
      {
        v92 = *mm;
        if ( *(_DWORD *)(*mm + 320) == v45 )
          break;
        if ( ++v124 >= v125 )
          return sub_140002E60(a5, a6, "Unknown PDB session #%d\n", v45);
      }
      if ( !v92 )
        return sub_140002E60(a5, a6, "Unknown PDB session #%d\n", v45);
      v127 = sub_14005B690((unsigned __int64 *)v146, (unsigned __int64)v146[1]);
      v95 = sub_140005600(v92, v127);
LABEL_155:
      v96 = v95;
      if ( !v95 )
        goto LABEL_159;
      v97 = *(_QWORD *)(v92 + 272);
      v98 = sub_14005AA50(v97);
      v99 = v98;
      if ( !v98 )
        return 4294967294LL;
      memcpy(v98, *(const void **)(v92 + 264), v97);
      *a5 = v99;
LABEL_158:
      *a6 = v97;
LABEL_159:
      result = 4294967294LL;
      if ( v96 )
        return 1;
      return result;
    case 14:
      if ( !(unsigned __int8)sub_140005AD0((__int64)&qword_1400CAE08) )
        return sub_140002E60(a5, a6, "PDB thread not running?!?\n");
      v146[0] = (char *)a3;
      v146[1] = (char *)(a3 + a4);
      if ( a3 >= a3 + a4 )
        return 4294967294LL;
      v45 = sub_14005B690((unsigned __int64 *)v146, a3 + a4);
      v128 = 0;
      v129 = a1[166];
      if ( !v129 )
        return sub_140002E60(a5, a6, "Unknown PDB session #%d\n", v45);
      v130 = (__int64 *)a1[165];
      break;
    default:
      return 0;
  }
  while ( 1 )
  {
    v131 = *v130;
    if ( *(_DWORD *)(*v130 + 320) == v45 )
      break;
    ++v128;
    ++v130;
    if ( v128 >= v129 )
      return sub_140002E60(a5, a6, "Unknown PDB session #%d\n", v45);
  }
  if ( !v131 )
    return sub_140002E60(a5, a6, "Unknown PDB session #%d\n", v45);
  v132 = v146[0];
  v133 = v146[0];
  while ( v132 < v146[1] )
  {
    if ( !*v132++ )
    {
      v146[0] = v132;
      goto LABEL_223;
    }
  }
  v133 = nullptr;
LABEL_223:
  v135 = nullptr;
  Block = nullptr;
  v136 = 0;
  v153 = 0;
  v154 = 0;
  if ( v133 )
  {
    v137 = (char *)strlen(v133);
    Str = v137;
    v138 = v137 + 1;
    v139 = nullptr;
    if ( v137 != (char *)-1LL )
    {
      v139 = sub_14005ABE0((__int64)&Block, nullptr, (unsigned __int64)(v137 + 1), 1u);
      Block = v139;
      v137 = Str;
    }
    v153 = (unsigned __int64)v138;
    memcpy(v139, v133, (size_t)v137);
    *((_BYTE *)Block + (_QWORD)Str) = 0;
    v136 = v153;
    v135 = (const char *)Block;
  }
  v140 = Str1;
  if ( v136 )
    v140 = v135;
  v141 = sub_140005450(v131, v140);
  v150 = v141;
  if ( !v141 )
    goto LABEL_235;
  v142 = *(_QWORD *)(v131 + 272);
  v143 = sub_14005AA50(v142);
  v144 = v143;
  if ( v143 )
  {
    memcpy(v143, *(const void **)(v131 + 264), v142);
    *a5 = v144;
    *a6 = v142;
    v141 = v150;
LABEL_235:
    v145 = -2;
    if ( v141 )
      v145 = 1;
    if ( Block )
    {
      v153 = 0;
      j_free(Block);
    }
    return v145;
  }
  if ( Block )
  {
    v153 = 0;
    j_free(Block);
  }
  return 4294967294LL;
}
// 1400CAE08: using guessed type __int64 qword_1400CAE08;
// 1400CB61C: using guessed type char byte_1400CB61C;
