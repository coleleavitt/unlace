/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_sub
// Address: 0x00082B70

//----- (00082B70) --------------------------------------------------------
int __fastcall rangeset_t_sub(int a1, unsigned int *a2)
{
  int v3; // r6
  int v4; // r0
  bool v5; // zf
  int v6; // r0
  unsigned int v7; // r2
  int v8; // r7
  unsigned int v9; // r1
  unsigned int *v10; // r4
  unsigned int v11; // r5
  bool v12; // cf
  unsigned int v13; // r2
  unsigned int v14; // r0
  unsigned int v15; // r2
  unsigned int v16; // r0
  unsigned int v17; // r2
  unsigned int v18; // r0
  int v19; // r3
  unsigned int v20; // r0
  unsigned int v21; // r2
  unsigned int v22; // r0
  unsigned int v23; // r2
  char **v24; // r5
  unsigned int v25; // r2
  int v26; // r7
  int v27; // r6
  int v28; // r4
  char *v29; // r0
  unsigned int v30; // r1
  char *v31; // r3
  unsigned int v32; // r0
  unsigned int v33; // r2
  int v34; // r0
  unsigned int v35; // r0
  unsigned int v36; // r2
  unsigned int v37; // r2
  unsigned int v38; // r0
  char *v39; // r1
  char *v40; // r2
  char *v41; // r5
  char *v42; // r6
  int v43; // r0
  int v45; // [sp+8h] [bp-38h]
  int v46; // [sp+Ch] [bp-34h]
  void *v48; // [sp+18h] [bp-28h] BYREF
  int v49; // [sp+1Ch] [bp-24h]
  int v50; // [sp+20h] [bp-20h]
  int v51; // [sp+24h] [bp-1Ch]
  char v52; // [sp+28h] [bp-18h]
  unsigned int v53; // [sp+2Ch] [bp-14h] BYREF
  unsigned int v54; // [sp+30h] [bp-10h]
  char v55; // [sp+34h] [bp-Ch]

  v3 = 0;
  if ( *a2 < a2[1] )
  {
    v4 = *(_DWORD *)(a1 + 16);
    v3 = 0;
    v49 = 0;
    v48 = nullptr;
    v50 = 0;
    v51 = v4;
    v5 = v4 == -1;
    v6 = 0;
    if ( !v5 )
      v6 = must_journal();
    v52 = v6;
    v7 = *(_DWORD *)(a1 + 4);
    if ( v7 )
    {
      v3 = 0;
      v8 = -1;
      v9 = *a2;
      v46 = a1;
      v10 = *(unsigned int **)a1;
      while ( 1 )
      {
        v11 = v10[1];
        if ( v11 > v9 )
          break;
        v10 += 2;
        v12 = v8 + 2 >= v7;
        ++v8;
        if ( v12 )
          goto LABEL_43;
      }
      v13 = a2[1];
      if ( *v10 < v13 )
      {
        if ( *v10 >= v9 )
        {
          v19 = v8;
          if ( v11 > v13 )
          {
            if ( v6 )
            {
              v20 = *v10;
              v21 = v10[1];
              v55 = 1;
              v54 = v21;
              v53 = v20;
              sub_83AD8(&v48, &v53);
              v13 = a2[1];
            }
            *v10 = v13;
            if ( v52 )
            {
              v22 = *v10;
              v23 = v10[1];
              v55 = 0;
              v54 = v23;
              v53 = v22;
              sub_83AD8(&v48, &v53);
            }
            v19 = v8 + 1;
          }
        }
        else
        {
          if ( v6 )
          {
            v14 = *v10;
            v15 = v10[1];
            v55 = 1;
            v54 = v15;
            v53 = v14;
            sub_83AD8(&v48, &v53);
            v9 = *a2;
          }
          v10[1] = v9;
          if ( v52 )
          {
            v16 = *v10;
            v17 = v10[1];
            v55 = 0;
            v54 = v17;
            v53 = v16;
            sub_83AD8(&v48, &v53);
          }
          v18 = a2[1];
          v19 = v8 + 1;
          if ( v18 < v11 )
          {
            v54 = v11;
            v53 = v18;
            sub_827A0((char **)v46, (char *)&v53, (int)&v48);
            v19 = v8 + 2;
          }
        }
        v24 = (char **)v46;
        v25 = *(_DWORD *)(v46 + 4);
        v26 = v19 + 1;
        v27 = v19;
        if ( v19 + 1 < v25 )
        {
          v28 = 8 * v19 + 8;
          v45 = v19;
          v27 = v19;
          while ( 1 )
          {
            v29 = *v24;
            v30 = a2[1];
            if ( v30 <= *(_DWORD *)&(*v24)[v28] )
            {
              v26 = v27 + 1;
              goto LABEL_39;
            }
            v31 = &v29[v28];
            if ( v30 < *(_DWORD *)&v29[v28 + 4] )
              break;
            v24 = (char **)v46;
            if ( v52 )
            {
              v32 = *(_DWORD *)&v29[v28];
              v33 = *((_DWORD *)v31 + 1);
              v55 = 1;
              v54 = v33;
              v53 = v32;
              sub_83AD8(&v48, &v53);
              v25 = *(_DWORD *)(v46 + 4);
            }
            v28 += 8;
            v34 = v27 + 1;
            v12 = v27 + 2 >= v25;
            ++v27;
            if ( v12 )
            {
              v26 = v34 + 1;
              v27 = v34;
LABEL_39:
              v19 = v45;
              goto LABEL_40;
            }
          }
          v26 = v27 + 1;
          if ( v52 )
          {
            v35 = *(_DWORD *)&v29[v28];
            v36 = *((_DWORD *)v31 + 1);
            v55 = 1;
            v54 = v36;
            v53 = v35;
            sub_83AD8(&v48, &v53);
            v24 = (char **)v46;
            v29 = *(char **)v46;
            v30 = a2[1];
          }
          else
          {
            v24 = (char **)v46;
          }
          v19 = v45;
          *(_DWORD *)&v29[v28] = v30;
          if ( v52 )
          {
            v37 = *(_DWORD *)&(*v24)[v28];
            v38 = *(_DWORD *)&(*v24)[v28 + 4];
            v55 = 0;
            v54 = v38;
            v53 = v37;
            sub_83AD8(&v48, &v53);
            goto LABEL_39;
          }
        }
LABEL_40:
        if ( v19 != v27 )
        {
          v39 = *v24;
          v40 = v24[1];
          v41 = &(*v24)[8 * v26];
          v42 = &v39[8 * v19 + 8];
          memmove(v42, v41, &v39[8 * (_DWORD)v40] - v41);
          v43 = v41 - v42;
          v24 = (char **)v46;
          *(_DWORD *)(v46 + 4) -= v43 >> 3;
        }
        v24[3] = nullptr;
        v3 = 1;
        sub_82AF0((int)&v48);
      }
    }
LABEL_43:
    if ( v48 )
    {
      v49 = 0;
      qfree(v48);
      v50 = 0;
      v48 = nullptr;
    }
  }
  return v3;
}
