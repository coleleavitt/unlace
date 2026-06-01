/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_486200
// Address: 0x0000000000486200

//----- (0000000000486200) ----------------------------------------------------
__int64 __fastcall sub_486200(__int64 a1, unsigned __int16 *a2, unsigned __int64 a3)
{
  bool v3; // zf
  unsigned __int16 *v5; // x21
  signed int v6; // w27
  unsigned __int64 v7; // x0
  unsigned __int16 *v8; // x25
  unsigned int v9; // w23
  _BOOL4 v10; // w22
  unsigned __int64 v11; // x20
  int v12; // w26
  int v15; // w0
  bool v16; // zf
  __int64 v17; // x28
  unsigned __int64 v18; // x20
  unsigned int v19; // w4
  __int64 v20; // x25
  unsigned __int64 v21; // x5
  _BYTE *v22; // x0
  int v23; // w5
  __int64 v24; // x28
  __int64 v25; // x25
  unsigned __int64 v26; // x4
  _BYTE *v27; // x0
  int v28; // w4
  __int64 v29; // x28
  __int64 v30; // x25
  unsigned __int64 v31; // x5
  _BYTE *v32; // x0
  char v33; // w20
  __int64 v34; // x28
  __int64 v35; // x25
  unsigned __int64 v36; // x4
  _BYTE *v37; // x0
  __int64 v40; // x28
  __int64 v41; // x5
  unsigned __int64 v42; // x21
  _BYTE *v43; // x0
  __int64 v44; // x21
  int v45; // w28
  __int64 v46; // x6
  unsigned __int64 v47; // x5
  _BYTE *v48; // x0
  __int64 v49; // x21
  unsigned int v50; // w5
  __int64 v51; // x6
  unsigned __int64 v52; // x28
  _BYTE *v53; // x0
  unsigned __int64 v55; // [xsp+60h] [xbp-10h]
  unsigned __int64 v56; // [xsp+60h] [xbp-10h]
  unsigned __int64 v57; // [xsp+60h] [xbp-10h]
  unsigned __int64 v58; // [xsp+60h] [xbp-10h]
  __int64 v59; // [xsp+60h] [xbp-10h]
  unsigned __int64 v60; // [xsp+60h] [xbp-10h]
  __int64 v61; // [xsp+68h] [xbp-8h]
  __int64 v62; // [xsp+68h] [xbp-8h]

  if ( a2 )
    v3 = a1 == 0;
  else
    v3 = 1;
  if ( v3 )
    return 0;
  v5 = a2;
  v6 = a3;
  v7 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = 0;
  if ( (int)a3 <= 0 )
  {
    if ( v7 > 0xF )
      goto LABEL_74;
    a3 = 16;
  }
  else
  {
    a3 = (int)a3;
    if ( (int)a3 <= v7 )
    {
      v8 = a2 + 1;
      v9 = (unsigned int)a3 >> 31;
      v10 = 1;
      v11 = *a2;
LABEL_8:
      v12 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v11 <= 0x7F )
        {
          v40 = *(_QWORD *)(a1 + 8);
          if ( !v40 )
            goto LABEL_61;
          goto LABEL_52;
        }
        if ( (unsigned int)v11 <= 0x7FF )
          break;
        if ( (unsigned int)(v11 - 55296) > 0x3FF )
        {
          if ( (unsigned int)(v11 - 56320) <= 0x3FF )
            return 0;
          v49 = *(_QWORD *)(a1 + 8);
          v50 = ((unsigned int)v11 >> 12) | 0xE0;
          if ( v49 )
          {
            v51 = v49 - 1;
            v52 = v49 + 1;
          }
          else
          {
            v49 = 1;
            v52 = 2;
            v51 = 0;
          }
          v53 = *(_BYTE **)a1;
          if ( *(_QWORD *)(a1 + 16) < v52 )
          {
            v62 = v51;
            v53 = sub_491288(a1, *(void **)a1, v52, 1u);
            *(_QWORD *)a1 = v53;
            v50 = ((unsigned int)v11 >> 12) | 0xE0;
            v51 = v62;
          }
          *(_QWORD *)(a1 + 8) = v52;
          v53[v51] = v50;
          v45 = (v11 >> 6) & 0x3F | 0x80;
          *(_BYTE *)(*(_QWORD *)a1 + v49) = 0;
          v44 = *(_QWORD *)(a1 + 8);
          if ( !v44 )
          {
LABEL_71:
            v44 = 1;
            v47 = 2;
            v46 = 0;
LABEL_58:
            v48 = *(_BYTE **)a1;
            if ( *(_QWORD *)(a1 + 16) < v47 )
            {
              v60 = v47;
              v61 = v46;
              v48 = sub_491288(a1, *(void **)a1, v47, 1u);
              v47 = v60;
              v46 = v61;
              *(_QWORD *)a1 = v48;
            }
            *(_QWORD *)(a1 + 8) = v47;
            v48[v46] = v45;
            LOBYTE(v11) = v11 & 0x3F | 0x80;
            *(_BYTE *)(*(_QWORD *)a1 + v44) = 0;
            v40 = *(_QWORD *)(a1 + 8);
            if ( !v40 )
            {
LABEL_61:
              v40 = 1;
              v42 = 2;
              v41 = 0;
              goto LABEL_53;
            }
LABEL_52:
            v41 = v40 - 1;
            v42 = v40 + 1;
LABEL_53:
            v43 = *(_BYTE **)a1;
            if ( *(_QWORD *)(a1 + 16) < v42 )
            {
              v59 = v41;
              v43 = sub_491288(a1, *(void **)a1, v42, 1u);
              v41 = v59;
              *(_QWORD *)a1 = v43;
            }
            *(_QWORD *)(a1 + 8) = v42;
            v5 = v8;
            v43[v41] = v11;
            *(_BYTE *)(*(_QWORD *)a1 + v40) = 0;
            goto LABEL_42;
          }
LABEL_57:
          v46 = v44 - 1;
          v47 = v44 + 1;
          goto LABEL_58;
        }
        if ( v10 && v6 <= ++v12 )
          return 0;
        v15 = v5[1];
        v5 += 2;
        v16 = v15 || v9 == 0;
        if ( !v16 || (unsigned int)(v15 - 56320) > 0x3FF )
          return 0;
        v17 = *(_QWORD *)(a1 + 8);
        v18 = (((v11 & 0x3FF) << 10) + 0x10000) | v15 & 0x3FF;
        v19 = ((unsigned int)v18 >> 18) | 0xF0;
        if ( v17 )
        {
          v20 = v17 - 1;
          v21 = v17 + 1;
        }
        else
        {
          v17 = 1;
          v21 = 2;
          v20 = 0;
        }
        v22 = *(_BYTE **)a1;
        if ( *(_QWORD *)(a1 + 16) < v21 )
        {
          v55 = v21;
          v22 = sub_491288(a1, *(void **)a1, v21, 1u);
          *(_QWORD *)a1 = v22;
          v19 = ((unsigned int)v18 >> 18) | 0xF0;
          v21 = v55;
        }
        *(_QWORD *)(a1 + 8) = v21;
        v22[v20] = v19;
        v23 = (v18 >> 12) & 0x3F | 0x80;
        *(_BYTE *)(*(_QWORD *)a1 + v17) = 0;
        v24 = *(_QWORD *)(a1 + 8);
        if ( v24 )
        {
          v25 = v24 - 1;
          v26 = v24 + 1;
        }
        else
        {
          v24 = 1;
          v26 = 2;
          v25 = 0;
        }
        v27 = *(_BYTE **)a1;
        if ( *(_QWORD *)(a1 + 16) < v26 )
        {
          v56 = v26;
          v27 = sub_491288(a1, *(void **)a1, v26, 1u);
          *(_QWORD *)a1 = v27;
          v23 = (v18 >> 12) & 0x3F | 0x80;
          v26 = v56;
        }
        *(_QWORD *)(a1 + 8) = v26;
        v27[v25] = v23;
        v28 = (v18 >> 6) & 0x3F | 0x80;
        *(_BYTE *)(*(_QWORD *)a1 + v24) = 0;
        v29 = *(_QWORD *)(a1 + 8);
        if ( v29 )
        {
          v30 = v29 - 1;
          v31 = v29 + 1;
        }
        else
        {
          v29 = 1;
          v31 = 2;
          v30 = 0;
        }
        v32 = *(_BYTE **)a1;
        if ( *(_QWORD *)(a1 + 16) < v31 )
        {
          v57 = v31;
          v32 = sub_491288(a1, *(void **)a1, v31, 1u);
          *(_QWORD *)a1 = v32;
          v28 = (v18 >> 6) & 0x3F | 0x80;
          v31 = v57;
        }
        *(_QWORD *)(a1 + 8) = v31;
        v32[v30] = v28;
        v33 = v18 & 0x3F | 0x80;
        *(_BYTE *)(*(_QWORD *)a1 + v29) = 0;
        v34 = *(_QWORD *)(a1 + 8);
        if ( v34 )
        {
          v35 = v34 - 1;
          v36 = v34 + 1;
        }
        else
        {
          v34 = 1;
          v36 = 2;
          v35 = 0;
        }
        v37 = *(_BYTE **)a1;
        if ( *(_QWORD *)(a1 + 16) < v36 )
        {
          v58 = v36;
          v37 = sub_491288(a1, *(void **)a1, v36, 1u);
          v36 = v58;
          *(_QWORD *)a1 = v37;
        }
        *(_QWORD *)(a1 + 8) = v36;
        v37[v35] = v33;
        *(_BYTE *)(*(_QWORD *)a1 + v34) = 0;
LABEL_42:
        ++v12;
        if ( !v10 || v6 > v12 )
        {
          v11 = *v5;
          v8 = v5 + 1;
          if ( *v5 || v9 == 0 )
            continue;
        }
        return 1;
      }
      v44 = *(_QWORD *)(a1 + 8);
      v45 = (v11 >> 6) & 0x3F | 0xC0;
      if ( !v44 )
        goto LABEL_71;
      goto LABEL_57;
    }
  }
  *(_QWORD *)a1 = sub_491288(a1, *(void **)a1, a3, 1u);
LABEL_74:
  v10 = v6 >= 0;
  if ( v6 )
  {
    v11 = *v5;
    v9 = (unsigned int)v6 >> 31;
    v8 = v5 + 1;
    if ( *v5 || v9 == 0 )
      goto LABEL_8;
  }
  return 1;
}
