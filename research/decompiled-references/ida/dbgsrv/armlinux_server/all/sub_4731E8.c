/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4731E8
// Address: 0x00000000004731E8

//----- (00000000004731E8) ----------------------------------------------------
__int64 __fastcall sub_4731E8(__int64 a1, int *a2, int a3, __int64 a4)
{
  __int64 v7; // x23
  unsigned __int64 i; // x19
  _BYTE *v9; // x0
  size_t v10; // x5
  int v11; // w0
  _BYTE *v12; // x0
  size_t v13; // x5
  size_t v14; // x4
  unsigned __int64 v16; // x4
  unsigned __int64 v17; // x6
  _BYTE *v18; // x0
  size_t v19; // x5
  unsigned __int64 v20; // x4
  unsigned __int64 v21; // x6
  __int64 v22; // x3
  char *v23; // x0
  unsigned __int64 v24; // x5
  const void *v25; // x7
  unsigned __int64 v26; // x6
  unsigned __int64 v27; // x4
  unsigned __int64 v28; // x6
  __int64 v29; // x3
  char *v30; // x0
  __int64 v31; // x3
  char *v32; // x0
  __int64 v33; // x3
  char *v34; // x0
  unsigned __int64 v35; // [xsp+60h] [xbp-40h]
  unsigned __int64 v36; // [xsp+60h] [xbp-40h]
  unsigned __int64 v37; // [xsp+60h] [xbp-40h]
  unsigned __int64 v38; // [xsp+60h] [xbp-40h]
  unsigned __int64 v39; // [xsp+60h] [xbp-40h]
  unsigned __int64 v40; // [xsp+60h] [xbp-40h]
  unsigned __int64 v41; // [xsp+60h] [xbp-40h]
  unsigned __int64 v42; // [xsp+60h] [xbp-40h]
  size_t v43; // [xsp+68h] [xbp-38h]
  size_t v44; // [xsp+68h] [xbp-38h]
  size_t v45; // [xsp+68h] [xbp-38h]
  size_t v46; // [xsp+68h] [xbp-38h]
  const void *v47; // [xsp+68h] [xbp-38h]
  const void *v48; // [xsp+68h] [xbp-38h]
  size_t v49; // [xsp+68h] [xbp-38h]
  size_t v50; // [xsp+68h] [xbp-38h]
  unsigned __int64 v51; // [xsp+70h] [xbp-30h]
  unsigned __int64 v52; // [xsp+70h] [xbp-30h]
  unsigned __int64 v53; // [xsp+70h] [xbp-30h]
  unsigned __int64 v54; // [xsp+70h] [xbp-30h]
  size_t v55; // [xsp+70h] [xbp-30h]
  size_t v56; // [xsp+70h] [xbp-30h]
  unsigned __int64 v57; // [xsp+70h] [xbp-30h]
  unsigned __int64 v58; // [xsp+70h] [xbp-30h]
  unsigned __int64 v59; // [xsp+78h] [xbp-28h]
  unsigned __int64 v60; // [xsp+78h] [xbp-28h]
  _BYTE v61[5]; // [xsp+88h] [xbp-18h] BYREF
  _BYTE v62[5]; // [xsp+8Dh] [xbp-13h] BYREF
  _BYTE v63[14]; // [xsp+92h] [xbp-Eh] BYREF

  if ( a3 > 0 )
  {
    v7 = (unsigned int)(a3 - 1) + 1LL;
    for ( i = 0; v7 != i; ++i )
    {
      if ( a4 && (((int)*(unsigned __int8 *)(a4 + (i >> 3)) >> (i & 7)) & 1) == 0 )
        goto LABEL_10;
      v9 = sub_48E2D8(v61, (unsigned __int64)v62, *a2 + 3);
      v10 = v9 - v61;
      if ( v9 == v61 )
      {
        v11 = *a2;
        if ( *a2 != -2 )
          goto LABEL_7;
        goto LABEL_18;
      }
      v16 = *(_QWORD *)(a1 + 8);
      v17 = v10 + v16;
      if ( v16 <= v10 + v16 )
      {
        if ( v16 >= v10 + v16 )
          goto LABEL_16;
      }
      else
      {
        if ( v16 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (v16 & 0x8000000000000000LL) != 0 )
            *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
LABEL_16:
          memcpy((void *)(*(_QWORD *)a1 + v16), v61, v9 - v61);
          goto LABEL_17;
        }
        v17 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v22 = *(_QWORD *)(a1 + 8);
      v23 = *(char **)a1;
      if ( *(_QWORD *)(a1 + 16) < v17 )
      {
        v35 = v17;
        v43 = v10;
        v51 = *(_QWORD *)(a1 + 8);
        v23 = (char *)sub_491288(a1, *(void **)a1, v17, 1u);
        *(_QWORD *)a1 = v23;
        v22 = *(_QWORD *)(a1 + 8);
        v17 = v35;
        v10 = v43;
        v16 = v51;
      }
      v36 = v17;
      v44 = v10;
      v52 = v16;
      memset(&v23[v22], 0, v17 - v22);
      *(_QWORD *)(a1 + 8) = v36;
      memcpy((void *)(*(_QWORD *)a1 + v52), v61, v44);
LABEL_17:
      v11 = *a2;
      if ( *a2 != -2 )
      {
LABEL_7:
        if ( v11 == -3 )
          goto LABEL_10;
        v12 = sub_48E2D8(v61, (unsigned __int64)v62, a2[4]);
        v13 = v12 - v61;
        if ( v12 == v61 )
          goto LABEL_9;
        v27 = *(_QWORD *)(a1 + 8);
        v28 = v13 + v27;
        if ( v27 <= v13 + v27 )
        {
          if ( v27 >= v13 + v27 )
            goto LABEL_36;
        }
        else
        {
          if ( v27 > 0x7FFFFFFFFFFFFFFELL )
          {
            if ( (v27 & 0x8000000000000000LL) != 0 )
              *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
LABEL_36:
            memcpy((void *)(*(_QWORD *)a1 + v27), v61, v12 - v61);
LABEL_9:
            v14 = *((_QWORD *)a2 + 2);
            if ( v14 )
            {
              v24 = *(_QWORD *)(a1 + 8);
              v25 = *((const void **)a2 + 1);
              v26 = v14 + v24;
              if ( v24 <= v14 + v24 )
              {
                if ( v24 < v14 + v24 )
                  goto LABEL_42;
              }
              else
              {
                if ( v24 <= 0x7FFFFFFFFFFFFFFELL )
                {
                  v26 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_42:
                  v31 = *(_QWORD *)(a1 + 8);
                  v32 = *(char **)a1;
                  if ( *(_QWORD *)(a1 + 16) < v26 )
                  {
                    v39 = v26;
                    v47 = *((const void **)a2 + 1);
                    v55 = *((_QWORD *)a2 + 2);
                    v59 = *(_QWORD *)(a1 + 8);
                    v32 = (char *)sub_491288(a1, *(void **)a1, v26, 1u);
                    *(_QWORD *)a1 = v32;
                    v31 = *(_QWORD *)(a1 + 8);
                    v26 = v39;
                    v25 = v47;
                    v14 = v55;
                    v24 = v59;
                  }
                  v40 = v26;
                  v48 = v25;
                  v56 = v14;
                  v60 = v24;
                  memset(&v32[v31], 0, v26 - v31);
                  *(_QWORD *)(a1 + 8) = v40;
                  memcpy((void *)(*(_QWORD *)a1 + v60), v48, v56);
                  goto LABEL_10;
                }
                if ( (v24 & 0x8000000000000000LL) != 0 )
                  *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
              }
              memcpy((void *)(*(_QWORD *)a1 + v24), v25, v14);
            }
            goto LABEL_10;
          }
          v28 = 0x7FFFFFFFFFFFFFFFLL;
        }
        v29 = *(_QWORD *)(a1 + 8);
        v30 = *(char **)a1;
        if ( *(_QWORD *)(a1 + 16) < v28 )
        {
          v37 = v28;
          v45 = v13;
          v53 = *(_QWORD *)(a1 + 8);
          v30 = (char *)sub_491288(a1, *(void **)a1, v28, 1u);
          *(_QWORD *)a1 = v30;
          v29 = *(_QWORD *)(a1 + 8);
          v28 = v37;
          v13 = v45;
          v27 = v53;
        }
        v38 = v28;
        v46 = v13;
        v54 = v27;
        memset(&v30[v29], 0, v28 - v29);
        *(_QWORD *)(a1 + 8) = v38;
        memcpy((void *)(*(_QWORD *)a1 + v54), v61, v46);
        goto LABEL_9;
      }
LABEL_18:
      v18 = sub_48E4D8(v61, (unsigned __int64)v63, *((_QWORD *)a2 + 1) + 1LL);
      v19 = v18 - v61;
      if ( v18 != v61 )
      {
        v20 = *(_QWORD *)(a1 + 8);
        v21 = v19 + v20;
        if ( v20 <= v19 + v20 )
        {
          if ( v20 >= v19 + v20 )
          {
LABEL_47:
            memcpy((void *)(*(_QWORD *)a1 + v20), v61, v19);
            goto LABEL_10;
          }
        }
        else
        {
          if ( v20 > 0x7FFFFFFFFFFFFFFELL )
          {
            if ( (v20 & 0x8000000000000000LL) != 0 )
              *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
            goto LABEL_47;
          }
          v21 = 0x7FFFFFFFFFFFFFFFLL;
        }
        v33 = *(_QWORD *)(a1 + 8);
        v34 = *(char **)a1;
        if ( *(_QWORD *)(a1 + 16) < v21 )
        {
          v42 = v21;
          v50 = v19;
          v58 = *(_QWORD *)(a1 + 8);
          v34 = (char *)sub_491288(a1, *(void **)a1, v21, 1u);
          *(_QWORD *)a1 = v34;
          v33 = *(_QWORD *)(a1 + 8);
          v21 = v42;
          v19 = v50;
          v20 = v58;
        }
        v41 = v21;
        v49 = v19;
        v57 = v20;
        memset(&v34[v33], 0, v21 - v33);
        v19 = v49;
        *(_QWORD *)(a1 + 8) = v41;
        v20 = v57;
        goto LABEL_47;
      }
LABEL_10:
      a2 += 8;
    }
  }
  return *(_QWORD *)&v63[6] ^ _stack_chk_guard;
}
