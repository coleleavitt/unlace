/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: deserialize_dynamic_register_set
// Address: 0x000A0D60

//----- (000A0D60) --------------------------------------------------------
unsigned int __cdecl deserialize_dynamic_register_set(int a1, unsigned int *a2)
{
  int v2; // edi
  void *v3; // eax
  char *v4; // esi
  unsigned int v5; // ecx
  int i; // edi
  void *v7; // eax
  void *v8; // eax
  char *v9; // esi
  unsigned int v10; // ecx
  int j; // edi
  void *v12; // eax
  unsigned int v13; // edx
  int v14; // esi
  void *v15; // eax
  char *v16; // eax
  int v17; // ecx
  void *v18; // eax
  int v19; // esi
  const char *v20; // edi
  _BYTE *v21; // eax
  bool v22; // zf
  size_t v23; // eax
  size_t v24; // ecx
  int *v25; // eax
  int v26; // esi
  unsigned int v27; // edi
  unsigned int v28; // edx
  int v29; // edx
  unsigned int v30; // ecx
  int *v31; // eax
  int v32; // ecx
  unsigned int v33; // edi
  unsigned int v34; // esi
  int v35; // edi
  int v36; // edx
  int *v37; // eax
  unsigned int v38; // esi
  int v39; // eax
  char **v40; // esi
  unsigned int k; // esi
  char *v42; // eax
  _BYTE *v43; // ecx
  int v44; // ecx
  _DWORD *v45; // eax
  int v46; // ecx
  unsigned int v47; // edi
  int v48; // ebx
  char *v49; // eax
  int v50; // ecx
  void *v51; // eax
  int v52; // edi
  char *v53; // eax
  int v54; // ecx
  _DWORD *v55; // edi
  int v56; // edx
  int v57; // eax
  int v58; // esi
  int v59; // ecx
  char *v60; // eax
  void **v61; // ebx
  const char *v62; // esi
  _BYTE *v63; // eax
  size_t v64; // eax
  size_t v65; // ecx
  int v66; // esi
  unsigned int v67; // eax
  _DWORD *v68; // edi
  unsigned int v70; // [esp+4h] [ebp-48h]
  char **v71; // [esp+4h] [ebp-48h]
  int v72; // [esp+4h] [ebp-48h]
  unsigned int v73; // [esp+8h] [ebp-44h]
  unsigned int v74; // [esp+8h] [ebp-44h]
  size_t v75; // [esp+8h] [ebp-44h]
  char *v76; // [esp+8h] [ebp-44h]
  int v77; // [esp+8h] [ebp-44h]
  int v78; // [esp+8h] [ebp-44h]
  unsigned int v79; // [esp+Ch] [ebp-40h]
  unsigned int v80; // [esp+Ch] [ebp-40h]
  int v81; // [esp+Ch] [ebp-40h]
  unsigned int v82; // [esp+Ch] [ebp-40h]
  _DWORD *v83; // [esp+Ch] [ebp-40h]
  int **v84; // [esp+10h] [ebp-3Ch]
  int v85; // [esp+10h] [ebp-3Ch]
  int v86; // [esp+10h] [ebp-3Ch]
  void **v87; // [esp+14h] [ebp-38h]
  bool v88; // [esp+1Bh] [ebp-31h]
  size_t v89; // [esp+1Ch] [ebp-30h]
  unsigned int v90; // [esp+1Ch] [ebp-30h]
  size_t v91; // [esp+1Ch] [ebp-30h]
  unsigned int *v92; // [esp+20h] [ebp-2Ch]
  size_t v93; // [esp+24h] [ebp-28h]
  int v94; // [esp+28h] [ebp-24h] BYREF
  unsigned int v95; // [esp+2Ch] [ebp-20h]
  int v96; // [esp+30h] [ebp-1Ch]
  unsigned int v97; // [esp+38h] [ebp-14h]

  v2 = a1;
  v97 = __readgsdword(0x14u);
  if ( a1 )
  {
    v3 = *(void **)a1;
    if ( *(_DWORD *)a1 )
    {
      *(_DWORD *)(a1 + 4) = 0;
      qfree(v3);
      *(_DWORD *)a1 = 0;
      *(_DWORD *)(a1 + 8) = 0;
    }
    v87 = (void **)(a1 + 12);
    v4 = *(char **)(a1 + 12);
    if ( v4 )
    {
      v73 = *(_DWORD *)(a1 + 16);
      if ( v73 )
      {
        v5 = 1;
        for ( i = 0; ; i += 12 )
        {
          v7 = *(void **)&v4[i];
          if ( v7 )
          {
            v79 = v5;
            *(_DWORD *)&v4[i + 4] = 0;
            qfree(v7);
            *(_DWORD *)&v4[i] = 0;
            *(_DWORD *)&v4[i + 8] = 0;
            v5 = v79;
          }
          if ( v5 >= v73 )
            break;
          v4 = (char *)*v87;
          ++v5;
        }
        v4 = (char *)*v87;
        v2 = a1;
      }
      *(_DWORD *)(v2 + 16) = 0;
      qfree(v4);
      *(_DWORD *)(v2 + 12) = 0;
      *(_DWORD *)(v2 + 20) = 0;
    }
    v8 = *(void **)(v2 + 24);
    if ( v8 )
    {
      *(_DWORD *)(v2 + 28) = 0;
      qfree(v8);
      *(_DWORD *)(v2 + 24) = 0;
      *(_DWORD *)(v2 + 32) = 0;
    }
    v92 = (unsigned int *)(v2 + 36);
    v9 = *(char **)(v2 + 36);
    if ( v9 )
    {
      v74 = *(_DWORD *)(v2 + 40);
      if ( v74 )
      {
        v10 = 1;
        for ( j = 0; ; j += 12 )
        {
          v12 = *(void **)&v9[j];
          if ( v12 )
          {
            v80 = v10;
            *(_DWORD *)&v9[j + 4] = 0;
            qfree(v12);
            *(_DWORD *)&v9[j] = 0;
            *(_DWORD *)&v9[j + 8] = 0;
            v10 = v80;
          }
          if ( v10 >= v74 )
            break;
          v9 = (char *)*v92;
          ++v10;
        }
        v9 = (char *)*v92;
        v2 = a1;
      }
      *(_DWORD *)(v2 + 40) = 0;
      qfree(v9);
      *(_DWORD *)(v2 + 36) = 0;
      *(_DWORD *)(v2 + 44) = 0;
    }
    if ( *a2 < a2[1] )
    {
      v13 = unpack_dd(a2, a2[1]);
      v88 = v13 > 0xFFFFFEFF && (_BYTE)v13 != 0;
      if ( v88 )
        v13 = unpack_dd(a2, a2[1]);
      if ( v13 )
      {
        v84 = (int **)(v2 + 24);
        v14 = 0;
        v70 = v13;
        while ( 1 )
        {
          v17 = *(_DWORD *)(v2 + 16);
          v81 = v14;
          if ( *(_DWORD *)(v2 + 20) >= (unsigned int)(v17 + 1) )
          {
            v18 = *v87;
          }
          else
          {
            v18 = qvector_reserve((int)v87, *(void **)(v2 + 12), v17 + 1, 0xCu);
            *(_DWORD *)(v2 + 12) = v18;
            v17 = *(_DWORD *)(v2 + 16);
          }
          v19 = (int)v18 + 12 * v17;
          *(_DWORD *)v19 = 0;
          *(_DWORD *)(v19 + 4) = 0;
          *(_DWORD *)(v19 + 8) = 0;
          ++*(_DWORD *)(v2 + 16);
          v20 = (const char *)*a2;
          v21 = (_BYTE *)*a2;
          do
          {
            if ( (unsigned int)v21 >= a2[1] )
              goto LABEL_43;
            v22 = *v21++ == 0;
          }
          while ( !v22 );
          *a2 = (unsigned int)v21;
          if ( !v20 || (v23 = strlen(v20)) == 0 )
          {
LABEL_43:
            *(_DWORD *)(v19 + 4) = 0;
            v16 = (char *)&qword_13ACD8 - 308323;
            goto LABEL_44;
          }
          v75 = v23;
          v24 = v23 + 1;
          if ( *(_DWORD *)(v19 + 8) >= v23 + 1 )
          {
            v15 = *(void **)v19;
          }
          else
          {
            v89 = v23 + 1;
            v15 = qvector_reserve(v19, *(void **)v19, v23 + 1, 1u);
            v24 = v89;
            *(_DWORD *)v19 = v15;
          }
          *(_DWORD *)(v19 + 4) = v24;
          memmove(v15, v20, v75);
          *(_BYTE *)(*(_DWORD *)v19 + v75) = 0;
          v16 = *(_DWORD *)(v19 + 4) ? *(char **)v19 : byte_EF875;
LABEL_44:
          v76 = v16;
          v94 = (int)v16;
          v25 = *(int **)(a1 + 24);
          v26 = *(_DWORD *)(a1 + 28);
          v27 = *(_DWORD *)(a1 + 32);
          v28 = v26 + 1;
          if ( v25 <= &v94 && &v25[v27] > &v94 )
            break;
          if ( v27 >= v28 )
            goto LABEL_50;
          v25 = (int *)qvector_reserve((int)v84, v25, v26 + 1, 4u);
          v2 = a1;
          *(_DWORD *)(a1 + 24) = v25;
          v26 = *(_DWORD *)(a1 + 28);
          v29 = v94;
          v30 = v70;
LABEL_52:
          v25[v26] = v29;
          ++*(_DWORD *)(v2 + 28);
          v14 = v81 + 1;
          if ( v81 + 1 == v30 )
            goto LABEL_55;
        }
        if ( v27 >= v28 )
        {
LABEL_50:
          v2 = a1;
        }
        else
        {
          v25 = (int *)qvector_reserve((int)v84, v25, v26 + 1, 4u);
          v2 = a1;
          *(_DWORD *)(a1 + 24) = v25;
          v26 = *(_DWORD *)(a1 + 28);
        }
        v30 = v70;
        v29 = (int)v76;
        goto LABEL_52;
      }
      v84 = (int **)(v2 + 24);
LABEL_55:
      v94 = 0;
      v31 = *(int **)(v2 + 24);
      v32 = *(_DWORD *)(v2 + 28);
      v33 = *(_DWORD *)(v2 + 32);
      v34 = v32 + 1;
      if ( v31 > &v94 || &v31[v33] <= &v94 )
      {
        v36 = 0;
        if ( v33 >= v34 )
        {
          v35 = a1;
        }
        else
        {
          v31 = (int *)qvector_reserve((int)v84, v31, v32 + 1, 4u);
          *v84 = v31;
          v35 = a1;
          v32 = *(_DWORD *)(a1 + 28);
          v36 = v94;
        }
        v37 = &v31[v32];
      }
      else
      {
        if ( v33 >= v34 )
        {
          v35 = a1;
        }
        else
        {
          v31 = (int *)qvector_reserve((int)v84, v31, v32 + 1, 4u);
          *v84 = v31;
          v35 = a1;
          v32 = *(_DWORD *)(a1 + 28);
        }
        v37 = &v31[v32];
        v36 = 0;
      }
      *v37 = v36;
      ++*(_DWORD *)(v35 + 28);
      v38 = unpack_dd(a2, a2[1]);
      sub_A1690(v92, v38);
      v90 = v38;
      if ( v38 )
      {
        v39 = 0;
        do
        {
          v85 = v39;
          v40 = (char **)(*v92 + 12 * v39);
          v82 = unpack_dd(a2, a2[1]);
          v94 = 0;
          v71 = v40;
          sub_2E4A0(v40, v82, (char *)&v94);
          if ( v82 )
          {
            for ( k = 0; k < v82; ++k )
            {
              v42 = (char *)*a2;
              v43 = (_BYTE *)*a2;
              while ( (unsigned int)v43 < a2[1] )
              {
                v22 = *v43++ == 0;
                if ( v22 )
                {
                  *a2 = (unsigned int)v43;
                  goto LABEL_74;
                }
              }
              v42 = nullptr;
LABEL_74:
              sub_1B530((int)&v94, v42);
              if ( v95 >= 2 )
              {
                v44 = *(_DWORD *)(v35 + 16);
                if ( *(_DWORD *)(v35 + 20) >= (unsigned int)(v44 + 1) )
                {
                  v45 = *v87;
                }
                else
                {
                  v45 = qvector_reserve((int)v87, *v87, v44 + 1, 0xCu);
                  *(_DWORD *)(v35 + 12) = v45;
                  v44 = *(_DWORD *)(v35 + 16);
                }
                v46 = 3 * v44;
                v45[v46] = 0;
                v45[v46 + 1] = 0;
                v45[v46 + 2] = 0;
                ++*(_DWORD *)(v35 + 16);
                v77 = v45[v46];
                v47 = v45[v46 + 1];
                v48 = v45[v46 + 2];
                v45[v46] = v94;
                v45[v46 + 1] = v95;
                v45[v46 + 2] = v96;
                v94 = v77;
                v95 = v47;
                v96 = v48;
                if ( v45[v46 + 1] )
                  v49 = (char *)v45[v46];
                else
                  v49 = byte_EF875;
                *(_DWORD *)&(*v71)[4 * k] = v49;
                v35 = a1;
              }
              if ( v94 )
              {
                v95 = 0;
                qfree((void *)v94);
                v94 = 0;
                v96 = 0;
              }
            }
          }
          v39 = v85 + 1;
        }
        while ( v85 + 1 < v90 );
      }
      v86 = unpack_dd(a2, a2[1]);
      if ( v86 )
      {
        v50 = 0;
        do
        {
          v56 = *(_DWORD *)(v35 + 4);
          v57 = v56 + 1;
          v78 = v50;
          if ( *(_DWORD *)(v35 + 8) >= (unsigned int)(v56 + 1) )
          {
            v72 = *(_DWORD *)(v35 + 4);
            v58 = v35;
            v55 = *(_DWORD **)v35;
          }
          else
          {
            v58 = v35;
            v55 = qvector_reserve(v35, *(void **)v35, v56 + 1, 0x14u);
            *(_DWORD *)v58 = v55;
            v72 = *(_DWORD *)(v58 + 4);
            v57 = v72 + 1;
          }
          *(_DWORD *)(v58 + 4) = v57;
          v59 = *(_DWORD *)(v58 + 16);
          if ( *(_DWORD *)(v58 + 20) >= (unsigned int)(v59 + 1) )
          {
            v60 = (char *)*v87;
          }
          else
          {
            v60 = (char *)qvector_reserve((int)v87, *(void **)(v58 + 12), v59 + 1, 0xCu);
            *(_DWORD *)(v58 + 12) = v60;
            v59 = *(_DWORD *)(v58 + 16);
          }
          v61 = (void **)&v60[12 * v59];
          *v61 = nullptr;
          v61[1] = nullptr;
          v61[2] = nullptr;
          ++*(_DWORD *)(v58 + 16);
          v62 = (const char *)*a2;
          v63 = (_BYTE *)*a2;
          v83 = v55;
          do
          {
            if ( (unsigned int)v63 >= a2[1] )
              goto LABEL_106;
            v22 = *v63++ == 0;
          }
          while ( !v22 );
          *a2 = (unsigned int)v63;
          if ( !v62 || (v64 = strlen(v62)) == 0 )
          {
LABEL_106:
            v61[1] = nullptr;
            v53 = byte_EF875;
            v54 = v72;
            goto LABEL_107;
          }
          v91 = v64;
          v65 = v64 + 1;
          if ( (unsigned int)v61[2] >= v64 + 1 )
          {
            v51 = *v61;
            v52 = (int)v61;
          }
          else
          {
            v52 = (int)v61;
            v93 = v64 + 1;
            v51 = qvector_reserve(v52, *(void **)v52, v64 + 1, 1u);
            v65 = v93;
            *v61 = v51;
          }
          *(_DWORD *)(v52 + 4) = v65;
          memmove(v51, v62, v91);
          *(_BYTE *)(*(_DWORD *)v52 + v91) = 0;
          if ( *(_DWORD *)(v52 + 4) )
            v53 = *(char **)v52;
          else
            v53 = byte_EF875;
          v54 = v72;
          v55 = v83;
LABEL_107:
          v66 = 5 * v54;
          v55[5 * v54] = v53;
          v55[v66 + 1] = unpack_dd(a2, a2[1]);
          LOBYTE(v55[v66 + 2]) = unpack_dd(a2, a2[1]);
          BYTE1(v55[v66 + 2]) = unpack_dd(a2, a2[1]);
          v67 = unpack_dd(a2, a2[1]);
          if ( v67 && v67 <= *(_DWORD *)(a1 + 40) )
          {
            v68 = v83;
            v83[v66 + 3] = *(_DWORD *)(*v92 + 12 * v67 - 12);
          }
          else
          {
            v68 = v83;
            v83[v66 + 3] = 0;
          }
          v68[v66 + 4] = unpack_dq((unsigned __int8 **)a2, a2[1]) - 1;
          v50 = v78 + 1;
          v35 = a1;
        }
        while ( v78 + 1 != v86 );
      }
      if ( v88 )
        *(_DWORD *)(v35 + 48) = unpack_dd(a2, a2[1]);
    }
  }
  return __readgsdword(0x14u);
}
// 13ACD8: using guessed type __int64 qword_13ACD8;
