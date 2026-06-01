unsigned __int64 __fastcall sub_2038DE0(__int64 a1, char *a2, __int64 a3)
{
  __int64 *v5; // rbx
  unsigned __int8 v6; // al
  __int64 v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rsi
  _QWORD *v10; // rax
  const char *v11; // rsi
  unsigned __int64 result; // rax
  const char *v13; // rsi
  __int64 v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  const char *v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r12
  size_t v27; // rax
  size_t v28; // rdx
  char *v29; // rsi
  size_t v30; // r13
  char *v31; // r12
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  _BYTE *v35; // rax
  __int64 v36; // rsi
  int *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r14
  _BYTE *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  _BYTE *v44; // rax
  unsigned int v45; // r12d
  int v46; // r13d
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  _BYTE *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // r13
  _BYTE *v57; // rax
  _BYTE *v58; // rax
  __int64 v59; // r12
  __int64 v60; // rsi
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // r14
  __int64 v65; // rsi
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  _BYTE *v70; // rax
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  _BYTE *v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rsi
  __int64 v77; // rsi
  _BYTE *v78; // rax
  _BYTE *v79; // rax
  unsigned int v80; // r13d
  _BYTE *v81; // rax
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  _BYTE *v85; // rax
  __int64 v86; // r12
  __int64 v87; // rcx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  _BYTE *v91; // rax
  _BYTE *v92; // rax
  _BYTE *v93; // rax
  _BYTE *v94; // rax
  _BYTE *v95; // r12
  const char *v96; // rax
  __int64 v97; // r12
  __int64 v98; // rax
  __int64 *v99; // r12
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  _BYTE *v103; // rax
  __int64 v104; // rsi
  __int64 v105; // rax
  __int64 v106; // rdx
  __int64 v107; // r12
  __int64 v108; // r14
  _BYTE *v109; // rax
  _BYTE *v110; // r13
  _BYTE *v111; // rax
  _BYTE *v112; // rax
  __int64 v113; // rax
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  int v117; // r13d
  unsigned int v118; // r12d
  __int64 v119; // rsi
  __int64 v120; // rax
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  _BYTE *v124; // rax
  _BYTE *v125; // rax

  v5 = (__int64 *)a2;
  v6 = *a2;
  if ( *a2 != 5 )
  {
    switch ( v6 )
    {
      case 6u:
        v14 = *((_QWORD *)a2 + 1);
        if ( (unsigned int)*(unsigned __int8 *)(v14 + 8) - 17 <= 1 )
        {
          sub_995540(a1, "splat (");
          v15 = v14;
          if ( (unsigned int)*(unsigned __int8 *)(v14 + 8) - 17 <= 1 )
            v15 = **(_QWORD **)(v14 + 16);
          sub_2034FF0(*(_QWORD *)(a3 + 8), v15, a1);
          sub_995540(a1, " ");
        }
        sub_2031760(a1, (__int64)(v5 + 3));
        result = (unsigned int)*(unsigned __int8 *)(v14 + 8) - 17;
        if ( (unsigned int)result <= 1 )
          goto LABEL_14;
        return result;
      case 2u:
      case 7u:
        v13 = "zeroinitializer";
        return sub_995540(a1, v13);
      case 0x11u:
        sub_995540(a1, "blockaddress(");
        sub_2038AA0(a1, *(_QWORD *)(*((_QWORD *)a2 - 4) + 72LL), a3, v16, v17, v18);
        sub_995540(a1, ", ");
        sub_2038AA0(a1, *((_QWORD *)a2 - 4), a3, v19, v20, v21);
LABEL_14:
        v13 = ")";
        return sub_995540(a1, v13);
    }
    v22 = "dso_local_equivalent ";
    switch ( v6 )
    {
      case 0x13u:
LABEL_29:
        sub_995540(a1, v22);
        return (unsigned __int64)sub_2038AA0(a1, *(v5 - 4), a3, v23, v24, v25);
      case 0x14u:
        v22 = "no_cfi ";
        goto LABEL_29;
      case 0x15u:
        sub_995540(a1, "ptrauth (");
        v26 = (unsigned int)((unsigned __int8)sub_20510E0(*(v5 - 8)) == 0) + 2;
        if ( !(unsigned __int8)sub_20510E0(*(v5 - 4)) )
          v26 = 4;
        v27 = j__strlen(", ");
        v28 = 0;
        v29 = nullptr;
        v30 = v27;
        v31 = (char *)&v5[4 * v26];
        while ( 1 )
        {
          sub_9954E0(a1, v29, v28);
          sub_2034FF0(*(_QWORD *)(a3 + 8), *(_QWORD *)(*(v5 - 16) + 8), a1);
          v35 = *(_BYTE **)(a1 + 32);
          if ( (unsigned __int64)v35 >= *(_QWORD *)(a1 + 24) )
          {
            sub_227BA10(a1, 32);
          }
          else
          {
            *(_QWORD *)(a1 + 32) = v35 + 1;
            *v35 = 32;
          }
          v36 = *(v5 - 16);
          v5 += 4;
          sub_2038AA0(a1, v36, a3, v32, v33, v34);
          if ( v5 == (__int64 *)v31 )
            break;
          v29 = ", ";
          v28 = v30;
        }
        goto LABEL_46;
      case 0xAu:
        v39 = *(_QWORD *)(v5[1] + 24);
        v40 = *(_BYTE **)(a1 + 32);
        if ( (unsigned __int64)v40 >= *(_QWORD *)(a1 + 24) )
        {
          sub_227BA10(a1, 91);
        }
        else
        {
          *(_QWORD *)(a1 + 32) = v40 + 1;
          *v40 = 91;
        }
        sub_2034FF0(*(_QWORD *)(a3 + 8), v39, a1);
        v44 = *(_BYTE **)(a1 + 32);
        if ( (unsigned __int64)v44 >= *(_QWORD *)(a1 + 24) )
        {
          sub_227BA10(a1, 32);
        }
        else
        {
          *(_QWORD *)(a1 + 32) = v44 + 1;
          *v44 = 32;
        }
        v45 = 1;
        sub_2038AA0(a1, v5[-4 * (*((_DWORD *)v5 + 1) & 0x7FFFFFF)], a3, v41, v42, v43);
        v46 = *((_DWORD *)v5 + 1) & 0x7FFFFFF;
        if ( v46 != 1 )
        {
          do
          {
            while ( 1 )
            {
              sub_995540(a1, ", ");
              sub_2034FF0(*(_QWORD *)(a3 + 8), v39, a1);
              v50 = *(_BYTE **)(a1 + 32);
              if ( (unsigned __int64)v50 >= *(_QWORD *)(a1 + 24) )
                break;
              *(_QWORD *)(a1 + 32) = v50 + 1;
              *v50 = 32;
              v51 = v45++;
              sub_2038AA0(a1, v5[4 * (v51 - (*((_DWORD *)v5 + 1) & 0x7FFFFFF))], a3, v47, v48, v49);
              if ( v45 == v46 )
                goto LABEL_56;
            }
            sub_227BA10(a1, 32);
            v52 = v45++;
            sub_2038AA0(a1, v5[4 * (v52 - (*((_DWORD *)v5 + 1) & 0x7FFFFFF))], a3, v53, v54, v55);
          }
          while ( v46 != v45 );
        }
        goto LABEL_56;
      case 3u:
        if ( !(unsigned __int8)sub_20520A0(v5, 8) )
        {
          v56 = *(_QWORD *)(v5[1] + 24);
          v57 = *(_BYTE **)(a1 + 32);
          if ( (unsigned __int64)v57 >= *(_QWORD *)(a1 + 24) )
          {
            sub_227BA10(a1, 91);
          }
          else
          {
            *(_QWORD *)(a1 + 32) = v57 + 1;
            *v57 = 91;
          }
          sub_2034FF0(*(_QWORD *)(a3 + 8), v56, a1);
          v58 = *(_BYTE **)(a1 + 32);
          if ( (unsigned __int64)v58 >= *(_QWORD *)(a1 + 24) )
          {
            sub_227BA10(a1, 32);
          }
          else
          {
            *(_QWORD *)(a1 + 32) = v58 + 1;
            *v58 = 32;
          }
          v59 = 1;
          v60 = sub_205FBA0(v5, 0);
          sub_2038AA0(a1, v60, a3, v61, v62, v63);
          v64 = sub_2051E80(v5);
          if ( v64 != 1 )
          {
            do
            {
              sub_995540(a1, ", ");
              sub_2034FF0(*(_QWORD *)(a3 + 8), v56, a1);
              v70 = *(_BYTE **)(a1 + 32);
              if ( (unsigned __int64)v70 < *(_QWORD *)(a1 + 24) )
              {
                *(_QWORD *)(a1 + 32) = v70 + 1;
                *v70 = 32;
              }
              else
              {
                sub_227BA10(a1, 32);
              }
              v65 = v59++;
              v66 = sub_205FBA0(v5, v65);
              sub_2038AA0(a1, v66, a3, v67, v68, v69);
            }
            while ( v64 != v59 );
          }
LABEL_56:
          result = *(_QWORD *)(a1 + 32);
          if ( result < *(_QWORD *)(a1 + 24) )
          {
            *(_QWORD *)(a1 + 32) = result + 1;
            *(_BYTE *)result = 93;
            return result;
          }
          v77 = 93;
          return sub_227BA10(a1, v77);
        }
        sub_995540(a1, "c\"");
        v105 = sub_2051ED0(v5);
        sub_22449A0(v105, v106, a1);
        result = *(_QWORD *)(a1 + 32);
        v77 = 34;
        if ( result < *(_QWORD *)(a1 + 24) )
        {
          *(_QWORD *)(a1 + 32) = result + 1;
          *(_BYTE *)result = 34;
          return result;
        }
        return sub_227BA10(a1, v77);
      case 0xBu:
        if ( (*(_BYTE *)(v5[1] + 9) & 2) != 0 )
        {
          v78 = *(_BYTE **)(a1 + 32);
          if ( (unsigned __int64)v78 >= *(_QWORD *)(a1 + 24) )
          {
            sub_227BA10(a1, 60);
          }
          else
          {
            *(_QWORD *)(a1 + 32) = v78 + 1;
            *v78 = 60;
          }
        }
        v79 = *(_BYTE **)(a1 + 32);
        if ( (unsigned __int64)v79 >= *(_QWORD *)(a1 + 24) )
        {
          sub_227BA10(a1, 123);
        }
        else
        {
          *(_QWORD *)(a1 + 32) = v79 + 1;
          *v79 = 123;
        }
        v80 = *((_DWORD *)v5 + 1) & 0x7FFFFFF;
        if ( v80 )
        {
          v81 = *(_BYTE **)(a1 + 32);
          if ( *(_QWORD *)(a1 + 24) <= (unsigned __int64)v81 )
          {
            sub_227BA10(a1, 32);
          }
          else
          {
            *(_QWORD *)(a1 + 32) = v81 + 1;
            *v81 = 32;
          }
          sub_2034FF0(*(_QWORD *)(a3 + 8), *(_QWORD *)(v5[-4 * (*((_DWORD *)v5 + 1) & 0x7FFFFFF)] + 8), a1);
          v85 = *(_BYTE **)(a1 + 32);
          if ( (unsigned __int64)v85 >= *(_QWORD *)(a1 + 24) )
          {
            sub_227BA10(a1, 32);
          }
          else
          {
            *(_QWORD *)(a1 + 32) = v85 + 1;
            *v85 = 32;
          }
          v86 = 1;
          sub_2038AA0(a1, v5[-4 * (*((_DWORD *)v5 + 1) & 0x7FFFFFF)], a3, v82, v83, v84);
          if ( v80 != 1 )
          {
            do
            {
              sub_995540(a1, ", ");
              sub_2034FF0(*(_QWORD *)(a3 + 8), *(_QWORD *)(v5[4 * (v86 - (*((_DWORD *)v5 + 1) & 0x7FFFFFF))] + 8), a1);
              v91 = *(_BYTE **)(a1 + 32);
              if ( (unsigned __int64)v91 < *(_QWORD *)(a1 + 24) )
              {
                *(_QWORD *)(a1 + 32) = v91 + 1;
                *v91 = 32;
              }
              else
              {
                sub_227BA10(a1, 32);
              }
              v87 = v86++;
              v88 = v87 - (*((_DWORD *)v5 + 1) & 0x7FFFFFF);
              sub_2038AA0(a1, v5[4 * v88], a3, v88, v89, v90);
            }
            while ( v80 > (unsigned int)v86 );
          }
          v92 = *(_BYTE **)(a1 + 32);
          if ( (unsigned __int64)v92 >= *(_QWORD *)(a1 + 24) )
          {
            sub_227BA10(a1, 32);
          }
          else
          {
            *(_QWORD *)(a1 + 32) = v92 + 1;
            *v92 = 32;
          }
        }
        v93 = *(_BYTE **)(a1 + 32);
        if ( (unsigned __int64)v93 >= *(_QWORD *)(a1 + 24) )
        {
          sub_227BA10(a1, 125);
        }
        else
        {
          *(_QWORD *)(a1 + 32) = v93 + 1;
          *v93 = 125;
        }
        result = v5[1];
        if ( (*(_BYTE *)(result + 9) & 2) == 0 )
          return result;
        goto LABEL_103;
    }
    if ( (v6 & 0xF7) == 4 )
    {
      v107 = v5[1];
      v108 = *(_QWORD *)(v107 + 24);
      v109 = (_BYTE *)sub_205FD90(v5, 0);
      v110 = v109;
      if ( !v109 || (unsigned __int8)(*v109 - 5) > 1u )
      {
        v111 = *(_BYTE **)(a1 + 32);
        if ( (unsigned __int64)v111 >= *(_QWORD *)(a1 + 24) )
        {
          sub_227BA10(a1, 60);
        }
        else
        {
          *(_QWORD *)(a1 + 32) = v111 + 1;
          *v111 = 60;
        }
        sub_2034FF0(*(_QWORD *)(a3 + 8), v108, a1);
        v112 = *(_BYTE **)(a1 + 32);
        if ( (unsigned __int64)v112 >= *(_QWORD *)(a1 + 24) )
        {
          sub_227BA10(a1, 32);
        }
        else
        {
          *(_QWORD *)(a1 + 32) = v112 + 1;
          *v112 = 32;
        }
        v113 = sub_2060180(v5, 0);
        sub_2038AA0(a1, v113, a3, v114, v115, v116);
        v117 = *(_DWORD *)(v107 + 32);
        v118 = 1;
        if ( v117 != 1 )
        {
          do
          {
            sub_995540(a1, ", ");
            sub_2034FF0(*(_QWORD *)(a3 + 8), v108, a1);
            v124 = *(_BYTE **)(a1 + 32);
            if ( (unsigned __int64)v124 < *(_QWORD *)(a1 + 24) )
            {
              *(_QWORD *)(a1 + 32) = v124 + 1;
              *v124 = 32;
            }
            else
            {
              sub_227BA10(a1, 32);
            }
            v119 = v118++;
            v120 = sub_2060180(v5, v119);
            sub_2038AA0(a1, v120, a3, v121, v122, v123);
          }
          while ( v118 != v117 );
        }
LABEL_103:
        result = *(_QWORD *)(a1 + 32);
        if ( result < *(_QWORD *)(a1 + 24) )
        {
          *(_QWORD *)(a1 + 32) = result + 1;
          *(_BYTE *)result = 62;
          return result;
        }
        v77 = 62;
        return sub_227BA10(a1, v77);
      }
      sub_995540(a1, "splat (");
      sub_2034FF0(*(_QWORD *)(a3 + 8), v108, a1);
      v74 = *(_BYTE **)(a1 + 32);
      if ( (unsigned __int64)v74 >= *(_QWORD *)(a1 + 24) )
      {
        sub_227BA10(a1, 32);
      }
      else
      {
        *(_QWORD *)(a1 + 32) = v74 + 1;
        *v74 = 32;
      }
      v75 = a3;
      v76 = (__int64)v110;
    }
    else
    {
      if ( v6 == 8 )
      {
        v13 = "null";
        return sub_995540(a1, v13);
      }
      v13 = "none";
      if ( v6 == 9 )
        return sub_995540(a1, v13);
      v13 = "poison";
      if ( v6 == 1 )
        return sub_995540(a1, v13);
      v13 = "undef";
      if ( v6 <= 1u )
        return sub_995540(a1, v13);
      if ( v6 != 18 )
      {
        v13 = "<placeholder or erroneous Constant>";
        return sub_995540(a1, v13);
      }
      if ( *((_WORD *)v5 + 1) != 63
        || (v13 = nullptr, v94 = (_BYTE *)sub_205FD90(v5, 0), (v95 = v94) == nullptr)
        || (unsigned __int8)(*v94 - 5) > 1u )
      {
        v96 = (const char *)sub_2051BD0(v5, v13);
        sub_995540(a1, v96);
        sub_20305A0(a1, (unsigned __int8 *)v5);
        sub_995540(a1, " (");
        if ( *((_WORD *)v5 + 1) == 34 )
        {
          v97 = *(_QWORD *)(a3 + 8);
          v98 = sub_20BEEB0(v5);
          sub_2034FF0(v97, v98, a1);
          sub_995540(a1, ", ");
        }
        v99 = &v5[-4 * (*((_DWORD *)v5 + 1) & 0x7FFFFFF)];
        while ( v99 != v5 )
        {
          sub_2034FF0(*(_QWORD *)(a3 + 8), *(_QWORD *)(*v99 + 8), a1);
          v103 = *(_BYTE **)(a1 + 32);
          if ( (unsigned __int64)v103 >= *(_QWORD *)(a1 + 24) )
          {
            sub_227BA10(a1, 32);
          }
          else
          {
            *(_QWORD *)(a1 + 32) = v103 + 1;
            *v103 = 32;
          }
          v104 = *v99;
          v99 += 4;
          sub_2038AA0(a1, v104, a3, v100, v101, v102);
          if ( v99 != v5 )
            sub_995540(a1, ", ");
        }
        if ( (unsigned __int8)sub_2051460(v5) )
        {
          sub_995540(a1, " to ");
          sub_2034FF0(*(_QWORD *)(a3 + 8), v5[1], a1);
        }
        if ( *((_WORD *)v5 + 1) == 63 )
        {
          v37 = (int *)sub_2051470(v5);
          sub_2030140(a1, v5[1], v37, v38);
        }
LABEL_46:
        result = *(_QWORD *)(a1 + 32);
        if ( result < *(_QWORD *)(a1 + 24) )
        {
LABEL_47:
          *(_QWORD *)(a1 + 32) = result + 1;
          *(_BYTE *)result = 41;
          return result;
        }
        goto LABEL_76;
      }
      sub_995540(a1, "splat (");
      sub_2034FF0(*(_QWORD *)(a3 + 8), *((_QWORD *)v95 + 1), a1);
      v125 = *(_BYTE **)(a1 + 32);
      if ( (unsigned __int64)v125 >= *(_QWORD *)(a1 + 24) )
      {
        sub_227BA10(a1, 32);
      }
      else
      {
        *(_QWORD *)(a1 + 32) = v125 + 1;
        *v125 = 32;
      }
      v75 = a3;
      v76 = (__int64)v95;
    }
    sub_2038AA0(a1, v76, v75, v71, v72, v73);
    result = *(_QWORD *)(a1 + 32);
    if ( result < *(_QWORD *)(a1 + 24) )
      goto LABEL_47;
LABEL_76:
    v77 = 41;
    return sub_227BA10(a1, v77);
  }
  v7 = *((_QWORD *)a2 + 1);
  v8 = v7;
  if ( (unsigned int)*(unsigned __int8 *)(v7 + 8) - 17 <= 1 )
  {
    sub_995540(a1, "splat (");
    v9 = v7;
    if ( (unsigned int)*(unsigned __int8 *)(v7 + 8) - 17 <= 1 )
      v9 = **(_QWORD **)(v7 + 16);
    sub_2034FF0(*(_QWORD *)(a3 + 8), v9, a1);
    sub_995540(a1, " ");
    if ( (unsigned int)*(unsigned __int8 *)(v7 + 8) - 17 > 1 )
      v8 = v7;
    else
      v8 = **(_QWORD **)(v7 + 16);
  }
  if ( (unsigned __int8)sub_20C2F40(v8, 1) )
  {
    v10 = (_QWORD *)v5[3];
    if ( *((_DWORD *)v5 + 8) > 0x40u )
      v10 = (_QWORD *)*v10;
    v11 = "true";
    if ( !v10 )
      v11 = "false";
    sub_995540(a1, v11);
  }
  else
  {
    sub_220C370(v5 + 3, a1, 1);
  }
  result = (unsigned int)*(unsigned __int8 *)(v7 + 8) - 17;
  if ( (unsigned int)result <= 1 )
    goto LABEL_14;
  return result;
}
