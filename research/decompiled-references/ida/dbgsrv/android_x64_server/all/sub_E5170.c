/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E5170
// Address: 0x00000000000E5170

//----- (00000000000E5170) ----------------------------------------------------
char *__fastcall sub_E5170(char **a1)
{
  char **v1; // r12
  char *v2; // rax
  char *v3; // rcx
  int v4; // esi
  char *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rdx
  char *v9; // rax
  char *v10; // rbx
  char *v11; // rax
  char *v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD *v15; // rdx
  char *v16; // rdi
  char *v17; // rax
  char *v18; // rax
  char *v19; // r14
  char *v20; // rbx
  char **v21; // r12
  signed __int64 v22; // rbx
  __int64 v23; // r13
  char *v24; // r15
  __int64 v25; // rax
  char *v26; // rax
  char *v27; // rax
  char *v28; // rcx
  char *v29; // rax
  char *v30; // rax
  char *v31; // rcx
  char v32; // cl
  char *v33; // rax
  char *v34; // rbx
  char *v35; // rbp
  char *v36; // r12
  signed __int64 v37; // rbp
  __int64 v38; // r13
  char *v39; // r14
  char *v40; // rax
  __int64 v42; // rcx
  char v43; // cl
  char *v44; // r15
  char **v45; // rax
  signed __int64 v46; // r12
  unsigned __int64 v47; // rbx
  char *v48; // rbp
  __int64 v49; // rcx
  _QWORD *v50; // rax
  char *v51; // r13
  char **v52; // rbx
  _QWORD *v53; // rdx
  __int64 v54; // rax
  __int64 v55; // r12
  __int64 v56; // rcx
  char **v57; // rax
  _QWORD *v58; // rdx
  __int64 v59; // r13
  char *v60; // r15
  signed __int64 v61; // r14
  unsigned __int64 v62; // rbx
  char *v63; // rbp
  __int64 v64; // rcx
  _QWORD *v65; // rax
  char *v66; // r12
  _QWORD *v67; // rdx
  char **v68; // rax
  char **v69; // rbx
  __int64 v70; // r14
  __int64 v71; // rcx
  char **v72; // rax
  _QWORD *v73; // rdx
  char **v75; // [rsp+18h] [rbp-50h]
  char v76; // [rsp+18h] [rbp-50h]
  signed __int64 v77; // [rsp+20h] [rbp-48h]
  char *v78; // [rsp+20h] [rbp-48h]
  __int64 v79; // [rsp+20h] [rbp-48h]
  __int64 v80; // [rsp+30h] [rbp-38h]

  v1 = a1;
  v2 = *a1;
  v3 = a1[1];
  v4 = 0;
  if ( *a1 != v3 && *v2 == 114 )
  {
    *a1 = ++v2;
    v4 = 4;
  }
  if ( v2 == v3 )
    goto LABEL_10;
  if ( *v2 == 86 )
  {
    *a1 = ++v2;
    v4 |= 2u;
  }
  if ( v2 == v3 )
  {
LABEL_10:
    v2 = v3;
  }
  else if ( *v2 == 75 )
  {
    *a1 = ++v2;
    v4 |= 1u;
  }
  if ( (unsigned __int64)(v3 - v2) < 2 || *v2 != 68 )
    goto LABEL_39;
  if ( v2[1] == 111 )
  {
    *a1 = v2 + 2;
    v5 = a1[604];
    v6 = *((_QWORD *)v5 + 1);
    if ( (unsigned __int64)(v6 + 32) <= 0xFEF )
    {
      v8 = v5 + 8;
    }
    else
    {
      v7 = operator new[](0x1000u);
      *(_QWORD *)v7 = v5;
      *(_QWORD *)(v7 + 8) = 0;
      a1[604] = (char *)v7;
      v6 = 0;
      v8 = (_QWORD *)(v7 + 8);
      v5 = (char *)v7;
    }
    *v8 = v6 + 32;
    v16 = &v5[v6 + 16];
    *(_DWORD *)&v5[v6 + 24] = 16843015;
    *(_QWORD *)v16 = off_1519B8;
    *(__m128i *)&v5[v6 + 32] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)"noexcept", (__m128i)(unsigned __int64)"");
    goto LABEL_40;
  }
  if ( *v2 != 68 )
    goto LABEL_39;
  if ( v2[1] != 79 )
  {
    if ( *v2 == 68 && v2[1] == 119 )
    {
      v17 = v2 + 2;
      *a1 = v17;
      v77 = (a1[3] - a1[2]) >> 3;
      if ( v17 == v3 )
        goto LABEL_31;
LABEL_28:
      if ( *v17 != 69 )
      {
LABEL_31:
        while ( 1 )
        {
          v18 = sub_D4260((__int64)v1);
          if ( !v18 )
            return nullptr;
          v19 = v18;
          v20 = v1[3];
          if ( v20 == v1[4] )
          {
            v21 = (char **)v1[2];
            v22 = v20 - (char *)v21;
            v23 = v22 >> 2;
            if ( a1 + 5 == v21 )
            {
              v26 = (char *)malloc(2 * v22);
              v24 = v26;
              if ( v22 )
                memmove(v26, v21, v22);
              v1 = a1;
              v25 = v22 >> 3;
              v23 = v22 >> 2;
            }
            else
            {
              v24 = (char *)realloc(v21, 2 * v22);
              v25 = v22 >> 3;
              v1 = a1;
            }
            v1[2] = v24;
            v20 = &v24[8 * v25];
            v1[3] = v20;
            v1[4] = &v24[8 * v23];
          }
          v1[3] = v20 + 8;
          *(_QWORD *)v20 = v19;
          v17 = *v1;
          if ( *v1 != v1[1] )
            goto LABEL_28;
        }
      }
      *v1 = v17 + 1;
      v59 = 8 * v77;
      v60 = &v1[2][8 * v77];
      v61 = v1[3] - v60;
      v62 = ((_DWORD)v61 + 15) & 0xFFFFFFF0;
      v63 = v1[604];
      v64 = *((_QWORD *)v63 + 1);
      if ( v62 + v64 < 0xFF0 )
      {
        v67 = v63 + 8;
      }
      else
      {
        v79 = 8 * v77;
        if ( v62 >= 0xFF1 )
        {
          v65 = (_QWORD *)operator new[](v62 + 16);
          *v65 = *(_QWORD *)v63;
          v65[1] = 0;
          *(_QWORD *)v63 = v65;
          v66 = (char *)(v65 + 2);
          v59 = v79;
LABEL_94:
          if ( v61 )
          {
            memmove(v66, v60, v61);
            v69 = a1;
            v63 = a1[604];
            v60 = &a1[2][v59];
          }
          else
          {
            v69 = a1;
          }
          v70 = v61 >> 3;
          v69[3] = v60;
          v71 = *((_QWORD *)v63 + 1);
          if ( (unsigned __int64)(v71 + 32) < 0xFF0 )
          {
            v73 = v63 + 8;
          }
          else
          {
            v72 = (char **)operator new[](0x1000u);
            *v72 = v63;
            v72[1] = nullptr;
            v69[604] = (char *)v72;
            v71 = 0;
            v73 = v72 + 1;
            v63 = (char *)v72;
          }
          *v73 = v71 + 32;
          v16 = &v63[v71 + 16];
          *(_DWORD *)&v63[v71 + 24] = 16843026;
          *(_QWORD *)v16 = off_153098;
          *(_QWORD *)&v63[v71 + 32] = v66;
          *(_QWORD *)&v63[v71 + 40] = v70;
          v1 = a1;
          goto LABEL_40;
        }
        v68 = (char **)operator new[](0x1000u);
        *v68 = v63;
        v68[1] = nullptr;
        v1[604] = (char *)v68;
        v64 = 0;
        v67 = v68 + 1;
        v63 = (char *)v68;
        v59 = v79;
      }
      *v67 = v64 + v62;
      v66 = &v63[v64 + 16];
      goto LABEL_94;
    }
LABEL_39:
    v16 = nullptr;
    goto LABEL_40;
  }
  *a1 = v2 + 2;
  v9 = sub_D97A0((__int64)a1);
  if ( !v9 )
    return nullptr;
  v10 = v9;
  v11 = *a1;
  if ( *a1 == a1[1] || *v11 != 69 )
    return nullptr;
  *a1 = v11 + 1;
  v12 = a1[604];
  v13 = *((_QWORD *)v12 + 1);
  if ( (unsigned __int64)(v13 + 32) < 0xFF0 )
  {
    v15 = v12 + 8;
  }
  else
  {
    v14 = operator new[](0x1000u);
    *(_QWORD *)v14 = v12;
    *(_QWORD *)(v14 + 8) = 0;
    a1[604] = (char *)v14;
    v13 = 0;
    v15 = (_QWORD *)(v14 + 8);
    v12 = (char *)v14;
  }
  *v15 = v13 + 32;
  v16 = &v12[v13 + 16];
  *(_DWORD *)&v12[v13 + 24] = 16843025;
  *(_QWORD *)v16 = off_153028;
  *(_QWORD *)&v12[v13 + 32] = v10;
LABEL_40:
  v27 = *v1;
  v28 = v1[1];
  if ( (unsigned __int64)(v28 - *v1) >= 2 && *v27 == 68 && v27[1] == 120 )
  {
    v27 += 2;
    *v1 = v27;
  }
  if ( v27 == v28 || *v27 != 70 )
    return nullptr;
  *v1 = v27 + 1;
  if ( v27 + 1 != v28 && v27[1] == 89 )
    *v1 = v27 + 2;
  v29 = sub_D4260((__int64)v1);
  if ( !v29 )
    return nullptr;
  v78 = v29;
  v80 = (v1[3] - v1[2]) >> 3;
  v75 = v1 + 5;
  while ( 1 )
  {
    while ( 1 )
    {
      v30 = *v1;
      v31 = v1[1];
      if ( *v1 == v31 )
        break;
      if ( *v30 == 69 )
      {
        v76 = 0;
        v42 = 1;
        goto LABEL_74;
      }
      if ( *v30 != 118 )
        break;
      *v1 = v30 + 1;
    }
    if ( (unsigned __int64)(v31 - v30) >= 2 )
    {
      v32 = *v30;
      if ( *v30 == 82 )
      {
        if ( v30[1] == 69 )
        {
          v43 = 1;
          goto LABEL_73;
        }
        v32 = *v30;
      }
      if ( v32 == 79 && v30[1] == 69 )
        break;
    }
    v33 = sub_D4260((__int64)v1);
    if ( !v33 )
      return nullptr;
    v34 = v33;
    v35 = v1[3];
    if ( v35 == v1[4] )
    {
      v36 = v1[2];
      v37 = v35 - v36;
      v38 = v37 >> 2;
      if ( v75 == (char **)v36 )
      {
        v40 = (char *)malloc(2 * v37);
        v39 = v40;
        if ( v37 )
          memmove(v40, v36, v37);
      }
      else
      {
        v39 = (char *)realloc(v36, 2 * v37);
      }
      v1 = a1;
      a1[2] = v39;
      v35 = &v39[8 * (v37 >> 3)];
      a1[3] = v35;
      a1[4] = &v39[8 * v38];
    }
    v1[3] = v35 + 8;
    *(_QWORD *)v35 = v34;
  }
  v43 = 2;
LABEL_73:
  v76 = v43;
  v42 = 2;
LABEL_74:
  *v1 = &v30[v42];
  v44 = &v1[2][8 * v80];
  v45 = v1;
  v46 = v1[3] - v44;
  v47 = ((_DWORD)v46 + 15) & 0xFFFFFFF0;
  v48 = v45[604];
  v49 = *((_QWORD *)v48 + 1);
  if ( v47 + v49 < 0xFF0 )
  {
    v53 = v48 + 8;
    goto LABEL_80;
  }
  if ( v47 < 0xFF1 )
  {
    v54 = operator new[](0x1000u);
    *(_QWORD *)v54 = v48;
    *(_QWORD *)(v54 + 8) = 0;
    a1[604] = (char *)v54;
    v49 = 0;
    v53 = (_QWORD *)(v54 + 8);
    v48 = (char *)v54;
LABEL_80:
    *v53 = v49 + v47;
    v51 = &v48[v49 + 16];
    if ( !v46 )
      goto LABEL_77;
LABEL_81:
    memmove(v51, v44, v46);
    v52 = a1;
    v48 = a1[604];
    v44 = &a1[2][8 * v80];
    goto LABEL_82;
  }
  v50 = (_QWORD *)operator new[](v47 + 16);
  *v50 = *(_QWORD *)v48;
  v50[1] = 0;
  *(_QWORD *)v48 = v50;
  v51 = (char *)(v50 + 2);
  if ( v46 )
    goto LABEL_81;
LABEL_77:
  v52 = a1;
LABEL_82:
  v55 = v46 >> 3;
  v52[3] = v44;
  v56 = *((_QWORD *)v48 + 1);
  if ( (unsigned __int64)(v56 + 64) < 0xFF0 )
  {
    v58 = v48 + 8;
  }
  else
  {
    v57 = (char **)operator new[](0x1000u);
    *v57 = v48;
    v57[1] = nullptr;
    v52[604] = (char *)v57;
    v56 = 0;
    v58 = v57 + 1;
    v48 = (char *)v57;
  }
  *v58 = v56 + 64;
  *(_DWORD *)&v48[v56 + 24] = (_DWORD)&stru_10010;
  *(_QWORD *)&v48[v56 + 16] = off_153108;
  *(_QWORD *)&v48[v56 + 32] = v78;
  *(_QWORD *)&v48[v56 + 40] = v51;
  *(_QWORD *)&v48[v56 + 48] = v55;
  *(_DWORD *)&v48[v56 + 56] = v4;
  v48[v56 + 60] = v76;
  *(_QWORD *)&v48[v56 + 64] = v16;
  return &v48[v56 + 16];
}
// 10010: using guessed type Elf64_Rela stru_10010;
// 1519B8: using guessed type __int64 (__fastcall *off_1519B8[7])();
// 153028: using guessed type __int64 (__fastcall *off_153028[7])();
// 153098: using guessed type __int64 (__fastcall *off_153098[7])();
// 153108: using guessed type __int64 (__fastcall *off_153108[7])();
