__int64 __fastcall sub_4A4100(__int64 *a1, const char *a2, __int64 a3, const char *a4, char a5)
{
  const char *v7; // rsi
  __int64 v8; // rsi
  int v9; // ebp
  unsigned int v10; // ebx
  __int64 v11; // rdi
  const char *v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rbx
  unsigned int v15; // ebp
  __int64 v17; // rsi
  unsigned int v18; // ebp
  __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 v21; // rbp
  unsigned int v22; // r14d
  __int64 v23; // rsi
  unsigned int i; // ebp
  int v25; // eax
  __int64 v26; // rsi
  __int64 v27; // rbp
  __int64 v28; // rsi
  __int64 v30; // [rsp+10h] [rbp-1E8h]
  unsigned int v31; // [rsp+30h] [rbp-1C8h]
  char v33; // [rsp+37h] [rbp-1C1h]
  unsigned int v34; // [rsp+44h] [rbp-1B4h] BYREF
  int v35; // [rsp+48h] [rbp-1B0h] BYREF
  int v36; // [rsp+4Ch] [rbp-1ACh] BYREF
  int v37; // [rsp+50h] [rbp-1A8h] BYREF
  int v38; // [rsp+54h] [rbp-1A4h] BYREF
  int v39; // [rsp+58h] [rbp-1A0h] BYREF
  unsigned int v40; // [rsp+5Ch] [rbp-19Ch] BYREF
  int v41; // [rsp+60h] [rbp-198h] BYREF
  unsigned int v42; // [rsp+64h] [rbp-194h] BYREF
  unsigned int v43; // [rsp+68h] [rbp-190h] BYREF
  unsigned int v44; // [rsp+6Ch] [rbp-18Ch] BYREF
  int v45; // [rsp+70h] [rbp-188h] BYREF
  unsigned int v46; // [rsp+74h] [rbp-184h] BYREF
  unsigned int v47; // [rsp+78h] [rbp-180h] BYREF
  unsigned int v48; // [rsp+7Ch] [rbp-17Ch] BYREF
  unsigned int v49; // [rsp+80h] [rbp-178h] BYREF
  int v50; // [rsp+84h] [rbp-174h] BYREF
  int v51; // [rsp+88h] [rbp-170h] BYREF
  int v52; // [rsp+8Ch] [rbp-16Ch] BYREF
  __int128 v53; // [rsp+90h] [rbp-168h] BYREF
  __int64 v54; // [rsp+A0h] [rbp-158h]
  __int64 v55; // [rsp+A8h] [rbp-150h]
  __int64 v56; // [rsp+B0h] [rbp-148h]
  __int128 v57; // [rsp+B8h] [rbp-140h]
  __int128 v58; // [rsp+C8h] [rbp-130h]
  __int64 v59; // [rsp+D8h] [rbp-120h]
  __int128 v60; // [rsp+E0h] [rbp-118h]
  __int128 v61; // [rsp+F0h] [rbp-108h] BYREF
  __int64 v62; // [rsp+100h] [rbp-F8h]
  __int64 v63; // [rsp+108h] [rbp-F0h]
  __int64 v64; // [rsp+110h] [rbp-E8h]
  char *s1[2]; // [rsp+118h] [rbp-E0h]
  __int128 v66; // [rsp+128h] [rbp-D0h]
  void *v67; // [rsp+138h] [rbp-C0h]
  __int128 v68; // [rsp+140h] [rbp-B8h]
  void *v69[2]; // [rsp+150h] [rbp-A8h] BYREF
  __int64 v70; // [rsp+160h] [rbp-98h]
  __int64 v71; // [rsp+168h] [rbp-90h]
  __int64 v72; // [rsp+170h] [rbp-88h]
  void *v73[2]; // [rsp+178h] [rbp-80h]
  __int128 v74; // [rsp+188h] [rbp-70h]
  void *v75; // [rsp+198h] [rbp-60h]
  __int128 v76; // [rsp+1A0h] [rbp-58h]
  unsigned __int64 v77; // [rsp+1B8h] [rbp-40h]

  v77 = __readfsqword(0x28u);
  v34 = -1;
  sub_49FE60((__int64)v69, a2);
  v7 = haystack;
  if ( v69[1] )
    v7 = (const char *)v69[0];
  netnode_check(&v34, v7, 0, 1);
  if ( v69[0] )
  {
    v69[1] = nullptr;
    qfree(v69[0]);
  }
  v53 = 0;
  v54 = 0;
  v55 = -1;
  v56 = 0;
  v59 = 0;
  v52 = -1;
  v57 = 0;
  v58 = 0;
  v60 = 0;
  netnode_check(&v52, a3, 0, 1);
  v33 = sub_4A2DC0((__int64)&v53, *a1, v52, a4);
  if ( v33 )
  {
    sub_4A1A40(*a1, v34, (__int64)a4, (__int64)&v53, 0);
    v27 = *a1;
    v28 = *a1;
    v38 = v52;
    sub_79C120(&v38, v28, a4, 72);
    sub_79C120(&v38, v27, a4, 80);
  }
  while ( 1 )
  {
    v8 = *a1;
    v35 = v52;
    v9 = sub_79B3A0(&v35, v8, 1, 65);
    if ( !v9 )
      break;
    v10 = 0;
    while ( 1 )
    {
      v11 = *a1;
      v61 = 0;
      v62 = 0;
      v63 = -1;
      v64 = 0;
      v67 = nullptr;
      *(_OWORD *)s1 = 0;
      v66 = 0;
      v68 = 0;
      if ( (unsigned __int8)sub_4A36C0(v11, (__int64)&v61, v52, v10, 0) )
      {
        v12 = haystack;
        if ( (_QWORD)v66 )
          v12 = s1[1];
        if ( !strcmp(v12, a4) )
          break;
      }
      if ( s1[0] )
      {
        qfree(s1[0]);
        s1[0] = nullptr;
      }
      if ( s1[1] )
      {
        *(_QWORD *)&v66 = 0;
        qfree(s1[1]);
        s1[1] = nullptr;
        *((_QWORD *)&v66 + 1) = 0;
      }
      if ( v67 )
      {
        *(_QWORD *)&v68 = 0;
        qfree(v67);
      }
      if ( s1[1] )
      {
        *(_QWORD *)&v66 = 0;
        qfree(s1[1]);
      }
      if ( s1[0] )
        qfree(s1[0]);
      if ( ++v10 == v9 )
        goto LABEL_24;
    }
    if ( a5 )
    {
      v17 = *a1;
      v36 = v34;
      v18 = sub_79B3A0(&v36, v17, 1, 65);
      v19 = *a1;
      v39 = v34;
      v40 = v18;
      sub_79B440(&v39, v19, 0, &v40, 4, 65);
      sub_4A1920(qword_2CA1698, v34, v18, (__int64)&v61, 0);
      v20 = *a1;
      v41 = v34;
      v42 = v18 + 1;
      sub_79B440(&v41, v20, 1, &v42, 4, 65);
    }
    v21 = *a1;
    v22 = v52;
    v23 = *a1;
    v30 = *a1;
    v45 = v52;
    v31 = sub_79B3A0(&v45, v23, 1, 65);
    v46 = v22;
    sub_79B4D0(&v46, v21, v10, 83);
    netnode_supdel(v22, v10, 82);
    for ( i = v10 + 1; i < v31; ++i )
    {
      v70 = 0;
      v71 = -1;
      v72 = 0;
      v75 = nullptr;
      *(_OWORD *)v69 = 0;
      *(_OWORD *)v73 = 0;
      v74 = 0;
      v76 = 0;
      if ( (unsigned __int8)sub_4A36C0(v30, (__int64)v69, v22, i, 0) )
        sub_4A1920(v30, v22, i - 1, (__int64)v69, 0);
      if ( v73[0] )
      {
        qfree(v73[0]);
        v73[0] = nullptr;
      }
      if ( v73[1] )
      {
        *(_QWORD *)&v74 = 0;
        qfree(v73[1]);
        v73[1] = nullptr;
        *((_QWORD *)&v74 + 1) = 0;
      }
      if ( v75 )
      {
        *(_QWORD *)&v76 = 0;
        qfree(v75);
      }
      if ( v73[1] )
      {
        *(_QWORD *)&v74 = 0;
        qfree(v73[1]);
      }
      if ( v73[0] )
        qfree(v73[0]);
    }
    v47 = v22;
    v48 = v31 - 1;
    sub_79B440(&v47, v30, 1, &v48, 4, 65);
    v44 = v22;
    if ( v10 < (unsigned int)sub_79B3A0(&v44, v30, 0, 65) )
    {
      v43 = v22;
      v25 = sub_79B3A0(&v43, v30, 0, 65);
      v49 = v22;
      v50 = v25 - 1;
      sub_79B440(&v49, v30, 0, &v50, 4, 65);
    }
    sub_4A11A0(&v61);
  }
LABEL_24:
  v13 = *a1;
  v37 = v34;
  if ( !(unsigned int)sub_79B3A0(&v37, v13, 1, 65) && v33 )
  {
    v26 = *a1;
    v52 = 1;
    v51 = v34;
    sub_79B440(&v51, v26, 1, &v52, 4, 65);
    sub_4A1920(qword_2CA1698, v34, 0, (__int64)&v53, 0);
  }
  v14 = *a1;
  v15 = v34;
  netnode_check(&v61, "$ curlocs", 0, 1);
  LODWORD(v69[0]) = 1;
  sub_79B440(&v61, v14, v15, v69, 4, 65);
  sub_4A11A0(&v53);
  return 1;
}

