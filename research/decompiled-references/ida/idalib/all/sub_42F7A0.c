char **__fastcall sub_42F7A0(__int64 **a1, unsigned __int8 **a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v4; // r13d
  unsigned __int64 v5; // rbp
  __int64 v7; // r15
  __int64 v8; // rax
  int v9; // r9d
  __int64 *v10; // r14
  unsigned __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // r12
  __int64 *v15; // rax
  unsigned __int64 v16; // rdx
  int v17; // edi
  int v18; // r8d
  __int64 *v19; // rax
  unsigned __int64 v20; // rdx
  int v21; // edi
  int v22; // ecx
  unsigned int v23; // eax
  int v25; // eax
  int v26; // r8d
  int v27; // r9d
  __int64 *v28; // r14
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // r12
  __int64 *v32; // rax
  unsigned __int64 v33; // rdx
  int v34; // edi
  int v35; // ecx
  __int64 v36; // r9
  int *v37; // r8
  __int64 v38; // rbp
  __int64 *v39; // rax
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rdx
  int v42; // edi
  unsigned __int64 v43; // rdx
  __int64 v44; // r15
  char *v45; // rsi
  unsigned __int64 v46; // rax
  int v47; // r8d
  int v48; // r9d
  __int64 *v49; // r12
  unsigned __int64 v50; // r13
  __int64 v51; // rdx
  __int64 v52; // rsi
  __int64 v53; // r14
  __int64 *v54; // rax
  unsigned __int64 v55; // rdx
  int v56; // edi
  int v57; // r8d
  int v58; // r9d
  __int64 *v59; // rax
  unsigned __int64 v60; // rdx
  int v61; // edi
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v67; // [rsp+10h] [rbp-198h]
  unsigned __int64 v68; // [rsp+10h] [rbp-198h]
  unsigned __int64 v69; // [rsp+28h] [rbp-180h]
  __int64 v70; // [rsp+30h] [rbp-178h]
  __int64 v71; // [rsp+38h] [rbp-170h]
  char v72; // [rsp+4Fh] [rbp-159h] BYREF
  int v73; // [rsp+50h] [rbp-158h] BYREF
  __int64 v74[32]; // [rsp+58h] [rbp-150h] BYREF
  __int64 v75; // [rsp+158h] [rbp-50h] BYREF
  unsigned __int64 v76; // [rsp+168h] [rbp-40h]

  v4 = 0;
  v5 = a3;
  v76 = __readfsqword(0x28u);
  v7 = a4;
  if ( (a4 & 0x600) != 0x400 || (a4 & 0xF0000000) != 0x60000000 )
  {
    while ( (unsigned __int8)is_enum(v7, v4) )
    {
      v8 = sub_413F50(a2, &v72, v5, v4, nullptr);
      v10 = *a1;
      v11 = v8;
      v12 = (*a1)[1];
      v13 = **a1;
      if ( (*a1)[2] < (unsigned __int64)(v12 + 1) )
      {
        v67 = v8;
        v62 = qvector_reserve(*a1, v13, v12 + 1, 24);
        v12 = v10[1];
        v11 = v67;
        *v10 = v62;
        v13 = v62;
      }
      v14 = v13 + 24 * v12;
      *(_QWORD *)v14 = 0;
      *(_OWORD *)(v14 + 8) = 0;
      ++v10[1];
      v15 = a1[1];
      v16 = v15[1];
      v17 = (_DWORD)v15 + 24;
      if ( v11 >= v16 && v11 < v15[2] )
      {
        *((_BYTE *)v15 + 24) = 43;
        v17 = (_DWORD)v15 + 25;
        LODWORD(v11) = v11 - v16;
      }
      qsnprintf(v17, 63, (unsigned int)"%a", v11, v11, v9);
      v19 = a1[1];
      v20 = v19[1];
      if ( v5 < v20 || v5 >= v19[2] )
      {
        v21 = (_DWORD)v19 + 24;
        v22 = v5;
      }
      else
      {
        *((_BYTE *)v19 + 24) = 43;
        v21 = (_DWORD)v19 + 25;
        v22 = v5 - v20;
      }
      qsnprintf(v21, 63, (unsigned int)"%a", v22, v18, (_DWORD)v19 + 24);
      sub_35A790((char **)v14);
LABEL_11:
      v23 = v4 + 1;
      v4 = 1;
      if ( v23 == 2 )
        return (char **)(v76 - __readfsqword(0x28u));
    }
    if ( !(unsigned __int8)is_stroff(v7, v4) )
      goto LABEL_11;
    v25 = sub_3C8E00(a2, v74, &v75, v5, v4);
    v28 = *a1;
    v73 = v25;
    v29 = v28[1];
    v30 = *v28;
    if ( v28[2] < (unsigned __int64)(v29 + 1) )
    {
      v64 = qvector_reserve(v28, v30, v29 + 1, 24);
      v29 = v28[1];
      *v28 = v64;
      v30 = v64;
    }
    v31 = v30 + 24 * v29;
    *(_QWORD *)v31 = 0;
    *(_OWORD *)(v31 + 8) = 0;
    ++v28[1];
    v32 = a1[1];
    v33 = v32[1];
    if ( v5 >= v33 && v5 < v32[2] )
    {
      *((_BYTE *)v32 + 24) = 43;
      v34 = (_DWORD)v32 + 25;
      v35 = v5 - v33;
    }
    else
    {
      v34 = (_DWORD)v32 + 24;
      v35 = v5;
    }
    qsnprintf(v34, 63, (unsigned int)"%a", v35, v26, v27);
    sub_35A790((char **)v31);
    v37 = &v73;
    if ( v73 <= 0 )
      goto LABEL_11;
    v69 = v5;
    v38 = 0;
    v70 = v7;
    while ( 1 )
    {
      if ( !v38 )
        goto LABEL_21;
      v36 = *(_QWORD *)(v31 + 8);
      if ( v36 )
      {
        v43 = v36 + 1;
        v44 = *(_QWORD *)(v31 + 8);
        v45 = *(char **)v31;
        --v36;
        if ( *(_QWORD *)(v31 + 16) < v43 )
          goto LABEL_42;
      }
      else
      {
        v45 = *(char **)v31;
        v44 = 1;
        v43 = 2;
        if ( *(_QWORD *)(v31 + 16) < 2u )
        {
LABEL_42:
          v71 = v36;
          v68 = v43;
          v63 = qvector_reserve(v31, v45, v43, 1);
          v36 = v71;
          v43 = v68;
          *(_QWORD *)v31 = v63;
          v45 = (char *)v63;
        }
      }
      *(_QWORD *)(v31 + 8) = v43;
      v45[v36] = 44;
      *(_BYTE *)(*(_QWORD *)v31 + v44) = 0;
LABEL_21:
      v39 = a1[1];
      v40 = v74[v38];
      v41 = v39[1];
      v42 = (_DWORD)v39 + 24;
      if ( v40 >= v41 && v40 < v39[2] )
      {
        *((_BYTE *)v39 + 24) = 43;
        v42 = (_DWORD)v39 + 25;
        LODWORD(v40) = v40 - v41;
      }
      ++v38;
      qsnprintf(v42, 63, (unsigned int)"%a", v40, (_DWORD)v37, v36);
      sub_35A910((__int64 *)v31);
      if ( v73 <= (int)v38 )
      {
        v5 = v69;
        v7 = v70;
        goto LABEL_11;
      }
    }
  }
  v46 = sub_3C9200((__int64 *)a2, a3);
  v49 = *a1;
  v50 = v46;
  v51 = (*a1)[1];
  v52 = **a1;
  if ( (*a1)[2] < (unsigned __int64)(v51 + 1) )
  {
    v65 = qvector_reserve(*a1, v52, v51 + 1, 24);
    v51 = v49[1];
    *v49 = v65;
    v52 = v65;
  }
  v53 = v52 + 24 * v51;
  *(_QWORD *)v53 = 0;
  *(_OWORD *)(v53 + 8) = 0;
  ++v49[1];
  v54 = a1[1];
  v55 = v54[1];
  v56 = (_DWORD)v54 + 24;
  if ( v50 >= v55 && v50 < v54[2] )
  {
    *((_BYTE *)v54 + 24) = 43;
    v56 = (_DWORD)v54 + 25;
    LODWORD(v50) = v50 - v55;
  }
  qsnprintf(v56, 63, (unsigned int)"%a", v50, v47, v48);
  v59 = a1[1];
  v60 = v59[1];
  v61 = (_DWORD)v59 + 24;
  if ( v5 >= v60 && v5 < v59[2] )
  {
    *((_BYTE *)v59 + 24) = 43;
    v61 = (_DWORD)v59 + 25;
    LODWORD(v5) = v5 - v60;
  }
  qsnprintf(v61, 63, (unsigned int)"%a", v5, v57, v58);
  return sub_35A790((char **)v53);
}
