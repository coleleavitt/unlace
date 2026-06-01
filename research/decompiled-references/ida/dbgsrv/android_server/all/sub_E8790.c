/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E8790
// Address: 0x00000000000E8790

//----- (00000000000E8790) ----------------------------------------------------
char *__fastcall sub_E8790(__int64 a1, char **a2)
{
  __int64 v2; // x8
  __int64 *v3; // x22
  unsigned __int64 v6; // x10
  unsigned __int64 *v7; // x23
  char *v8; // x0
  char *v9; // x0
  size_t v10; // x1
  char *v11; // x8
  unsigned __int64 v12; // x10
  char *v13; // x0
  char *v14; // x0
  size_t v15; // x1
  char *v16; // x8
  __int64 v17; // x9
  __int64 v18; // x8
  unsigned __int64 v19; // x10
  unsigned __int64 v20; // x9
  char *v21; // x0
  char *v22; // x0
  size_t v23; // x1
  unsigned __int64 v24; // x10
  unsigned __int64 v25; // x9
  char *v26; // x0
  char *v27; // x0
  size_t v28; // x1
  __int64 v29; // x8
  unsigned __int64 v30; // x10
  unsigned __int64 v31; // x9
  char *v32; // x0
  char *v33; // x0
  size_t v34; // x1
  __int64 v35; // x24
  __int64 v36; // x25
  char v37; // w26
  __int64 v38; // x28
  char *v39; // x0
  __int64 v40; // x8
  char *v41; // x0
  size_t v42; // x1
  _BYTE *v43; // x21
  char *v44; // x0
  char *v45; // x0
  size_t v46; // x1
  _BYTE *v47; // x21
  char *result; // x0
  __int64 v49; // x8
  unsigned __int64 v50; // x10
  unsigned __int64 v51; // x9
  char *v52; // x0
  char *v53; // x0
  size_t v54; // x1
  __int64 v55; // x24
  __int64 v56; // x25
  char v57; // w26
  __int64 v58; // x28
  char *v59; // x0
  __int64 v60; // x8
  char *v61; // x0
  size_t v62; // x1
  _BYTE *v63; // x21
  char *v64; // x0
  size_t v65; // x1

  v3 = (__int64 *)(a2 + 1);
  v2 = (__int64)a2[1];
  if ( *(_BYTE *)(a1 + 56) )
  {
    v7 = (unsigned __int64 *)(a2 + 2);
    v6 = (unsigned __int64)a2[2];
    if ( v2 + 11 >= v6 )
    {
      v9 = *a2;
      if ( 2 * v6 >= v2 + 11 )
        v10 = 2 * v6;
      else
        v10 = v2 + 11;
      a2[2] = (char *)v10;
      v8 = (char *)realloc(v9, v10);
      v2 = (__int64)a2[1];
      *a2 = v8;
    }
    else
    {
      v8 = *a2;
    }
    v11 = &v8[v2];
    v11[10] = 32;
    *(_QWORD *)v11 = *(_QWORD *)"::operator ";
    *((_WORD *)v11 + 4) = 29295;
    v2 = *v3 + 11;
    *v3 = v2;
  }
  else
  {
    v7 = (unsigned __int64 *)(a2 + 2);
  }
  v12 = *v7;
  if ( v2 + 3 >= *v7 )
  {
    v14 = *a2;
    if ( 2 * v12 >= v2 + 3 )
      v15 = 2 * v12;
    else
      v15 = v2 + 3;
    a2[2] = (char *)v15;
    v13 = (char *)realloc(v14, v15);
    v2 = (__int64)a2[1];
    *a2 = v13;
  }
  else
  {
    v13 = *a2;
  }
  v16 = &v13[v2];
  v16[2] = 119;
  *(_WORD *)v16 = 25966;
  v17 = *v3;
  v18 = *v3 + 3;
  *v3 = v18;
  if ( *(_BYTE *)(a1 + 57) )
  {
    v19 = *v7;
    v20 = v17 + 5;
    if ( v20 >= *v7 )
    {
      v22 = *a2;
      if ( 2 * v19 >= v20 )
        v23 = 2 * v19;
      else
        v23 = v20;
      a2[2] = (char *)v23;
      v21 = (char *)realloc(v22, v23);
      v18 = (__int64)a2[1];
      *a2 = v21;
    }
    else
    {
      v21 = *a2;
    }
    *(_WORD *)&v21[v18] = 23899;
    v18 = *v3 + 2;
    *v3 = v18;
  }
  v24 = *v7;
  v25 = v18 + 1;
  if ( v18 + 1 >= *v7 )
  {
    v27 = *a2;
    if ( 2 * v24 >= v25 )
      v28 = 2 * v24;
    else
      v28 = v18 + 1;
    a2[2] = (char *)v28;
    v26 = (char *)realloc(v27, v28);
    v18 = (__int64)a2[1];
    *a2 = v26;
    v25 = v18 + 1;
  }
  else
  {
    v26 = *a2;
  }
  *v3 = v25;
  v26[v18] = 32;
  if ( *(_QWORD *)(a1 + 24) )
  {
    v29 = *v3;
    v30 = *v7;
    v31 = *v3 + 1;
    if ( v31 >= *v7 )
    {
      v33 = *a2;
      if ( 2 * v30 >= v31 )
        v34 = 2 * v30;
      else
        v34 = *v3 + 1;
      a2[2] = (char *)v34;
      v32 = (char *)realloc(v33, v34);
      v29 = (__int64)a2[1];
      *a2 = v32;
    }
    else
    {
      v32 = *a2;
    }
    v32[v29] = 40;
    v35 = *v3 + 1;
    *v3 = v35;
    if ( *(_QWORD *)(a1 + 24) )
    {
      v36 = 0;
      v37 = 1;
      do
      {
        v38 = v35;
        if ( (v37 & 1) == 0 )
        {
          if ( v35 + 2 >= *v7 )
          {
            v41 = *a2;
            if ( 2 * *v7 >= v35 + 2 )
              v42 = 2 * *v7;
            else
              v42 = v35 + 2;
            a2[2] = (char *)v42;
            v39 = (char *)realloc(v41, v42);
            v40 = (__int64)a2[1];
            *a2 = v39;
          }
          else
          {
            v39 = *a2;
            v40 = v35;
          }
          *(_WORD *)&v39[v40] = 8236;
          v38 = *v3 + 2;
          *v3 = v38;
        }
        v43 = *(_BYTE **)(*(_QWORD *)(a1 + 16) + 8 * v36);
        (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v43 + 24LL))(v43, a2);
        if ( v43[9] != 1 )
          (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v43 + 32LL))(v43, a2);
        if ( v38 == *v3 )
        {
          *v3 = v35;
        }
        else
        {
          v37 = 0;
          v35 = *v3;
        }
        ++v36;
      }
      while ( v36 != *(_QWORD *)(a1 + 24) );
    }
    if ( v35 + 1 >= *v7 )
    {
      v45 = *a2;
      if ( 2 * *v7 >= v35 + 1 )
        v46 = 2 * *v7;
      else
        v46 = v35 + 1;
      a2[2] = (char *)v46;
      v44 = (char *)realloc(v45, v46);
      v35 = (__int64)a2[1];
      *a2 = v44;
    }
    else
    {
      v44 = *a2;
    }
    v44[v35] = 41;
    ++*v3;
  }
  v47 = *(_BYTE **)(a1 + 32);
  result = (char *)(*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v47 + 24LL))(v47, a2);
  if ( v47[9] != 1 )
    result = (char *)(*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v47 + 32LL))(v47, a2);
  if ( *(_QWORD *)(a1 + 48) )
  {
    v49 = *v3;
    v50 = *v7;
    v51 = *v3 + 1;
    if ( v51 >= *v7 )
    {
      v53 = *a2;
      if ( 2 * v50 >= v51 )
        v54 = 2 * v50;
      else
        v54 = *v3 + 1;
      a2[2] = (char *)v54;
      v52 = (char *)realloc(v53, v54);
      v49 = (__int64)a2[1];
      *a2 = v52;
    }
    else
    {
      v52 = *a2;
    }
    v52[v49] = 40;
    v55 = *v3 + 1;
    *v3 = v55;
    if ( *(_QWORD *)(a1 + 48) )
    {
      v56 = 0;
      v57 = 1;
      do
      {
        v58 = v55;
        if ( (v57 & 1) == 0 )
        {
          if ( v55 + 2 >= *v7 )
          {
            v61 = *a2;
            if ( 2 * *v7 >= v55 + 2 )
              v62 = 2 * *v7;
            else
              v62 = v55 + 2;
            a2[2] = (char *)v62;
            v59 = (char *)realloc(v61, v62);
            v60 = (__int64)a2[1];
            *a2 = v59;
          }
          else
          {
            v59 = *a2;
            v60 = v55;
          }
          *(_WORD *)&v59[v60] = 8236;
          v58 = *v3 + 2;
          *v3 = v58;
        }
        v63 = *(_BYTE **)(*(_QWORD *)(a1 + 40) + 8 * v56);
        (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v63 + 24LL))(v63, a2);
        if ( v63[9] != 1 )
          (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v63 + 32LL))(v63, a2);
        if ( v58 == *v3 )
        {
          *v3 = v55;
        }
        else
        {
          v57 = 0;
          v55 = *v3;
        }
        ++v56;
      }
      while ( v56 != *(_QWORD *)(a1 + 48) );
    }
    if ( v55 + 1 >= *v7 )
    {
      v64 = *a2;
      if ( 2 * *v7 >= v55 + 1 )
        v65 = 2 * *v7;
      else
        v65 = v55 + 1;
      a2[2] = (char *)v65;
      result = (char *)realloc(v64, v65);
      v55 = (__int64)a2[1];
      *a2 = result;
    }
    else
    {
      result = *a2;
    }
    result[v55] = 41;
    ++*v3;
  }
  return result;
}
