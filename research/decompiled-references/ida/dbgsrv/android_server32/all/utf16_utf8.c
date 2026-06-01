/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: utf16_utf8
// Address: 0x00075354

//----- (00075354) --------------------------------------------------------
int __fastcall utf16_utf8(int a1, unsigned __int16 *a2, signed int a3)
{
  int result; // r0
  unsigned __int16 *v5; // r6
  int v6; // r3
  int v7; // r4
  void *v8; // r0
  int v9; // r4
  bool v10; // r2
  int v11; // r3
  int v12; // r3
  int v13; // r4
  int v14; // r0
  int v15; // r7
  unsigned int v16; // r2
  void *v17; // r1
  void *v18; // r0
  int v19; // r3
  int v20; // r0
  int v21; // r4
  void *v22; // r1
  void *v23; // r0
  int v24; // r3
  int v25; // r0
  int v26; // r4
  void *v27; // r1
  void *v28; // r0
  int v29; // r0
  int v30; // r4
  char *v31; // r1
  char *v32; // r0
  unsigned int v33; // r7
  unsigned __int16 *v34; // r2
  int v35; // r0
  int v36; // r6
  char *v37; // r1
  char *v38; // r0
  int v39; // r3
  int v40; // r0
  int v41; // r4
  void *v42; // r1
  void *v43; // r0
  int v44; // r2
  int v45; // r0
  int v46; // r4
  void *v47; // r1
  void *v48; // r0
  int v49; // r3
  int v50; // r0
  int v51; // r4
  void *v52; // r1
  void *v53; // r0
  int v54; // r0
  int v55; // [sp+4h] [bp-2Ch]
  char v56; // [sp+4h] [bp-2Ch]
  int v57; // [sp+14h] [bp-1Ch]
  int v58; // [sp+20h] [bp-10h]
  unsigned __int16 v59; // [sp+24h] [bp-Ch]
  char v60; // [sp+24h] [bp-Ch]
  unsigned __int16 *v61; // [sp+24h] [bp-Ch]
  unsigned __int16 *v62; // [sp+24h] [bp-Ch]
  int v63; // [sp+2Ch] [bp-4h]

  result = 0;
  if ( a1 )
  {
    v5 = a2;
    if ( a2 )
    {
      v6 = a3;
      v7 = 0;
      *(_DWORD *)(a1 + 4) = 0;
      if ( a3 <= 0 )
        a3 = 16;
      v58 = v6;
      if ( *(_DWORD *)(a1 + 8) < (unsigned int)a3 )
      {
        v8 = qvector_reserve(a1, *(void **)a1, a3, 1u);
        v6 = v58;
        *(_DWORD *)a1 = v8;
      }
      result = 1;
      if ( v6 )
      {
        while ( 1 )
        {
          v33 = *v5;
          v34 = v5 + 1;
          if ( v6 < 0 && !*v5 )
            return 1;
          if ( v33 > 0x7F )
          {
            v62 = v5 + 1;
            if ( v33 >> 11 )
            {
              result = 0;
              if ( (v33 & 0xFC00) == 0xD800 )
              {
                v9 = v7 + 1;
                if ( v6 >= 0 && v9 >= v6 )
                  return result;
                result = 0;
                v10 = v6 < 0;
                v11 = v5[1];
                v59 = v5[1];
                v5 += 2;
                if ( (v11 & 0xFC00) != 0xDC00 || v11 == 0 && v10 )
                  return result;
                v63 = v9;
                v12 = ((v33 & 0x3FF) << 10) + 0x10000;
                v57 = v12 + (v59 & 0x3C0);
                v13 = ((unsigned int)(v12 << 11) >> 29) | 0xF0;
                v14 = *(_DWORD *)(a1 + 4);
                v15 = v14 - 1;
                if ( !v14 )
                  v15 = 0;
                v16 = v15 + 2;
                v17 = *(void **)a1;
                if ( *(_DWORD *)(a1 + 8) < (unsigned int)(v15 + 2) )
                {
                  v55 = v12;
                  v18 = qvector_reserve(a1, v17, v16, 1u);
                  v16 = v15 + 2;
                  v12 = v55;
                  v17 = v18;
                  *(_DWORD *)a1 = v18;
                }
                *(_DWORD *)(a1 + 4) = v16;
                *((_BYTE *)v17 + v15) = v13;
                *(_BYTE *)(*(_DWORD *)a1 + v15 + 1) = 0;
                v19 = ((unsigned int)(v12 << 14) >> 26) | 0x80;
                v20 = *(_DWORD *)(a1 + 4);
                v21 = v20 - 1;
                if ( !v20 )
                  v21 = 0;
                v22 = *(void **)a1;
                if ( *(_DWORD *)(a1 + 8) < (unsigned int)(v21 + 2) )
                {
                  v56 = v19;
                  v23 = qvector_reserve(a1, v22, v21 + 2, 1u);
                  LOBYTE(v19) = v56;
                  v22 = v23;
                  *(_DWORD *)a1 = v23;
                }
                *(_DWORD *)(a1 + 4) = v21 + 2;
                *((_BYTE *)v22 + v21) = v19;
                *(_BYTE *)(*(_DWORD *)a1 + v21 + 1) = 0;
                v24 = ((unsigned int)(v57 << 20) >> 26) | 0x80;
                v25 = *(_DWORD *)(a1 + 4);
                v26 = v25 - 1;
                if ( !v25 )
                  v26 = 0;
                v27 = *(void **)a1;
                if ( *(_DWORD *)(a1 + 8) < (unsigned int)(v26 + 2) )
                {
                  v28 = qvector_reserve(a1, v27, v26 + 2, 1u);
                  v24 = ((unsigned int)(v57 << 20) >> 26) | 0x80;
                  v27 = v28;
                  *(_DWORD *)a1 = v28;
                }
                *(_DWORD *)(a1 + 4) = v26 + 2;
                *((_BYTE *)v27 + v26) = v24;
                *(_BYTE *)(*(_DWORD *)a1 + v26 + 1) = 0;
                v60 = v59 & 0x3F | 0x80;
                v29 = *(_DWORD *)(a1 + 4);
                v30 = v29 - 1;
                if ( !v29 )
                  v30 = 0;
                v31 = *(char **)a1;
                if ( *(_DWORD *)(a1 + 8) < (unsigned int)(v30 + 2) )
                {
                  v31 = (char *)qvector_reserve(a1, v31, v30 + 2, 1u);
                  *(_DWORD *)a1 = v31;
                }
                v6 = v58;
                *(_DWORD *)(a1 + 4) = v30 + 2;
                v32 = &v31[v30];
                LOBYTE(v33) = v60;
                goto LABEL_60;
              }
              if ( (v33 & 0xFC00) == 0xDC00 )
                return result;
              v63 = v7;
              v44 = (v33 >> 12) | 0xE0;
              v45 = *(_DWORD *)(a1 + 4);
              v46 = v45 - 1;
              if ( !v45 )
                v46 = 0;
              v47 = *(void **)a1;
              if ( *(_DWORD *)(a1 + 8) < (unsigned int)(v46 + 2) )
              {
                v48 = qvector_reserve(a1, v47, v46 + 2, 1u);
                v44 = (v33 >> 12) | 0xE0;
                v47 = v48;
                *(_DWORD *)a1 = v48;
              }
              *(_DWORD *)(a1 + 4) = v46 + 2;
              *((_BYTE *)v47 + v46) = v44;
              *(_BYTE *)(*(_DWORD *)a1 + v46 + 1) = 0;
              v49 = (v33 << 20 >> 26) | 0x80;
              v50 = *(_DWORD *)(a1 + 4);
              v51 = v50 - 1;
              if ( !v50 )
                v51 = 0;
              v52 = *(void **)a1;
              if ( *(_DWORD *)(a1 + 8) < (unsigned int)(v51 + 2) )
              {
                v53 = qvector_reserve(a1, v52, v51 + 2, 1u);
                v49 = (v33 << 20 >> 26) | 0x80;
                v52 = v53;
                *(_DWORD *)a1 = v53;
              }
              *(_DWORD *)(a1 + 4) = v51 + 2;
              *((_BYTE *)v52 + v51) = v49;
              *(_BYTE *)(*(_DWORD *)a1 + v51 + 1) = 0;
            }
            else
            {
              v63 = v7;
              v39 = (v33 << 21 >> 27) | 0xC0;
              v40 = *(_DWORD *)(a1 + 4);
              v41 = v40 - 1;
              if ( !v40 )
                v41 = 0;
              v42 = *(void **)a1;
              if ( *(_DWORD *)(a1 + 8) < (unsigned int)(v41 + 2) )
              {
                v43 = qvector_reserve(a1, v42, v41 + 2, 1u);
                v39 = (v33 << 21 >> 27) | 0xC0;
                v42 = v43;
                *(_DWORD *)a1 = v43;
              }
              *(_DWORD *)(a1 + 4) = v41 + 2;
              *((_BYTE *)v42 + v41) = v39;
              *(_BYTE *)(*(_DWORD *)a1 + v41 + 1) = 0;
            }
            LOBYTE(v33) = v33 & 0x3F | 0x80;
            v54 = *(_DWORD *)(a1 + 4);
            v30 = v54 - 1;
            if ( !v54 )
              v30 = 0;
            v36 = v30 + 2;
            v37 = *(char **)a1;
            if ( *(_DWORD *)(a1 + 8) < (unsigned int)(v30 + 2) )
            {
              v37 = (char *)qvector_reserve(a1, v37, v30 + 2, 1u);
              *(_DWORD *)a1 = v37;
            }
            v6 = v58;
            v34 = v62;
          }
          else
          {
            v63 = v7;
            v35 = *(_DWORD *)(a1 + 4);
            v30 = v35 - 1;
            if ( !v35 )
              v30 = 0;
            v36 = v30 + 2;
            v37 = *(char **)a1;
            if ( *(_DWORD *)(a1 + 8) < (unsigned int)(v30 + 2) )
            {
              v61 = v34;
              v38 = (char *)qvector_reserve(a1, v37, v30 + 2, 1u);
              v34 = v61;
              v6 = v58;
              v37 = v38;
              *(_DWORD *)a1 = v38;
            }
          }
          *(_DWORD *)(a1 + 4) = v36;
          v32 = &v37[v30];
          v5 = v34;
LABEL_60:
          *v32 = v33;
          *(_BYTE *)(*(_DWORD *)a1 + v30 + 1) = 0;
          v7 = v63 + 1;
          if ( v6 >= 0 && v7 >= v6 )
            return 1;
        }
      }
    }
  }
  return result;
}
