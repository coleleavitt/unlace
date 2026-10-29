__int64 __fastcall sub_1750770(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rbp
  __int64 v13; // r15
  _BYTE *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbp
  unsigned __int64 i; // rsi
  unsigned int v20; // ebx
  const void *v21; // r8
  signed __int64 v22; // rax
  unsigned __int64 v23; // rbx
  unsigned int v24; // ebx
  __int64 v25; // r8
  __int64 v26; // rsi
  __int64 v27; // r15
  unsigned int v28; // r12d
  _QWORD *v30; // rax
  _QWORD *v31; // r15
  size_t v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // r8
  _QWORD *v35; // rax
  _QWORD *v36; // r13
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rsi
  int v39; // r8d
  char *v40; // rdi
  char *v41; // rcx
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // r9
  char *v45; // rsi
  __int64 v46; // rdx
  char *v47; // rdi
  _QWORD *v48; // rdi
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rsi
  int v51; // r13d
  char *v52; // rcx
  __int64 v53; // rsi
  __int64 v54; // rax
  __int64 v55; // r8
  char *v56; // rsi
  __int64 v57; // rdx
  void *v58; // rdi
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // rax
  int v61; // r13d
  char *v62; // rdi
  char *v63; // rcx
  __int64 v64; // rsi
  __int64 v65; // rax
  __int64 v66; // r8
  char *v67; // rsi
  __int64 v68; // rdx
  __int64 v69; // rdi
  __int64 v70; // rsi
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rsi
  __int64 v74; // rdx
  __int64 v75; // rax
  __int64 v76; // rdi
  __int64 v77; // rsi
  __int64 v78; // rdx
  __int64 v79; // rax
  int v81; // [rsp+8h] [rbp-1A0h]
  int v82; // [rsp+8h] [rbp-1A0h]
  const void *v85; // [rsp+20h] [rbp-188h]
  __int64 *v86; // [rsp+20h] [rbp-188h]
  __int64 v87; // [rsp+28h] [rbp-180h]
  __int64 *v88; // [rsp+28h] [rbp-180h]
  __int64 v89; // [rsp+30h] [rbp-178h]
  __int64 v90; // [rsp+40h] [rbp-168h]
  int v91; // [rsp+40h] [rbp-168h]
  _QWORD *v92; // [rsp+48h] [rbp-160h]
  const void *src; // [rsp+50h] [rbp-158h]
  char v94[8]; // [rsp+68h] [rbp-140h] BYREF
  void *v95; // [rsp+70h] [rbp-138h] BYREF
  __int64 v96; // [rsp+78h] [rbp-130h]
  _BYTE v97[96]; // [rsp+80h] [rbp-128h] BYREF
  void *ptr[2]; // [rsp+E0h] [rbp-C8h] BYREF
  _BYTE v99[184]; // [rsp+F0h] [rbp-B8h] BYREF

  v9 = a9;
  if ( !a4 )
  {
    *(_BYTE *)(a9 + 128) = 1;
    return 0;
  }
  if ( !a2 )
    return (unsigned int)sub_17504B0(a1, 0, a3, a4, a5, a6, a7, a8, a9);
  if ( *(char *)(a2 + 28) < 0 )
  {
    *(_BYTE *)(a9 + 128) = 0;
    return 1;
  }
  v13 = *(_QWORD *)a6;
  v14 = v97;
  v96 = 0x400000000LL;
  v15 = *(unsigned int *)(a6 + 8);
  v95 = v97;
  v16 = 3 * v15;
  if ( v13 + 8 * v16 != v13 )
  {
    v17 = 0;
    v18 = v13 + 8 * v16;
    for ( i = 4; ; i = HIDWORD(v96) )
    {
      v21 = *(const void **)(v13 + 8);
      v22 = 24LL * *(_QWORD *)(v13 + 16);
      v23 = 0xAAAAAAAAAAAAAAABLL * (v22 >> 3);
      if ( v17 - 0x5555555555555555LL * (v22 >> 3) <= i )
      {
        if ( v22 )
          goto LABEL_7;
      }
      else
      {
        v87 = 24LL * *(_QWORD *)(v13 + 16);
        v85 = *(const void **)(v13 + 8);
        sub_2237220(&v95, v97, v17 - 0x5555555555555555LL * (v87 >> 3), 24);
        v22 = v87;
        v17 = (unsigned int)v96;
        v21 = v85;
        if ( v87 )
        {
LABEL_7:
          v13 += 24;
          memcpy((char *)v95 + 24 * v17, v21, v22);
          v20 = v96 + v23;
          v17 = v20;
          LODWORD(v96) = v20;
          if ( v18 == v13 )
            goto LABEL_12;
          continue;
        }
      }
      v24 = v17 + v23;
      v13 += 24;
      v17 = v24;
      LODWORD(v96) = v24;
      if ( v13 == v18 )
      {
LABEL_12:
        v25 = (unsigned int)v17;
        v9 = a9;
        v14 = v95;
        goto LABEL_13;
      }
    }
  }
  v25 = 0;
LABEL_13:
  v26 = *(_QWORD *)(a1 + 248);
  ptr[0] = v99;
  ptr[1] = (void *)0x2000000000LL;
  sub_A55230((__int64)ptr, v26, a2, (__int64)v14, v25);
  v89 = a1 + 15736;
  v27 = sub_2223360(a1 + 15736, ptr, v94, off_2BC6960);
  v88 = (__int64 *)(v9 + 16);
  v86 = (__int64 *)(v9 + 136);
  if ( !v27 )
  {
    v90 = (unsigned int)v96;
    src = v95;
    v30 = (_QWORD *)operator new(0xB8u);
    *v30 = 0;
    v31 = v30;
    v30 += 4;
    *(v30 - 3) = a2;
    v92 = v30;
    v31[2] = v30;
    v31[3] = 0x400000000LL;
    v33 = 24 * v90;
    v32 = 24 * v90;
    v34 = 0xAAAAAAAAAAAAAAABLL * ((24 * v90) >> 3);
    if ( (unsigned __int64)(24 * v90) > 0x60 )
    {
      sub_2237220(v31 + 2, v92, 0xAAAAAAAAAAAAAAABLL * (v33 >> 3), 24);
      v34 = 0xAAAAAAAAAAAAAAABLL * ((24 * v90) >> 3);
      v32 = 24 * v90;
      v58 = (void *)(v31[2] + 24LL * *((unsigned int *)v31 + 6));
    }
    else
    {
      if ( !v33 )
        goto LABEL_24;
      v58 = v92;
    }
    v91 = v34;
    memcpy(v58, src, v32);
    LODWORD(v33) = *((_DWORD *)v31 + 6);
    LODWORD(v34) = v91;
LABEL_24:
    *((_WORD *)v31 + 64) = 0;
    v31[17] = v31 + 19;
    *((_DWORD *)v31 + 6) = v33 + v34;
    v31[18] = 0x400000000LL;
    v28 = sub_17504B0(a1, a2, a3, a4, a5, a6, a7, a8, (__int64)v31);
    if ( !(_BYTE)v28 )
    {
      v35 = (_QWORD *)sub_2223360(v89, ptr, v94, off_2BC6960);
      v36 = v35;
      if ( !v35 )
      {
        *(_QWORD *)v9 = *v31;
        *(_QWORD *)(v9 + 8) = v31[1];
        sub_17443E0(v88, v31 + 2);
        *(_WORD *)(v9 + 128) = *((_WORD *)v31 + 64);
        if ( v86 != v31 + 17 )
        {
          v59 = *((unsigned int *)v31 + 36);
          v60 = *(unsigned int *)(v9 + 144);
          v61 = *((_DWORD *)v31 + 36);
          if ( v59 <= v60 )
          {
            if ( *((_DWORD *)v31 + 36) )
            {
              v76 = *(_QWORD *)(v9 + 136);
              v77 = v31[17];
              v78 = 8 * v59;
              v79 = 0;
              do
              {
                *(_QWORD *)(v76 + v79) = *(_QWORD *)(v77 + v79);
                v79 += 8;
              }
              while ( v78 != v79 );
            }
          }
          else
          {
            if ( v59 > *(unsigned int *)(v9 + 148) )
            {
              *(_DWORD *)(v9 + 144) = 0;
              sub_2237220(v9 + 136, v9 + 152, v59, 8);
              v63 = (char *)v31[17];
              v59 = *((unsigned int *)v31 + 36);
              v66 = 0;
              v62 = *(char **)(v9 + 136);
              v67 = v63;
            }
            else
            {
              v62 = *(char **)(v9 + 136);
              v63 = (char *)v31[17];
              if ( *(_DWORD *)(v9 + 144) )
              {
                v64 = 8 * v60;
                v65 = 0;
                v66 = v64;
                do
                {
                  *(_QWORD *)&v62[v65] = *(_QWORD *)&v63[v65];
                  v65 += 8;
                }
                while ( v64 != v65 );
                v63 = (char *)v31[17];
                v59 = *((unsigned int *)v31 + 36);
                v62 = (char *)(v64 + *(_QWORD *)(v9 + 136));
                v67 = &v63[v64];
              }
              else
              {
                v67 = (char *)v31[17];
                v66 = 0;
              }
            }
            v68 = 8 * v59;
            if ( v67 != &v63[v68] )
              memcpy(v62, v67, v68 - v66);
          }
          *(_DWORD *)(v9 + 144) = v61;
        }
        sub_2223460(v89, v31, off_2BC6960);
        goto LABEL_15;
      }
      *(_QWORD *)v9 = *v35;
      *(_QWORD *)(v9 + 8) = v35[1];
      sub_17443E0(v88, v35 + 2);
      *(_BYTE *)(v9 + 128) = *((_BYTE *)v36 + 128);
      *(_BYTE *)(v9 + 129) = *((_BYTE *)v36 + 129);
      if ( v86 != v36 + 17 )
      {
        v37 = *((unsigned int *)v36 + 36);
        v38 = *(unsigned int *)(v9 + 144);
        v39 = *((_DWORD *)v36 + 36);
        if ( v37 <= v38 )
        {
          if ( *((_DWORD *)v36 + 36) )
          {
            v69 = *(_QWORD *)(v9 + 136);
            v70 = v36[17];
            v71 = 8 * v37;
            v72 = 0;
            do
            {
              *(_QWORD *)(v69 + v72) = *(_QWORD *)(v70 + v72);
              v72 += 8;
            }
            while ( v71 != v72 );
          }
        }
        else
        {
          if ( v37 > *(unsigned int *)(v9 + 148) )
          {
            v82 = *((_DWORD *)v36 + 36);
            *(_DWORD *)(v9 + 144) = 0;
            sub_2237220(v9 + 136, v9 + 152, v37, 8);
            v41 = (char *)v36[17];
            v44 = 0;
            v39 = v82;
            v37 = *((unsigned int *)v36 + 36);
            v40 = *(char **)(v9 + 136);
            v45 = v41;
          }
          else
          {
            v40 = *(char **)(v9 + 136);
            v41 = (char *)v36[17];
            if ( *(_DWORD *)(v9 + 144) )
            {
              v42 = 8 * v38;
              v43 = 0;
              v44 = v42;
              do
              {
                *(_QWORD *)&v40[v43] = *(_QWORD *)&v41[v43];
                v43 += 8;
              }
              while ( v42 != v43 );
              v41 = (char *)v36[17];
              v37 = *((unsigned int *)v36 + 36);
              v40 = (char *)(v42 + *(_QWORD *)(v9 + 136));
              v45 = &v41[v42];
            }
            else
            {
              v45 = (char *)v36[17];
              v44 = 0;
            }
          }
          v46 = 8 * v37;
          if ( v45 != &v41[v46] )
          {
            v81 = v39;
            memcpy(v40, v45, v46 - v44);
            v39 = v81;
          }
        }
        *(_DWORD *)(v9 + 144) = v39;
        v47 = (char *)v31[17];
        goto LABEL_36;
      }
      goto LABEL_76;
    }
    *(_QWORD *)v9 = *v31;
    *(_QWORD *)(v9 + 8) = v31[1];
    sub_17443E0(v88, v31 + 2);
    *(_WORD *)(v9 + 128) = *((_WORD *)v31 + 64);
    if ( v86 == v31 + 17 )
    {
LABEL_76:
      v47 = (char *)v31[17];
      goto LABEL_36;
    }
    v49 = *((unsigned int *)v31 + 36);
    v50 = *(unsigned int *)(v9 + 144);
    v51 = *((_DWORD *)v31 + 36);
    if ( v49 <= v50 )
    {
      v47 = (char *)v31[17];
      if ( !*((_DWORD *)v31 + 36) )
        goto LABEL_52;
      v73 = *(_QWORD *)(v9 + 136);
      v74 = 8 * v49;
      v75 = 0;
      do
      {
        *(_QWORD *)(v73 + v75) = *(_QWORD *)&v47[v75];
        v75 += 8;
      }
      while ( v74 != v75 );
    }
    else
    {
      if ( v49 > *(unsigned int *)(v9 + 148) )
      {
        *(_DWORD *)(v9 + 144) = 0;
        sub_2237220(v9 + 136, v9 + 152, v49, 8);
        v47 = (char *)v31[17];
        v49 = *((unsigned int *)v31 + 36);
        v55 = 0;
        v52 = *(char **)(v9 + 136);
        v56 = v47;
      }
      else
      {
        v52 = *(char **)(v9 + 136);
        v47 = (char *)v31[17];
        if ( *(_DWORD *)(v9 + 144) )
        {
          v53 = 8 * v50;
          v54 = 0;
          v55 = v53;
          do
          {
            *(_QWORD *)&v52[v54] = *(_QWORD *)&v47[v54];
            v54 += 8;
          }
          while ( v53 != v54 );
          v47 = (char *)v31[17];
          v49 = *((unsigned int *)v31 + 36);
          v52 = (char *)(v53 + *(_QWORD *)(v9 + 136));
          v56 = &v47[v53];
        }
        else
        {
          v56 = (char *)v31[17];
          v55 = 0;
        }
      }
      v57 = 8 * v49;
      if ( v56 == &v47[v57] )
        goto LABEL_52;
      memcpy(v52, v56, v57 - v55);
    }
    v47 = (char *)v31[17];
LABEL_52:
    *(_DWORD *)(v9 + 144) = v51;
LABEL_36:
    if ( v31 + 19 != (_QWORD *)v47 )
      free(v47);
    v48 = (_QWORD *)v31[2];
    if ( v92 != v48 )
      free(v48);
    operator delete(v31, 0xB8u);
    goto LABEL_15;
  }
  v28 = 0;
  *(_QWORD *)v9 = *(_QWORD *)v27;
  *(_QWORD *)(v9 + 8) = *(_QWORD *)(v27 + 8);
  sub_17443E0((__int64 *)(v9 + 16), (__int64 *)(v27 + 16));
  *(_BYTE *)(v9 + 128) = *(_BYTE *)(v27 + 128);
  *(_BYTE *)(v9 + 129) = *(_BYTE *)(v27 + 129);
  sub_17444F0(v86, (__int64 *)(v27 + 136));
LABEL_15:
  if ( ptr[0] != v99 )
    free(ptr[0]);
  if ( v95 != v97 )
    free(v95);
  return v28;
}
