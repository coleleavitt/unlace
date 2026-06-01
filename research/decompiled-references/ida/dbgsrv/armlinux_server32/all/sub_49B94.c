/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49B94
// Address: 0x00049B94

//----- (00049B94) --------------------------------------------------------
int __fastcall sub_49B94(int a1, int *a2, const char *a3, signed int a4, _DWORD *a5)
{
  unsigned int v9; // r3
  unsigned int v10; // r8
  _BYTE *v11; // r0
  unsigned int v12; // r7
  size_t v13; // r0
  int v14; // r7
  size_t v15; // r8
  size_t v16; // r9
  void *v17; // r1
  int v18; // r6
  int v19; // r7
  int v20; // r8
  unsigned int v21; // r6
  void *v22; // r1
  int v23; // r2
  int v24; // r2
  char *v25; // r1
  const char *v26; // r2
  unsigned int v28; // r5
  char *v29; // r2
  unsigned int v30; // r3
  bool v31; // zf
  char v32; // r1
  int i; // r8
  int v34; // r7
  char v35; // r6
  int v36; // r9
  unsigned int v37; // r7
  void *v38; // r1
  int v39; // r5
  int v40; // r7
  unsigned int v41; // r6
  void *v42; // r1
  int v43; // r7
  int v44; // r5
  unsigned int v45; // r8
  int v46; // r7
  _BYTE *v47; // r0
  int *v48; // r7
  size_t v49; // r9
  int *v50; // r7
  int v51; // r9
  unsigned int v52; // r5
  void *v53; // r1
  int *v54; // r0
  int v55; // r5
  int *v56; // r10
  int v57; // r5
  int v58; // r7
  int v59; // r8
  unsigned int v60; // r5
  void *v61; // r1
  int v62; // r5
  int v63; // r7
  int v64; // r8
  unsigned int v65; // r5
  void *v66; // r1
  int v67; // r5
  int v68; // r6
  unsigned int v69; // r7
  int v70; // r5
  void *v71; // r1
  int *v72; // r8
  int v73; // r5
  char *v74; // r9
  int v75; // r10
  unsigned int v76; // r5
  void *v77; // r1
  int *v78; // r11
  int *v79; // r0
  int *v80; // r5
  unsigned int v81; // r3
  unsigned int v82; // r7
  unsigned int v83; // r5
  void *v84; // r1
  unsigned int v85; // r7
  _BYTE *v86; // r0
  unsigned int v87; // r5
  signed int v88; // [sp+20h] [bp-4ACh]
  int *v89; // [sp+30h] [bp-49Ch] BYREF
  unsigned int v90[2]; // [sp+34h] [bp-498h] BYREF
  void *v91; // [sp+3Ch] [bp-490h] BYREF
  size_t v92; // [sp+40h] [bp-48Ch]
  int v93; // [sp+44h] [bp-488h]
  int v94; // [sp+48h] [bp-484h] BYREF
  int v95; // [sp+4Ch] [bp-480h] BYREF
  _DWORD *v96; // [sp+50h] [bp-47Ch]
  int *v97; // [sp+54h] [bp-478h]
  int *v98; // [sp+58h] [bp-474h]
  int v99; // [sp+5Ch] [bp-470h]
  char *v100; // [sp+60h] [bp-46Ch] BYREF
  int v101; // [sp+64h] [bp-468h] BYREF
  _DWORD *v102; // [sp+68h] [bp-464h]
  int *v103; // [sp+6Ch] [bp-460h]
  int *v104; // [sp+70h] [bp-45Ch]
  int v105; // [sp+74h] [bp-458h]
  unsigned __int8 v106[8]; // [sp+78h] [bp-454h] BYREF
  int v107; // [sp+80h] [bp-44Ch]
  int v108; // [sp+84h] [bp-448h]
  int v109; // [sp+88h] [bp-444h]
  int v110; // [sp+8Ch] [bp-440h]
  int v111[6]; // [sp+90h] [bp-43Ch] BYREF
  int v112[6]; // [sp+A8h] [bp-424h] BYREF
  char v113; // [sp+C3h] [bp-409h] BYREF
  char v114[31]; // [sp+C4h] [bp-408h] BYREF
  _BYTE v115[993]; // [sp+E3h] [bp-3E9h] BYREF

  if ( a3 )
  {
    if ( a4 > 0 )
    {
      v9 = *(_DWORD *)(a1 + 4);
      v10 = v9 - 1;
      if ( !v9 )
        v10 = 0;
      v11 = *(_BYTE **)a1;
      v12 = a4 + v10 + 1;
      if ( v9 < v12 )
      {
        if ( v12 > *(_DWORD *)(a1 + 8) )
        {
          v11 = sub_78018(a1, *(void **)a1, a4 + v10 + 1, 1u);
          *(_DWORD *)a1 = v11;
        }
        *(_DWORD *)(a1 + 4) = v12;
        v11[a4 + v10] = 0;
        v11 = *(_BYTE **)a1;
      }
      memset(&v11[v10], 32, a4);
    }
    v13 = strlen(a3);
    v14 = *(_DWORD *)(a1 + 4);
    v15 = v13;
    v16 = v13;
    if ( v14 )
    {
      --v14;
      v16 = v13 + v14;
    }
    v17 = *(void **)a1;
    if ( v16 + 1 > *(_DWORD *)(a1 + 8) )
    {
      v17 = sub_78018(a1, v17, v16 + 1, 1u);
      *(_DWORD *)a1 = v17;
    }
    *(_DWORD *)(a1 + 4) = v16 + 1;
    *((_BYTE *)v17 + v16) = 0;
    memmove((void *)(*(_DWORD *)a1 + v14), a3, v15);
    v18 = *(_DWORD *)(a1 + 4);
    if ( v18 )
    {
      v19 = v18 - 1;
      v20 = v18 + 1;
      v21 = v18 + 2;
    }
    else
    {
      v19 = 0;
      v20 = 2;
      v21 = 3;
    }
    v22 = *(void **)a1;
    if ( *(_DWORD *)(a1 + 8) < v21 )
    {
      v22 = sub_78018(a1, v22, v21, 1u);
      *(_DWORD *)a1 = v22;
    }
    *(_DWORD *)(a1 + 4) = v21;
    *((_BYTE *)v22 + v20) = 0;
    *(_WORD *)(*(_DWORD *)a1 + v19) = *(_WORD *)": ";
  }
  v23 = *(unsigned __int8 *)a2;
  v106[0] = 2;
  v107 = 0;
  v108 = 0;
  v109 = 0;
  v110 = 0;
  v89 = a2;
  switch ( v23 )
  {
    case 2:
      v28 = a2[2];
      sub_34260(a1, "%11d. %8Xh %11oo ", v28, v28, v28);
      v29 = &v113;
      v30 = 0x80000000;
      do
      {
        v31 = (v28 & v30) == 0;
        v30 >>= 1;
        if ( v31 )
          v32 = 48;
        else
          v32 = 49;
        *++v29 = v32;
      }
      while ( v115 != v29 );
      v115[1] = 0;
      sub_34260(a1, "%sb '", v114);
      for ( i = 0; i != 32; i += 8 )
      {
        v34 = *(_DWORD *)(a1 + 4);
        v35 = v28 >> i;
        if ( (unsigned __int8)(v35 - 32) >= 0xDFu )
          v35 = 46;
        if ( v34 )
        {
          v36 = v34 - 1;
          v37 = v34 + 1;
          v38 = *(void **)a1;
          if ( *(_DWORD *)(a1 + 8) >= v37 )
            goto LABEL_42;
        }
        else
        {
          v36 = 0;
          v37 = 2;
          v38 = *(void **)a1;
          if ( *(_DWORD *)(a1 + 8) >= 2u )
            goto LABEL_42;
        }
        v38 = sub_78018(a1, v38, v37, 1u);
        *(_DWORD *)a1 = v38;
LABEL_42:
        *(_DWORD *)(a1 + 4) = v37;
        *((_BYTE *)v38 + v36) = v35;
        *(_BYTE *)(*(_DWORD *)a1 + v36 + 1) = 0;
      }
      v39 = *(_DWORD *)(a1 + 4);
      v40 = v39 - 1;
      v41 = v39 + 1;
      if ( !v39 )
      {
        v41 = 2;
        v39 = 1;
        v40 = 0;
      }
      v42 = *(void **)a1;
      if ( v41 > *(_DWORD *)(a1 + 8) )
      {
        v42 = sub_78018(a1, v42, v41, 1u);
        *(_DWORD *)a1 = v42;
      }
      *(_DWORD *)(a1 + 4) = v41;
      *((_BYTE *)v42 + v39) = 0;
      *(_BYTE *)(*(_DWORD *)a1 + v40) = 39;
LABEL_29:
      sub_45758(v106);
      return 1;
    case 3:
      sub_45B30(v106, (unsigned __int8 *)a2);
      v89 = (int *)v106;
      sub_45E50((int)v106);
      a2 = (int *)v106;
      goto LABEL_21;
    case 5:
      v43 = *(_DWORD *)(a1 + 4);
      if ( v43 )
      {
        v44 = v43 - 1;
        v45 = v43 + 6;
        v46 = v43 + 5;
      }
      else
      {
        v44 = 0;
        v45 = 7;
        v46 = 6;
      }
      v47 = *(_BYTE **)a1;
      if ( *(_DWORD *)(a1 + 8) < v45 )
      {
        v47 = sub_78018(a1, *(void **)a1, v45, 1u);
        *(_DWORD *)a1 = v47;
      }
      *(_DWORD *)(a1 + 4) = v45;
      v47[v46] = 0;
      qmemcpy((void *)(*(_DWORD *)a1 + v44), "object", 6);
      v95 = 0;
      v96 = nullptr;
      v99 = 0;
      v97 = &v95;
      v98 = &v95;
      v101 = 0;
      v102 = nullptr;
      v105 = 0;
      v103 = &v101;
      v104 = &v101;
      v48 = sub_426C4(v89);
      if ( !v48 )
        goto LABEL_59;
      break;
    case 6:
      sub_34260(a1, "function (idx=%d)", a2[2]);
      goto LABEL_29;
    case 7:
LABEL_21:
      v100 = nullptr;
      v101 = 0;
      v102 = nullptr;
      v24 = a2[3];
      if ( v24 )
      {
        v25 = (char *)a2[2];
        --v24;
      }
      else
      {
        v25 = (char *)&dword_8DB98;
      }
      sub_6B1A0((unsigned int)&v100, v25, v24);
      if ( v101 )
        v26 = v100;
      else
        v26 = (const char *)&dword_8DB98;
      sub_34260(a1, "\"%s\"", v26);
      if ( v100 )
      {
        v101 = 0;
        sub_77F70(v100);
      }
      goto LABEL_29;
    case 8:
      sub_34260(a1, "pvoid (%p)", (const void *)a2[2]);
      goto LABEL_29;
    case 9:
      sub_34260(a1, "0x%llXi64", *((_QWORD *)a2 + 1));
      goto LABEL_29;
    case 10:
      v57 = *(_DWORD *)(a1 + 4);
      if ( v57 )
      {
        v58 = v57 - 1;
        v59 = v57 + 4;
        v60 = v57 + 5;
      }
      else
      {
        v58 = 0;
        v59 = 5;
        v60 = 6;
      }
      v61 = *(void **)a1;
      if ( v60 > *(_DWORD *)(a1 + 8) )
      {
        v61 = sub_78018(a1, v61, v60, 1u);
        *(_DWORD *)a1 = v61;
      }
      *(_DWORD *)(a1 + 4) = v60;
      *((_BYTE *)v61 + v59) = 0;
      qmemcpy((void *)(*(_DWORD *)a1 + v58), "ref (", 5);
      sub_42C64((int)&v100, a5, (unsigned int *)&v89);
      if ( (_BYTE)v101 && (v79 = (int *)sub_45BF0((unsigned __int8 *)v89, 1), (v80 = v79) != nullptr) )
      {
        sub_49B94(a1, v79, nullptr, a4 + 4, a5);
        v81 = *(_DWORD *)(a1 + 4);
        if ( a4 > 0 && *(_BYTE *)v80 == 5 )
        {
          v85 = v81 - 1;
          if ( !v81 )
            v85 = 0;
          v86 = *(_BYTE **)a1;
          v87 = a4 + v85 + 1;
          if ( v81 < v87 )
          {
            if ( v87 > *(_DWORD *)(a1 + 8) )
            {
              v86 = sub_78018(a1, *(void **)a1, a4 + v85 + 1, 1u);
              *(_DWORD *)a1 = v86;
            }
            *(_DWORD *)(a1 + 4) = v87;
            v86[a4 + v85] = 0;
            v86 = *(_BYTE **)a1;
          }
          memset(&v86[v85], 32, a4);
          v81 = *(_DWORD *)(a1 + 4);
        }
        v82 = v81 - 1;
        v83 = v81 + 1;
        if ( !v81 )
        {
          v82 = 0;
          v83 = 2;
        }
        v84 = *(void **)a1;
        if ( *(_DWORD *)(a1 + 8) < v83 )
        {
          v84 = sub_78018(a1, v84, v83, 1u);
          *(_DWORD *)a1 = v84;
        }
        *(_DWORD *)(a1 + 4) = v83;
        *((_BYTE *)v84 + v82) = 41;
        *(_BYTE *)(*(_DWORD *)a1 + v82 + 1) = 0;
      }
      else
      {
        v62 = *(_DWORD *)(a1 + 4);
        if ( v62 )
        {
          v63 = v62 - 1;
          v64 = v62 + 1;
          v65 = v62 + 2;
        }
        else
        {
          v63 = 0;
          v64 = 2;
          v65 = 3;
        }
        v66 = *(void **)a1;
        if ( *(_DWORD *)(a1 + 8) < v65 )
        {
          v66 = sub_78018(a1, v66, v65, 1u);
          *(_DWORD *)a1 = v66;
        }
        *(_DWORD *)(a1 + 4) = v65;
        *((_BYTE *)v66 + v64) = 0;
        *(_WORD *)(*(_DWORD *)a1 + v63) = *(_WORD *)"?)";
      }
      sub_42D30(a5, (unsigned int *)&v89);
      goto LABEL_29;
    default:
      v67 = *(_DWORD *)(a1 + 4);
      if ( v67 )
      {
        v68 = v67 - 1;
        v69 = v67 + 4;
        v70 = v67 + 3;
      }
      else
      {
        v68 = 0;
        v69 = 5;
        v70 = 4;
      }
      v71 = *(void **)a1;
      if ( v69 > *(_DWORD *)(a1 + 8) )
      {
        v71 = sub_78018(a1, v71, v69, 1u);
        *(_DWORD *)a1 = v71;
      }
      *(_DWORD *)(a1 + 4) = v69;
      *((_BYTE *)v71 + v70) = 0;
      *(_DWORD *)(*(_DWORD *)a1 + v68) = *(_DWORD *)"bad?";
      goto LABEL_29;
  }
  while ( *(_BYTE *)v48 )
  {
    if ( *(_BYTE *)v48 == 48 )
    {
      if ( *((_BYTE *)v48 + 1) )
        break;
    }
    else if ( !sub_4250C(v48) )
    {
      break;
    }
    sub_7EC4C((int)v48, "%u", v90);
    sub_1A47C((int)&v91, &v94, v90);
LABEL_58:
    v48 = sub_4272C((int)v89, (char *)v48);
    if ( !v48 )
    {
LABEL_59:
      v50 = v97;
      if ( v97 != &v95 )
      {
        sub_7EBB4(v114, 1024, "%u", v97[4]);
        while ( 1 )
        {
          v55 = *(_DWORD *)(a1 + 4);
          v56 = v89;
          if ( v55 )
          {
            v51 = v55 - 1;
            v52 = v55 + 1;
            v53 = *(void **)a1;
            if ( *(_DWORD *)(a1 + 8) >= v52 )
              goto LABEL_62;
          }
          else
          {
            v51 = 0;
            v52 = 2;
            v53 = *(void **)a1;
            if ( *(_DWORD *)(a1 + 8) >= 2u )
              goto LABEL_62;
          }
          v53 = sub_78018(a1, v53, v52, 1u);
          *(_DWORD *)a1 = v53;
LABEL_62:
          *(_DWORD *)(a1 + 4) = v52;
          *((_BYTE *)v53 + v51) = 10;
          *(_BYTE *)(*(_DWORD *)a1 + v51 + 1) = 0;
          memset(&v111[2], 0, 16);
          LOBYTE(v111[0]) = 2;
          sub_49534((unsigned __int8 *)v111, (int)v56, v114, 1);
          sub_4A34C(a1, v111, v114, a4 + 2);
          sub_45758((unsigned __int8 *)v111);
          v54 = (int *)sub_81478(v50);
          v50 = v54;
          if ( v54 == &v95 )
            break;
          sub_7EBB4(v114, 1024, "%u", v54[4]);
        }
      }
      v72 = v103;
      if ( v103 == &v101 )
      {
LABEL_98:
        sub_42AF8((int)&v100, v102);
        sub_19C20((int)&v94, v96);
        goto LABEL_29;
      }
      v88 = a4 + 2;
      while ( 2 )
      {
        v78 = v89;
        if ( v72[5] )
        {
          v73 = *(_DWORD *)(a1 + 4);
          v74 = (char *)v72[4];
          if ( !v73 )
            goto LABEL_96;
        }
        else
        {
          v73 = *(_DWORD *)(a1 + 4);
          v74 = (char *)&dword_8DB98;
          if ( !v73 )
          {
LABEL_96:
            v75 = v73;
            v76 = 2;
            v77 = *(void **)a1;
            if ( *(_DWORD *)(a1 + 8) < 2u )
            {
LABEL_97:
              v77 = sub_78018(a1, v77, v76, 1u);
              *(_DWORD *)a1 = v77;
            }
LABEL_93:
            *(_DWORD *)(a1 + 4) = v76;
            *((_BYTE *)v77 + v75) = 10;
            *(_BYTE *)(v75 + *(_DWORD *)a1 + 1) = 0;
            LOBYTE(v112[0]) = 2;
            memset(&v112[2], 0, 16);
            sub_49534((unsigned __int8 *)v112, (int)v78, v74, 1);
            sub_4A34C(a1, v112, v74, v88);
            sub_45758((unsigned __int8 *)v112);
            v72 = (int *)sub_81478(v72);
            if ( v72 == &v101 )
              goto LABEL_98;
            continue;
          }
        }
        break;
      }
      v75 = v73 - 1;
      v76 = v73 + 1;
      v77 = *(void **)a1;
      if ( *(_DWORD *)(a1 + 8) < v76 )
        goto LABEL_97;
      goto LABEL_93;
    }
  }
  v91 = nullptr;
  v92 = 0;
  v93 = 0;
  v49 = strlen((const char *)v48);
  v91 = sub_78018((int)&v91, nullptr, v49 + 1, 1u);
  v92 = v49 + 1;
  memmove(v91, v48, v49);
  *((_BYTE *)v91 + v49) = 0;
  sub_42B28((int)v90, &v100, (int)&v91);
  if ( v91 )
  {
    v92 = 0;
    sub_77F70(v91);
  }
  goto LABEL_58;
}
// 81478: using guessed type int __fastcall sub_81478(_DWORD);
// 8DB98: using guessed type int dword_8DB98;
