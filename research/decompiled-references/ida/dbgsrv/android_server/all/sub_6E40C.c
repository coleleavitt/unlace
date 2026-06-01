/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6E40C
// Address: 0x000000000006E40C

//----- (000000000006E40C) ----------------------------------------------------
void __fastcall sub_6E40C(pthread_mutex_t *a1, unsigned __int8 *a2, const char *a3, int a4, __int64 **a5)
{
  unsigned __int64 v10; // x8
  unsigned __int64 v11; // x27
  unsigned __int64 v12; // x25
  _BYTE *align; // x0
  size_t v14; // x0
  __int64 v15; // x8
  size_t v16; // x24
  __int64 v17; // x27
  size_t v18; // x28
  unsigned __int64 v19; // x25
  _BYTE *v20; // x0
  __int64 v21; // x0
  __int64 v22; // x8
  size_t v23; // x23
  __int64 v24; // x25
  __int64 v25; // x27
  unsigned __int64 v26; // x24
  _BYTE *v27; // x0
  unsigned __int64 v28; // x20
  __int64 v29; // x8
  unsigned __int64 v30; // x9
  char v31; // w12
  char v32; // w22
  unsigned __int64 i; // x23
  void *v34; // x1
  __int64 v35; // x9
  unsigned int v36; // w11
  bool v37; // cf
  char v38; // w28
  __int64 v39; // x27
  __int64 v40; // x0
  void *v41; // x1
  __int64 v42; // x8
  size_t v43; // x20
  __int64 v44; // x22
  __int64 v45; // x23
  unsigned __int64 v46; // x21
  __int64 v47; // x8
  char *v48; // x1
  __int64 v49; // x0
  __int64 v50; // x8
  __int64 v51; // x23
  unsigned __int64 v52; // x21
  _BYTE *v53; // x0
  __int64 v54; // x0
  __int64 v55; // x8
  size_t v56; // x23
  __int64 v57; // x25
  __int64 v58; // x27
  unsigned __int64 v59; // x24
  _BYTE *v60; // x0
  __int64 v61; // x8
  char *v62; // x1
  int v63; // w2
  const char *v64; // x2
  __int64 v65; // x0
  __int64 v66; // x8
  size_t v67; // x22
  __int64 v68; // x24
  __int64 v69; // x25
  unsigned __int64 v70; // x23
  _BYTE *v71; // x0
  __int64 **v72; // x23
  __int64 **v73; // x24
  __int64 **v74; // x25
  unsigned __int64 v75; // x8
  char *idcv_attr; // x22
  _QWORD *v77; // x9
  _QWORD *v78; // x8
  __int64 v79; // x0
  __int64 v80; // x8
  size_t v81; // x21
  __int64 v82; // x25
  __int64 v83; // x27
  unsigned __int64 v84; // x23
  _BYTE *v85; // x0
  __int64 *v86; // x0
  __int64 *v87; // x1
  __int64 *v88; // x8
  unsigned __int8 *v89; // x23
  unsigned __int64 v90; // x8
  unsigned __int64 v91; // x25
  unsigned __int64 v92; // x23
  _BYTE *v93; // x0
  int v94; // w8
  unsigned __int8 *v95; // x9
  int v96; // t1
  __int64 **v97; // x27
  __int64 **v98; // x28
  __int64 *v99; // x9
  __int64 *v100; // x1
  void *v101; // x8
  __int64 *v102; // x27
  __int64 *v103; // x8
  __int64 v104; // x8
  __int64 **v105; // x9
  __int64 v106; // x9
  __int64 *v107; // t1
  __int64 *v108; // x23
  int v109; // w21
  char *v110; // x2
  __int64 *v111; // x8
  __int64 v112; // x8
  __int64 **v113; // x9
  __int64 v114; // x9
  __int64 *v115; // t1
  __int64 v116; // x8
  __int64 v117; // x23
  _BYTE *v118; // x0
  __int64 *v119; // x19
  __int64 *v120; // x8
  unsigned __int64 v121; // x9
  _BOOL4 v122; // w9
  __int64 *v123; // x9
  __int64 *v124; // x8
  __int64 v125; // x9
  __int64 v126; // x10
  __int64 *v127; // t1
  void *v128[3]; // [xsp+10h] [xbp-4D0h] BYREF
  __int64 *v129; // [xsp+28h] [xbp-4B8h] BYREF
  _QWORD *v130[2]; // [xsp+30h] [xbp-4B0h] BYREF
  void *ptr; // [xsp+40h] [xbp-4A0h] BYREF
  __int64 **v132; // [xsp+48h] [xbp-498h] BYREF
  __int64 v133; // [xsp+50h] [xbp-490h]
  unsigned __int8 v134[8]; // [xsp+58h] [xbp-488h] BYREF
  void *v135; // [xsp+60h] [xbp-480h]
  __int64 v136; // [xsp+68h] [xbp-478h]
  __int64 v137; // [xsp+70h] [xbp-470h]
  pthread_mutex_t v138; // [xsp+78h] [xbp-468h] BYREF
  char v139; // [xsp+B8h] [xbp-428h]
  __int64 v140; // [xsp+478h] [xbp-68h]

  v140 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a3 )
  {
    if ( a4 >= 1 )
    {
      v10 = *(&a1->__align + 1);
      if ( v10 )
        v11 = v10 - 1;
      else
        v11 = 0;
      v12 = v11 + a4 + 1;
      if ( v10 < v12 )
      {
        if ( *(&a1->__align + 2) >= v12 )
        {
          align = (_BYTE *)a1->__align;
        }
        else
        {
          align = qvector_reserve(a1, (void *)a1->__align, v11 + a4 + 1, 1u);
          a1->__align = (__int64)align;
        }
        *(&a1->__align + 1) = v12;
        align[v11 + a4] = 0;
      }
      memset((void *)(a1->__align + v11), 32, a4);
    }
    v14 = strlen(a3);
    v15 = *(&a1->__align + 1);
    v16 = v14;
    if ( v15 )
      v17 = v15 - 1;
    else
      v17 = 0;
    v18 = v17 + v14;
    v19 = v17 + v14 + 1;
    if ( *(&a1->__align + 2) >= v19 )
    {
      v20 = (_BYTE *)a1->__align;
    }
    else
    {
      v20 = qvector_reserve(a1, (void *)a1->__align, v19, 1u);
      a1->__align = (__int64)v20;
    }
    *(&a1->__align + 1) = v19;
    v20[v18] = 0;
    memmove((void *)(a1->__align + v17), a3, v16);
    v21 = __strlen_chk(": ", 3);
    v22 = *(&a1->__align + 1);
    v23 = v21;
    if ( v22 )
      v24 = v22 - 1;
    else
      v24 = 0;
    v25 = v24 + v21;
    v26 = v24 + v21 + 1;
    if ( *(&a1->__align + 2) >= v26 )
    {
      v27 = (_BYTE *)a1->__align;
    }
    else
    {
      v27 = qvector_reserve(a1, (void *)a1->__align, v26, 1u);
      a1->__align = (__int64)v27;
    }
    *(&a1->__align + 1) = v26;
    v27[v25] = 0;
    memmove((void *)(a1->__align + v24), ": ", v23);
  }
  v134[0] = 2;
  v136 = 0;
  v137 = 0;
  v135 = nullptr;
  switch ( *a2 )
  {
    case 2u:
      v28 = *((_QWORD *)a2 + 1);
      sub_4C730(a1, "%11lld. %8llXh %11lloo ", v28, v28, v28);
      v29 = 0;
      v30 = 0x8000000000000000LL;
      do
      {
        if ( (v30 & v28) != 0 )
          v31 = 49;
        else
          v31 = 48;
        v138.__size[v29++] = v31;
        v30 >>= 1;
      }
      while ( v29 != 64 );
      v139 = 0;
      sub_4C730(a1, "%sb '", (const char *)&v138);
      v32 = 0;
      for ( i = 0; i < 8; ++i )
      {
        v34 = (void *)a1->__align;
        v35 = *(&a1->__align + 1);
        v36 = (unsigned __int8)(v28 >> v32);
        v37 = v36 != 255 && v36 >= 0x20;
        if ( v37 )
          v38 = v28 >> v32;
        else
          v38 = 46;
        if ( v35 )
          v39 = v35 - 1;
        else
          v39 = 0;
        if ( *(&a1->__align + 2) < (unsigned __int64)(v39 + 2) )
        {
          v34 = qvector_reserve(a1, v34, v39 + 2, 1u);
          a1->__align = (__int64)v34;
        }
        *(&a1->__align + 1) = v39 + 2;
        *((_BYTE *)v34 + v39) = v38;
        v32 += 8;
        *(_BYTE *)(a1->__align + v39 + 1) = 0;
      }
      v40 = __strlen_chk("'", 2);
      v41 = (void *)a1->__align;
      v42 = *(&a1->__align + 1);
      v43 = v40;
      if ( v42 )
        v44 = v42 - 1;
      else
        v44 = 0;
      v45 = v44 + v40;
      v46 = v44 + v40 + 1;
      if ( *(&a1->__align + 2) < v46 )
      {
        v41 = qvector_reserve(a1, v41, v46, 1u);
        a1->__align = (__int64)v41;
      }
      *(&a1->__align + 1) = v46;
      *((_BYTE *)v41 + v45) = 0;
      v47 = a1->__align;
      v48 = "'";
      goto LABEL_82;
    case 3u:
      copy_idcv(v134, a2);
      a2 = v134;
      idcv_string((__int64)v134);
      goto LABEL_63;
    case 5u:
      v65 = __strlen_chk("object", 7);
      v66 = *(&a1->__align + 1);
      v67 = v65;
      if ( v66 )
        v68 = v66 - 1;
      else
        v68 = 0;
      v69 = v68 + v65;
      v70 = v68 + v65 + 1;
      if ( *(&a1->__align + 2) >= v70 )
      {
        v71 = (_BYTE *)a1->__align;
      }
      else
      {
        v71 = qvector_reserve(a1, (void *)a1->__align, v70, 1u);
        a1->__align = (__int64)v71;
      }
      *(&a1->__align + 1) = v70;
      v71[v69] = 0;
      memmove((void *)(a1->__align + v68), "object", v67);
      v132 = nullptr;
      v133 = 0;
      v130[0] = nullptr;
      v130[1] = nullptr;
      ptr = &v132;
      v129 = (__int64 *)v130;
      idcv_attr = nullptr;
      if ( *a2 == 5 )
      {
        v77 = *((_QWORD **)a2 + 1);
        v78 = (_QWORD *)*v77;
        if ( (_QWORD *)*v77 == v77 + 1 )
        {
          idcv_attr = nullptr;
        }
        else if ( v78[5] )
        {
          idcv_attr = (char *)v78[4];
        }
        else
        {
          idcv_attr = &byte_F154B;
        }
      }
      while ( 2 )
      {
        if ( idcv_attr )
        {
          v94 = (unsigned __int8)*idcv_attr;
          if ( *idcv_attr )
          {
            if ( v94 == 48 )
            {
              if ( !idcv_attr[1] )
              {
LABEL_131:
                qsscanf(idcv_attr, "%llu", v128);
                v97 = v132;
                if ( v132 )
                {
                  v98 = (__int64 **)&v132;
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      v99 = v97[4];
                      if ( v128[0] < v99 )
                        break;
                      if ( v99 >= v128[0] )
                        goto LABEL_143;
                      v98 = v97 + 1;
                      if ( !v97[1] )
                        goto LABEL_143;
                      v97 = (__int64 **)v97[1];
                    }
                    if ( !*v97 )
                      break;
                    v98 = v97;
                    v97 = (__int64 **)*v97;
                  }
                  v98 = v97;
                  if ( *v97 )
                  {
LABEL_148:
                    idcv_attr = next_idcv_attr((char *)a2, idcv_attr);
                    continue;
                  }
                }
                else
                {
                  v97 = (__int64 **)&v132;
                  v98 = (__int64 **)&v132;
LABEL_143:
                  if ( *v98 )
                    goto LABEL_148;
                }
                v100 = (__int64 *)operator new(0x28u);
                v101 = v128[0];
                *v100 = 0;
                v100[1] = 0;
                v100[2] = (__int64)v97;
                v100[4] = (__int64)v101;
                *v98 = v100;
                if ( *(_QWORD *)ptr )
                {
                  ptr = *(void **)ptr;
                  v100 = *v98;
                }
                sub_48ED8((__int64 *)v132, v100);
                ++v133;
                goto LABEL_148;
              }
            }
            else
            {
              v95 = (unsigned __int8 *)(idcv_attr + 1);
              while ( ((char)v94 & 0x80000000) == 0 && (unsigned int)(unsigned __int8)v94 - 48 <= 9 )
              {
                v96 = *v95++;
                LOBYTE(v94) = v96;
                if ( !v96 )
                  goto LABEL_131;
              }
            }
          }
          sub_39140(v128, idcv_attr);
          sub_7B890(&v129, (__int64)v128, (__int128 *)v128);
          if ( v128[0] )
          {
            v128[1] = nullptr;
            qfree(v128[0]);
            v128[0] = nullptr;
            v128[2] = nullptr;
          }
          goto LABEL_148;
        }
        break;
      }
      v102 = (__int64 *)ptr;
      if ( ptr != &v132 )
      {
        do
        {
          while ( 1 )
          {
            qsnprintf(&v138, 1024, "%llu", v102[4]);
            sub_7B6DC((__int64)a1, (__int64)a2, (char *)&v138, a4 + 2);
            v103 = (__int64 *)v102[1];
            if ( !v103 )
              break;
            do
            {
              v102 = v103;
              v103 = (__int64 *)*v103;
            }
            while ( v103 );
LABEL_155:
            if ( v102 == (__int64 *)&v132 )
              goto LABEL_158;
          }
          v104 = (__int64)(v102 + 2);
          v105 = (__int64 **)v102[2];
          if ( *v105 != v102 )
          {
            do
            {
              v106 = *(_QWORD *)v104;
              v107 = *(__int64 **)(*(_QWORD *)v104 + 16LL);
              v104 = *(_QWORD *)v104 + 16LL;
              v102 = v107;
            }
            while ( *v107 != v106 );
            goto LABEL_155;
          }
          v102 = (__int64 *)v102[2];
        }
        while ( v105 != (__int64 **)&v132 );
      }
LABEL_158:
      v108 = v129;
      if ( v129 != (__int64 *)v130 )
      {
        v109 = a4 + 2;
        do
        {
          while ( 1 )
          {
            v110 = v108[5] ? (char *)v108[4] : &byte_F154B;
            sub_7B6DC((__int64)a1, (__int64)a2, v110, v109);
            v111 = (__int64 *)v108[1];
            if ( !v111 )
              break;
            do
            {
              v108 = v111;
              v111 = (__int64 *)*v111;
            }
            while ( v111 );
LABEL_168:
            if ( v108 == (__int64 *)v130 )
              goto LABEL_171;
          }
          v112 = (__int64)(v108 + 2);
          v113 = (__int64 **)v108[2];
          if ( *v113 != v108 )
          {
            do
            {
              v114 = *(_QWORD *)v112;
              v115 = *(__int64 **)(*(_QWORD *)v112 + 16LL);
              v112 = *(_QWORD *)v112 + 16LL;
              v108 = v115;
            }
            while ( *v115 != v114 );
            goto LABEL_168;
          }
          v108 = (__int64 *)v108[2];
        }
        while ( v113 != v130 );
      }
LABEL_171:
      sub_7B9C4((__int64)&v129, v130[0]);
      sub_475E4((__int64)&ptr, v132);
      goto LABEL_172;
    case 6u:
      sub_4C730(a1, "function (idx=%d)", *((_DWORD *)a2 + 2));
      goto LABEL_172;
    case 7u:
LABEL_63:
      v132 = nullptr;
      v133 = 0;
      ptr = nullptr;
      v61 = *((_QWORD *)a2 + 2);
      if ( v61 )
        v62 = *((char **)a2 + 1);
      else
        v62 = &byte_F154B;
      if ( v61 )
        v63 = v61 - 1;
      else
        v63 = 0;
      qstr2user((__int64)&ptr, v62, v63);
      if ( v132 )
        v64 = (const char *)ptr;
      else
        v64 = &byte_F154B;
      sub_4C730(a1, "\"%s\"", v64);
      if ( ptr )
      {
        v132 = nullptr;
        qfree(ptr);
        ptr = nullptr;
        v133 = 0;
      }
      goto LABEL_172;
    case 8u:
      sub_4C730(a1, "pvoid (%p)", *((const void **)a2 + 1));
      goto LABEL_172;
    case 9u:
      sub_4C730(a1, "0x%llXi64", *((_QWORD *)a2 + 1));
      goto LABEL_172;
    case 0xAu:
      v54 = __strlen_chk("ref (", 6);
      v55 = *(&a1->__align + 1);
      v56 = v54;
      if ( v55 )
        v57 = v55 - 1;
      else
        v57 = 0;
      v58 = v57 + v54;
      v59 = v57 + v54 + 1;
      if ( *(&a1->__align + 2) >= v59 )
      {
        v60 = (_BYTE *)a1->__align;
      }
      else
      {
        v60 = qvector_reserve(a1, (void *)a1->__align, v59, 1u);
        a1->__align = (__int64)v60;
      }
      *(&a1->__align + 1) = v59;
      v60[v58] = 0;
      memmove((void *)(a1->__align + v57), "ref (", v56);
      v73 = a5 + 1;
      v72 = (__int64 **)a5[1];
      if ( v72 )
      {
        v74 = a5 + 1;
        while ( 1 )
        {
          while ( 1 )
          {
            v75 = (unsigned __int64)v72[4];
            if ( v75 > (unsigned __int64)a2 )
              break;
            if ( v75 >= (unsigned __int64)a2 )
              goto LABEL_99;
            v74 = v72 + 1;
            if ( !v72[1] )
              goto LABEL_99;
            v72 = (__int64 **)v72[1];
          }
          if ( !*v72 )
            break;
          v74 = v72;
          v72 = (__int64 **)*v72;
        }
        v74 = v72;
        if ( *v72 )
          goto LABEL_100;
      }
      else
      {
        v72 = a5 + 1;
        v74 = a5 + 1;
LABEL_99:
        if ( *v74 )
          goto LABEL_100;
      }
      v87 = (__int64 *)operator new(0x28u);
      v87[4] = (__int64)a2;
      *v87 = 0;
      v87[1] = 0;
      v87[2] = (__int64)v72;
      *v74 = v87;
      v88 = (__int64 *)**a5;
      if ( v88 )
      {
        *a5 = v88;
        v87 = *v74;
      }
      sub_48ED8(a5[1], v87);
      a5[2] = (__int64 *)((char *)a5[2] + 1);
      v89 = deref_idcv(a2, 1);
      if ( !v89 )
      {
LABEL_100:
        v79 = __strlen_chk("?)", 3);
        v80 = *(&a1->__align + 1);
        v81 = v79;
        if ( v80 )
          v82 = v80 - 1;
        else
          v82 = 0;
        v83 = v82 + v79;
        v84 = v82 + v79 + 1;
        if ( *(&a1->__align + 2) >= v84 )
        {
          v85 = (_BYTE *)a1->__align;
        }
        else
        {
          v85 = qvector_reserve(a1, (void *)a1->__align, v84, 1u);
          a1->__align = (__int64)v85;
        }
        *(&a1->__align + 1) = v84;
        v85[v83] = 0;
        memmove((void *)(a1->__align + v82), "?)", v81);
        v86 = *v73;
        if ( !*v73 )
          goto LABEL_172;
        goto LABEL_188;
      }
      sub_6E40C((__int64)a1, v89, nullptr, a4 + 4, a5);
      if ( a4 >= 1 && *v89 == 5 )
      {
        v90 = *(&a1->__align + 1);
        if ( v90 )
          v91 = v90 - 1;
        else
          v91 = 0;
        v92 = v91 + a4 + 1;
        if ( v90 < v92 )
        {
          if ( *(&a1->__align + 2) >= v92 )
          {
            v93 = (_BYTE *)a1->__align;
          }
          else
          {
            v93 = qvector_reserve(a1, (void *)a1->__align, v91 + a4 + 1, 1u);
            a1->__align = (__int64)v93;
          }
          *(&a1->__align + 1) = v92;
          v93[v91 + a4] = 0;
        }
        memset((void *)(a1->__align + v91), 32, a4);
      }
      v116 = *(&a1->__align + 1);
      if ( v116 )
        v117 = v116 - 1;
      else
        v117 = 0;
      if ( *(&a1->__align + 2) >= (unsigned __int64)(v117 + 2) )
      {
        v118 = (_BYTE *)a1->__align;
      }
      else
      {
        v118 = qvector_reserve(a1, (void *)a1->__align, v117 + 2, 1u);
        a1->__align = (__int64)v118;
      }
      *(&a1->__align + 1) = v117 + 2;
      v118[v117] = 41;
      *(_BYTE *)(a1->__align + v117 + 1) = 0;
      v86 = *v73;
      if ( *v73 )
      {
LABEL_188:
        v119 = (__int64 *)(a5 + 1);
        v120 = v86;
        do
        {
          v121 = v120[4];
          v37 = v121 >= (unsigned __int64)a2;
          v122 = v121 < (unsigned __int64)a2;
          if ( v37 )
            v119 = v120;
          v120 = (__int64 *)v120[v122];
        }
        while ( v120 );
        if ( v119 != (__int64 *)v73 && v119[4] <= (unsigned __int64)a2 )
        {
          v123 = (__int64 *)v119[1];
          if ( v123 )
          {
            do
            {
              v124 = v123;
              v123 = (__int64 *)*v123;
            }
            while ( v123 );
          }
          else
          {
            v125 = (__int64)(v119 + 2);
            v124 = (__int64 *)v119[2];
            if ( (__int64 *)*v124 != v119 )
            {
              do
              {
                v126 = *(_QWORD *)v125;
                v127 = *(__int64 **)(*(_QWORD *)v125 + 16LL);
                v125 = *(_QWORD *)v125 + 16LL;
                v124 = v127;
              }
              while ( *v127 != v126 );
            }
          }
          if ( *a5 == v119 )
            *a5 = v124;
          a5[2] = (__int64 *)((char *)a5[2] - 1);
          sub_4AD74(v86, v119);
          operator delete(v119);
        }
      }
LABEL_172:
      if ( v134[0] == 5 )
      {
        sub_6F17C((__int64)v135, v134);
      }
      else if ( v134[0] == 7 )
      {
        if ( v135 )
        {
          v136 = 0;
          qfree(v135);
          v135 = nullptr;
          v137 = 0;
        }
      }
      return;
    default:
      v49 = __strlen_chk("bad?", 5);
      v50 = *(&a1->__align + 1);
      v43 = v49;
      if ( v50 )
        v44 = v50 - 1;
      else
        v44 = 0;
      v51 = v44 + v49;
      v52 = v44 + v49 + 1;
      if ( *(&a1->__align + 2) >= v52 )
      {
        v53 = (_BYTE *)a1->__align;
      }
      else
      {
        v53 = qvector_reserve(a1, (void *)a1->__align, v52, 1u);
        a1->__align = (__int64)v53;
      }
      *(&a1->__align + 1) = v52;
      v53[v51] = 0;
      v47 = a1->__align;
      v48 = "bad?";
LABEL_82:
      memmove((void *)(v47 + v44), v48, v43);
      goto LABEL_172;
  }
}
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// F154B: using guessed type char byte_F154B;
