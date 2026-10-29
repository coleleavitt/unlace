__int64 *__fastcall sub_47B6E0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdi
  __int64 v8; // rdi
  char v9; // al
  __int16 v10; // ax
  __int64 v11; // r12
  char *v12; // rsi
  unsigned __int64 v13; // r14
  char v14; // r15
  __int64 ph; // rax
  int v16; // ecx
  int v17; // r14d
  __int64 v18; // r12
  char *v19; // rsi
  unsigned __int64 v20; // rbp
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // rsi
  unsigned __int64 v25; // r15
  __int64 v26; // r8
  __int64 v27; // r12
  __int64 v28; // r14
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // r8
  __int64 v34; // r12
  char *v35; // rsi
  unsigned __int64 v36; // r14
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r14
  __int64 v39; // r15
  __int64 v40; // rax
  __int64 v41; // r12
  __int64 v42; // r15
  unsigned __int64 v43; // r14
  __int64 v44; // rsi
  _DWORD *v45; // r12
  __int64 v46; // r12
  __int64 v47; // r15
  unsigned __int64 v48; // r14
  __int64 v49; // rsi
  __int64 v50; // r12
  __int64 v51; // r12
  __int64 v52; // r15
  unsigned __int64 v53; // r14
  __int64 v54; // rsi
  _DWORD *v55; // r12
  __int64 v56; // r12
  __int64 v57; // r15
  unsigned __int64 v58; // r14
  __int64 v59; // rsi
  _DWORD *v60; // r12
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // [rsp+0h] [rbp-70h]
  unsigned __int64 v70; // [rsp+0h] [rbp-70h]
  __int64 v71; // [rsp+8h] [rbp-68h]
  __int64 v72; // [rsp+10h] [rbp-60h]
  void *ptr; // [rsp+18h] [rbp-58h] BYREF
  __int128 v74; // [rsp+20h] [rbp-50h]
  unsigned __int64 v75; // [rsp+30h] [rbp-40h]

  v75 = __readfsqword(0x28u);
  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  sub_357520(a1);
  v7 = *(_QWORD *)(a3 + 1480);
  v74 = 0;
  ptr = nullptr;
  sub_4F9200(v7, &ptr, a4, 0);
  sub_357520(a1);
  v8 = *(_QWORD *)(a3 + 1480);
  *(_QWORD *)&v74 = 0;
  sub_4F8CF0(v8, &ptr, a4);
  if ( (unsigned __int64)v74 <= 1 )
  {
    sub_46C990(a1, 32);
    if ( (*(_BYTE *)(a4 + 24) & 2) == 0 )
      goto LABEL_3;
  }
  else
  {
    sub_357520(a1);
    if ( (*(_BYTE *)(a4 + 24) & 2) == 0 )
      goto LABEL_3;
  }
  sub_357520(a1);
LABEL_3:
  if ( *(_BYTE *)(a4 + 20) )
    sub_357520(a1);
  sub_357520(a1);
  v9 = *(_BYTE *)(a4 + 22);
  if ( v9 )
  {
    sub_46C990(a1, (v9 & 4) == 0 ? 45 : 114);
    sub_46C990(a1, (*(_BYTE *)(a4 + 22) & 2) == 0 ? 45 : 119);
    sub_46C990(a1, (*(_BYTE *)(a4 + 22) & 1) == 0 ? 45 : 120);
    sub_46C990(a1, 32);
  }
  sub_357520(a1);
  if ( *(_WORD *)(a4 + 24) )
  {
    sub_357520(a1);
    v10 = *(_WORD *)(a4 + 24);
    if ( (v10 & 4) != 0 )
    {
      v41 = a1[1];
      if ( v41 )
      {
        v42 = v41 + 6;
        v43 = v41 + 7;
        --v41;
      }
      else
      {
        v43 = 8;
        v42 = 7;
      }
      v44 = *a1;
      if ( a1[2] < v43 )
      {
        v66 = qvector_reserve(a1, v44, v43, 1);
        *a1 = v66;
        v44 = v66;
      }
      a1[1] = v43;
      *(_BYTE *)(v44 + v42) = 0;
      v45 = (_DWORD *)(*a1 + v41);
      *v45 = 1684302184;
      *(_DWORD *)((char *)v45 + 3) = 745432420;
      v10 = *(_WORD *)(a4 + 24);
      if ( (v10 & 8) == 0 )
      {
LABEL_10:
        if ( (v10 & 0x10) == 0 )
          goto LABEL_11;
        goto LABEL_65;
      }
    }
    else if ( (v10 & 8) == 0 )
    {
      goto LABEL_10;
    }
    v46 = a1[1];
    if ( v46 )
    {
      v47 = v46 + 5;
      v48 = v46 + 6;
      --v46;
    }
    else
    {
      v48 = 7;
      v47 = 6;
    }
    v49 = *a1;
    if ( a1[2] < v48 )
    {
      v67 = qvector_reserve(a1, v49, v48, 1);
      *a1 = v67;
      v49 = v67;
    }
    a1[1] = v48;
    *(_BYTE *)(v49 + v47) = 0;
    v50 = *a1 + v46;
    *(_DWORD *)v50 = 1969382756;
    *(_WORD *)(v50 + 4) = 11367;
    v10 = *(_WORD *)(a4 + 24);
    if ( (v10 & 0x10) == 0 )
    {
LABEL_11:
      if ( (v10 & 0x40) == 0 )
        goto LABEL_12;
      goto LABEL_70;
    }
LABEL_65:
    v51 = a1[1];
    if ( v51 )
    {
      v52 = v51 + 6;
      v53 = v51 + 7;
      --v51;
    }
    else
    {
      v53 = 8;
      v52 = 7;
    }
    v54 = *a1;
    if ( a1[2] < v53 )
    {
      v65 = qvector_reserve(a1, v54, v53, 1);
      *a1 = v65;
      v54 = v65;
    }
    a1[1] = v53;
    *(_BYTE *)(v54 + v52) = 0;
    v55 = (_DWORD *)(*a1 + v51);
    *v55 = 1684107116;
    *(_DWORD *)((char *)v55 + 3) = 745694564;
    if ( (*(_WORD *)(a4 + 24) & 0x40) == 0 )
    {
LABEL_12:
      v11 = a1[1];
      v12 = (char *)*a1;
      if ( v11 )
      {
LABEL_13:
        if ( v11 != 1 )
        {
          v13 = v11 - 1;
          v14 = v12[v11 - 2];
          if ( v11 - 1 <= 1 )
          {
            if ( v12 )
            {
              a1[1] = 0;
              qfree(v12);
              *a1 = 0;
              a1[2] = 0;
            }
          }
          else
          {
            if ( a1[2] < v13 )
            {
              v62 = qvector_reserve(a1, v12, v11 - 1, 1);
              *a1 = v62;
              v12 = (char *)v62;
            }
            a1[1] = v13;
            v12[v11 - 2] = 0;
          }
          if ( v14 == 44 )
          {
            sub_46C990(a1, 41);
            sub_46C990(a1, 32);
            goto LABEL_20;
          }
          goto LABEL_79;
        }
        if ( !v12 )
        {
LABEL_79:
          sub_46C990(a1, 32);
          goto LABEL_20;
        }
        a1[1] = 0;
LABEL_78:
        qfree(v12);
        *a1 = 0;
        a1[2] = 0;
        goto LABEL_79;
      }
LABEL_91:
      if ( !v12 )
        goto LABEL_79;
      goto LABEL_78;
    }
LABEL_70:
    v56 = a1[1];
    if ( v56 )
    {
      v57 = v56 + 6;
      v58 = v56 + 7;
      --v56;
    }
    else
    {
      v58 = 8;
      v57 = 7;
    }
    v59 = *a1;
    if ( a1[2] < v58 )
    {
      v68 = qvector_reserve(a1, v59, v58, 1);
      *a1 = v68;
      v59 = v68;
    }
    a1[1] = v58;
    *(_BYTE *)(v59 + v57) = 0;
    v60 = (_DWORD *)(*a1 + v56);
    *v60 = 1684104552;
    *(_DWORD *)((char *)v60 + 3) = 745694564;
    v11 = a1[1];
    v12 = (char *)*a1;
    if ( v11 )
      goto LABEL_13;
    goto LABEL_91;
  }
LABEL_20:
  sub_357520(a1);
  ph = get_ph(a1, "sel=%a ", 0.0);
  v16 = *(_DWORD *)(ph + 72);
  v17 = v16 + 1 - *(_DWORD *)(ph + 68);
  if ( v16 + 1 == *(_DWORD *)(ph + 68) )
    goto LABEL_21;
  v23 = a1[1];
  if ( v23 )
  {
    v25 = v23 + 1;
    v26 = a1[1];
    v24 = *a1;
    --v23;
    if ( a1[2] >= v25 )
      goto LABEL_36;
  }
  else
  {
    v24 = *a1;
    v25 = 2;
    v26 = 1;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_36;
  }
  v69 = v26;
  v40 = qvector_reserve(a1, v24, v25, 1);
  *a1 = v40;
  v26 = v69;
  v24 = v40;
LABEL_36:
  a1[1] = v25;
  *(_BYTE *)(v24 + v26) = 0;
  *(_BYTE *)(*a1 + v23) = 123;
  if ( v17 > 0 )
  {
    v27 = a4;
    v28 = a4 + 4LL * v17;
    do
    {
      while ( *(_DWORD *)(v27 + 32) != -1 )
      {
        sub_357520(a1);
        v27 += 4;
        if ( v27 == v28 )
          goto LABEL_43;
      }
      v29 = a1[1];
      if ( v29 )
      {
        v30 = v29 + 2;
        v31 = v29 + 3;
        v32 = *a1;
        --v29;
        if ( a1[2] < v31 )
          goto LABEL_81;
      }
      else
      {
        v32 = *a1;
        v31 = 4;
        v30 = 3;
        if ( (unsigned __int64)a1[2] < 4 )
        {
LABEL_81:
          v72 = v30;
          v71 = v29;
          v70 = v31;
          v61 = qvector_reserve(a1, v32, v31, 1);
          v30 = v72;
          v29 = v71;
          *a1 = v61;
          v32 = v61;
          v31 = v70;
        }
      }
      a1[1] = v31;
      v27 += 4;
      *(_BYTE *)(v32 + v30) = 0;
      v33 = *a1 + v29;
      *(_WORD *)v33 = 12589;
      *(_BYTE *)(v33 + 2) = 44;
    }
    while ( v27 != v28 );
  }
LABEL_43:
  v34 = a1[1];
  v35 = (char *)*a1;
  v36 = v34 - 1;
  if ( v34 - 1 <= 1 )
  {
    if ( v35 )
    {
      a1[1] = 0;
      qfree(v35);
      v34 = a1[1];
      *a1 = 0;
      v35 = nullptr;
      v37 = 0;
      a1[2] = 0;
      if ( !v34 )
      {
        v38 = 3;
        v39 = 2;
        goto LABEL_86;
      }
      goto LABEL_82;
    }
  }
  else
  {
    if ( a1[2] < v36 )
    {
      v64 = qvector_reserve(a1, v35, v34 - 1, 1);
      *a1 = v64;
      v35 = (char *)v64;
    }
    a1[1] = v36;
    v35[v34 - 2] = 0;
    v34 = a1[1];
    v35 = (char *)*a1;
  }
  v37 = a1[2];
  if ( !v34 )
  {
    v38 = 3;
    v39 = 2;
    goto LABEL_49;
  }
LABEL_82:
  v39 = v34 + 1;
  v38 = v34 + 2;
  --v34;
LABEL_49:
  if ( v37 < v38 )
  {
LABEL_86:
    v63 = qvector_reserve(a1, v35, v38, 1);
    *a1 = v63;
    v35 = (char *)v63;
  }
  a1[1] = v38;
  v35[v39] = 0;
  *(_WORD *)(*a1 + v34) = 8317;
LABEL_21:
  if ( *(_BYTE *)(a4 + 96) )
    sub_357520(a1);
  if ( *(_DWORD *)(a4 + 100) != -1 )
    sub_357520(a1);
  v18 = a1[1];
  v19 = (char *)*a1;
  v20 = v18 - 1;
  if ( v18 - 1 <= 1 )
  {
    if ( v19 )
    {
      a1[1] = 0;
      qfree(v19);
      *a1 = 0;
      a1[2] = 0;
    }
  }
  else
  {
    if ( a1[2] < v20 )
    {
      v22 = qvector_reserve(a1, v19, v18 - 1, 1);
      *a1 = v22;
      v19 = (char *)v22;
    }
    a1[1] = v20;
    v19[v18 - 2] = 0;
  }
  if ( ptr )
  {
    *(_QWORD *)&v74 = 0;
    qfree(ptr);
  }
  return a1;
}

