void __fastcall sub_22471D0(char **a1, __int64 a2, _WORD *a3, size_t a4, int a5, char a6)
{
  __int64 v6; // r13
  char *v7; // r14
  size_t v8; // r15
  size_t v9; // r12
  char *v10; // r13
  __int64 v11; // rdx
  unsigned int v12; // eax
  unsigned __int8 *v13; // rbx
  unsigned __int64 v14; // r12
  char v15; // r13
  __int64 v16; // rbp
  char *v17; // rbx
  size_t v18; // rbx
  size_t v19; // rbp
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  _BYTE *v24; // rax
  unsigned __int64 v25; // rbp
  _WORD *v26; // rbx
  int v27; // [rsp+Ch] [rbp-17Ch]
  unsigned __int8 *v29; // [rsp+18h] [rbp-170h]
  char *v30; // [rsp+18h] [rbp-170h]
  size_t n; // [rsp+20h] [rbp-168h]
  unsigned __int64 v32; // [rsp+28h] [rbp-160h]
  __int64 v33; // [rsp+30h] [rbp-158h]
  char v36; // [rsp+3Fh] [rbp-149h]
  size_t v37; // [rsp+48h] [rbp-140h]
  __int64 v38; // [rsp+50h] [rbp-138h]
  __int64 v39; // [rsp+58h] [rbp-130h]
  __int64 v40; // [rsp+60h] [rbp-128h]
  __int64 v41; // [rsp+68h] [rbp-120h]
  __int64 v42; // [rsp+70h] [rbp-118h]
  __int64 v43; // [rsp+78h] [rbp-110h]
  __int64 v44; // [rsp+80h] [rbp-108h]
  __int64 v45; // [rsp+88h] [rbp-100h]
  __int64 v46; // [rsp+90h] [rbp-F8h]
  __int64 v47; // [rsp+98h] [rbp-F0h]
  __int64 v48; // [rsp+A0h] [rbp-E8h]
  __int64 v49; // [rsp+A8h] [rbp-E0h]
  __int64 v50; // [rsp+B0h] [rbp-D8h]
  __int64 v51; // [rsp+B8h] [rbp-D0h]
  __int64 v52; // [rsp+C0h] [rbp-C8h]
  __int64 v53; // [rsp+C8h] [rbp-C0h]
  __int64 v54; // [rsp+D0h] [rbp-B8h]
  __int64 v55; // [rsp+D8h] [rbp-B0h]
  __int64 v56; // [rsp+E0h] [rbp-A8h]
  __int64 v57; // [rsp+E8h] [rbp-A0h]
  __int64 v58; // [rsp+F0h] [rbp-98h]
  __int64 v59; // [rsp+F8h] [rbp-90h]
  __int64 v60; // [rsp+100h] [rbp-88h]
  __int64 v61; // [rsp+108h] [rbp-80h]
  __int64 v62; // [rsp+110h] [rbp-78h]
  __int64 v63; // [rsp+118h] [rbp-70h]
  __int64 v64; // [rsp+120h] [rbp-68h]
  __int64 v65; // [rsp+128h] [rbp-60h]
  __int64 v66; // [rsp+130h] [rbp-58h]
  __int64 v67; // [rsp+138h] [rbp-50h]
  __int64 v68; // [rsp+140h] [rbp-48h]
  __int64 v69; // [rsp+148h] [rbp-40h]

  v6 = a2;
  v7 = *a1;
  v8 = (size_t)a1[1];
  if ( !a5 )
    goto LABEL_24;
  v9 = a4;
  v27 = a5;
  v10 = *a1;
  n = a4 - 1;
  v32 = (unsigned __int8)a4;
  v36 = a4 - 1;
  v33 = 0x101010101010101LL * (unsigned __int8)a4;
  while ( 1 )
  {
    if ( !v9 )
    {
      if ( !a6 )
        goto LABEL_35;
      v18 = 0;
      v19 = 0;
      goto LABEL_18;
    }
    if ( v9 > v8 )
      goto LABEL_23;
    if ( v9 != 1 )
      break;
    v24 = memchr(v10, *(char *)a3, v8);
    if ( !v24 )
      goto LABEL_23;
    v17 = (char *)(v24 - v10);
LABEL_32:
    if ( v17 == (char *)-1LL )
    {
LABEL_23:
      v7 = v10;
      v6 = a2;
      goto LABEL_24;
    }
    if ( !v17 && !a6 )
    {
LABEL_35:
      v18 = v9;
LABEL_36:
      v8 -= v18;
      goto LABEL_22;
    }
    v19 = v8;
    if ( (unsigned __int64)v17 <= v8 )
      v19 = (size_t)v17;
    v18 = (size_t)&v17[v9];
LABEL_18:
    v20 = *(unsigned int *)(a2 + 8);
    if ( v20 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
    {
      sub_2237220(a2, (const void *)(a2 + 16), v20 + 1, 16);
      v20 = *(unsigned int *)(a2 + 8);
    }
    v21 = (_QWORD *)(*(_QWORD *)a2 + 16 * v20);
    *v21 = v10;
    v21[1] = v19;
    ++*(_DWORD *)(a2 + 8);
    if ( v18 <= v8 )
      goto LABEL_36;
    v18 = v8;
    v8 = 0;
LABEL_22:
    v10 += v18;
    if ( !--v27 )
      goto LABEL_23;
  }
  if ( v9 == 2 )
  {
    v26 = v10;
    while ( *a3 != *v26 )
    {
      v26 = (_WORD *)((char *)v26 + 1);
      if ( &v10[v8 - v9 + 1] <= (char *)v26 )
        goto LABEL_23;
    }
LABEL_44:
    v17 = (char *)((char *)v26 - v10);
    goto LABEL_32;
  }
  if ( v8 <= 0xF || v9 > 0xFF )
  {
    v30 = v10;
    v25 = (unsigned __int64)&v10[v8 - v9 + 1];
    do
    {
      if ( !memcmp(v10, a3, v9) )
      {
        v26 = v10;
        v10 = v30;
        goto LABEL_44;
      }
      ++v10;
    }
    while ( v25 > (unsigned __int64)v10 );
    v6 = a2;
    v7 = v30;
  }
  else
  {
    v38 = 0x101010101010101LL * v32;
    v39 = ((v32 * (unsigned __int128)0x101010101010101uLL) >> 64) + v33;
    v41 = v39;
    v43 = v39;
    v40 = 0x101010101010101LL * v32;
    v45 = v39;
    v47 = v39;
    v49 = v39;
    v42 = 0x101010101010101LL * v32;
    v51 = v39;
    v53 = v39;
    v55 = v39;
    v44 = 0x101010101010101LL * v32;
    v57 = v39;
    v59 = v39;
    v61 = v39;
    v46 = 0x101010101010101LL * v32;
    v63 = v39;
    v65 = v39;
    v67 = v39;
    v48 = 0x101010101010101LL * v32;
    v50 = 0x101010101010101LL * v32;
    v52 = 0x101010101010101LL * v32;
    v54 = 0x101010101010101LL * v32;
    v56 = 0x101010101010101LL * v32;
    v58 = 0x101010101010101LL * v32;
    v60 = 0x101010101010101LL * v32;
    v62 = 0x101010101010101LL * v32;
    v64 = 0x101010101010101LL * v32;
    v66 = 0x101010101010101LL * v32;
    v11 = 0;
    v68 = 0x101010101010101LL * v32;
    v12 = 0;
    v69 = v39;
    do
    {
      *((_BYTE *)&v38 + *((unsigned __int8 *)a3 + v11)) = v36 - v12++;
      v11 = v12;
    }
    while ( v12 != n );
    v13 = (unsigned __int8 *)v10;
    v29 = (unsigned __int8 *)v10;
    v37 = v9;
    v14 = (unsigned __int64)&v10[v8 - v9 + 1];
    v15 = *((_BYTE *)a3 + n);
    do
    {
      v16 = v13[n];
      if ( (_BYTE)v16 == v15 && !memcmp(v13, a3, n) )
      {
        v10 = (char *)v29;
        v9 = v37;
        v17 = (char *)(v13 - v29);
        goto LABEL_32;
      }
      v13 += *((unsigned __int8 *)&v38 + v16);
    }
    while ( v14 > (unsigned __int64)v13 );
    v7 = (char *)v29;
    v6 = a2;
  }
LABEL_24:
  if ( a6 || v8 )
  {
    v22 = *(unsigned int *)(v6 + 8);
    if ( v22 + 1 > (unsigned __int64)*(unsigned int *)(v6 + 12) )
    {
      sub_2237220(v6, (const void *)(v6 + 16), v22 + 1, 16);
      v22 = *(unsigned int *)(v6 + 8);
    }
    v23 = (_QWORD *)(*(_QWORD *)v6 + 16 * v22);
    *v23 = v7;
    v23[1] = v8;
    ++*(_DWORD *)(v6 + 8);
  }
}
