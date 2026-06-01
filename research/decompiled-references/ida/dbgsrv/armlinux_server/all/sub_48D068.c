/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48D068
// Address: 0x000000000048D068

//----- (000000000048D068) ----------------------------------------------------
__int64 __fastcall sub_48D068(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  unsigned __int64 v5; // x22
  unsigned __int8 *v6; // x28
  int v7; // w0
  unsigned __int8 *v8; // x4
  __int64 v9; // x24
  char *v11; // x0
  unsigned __int64 v12; // x28
  unsigned __int64 v13; // x4
  __int64 v14; // x1
  size_t v15; // x2
  unsigned __int64 v16; // x2
  _BYTE *v17; // x0
  __int64 v18; // x1
  unsigned __int64 v19; // x28
  unsigned __int64 v20; // x4
  unsigned __int64 v21; // x3
  unsigned __int64 v22; // x2
  char v23; // w2
  char *v24; // x0
  __int64 v25; // x2
  unsigned __int64 v26; // x3
  __int64 v27; // x1
  char v28; // w5
  unsigned __int64 v29; // x2
  char *v30; // x0
  __int64 v31; // x2
  char v32; // w4
  __int64 v33; // x1
  unsigned __int64 v34; // x3
  unsigned __int64 v35; // x2
  char *v36; // x0
  __int64 v37; // x2
  unsigned __int64 v38; // x3
  __int64 v39; // x1
  unsigned __int64 v40; // x2
  char v41; // w2
  char *v42; // x0
  __int64 v43; // x2
  unsigned __int64 v44; // x3
  __int64 v45; // x1
  char v46; // w4
  unsigned __int64 v47; // x2
  char *v48; // x0
  __int64 v49; // x2
  char v50; // w28
  __int64 v51; // x1
  unsigned __int64 v52; // x3
  unsigned __int64 v53; // x2
  unsigned __int64 v54; // x5
  unsigned __int64 v55; // x6
  __int64 v56; // x3
  char *v57; // x0
  _BYTE *v58; // x0
  unsigned __int64 v59; // [xsp+68h] [xbp-38h]
  char v60; // [xsp+68h] [xbp-38h]
  char v61; // [xsp+68h] [xbp-38h]
  char v62; // [xsp+68h] [xbp-38h]
  unsigned int v63; // [xsp+68h] [xbp-38h]
  unsigned __int64 v64; // [xsp+68h] [xbp-38h]
  unsigned int v65; // [xsp+68h] [xbp-38h]
  unsigned __int64 v66; // [xsp+68h] [xbp-38h]
  char v67; // [xsp+70h] [xbp-30h]
  unsigned __int8 *v68; // [xsp+70h] [xbp-30h]
  unsigned __int8 *v69; // [xsp+70h] [xbp-30h]
  unsigned __int64 v70; // [xsp+78h] [xbp-28h]
  unsigned __int64 v71; // [xsp+78h] [xbp-28h]
  char v72; // [xsp+8Fh] [xbp-11h] BYREF
  unsigned __int8 *v73; // [xsp+90h] [xbp-10h] BYREF

  v5 = (unsigned __int64)&a2[a3];
  v6 = a2;
  v73 = a2;
LABEL_2:
  while ( v5 > (unsigned __int64)v6 )
  {
    while ( 1 )
    {
      v7 = sub_485C28(&v73);
      if ( v7 == -1 )
      {
        v9 = -1;
        *__errno_location() = 84;
        return v9;
      }
      if ( !v7 )
        break;
      v8 = (unsigned __int8 *)(v73 - v6);
      if ( (unsigned __int64)(v73 - v6) > 3 )
      {
        v16 = (unsigned int)(v7 - 0x10000);
        v72 = -19;
        v17 = *(_BYTE **)a1;
        v18 = *(_QWORD *)(a1 + 8);
        v19 = (unsigned __int16)((v16 & 0x3FF) - 9216);
        v20 = (unsigned __int16)(((v16 >> 10) & 0x3FF) - 10240);
        v21 = *(_QWORD *)(a1 + 16);
        v22 = v18 + 1;
        if ( *(_QWORD *)a1 <= (unsigned __int64)&v72 && &v72 < &v17[v21] )
        {
          if ( v21 < v22 )
          {
            v65 = v20;
            v58 = sub_491288(a1, *(void **)a1, v22, 1u);
            *(_QWORD *)a1 = v58;
            v20 = v65;
            v58[*(_QWORD *)(a1 + 8)] = -19;
          }
          else
          {
            v17[v18] = -19;
          }
        }
        else
        {
          if ( v21 < v22 )
          {
            v63 = v20;
            v17 = sub_491288(a1, *(void **)a1, v22, 1u);
            *(_QWORD *)a1 = v17;
            v23 = v72;
            v20 = v63;
            v18 = *(_QWORD *)(a1 + 8);
          }
          else
          {
            v23 = -19;
          }
          v17[v18] = v23;
        }
        v24 = *(char **)a1;
        v25 = *(_QWORD *)(a1 + 8);
        v26 = *(_QWORD *)(a1 + 16);
        v27 = v25 + 1;
        v28 = ((v20 >> 6) & 0x3F) + 0x80;
        *(_QWORD *)(a1 + 8) = v25 + 1;
        v29 = v25 + 2;
        v72 = v28;
        if ( v24 <= &v72 && &v72 < &v24[v26] )
        {
          if ( v26 < v29 )
          {
            v61 = v20;
            v67 = ((v20 >> 6) & 0x3F) + 0x80;
            v24 = (char *)sub_491288(a1, v24, v29, 1u);
            LOBYTE(v20) = v61;
            v28 = v67;
            v27 = *(_QWORD *)(a1 + 8);
            *(_QWORD *)a1 = v24;
          }
        }
        else if ( v26 < v29 )
        {
          v62 = v20;
          v24 = (char *)sub_491288(a1, v24, v29, 1u);
          *(_QWORD *)a1 = v24;
          v28 = v72;
          LOBYTE(v20) = v62;
          v27 = *(_QWORD *)(a1 + 8);
        }
        v24[v27] = v28;
        v30 = *(char **)a1;
        v31 = *(_QWORD *)(a1 + 8);
        v32 = (v20 & 0x3F) + 0x80;
        v72 = v32;
        v33 = v31 + 1;
        *(_QWORD *)(a1 + 8) = v31 + 1;
        v34 = *(_QWORD *)(a1 + 16);
        v35 = v31 + 2;
        if ( v30 <= &v72 && &v72 < &v30[v34] )
        {
          if ( v34 < v35 )
          {
            v60 = v32;
            v30 = (char *)sub_491288(a1, v30, v35, 1u);
            *(_QWORD *)a1 = v30;
            v32 = v60;
            v33 = *(_QWORD *)(a1 + 8);
          }
        }
        else if ( v34 < v35 )
        {
          v30 = (char *)sub_491288(a1, v30, v35, 1u);
          v32 = v72;
          v33 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)a1 = v30;
        }
        v30[v33] = v32;
        v72 = -19;
        v36 = *(char **)a1;
        v37 = *(_QWORD *)(a1 + 8);
        v38 = *(_QWORD *)(a1 + 16);
        v39 = v37 + 1;
        *(_QWORD *)(a1 + 8) = v37 + 1;
        v40 = v37 + 2;
        if ( v36 <= &v72 && &v72 < &v36[v38] )
        {
          if ( v38 < v40 )
          {
            v36 = (char *)sub_491288(a1, v36, v40, 1u);
            v39 = *(_QWORD *)(a1 + 8);
            *(_QWORD *)a1 = v36;
          }
          v36[v39] = -19;
        }
        else
        {
          if ( v38 < v40 )
          {
            v36 = (char *)sub_491288(a1, v36, v40, 1u);
            v41 = v72;
            v39 = *(_QWORD *)(a1 + 8);
            *(_QWORD *)a1 = v36;
          }
          else
          {
            v41 = -19;
          }
          v36[v39] = v41;
        }
        v42 = *(char **)a1;
        v43 = *(_QWORD *)(a1 + 8);
        v44 = *(_QWORD *)(a1 + 16);
        v45 = v43 + 1;
        v46 = ((v19 >> 6) & 0x3F) + 0x80;
        *(_QWORD *)(a1 + 8) = v43 + 1;
        v47 = v43 + 2;
        v72 = v46;
        if ( v42 <= &v72 && &v72 < &v42[v44] )
        {
          if ( v44 < v47 )
          {
            v42 = (char *)sub_491288(a1, v42, v47, 1u);
            *(_QWORD *)a1 = v42;
            v46 = ((v19 >> 6) & 0x3F) + 0x80;
            v45 = *(_QWORD *)(a1 + 8);
          }
        }
        else if ( v44 < v47 )
        {
          v42 = (char *)sub_491288(a1, v42, v47, 1u);
          v46 = v72;
          v45 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)a1 = v42;
        }
        v42[v45] = v46;
        v48 = *(char **)a1;
        v49 = *(_QWORD *)(a1 + 8);
        v50 = (v19 & 0x3F) + 0x80;
        v72 = v50;
        v51 = v49 + 1;
        *(_QWORD *)(a1 + 8) = v49 + 1;
        v52 = *(_QWORD *)(a1 + 16);
        v53 = v49 + 2;
        if ( v48 <= &v72 && &v72 < &v48[v52] )
        {
          if ( v52 < v53 )
          {
            v48 = (char *)sub_491288(a1, v48, v53, 1u);
            v51 = *(_QWORD *)(a1 + 8);
            *(_QWORD *)a1 = v48;
          }
        }
        else if ( v52 < v53 )
        {
          v48 = (char *)sub_491288(a1, v48, v53, 1u);
          v51 = *(_QWORD *)(a1 + 8);
          v50 = v72;
          *(_QWORD *)a1 = v48;
        }
        v48[v51] = v50;
        v6 = v73;
        ++*(_QWORD *)(a1 + 8);
        goto LABEL_2;
      }
      if ( v8 )
      {
        v54 = *(_QWORD *)(a1 + 8);
        v55 = (unsigned __int64)&v8[v54];
        if ( v54 <= (unsigned __int64)&v8[v54] )
        {
          if ( v54 >= (unsigned __int64)&v8[v54] )
          {
LABEL_48:
            memcpy((void *)(*(_QWORD *)a1 + v54), v6, (size_t)v8);
            v6 = v73;
            goto LABEL_2;
          }
        }
        else
        {
          if ( v54 > 0x7FFFFFFFFFFFFFFELL )
          {
            if ( (v54 & 0x8000000000000000LL) != 0 )
              *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
            goto LABEL_48;
          }
          v55 = 0x7FFFFFFFFFFFFFFFLL;
        }
        v56 = *(_QWORD *)(a1 + 8);
        v57 = *(char **)a1;
        if ( v55 > *(_QWORD *)(a1 + 16) )
        {
          v66 = v55;
          v69 = (unsigned __int8 *)(v73 - v6);
          v71 = *(_QWORD *)(a1 + 8);
          v57 = (char *)sub_491288(a1, *(void **)a1, v55, 1u);
          *(_QWORD *)a1 = v57;
          v56 = *(_QWORD *)(a1 + 8);
          v55 = v66;
          v8 = v69;
          v54 = v71;
        }
        v64 = v55;
        v68 = v8;
        v70 = v54;
        memset(&v57[v56], 0, v55 - v56);
        v8 = v68;
        *(_QWORD *)(a1 + 8) = v64;
        v54 = v70;
        goto LABEL_48;
      }
      v6 = v73;
      if ( v5 <= (unsigned __int64)v73 )
        return v6 - a2;
    }
    v11 = *(char **)a1;
    v12 = *(_QWORD *)(a1 + 8);
    v13 = v12 + 2;
    if ( v12 >= v12 + 2 )
    {
      *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
    }
    else
    {
      v14 = *(_QWORD *)(a1 + 8);
      v15 = 2;
      if ( v13 > *(_QWORD *)(a1 + 16) )
      {
        v11 = (char *)sub_491288(a1, *(void **)a1, v12 + 2, 1u);
        v14 = *(_QWORD *)(a1 + 8);
        v13 = v12 + 2;
        *(_QWORD *)a1 = v11;
        v15 = v12 + 2 - v14;
      }
      v59 = v13;
      memset(&v11[v14], 0, v15);
      v11 = *(char **)a1;
      *(_QWORD *)(a1 + 8) = v59;
    }
    *(_WORD *)&v11[v12] = -32576;
    v6 = v73;
  }
  return v6 - a2;
}
