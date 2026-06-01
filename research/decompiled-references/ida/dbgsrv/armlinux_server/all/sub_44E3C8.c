/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44E3C8
// Address: 0x000000000044E3C8

//----- (000000000044E3C8) ----------------------------------------------------
__int64 __fastcall sub_44E3C8(
        __int64 a1,
        __int64 *a2,
        const char *a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  size_t v11; // x24
  unsigned __int64 v13; // x21
  unsigned __int64 v14; // x26
  unsigned __int64 v15; // x5
  _BYTE *v16; // x4
  unsigned __int64 v17; // x27
  size_t v18; // x0
  size_t v19; // x26
  size_t v20; // x27
  unsigned __int64 v21; // x21
  _BYTE *v22; // x0
  __int64 v23; // x0
  __int64 v24; // x22
  __int64 v25; // x26
  unsigned __int64 v26; // x21
  _BYTE *v27; // x0
  unsigned int v28; // w0
  __int64 v29; // x0
  __int64 v30; // x23
  __int64 v31; // x26
  unsigned __int64 v32; // x21
  _BYTE *v33; // x0
  char v34; // w1
  __int64 *v35; // x0
  __int64 v36; // x5
  __int64 v37; // x6
  __int64 v38; // x7
  __int64 *v39; // x21
  __int64 v40; // x0
  unsigned __int64 v41; // x21
  __int64 v42; // x24
  __int64 v43; // x23
  _BYTE *v44; // x0
  __int64 v45; // x0
  __int64 v46; // x24
  unsigned __int64 v47; // x23
  __int64 v48; // x21
  _BYTE *v49; // x0
  __int64 v51; // x0
  char *v52; // x1
  int v53; // w2
  const char *v54; // x2
  __int64 v55; // x0
  __int64 v56; // x23
  unsigned __int64 v57; // x25
  __int64 v58; // x21
  _BYTE *v59; // x0
  __int64 *v60; // x21
  size_t v61; // x0
  size_t v62; // x25
  size_t v63; // x23
  __int64 v64; // x25
  __int64 v65; // x27
  unsigned __int64 v66; // x21
  void *v67; // x0
  __int64 v68; // x4
  __int64 v69; // x5
  __int64 v70; // x6
  __int64 v71; // x7
  __int64 v72; // x21
  __int64 *v73; // x25
  __int64 v74; // x26
  unsigned __int64 v75; // x21
  void *v76; // x0
  __int64 v77; // x4
  __int64 v78; // x5
  __int64 v79; // x6
  __int64 v80; // x7
  char *v81; // x24
  __int64 *v82; // x27
  __int64 v83; // x21
  unsigned __int64 v84; // x21
  unsigned __int64 v85; // x2
  char *v86; // x1
  bool v87; // zf
  char v88; // w0
  int v89; // w25
  __int64 v90; // x27
  unsigned __int64 v91; // x24
  _BYTE *v92; // x0
  __int64 v93; // x24
  char v94; // w23
  _BYTE *v95; // x0
  __int64 v96; // x21
  __int64 v97; // x24
  unsigned __int64 v98; // x23
  _BYTE *v99; // x0
  unsigned __int64 v100; // x1
  unsigned __int64 v101; // x23
  unsigned __int64 v102; // x21
  _BYTE *v103; // x0
  unsigned __int64 v104; // x21
  _BYTE *v105; // x0
  unsigned __int64 v106; // x23
  char v107; // [xsp+0h] [xbp-570h]
  __int64 *v108; // [xsp+60h] [xbp-510h]
  unsigned int v109; // [xsp+60h] [xbp-510h]
  int v110[2]; // [xsp+88h] [xbp-4E8h] BYREF
  void *v111; // [xsp+90h] [xbp-4E0h] BYREF
  size_t v112; // [xsp+98h] [xbp-4D8h]
  __int64 v113; // [xsp+A0h] [xbp-4D0h]
  __int64 v114; // [xsp+A8h] [xbp-4C8h] BYREF
  int v115; // [xsp+B0h] [xbp-4C0h] BYREF
  _QWORD *v116; // [xsp+B8h] [xbp-4B8h]
  int *v117; // [xsp+C0h] [xbp-4B0h]
  int *v118; // [xsp+C8h] [xbp-4A8h]
  __int64 v119; // [xsp+D0h] [xbp-4A0h]
  void *ptr; // [xsp+D8h] [xbp-498h] BYREF
  __int64 v121; // [xsp+E0h] [xbp-490h] BYREF
  _QWORD *v122; // [xsp+E8h] [xbp-488h]
  __int64 *v123; // [xsp+F0h] [xbp-480h]
  __int64 *v124; // [xsp+F8h] [xbp-478h]
  __int64 v125; // [xsp+100h] [xbp-470h]
  __int64 v126[4]; // [xsp+108h] [xbp-468h] BYREF
  __int64 v127[4]; // [xsp+128h] [xbp-448h] BYREF
  __int64 v128[4]; // [xsp+148h] [xbp-428h] BYREF
  char v129[64]; // [xsp+168h] [xbp-408h] BYREF
  char v130; // [xsp+1A8h] [xbp-3C8h] BYREF

  v11 = (int)a4;
  if ( a3 )
  {
    v13 = *(_QWORD *)(a1 + 8);
    if ( (int)a4 > 0 )
    {
      v14 = v13 - 1;
      if ( !v13 )
        v14 = 0;
      v15 = (int)a4 + v14;
      v16 = *(_BYTE **)a1;
      v17 = v15 + 1;
      if ( v15 + 1 > v13 )
      {
        if ( v17 > *(_QWORD *)(a1 + 16) )
        {
          v16 = sub_491288(a1, *(void **)a1, v15 + 1, 1u);
          v15 = (int)v11 + v14;
          *(_QWORD *)a1 = v16;
        }
        *(_QWORD *)(a1 + 8) = v17;
        v16[v15] = 0;
        v16 = *(_BYTE **)a1;
      }
      memset(&v16[v14], 32, (int)v11);
      v13 = *(_QWORD *)(a1 + 8);
    }
    v18 = strlen(a3);
    v19 = v18;
    if ( v13 )
    {
      v21 = v13 - 1;
      v20 = v18 + v21;
    }
    else
    {
      v20 = v18;
      v21 = 0;
    }
    v22 = *(_BYTE **)a1;
    if ( v20 + 1 > *(_QWORD *)(a1 + 16) )
    {
      v22 = sub_491288(a1, *(void **)a1, v20 + 1, 1u);
      *(_QWORD *)a1 = v22;
    }
    *(_QWORD *)(a1 + 8) = v20 + 1;
    v22[v20] = 0;
    memmove((void *)(*(_QWORD *)a1 + v21), a3, v19);
    v23 = *(_QWORD *)(a1 + 8);
    if ( v23 )
    {
      v24 = v23 - 1;
      v25 = v23 + 1;
      v26 = v23 + 2;
    }
    else
    {
      v26 = 3;
      v25 = 2;
      v24 = 0;
    }
    v27 = *(_BYTE **)a1;
    if ( v26 > *(_QWORD *)(a1 + 16) )
    {
      v27 = sub_491288(a1, *(void **)a1, v26, 1u);
      *(_QWORD *)a1 = v27;
    }
    *(_QWORD *)(a1 + 8) = v26;
    v27[v25] = 0;
    *(_WORD *)(*(_QWORD *)a1 + v24) = *(_WORD *)": ";
  }
  v28 = *(unsigned __int8 *)a2;
  *(_QWORD *)v110 = a2;
  LOBYTE(v126[0]) = 2;
  memset(&v126[1], 0, 24);
  if ( v28 == 6 )
  {
    sub_42D148(a1, (char *)qword_4C68A8, *((unsigned int *)a2 + 2), a4, a5, a6, a7, a8);
    goto LABEL_46;
  }
  if ( v28 > 6 )
  {
    if ( v28 == 8 )
    {
      sub_42D148(a1, "pvoid (%p)", (const void *)a2[1]);
      goto LABEL_46;
    }
    if ( v28 >= 8 )
    {
      if ( v28 == 9 )
      {
        sub_42D148(a1, "0x%llXi64", a2[1]);
        goto LABEL_46;
      }
      if ( v28 == 10 )
      {
        v29 = *(_QWORD *)(a1 + 8);
        if ( v29 )
        {
          v30 = v29 - 1;
          v31 = v29 + 4;
          v32 = v29 + 5;
        }
        else
        {
          v32 = 6;
          v31 = 5;
          v30 = 0;
        }
        v33 = *(_BYTE **)a1;
        if ( v32 > *(_QWORD *)(a1 + 16) )
        {
          v33 = sub_491288(a1, *(void **)a1, v32, 1u);
          *(_QWORD *)a1 = v33;
        }
        *(_QWORD *)(a1 + 8) = v32;
        v33[v31] = 0;
        qmemcpy((void *)(*(_QWORD *)a1 + v30), "ref (", 5);
        sub_4449E0(a5, (unsigned __int64 *)v110);
        if ( v34 && (v35 = sub_448A08(*(__int64 **)v110, 1), (v39 = v35) != nullptr) )
        {
          sub_44E3C8(a1, v35, nullptr, (unsigned int)(v11 + 4), a5, v36, v37, v38);
          v100 = *(_QWORD *)(a1 + 8);
          if ( (int)v11 > 0 && *(_BYTE *)v39 == 5 )
          {
            v104 = v100 - 1;
            if ( !v100 )
              v104 = 0;
            v105 = *(_BYTE **)a1;
            v106 = v11 + v104 + 1;
            if ( v100 < v106 )
            {
              if ( v106 > *(_QWORD *)(a1 + 16) )
              {
                v105 = sub_491288(a1, *(void **)a1, v11 + v104 + 1, 1u);
                *(_QWORD *)a1 = v105;
              }
              *(_QWORD *)(a1 + 8) = v106;
              v105[v11 + v104] = 0;
              v105 = *(_BYTE **)a1;
            }
            memset(&v105[v104], 32, v11);
            v100 = *(_QWORD *)(a1 + 8);
          }
          if ( v100 )
          {
            v101 = v100 - 1;
            v102 = v100 + 1;
          }
          else
          {
            v102 = 2;
            v101 = 0;
          }
          v103 = *(_BYTE **)a1;
          if ( *(_QWORD *)(a1 + 16) < v102 )
          {
            v103 = sub_491288(a1, *(void **)a1, v102, 1u);
            *(_QWORD *)a1 = v103;
          }
          *(_QWORD *)(a1 + 8) = v102;
          v103[v101] = 41;
          *(_BYTE *)(*(_QWORD *)a1 + v101 + 1) = 0;
        }
        else
        {
          v40 = *(_QWORD *)(a1 + 8);
          if ( v40 )
          {
            v43 = v40 - 1;
            v42 = v40 + 1;
            v41 = v40 + 2;
          }
          else
          {
            v41 = 3;
            v42 = 2;
            v43 = 0;
          }
          v44 = *(_BYTE **)a1;
          if ( *(_QWORD *)(a1 + 16) < v41 )
          {
            v44 = sub_491288(a1, *(void **)a1, v41, 1u);
            *(_QWORD *)a1 = v44;
          }
          *(_QWORD *)(a1 + 8) = v41;
          v44[v42] = 0;
          *(_WORD *)(*(_QWORD *)a1 + v43) = *(_WORD *)"?)";
        }
        sub_444B60(a5, (unsigned __int64 *)v110);
        goto LABEL_46;
      }
      goto LABEL_41;
    }
LABEL_49:
    ptr = nullptr;
    v121 = 0;
    v122 = nullptr;
    v51 = a2[2];
    if ( v51 )
    {
      v52 = (char *)a2[1];
      v53 = v51 - 1;
    }
    else
    {
      v53 = 0;
      v52 = (char *)&qword_4B2D48;
    }
    sub_47E018((__int64)&ptr, v52, v53, a4, (int)a5, a6, a7, a8, v107);
    v54 = (const char *)ptr;
    if ( !v121 )
      v54 = (const char *)&qword_4B2D48;
    sub_42D148(a1, "\"%s\"", v54);
    if ( ptr )
    {
      v121 = 0;
      j__free(ptr);
    }
    goto LABEL_46;
  }
  if ( v28 == 3 )
  {
    sub_4488B8(v126, a2);
    *(_QWORD *)v110 = v126;
    sub_448E00(v126);
    a2 = v126;
    goto LABEL_49;
  }
  if ( v28 == 5 )
  {
    v55 = *(_QWORD *)(a1 + 8);
    if ( v55 )
    {
      v56 = v55 - 1;
      v57 = v55 + 6;
      v58 = v55 + 5;
    }
    else
    {
      v58 = 6;
      v57 = 7;
      v56 = 0;
    }
    v59 = *(_BYTE **)a1;
    if ( *(_QWORD *)(a1 + 16) < v57 )
    {
      v59 = sub_491288(a1, *(void **)a1, v57, 1u);
      *(_QWORD *)a1 = v59;
    }
    *(_QWORD *)(a1 + 8) = v57;
    v59[v58] = 0;
    qmemcpy((void *)(*(_QWORD *)a1 + v56), "object", 6);
    v115 = 0;
    v116 = nullptr;
    v117 = &v115;
    v118 = &v115;
    v119 = 0;
    LODWORD(v121) = 0;
    v122 = nullptr;
    v123 = &v121;
    v124 = &v121;
    v125 = 0;
    v60 = sub_444100(*(__int64 *)v110);
    if ( v60 )
    {
      while ( *(_BYTE *)v60 )
      {
        if ( *(_BYTE *)v60 == 48 )
        {
          if ( *((_BYTE *)v60 + 1) )
            break;
        }
        else if ( !(unsigned __int8)sub_443E70(v60) )
        {
          break;
        }
        sub_49B8B8((const char *)v60, "%llu", &v111);
        sub_40F3A0(&v114, (unsigned __int64 *)&v111);
LABEL_65:
        v60 = sub_4441A0(*(__int64 *)v110, (char *)v60);
        if ( !v60 )
          goto LABEL_66;
      }
      v111 = nullptr;
      v112 = 0;
      v113 = 0;
      v61 = strlen((const char *)v60);
      v62 = v61 + 1;
      v63 = v61;
      v111 = sub_491288((__int64)&v111, nullptr, v61 + 1, 1u);
      v112 = v62;
      memmove(v111, v60, v63);
      *((_BYTE *)v111 + v63) = 0;
      sub_444820(&ptr, (__int64)&v111);
      if ( v111 )
      {
        v112 = 0;
        j__free(v111);
      }
      goto LABEL_65;
    }
LABEL_66:
    v64 = (__int64)v117;
    if ( v117 != &v115 )
    {
      sub_49B748(v129, 0x400u, "%llu", *((_QWORD *)v117 + 4));
      while ( 1 )
      {
        v72 = *(_QWORD *)(a1 + 8);
        v108 = *(__int64 **)v110;
        if ( v72 )
        {
          v65 = v72 - 1;
          v66 = v72 + 1;
          v67 = *(void **)a1;
          if ( *(_QWORD *)(a1 + 16) >= v66 )
            goto LABEL_69;
        }
        else
        {
          v66 = 2;
          v65 = 0;
          v67 = *(void **)a1;
          if ( *(_QWORD *)(a1 + 16) >= 2u )
            goto LABEL_69;
        }
        v67 = sub_491288(a1, v67, v66, 1u);
        *(_QWORD *)a1 = v67;
LABEL_69:
        *(_QWORD *)(a1 + 8) = v66;
        *((_BYTE *)v67 + v65) = 10;
        *(_BYTE *)(*(_QWORD *)a1 + v65 + 1) = 0;
        memset(&v127[1], 0, 24);
        LOBYTE(v127[0]) = 2;
        sub_44DA00(v127, (__int64)v108, v129, 1u);
        sub_44EF70(a1, v127, v129, (unsigned int)(v11 + 2), v68, v69, v70, v71);
        sub_448310(v127);
        v64 = sub_49F748(v64);
        if ( (int *)v64 == &v115 )
          break;
        sub_49B748(v129, 0x400u, "%llu", *(_QWORD *)(v64 + 32));
      }
    }
    v73 = v123;
    if ( v123 == &v121 )
    {
LABEL_88:
      sub_4447C8((__int64)&ptr, v122);
      sub_40E5E8((__int64)&v114, v116);
      goto LABEL_46;
    }
    v109 = v11 + 2;
    while ( 1 )
    {
      v81 = (char *)&qword_4B2D48;
      v82 = *(__int64 **)v110;
      if ( v73[5] )
        v81 = (char *)v73[4];
      v83 = *(_QWORD *)(a1 + 8);
      if ( v83 )
      {
        v74 = v83 - 1;
        v75 = v83 + 1;
        v76 = *(void **)a1;
        if ( *(_QWORD *)(a1 + 16) < v75 )
          goto LABEL_87;
      }
      else
      {
        v75 = 2;
        v74 = 0;
        v76 = *(void **)a1;
        if ( *(_QWORD *)(a1 + 16) < 2u )
        {
LABEL_87:
          v76 = sub_491288(a1, v76, v75, 1u);
          *(_QWORD *)a1 = v76;
        }
      }
      *(_QWORD *)(a1 + 8) = v75;
      *((_BYTE *)v76 + v74) = 10;
      *(_BYTE *)(*(_QWORD *)a1 + v74 + 1) = 0;
      memset(&v128[1], 0, 24);
      LOBYTE(v128[0]) = 2;
      sub_44DA00(v128, (__int64)v82, v81, 1u);
      sub_44EF70(a1, v128, v81, v109, v77, v78, v79, v80);
      sub_448310(v128);
      v73 = (__int64 *)sub_49F748(v73);
      if ( v73 == &v121 )
        goto LABEL_88;
    }
  }
  if ( v28 != 2 )
  {
LABEL_41:
    v45 = *(_QWORD *)(a1 + 8);
    if ( v45 )
    {
      v46 = v45 - 1;
      v47 = v45 + 4;
      v48 = v45 + 3;
    }
    else
    {
      v48 = 4;
      v47 = 5;
      v46 = 0;
    }
    v49 = *(_BYTE **)a1;
    if ( v47 > *(_QWORD *)(a1 + 16) )
    {
      v49 = sub_491288(a1, *(void **)a1, v47, 1u);
      *(_QWORD *)a1 = v49;
    }
    *(_QWORD *)(a1 + 8) = v47;
    v49[v48] = 0;
    *(_DWORD *)(*(_QWORD *)a1 + v46) = *(_DWORD *)"bad?";
    goto LABEL_46;
  }
  v84 = a2[1];
  sub_42D148(a1, "%11lld. %8llXh %11lloo ", v84, v84, v84);
  v85 = 0x8000000000000000LL;
  v86 = v129;
  do
  {
    v87 = (v84 & v85) == 0;
    v85 >>= 1;
    v88 = !v87;
    *v86++ = v88 + 48;
  }
  while ( &v130 != v86 );
  v130 = 0;
  sub_42D148(a1, "%sb '", v129);
  v89 = 0;
  do
  {
    while ( 1 )
    {
      v93 = *(_QWORD *)(a1 + 8);
      v94 = v84 >> v89;
      if ( (unsigned __int8)(v94 - 32) >= 0xDFu )
        v94 = 46;
      if ( !v93 )
        break;
      v90 = v93 - 1;
      v91 = v93 + 1;
      v92 = *(_BYTE **)a1;
      if ( *(_QWORD *)(a1 + 16) < v91 )
        goto LABEL_101;
LABEL_96:
      *(_QWORD *)(a1 + 8) = v91;
      v89 += 8;
      v92[v90] = v94;
      *(_BYTE *)(*(_QWORD *)a1 + v90 + 1) = 0;
      if ( v89 == 64 )
        goto LABEL_102;
    }
    v91 = 2;
    v90 = 0;
    v92 = *(_BYTE **)a1;
    if ( *(_QWORD *)(a1 + 16) >= 2u )
      goto LABEL_96;
LABEL_101:
    v95 = sub_491288(a1, v92, v91, 1u);
    *(_QWORD *)a1 = v95;
    v89 += 8;
    *(_QWORD *)(a1 + 8) = v91;
    v95[v90] = v94;
    *(_BYTE *)(*(_QWORD *)a1 + v90 + 1) = 0;
  }
  while ( v89 != 64 );
LABEL_102:
  v96 = *(_QWORD *)(a1 + 8);
  if ( v96 )
  {
    v97 = v96 - 1;
    v98 = v96 + 1;
  }
  else
  {
    v98 = 2;
    v96 = 1;
    v97 = 0;
  }
  v99 = *(_BYTE **)a1;
  if ( v98 > *(_QWORD *)(a1 + 16) )
  {
    v99 = sub_491288(a1, *(void **)a1, v98, 1u);
    *(_QWORD *)a1 = v99;
  }
  *(_QWORD *)(a1 + 8) = v98;
  v99[v96] = 0;
  *(_BYTE *)(*(_QWORD *)a1 + v97) = asc_4C6890[0];
LABEL_46:
  sub_448310(v126);
  return 1;
}
// 44E5D0: variable 'v34' is possibly undefined
// 44E728: variable 'a4' is possibly undefined
// 44E728: variable 'a5' is possibly undefined
// 44E728: variable 'a6' is possibly undefined
// 44E728: variable 'a7' is possibly undefined
// 44E728: variable 'a8' is possibly undefined
// 44E728: variable 'v107' is possibly undefined
// 44E92C: variable 'v68' is possibly undefined
// 44E92C: variable 'v69' is possibly undefined
// 44E92C: variable 'v70' is possibly undefined
// 44E92C: variable 'v71' is possibly undefined
// 44EAD0: variable 'v77' is possibly undefined
// 44EAD0: variable 'v78' is possibly undefined
// 44EAD0: variable 'v79' is possibly undefined
// 44EAD0: variable 'v80' is possibly undefined
// 44ED38: variable 'v36' is possibly undefined
// 44ED38: variable 'v37' is possibly undefined
// 44ED38: variable 'v38' is possibly undefined
// 49F748: using guessed type __int64 __fastcall sub_49F748(_QWORD);
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 4C5B88: using guessed type __int64 qword_4C5B88[239];
// 4C68A8: using guessed type __int64 qword_4C68A8[2];
