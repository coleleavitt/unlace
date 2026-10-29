/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: deserialize_dynamic_register_set
// Address: 0x00073E18

//----- (00073E18) --------------------------------------------------------
int __fastcall deserialize_dynamic_register_set(int a1, unsigned int *a2)
{
  _DWORD *v3; // r0
  char *v4; // r3
  unsigned int v5; // r4
  int i; // r6
  void *v7; // r0
  char *v8; // r7
  char *v9; // r5
  void *v10; // r0
  char *v11; // r3
  unsigned int v12; // r4
  int j; // r5
  void *v14; // r0
  char *v15; // r7
  char *v16; // r6
  unsigned int v17; // r1
  int v18; // r3
  void *v19; // r0
  char *v20; // r6
  int v21; // r1
  void *v22; // r0
  int v23; // r7
  unsigned int *v24; // r6
  const char *v25; // r3
  _BYTE *v26; // r1
  _BYTE *v27; // r2
  bool v28; // zf
  size_t v29; // r0
  const char *v30; // r1
  unsigned int v31; // r2
  unsigned int v32; // r5
  void **v33; // r1
  unsigned int v34; // r3
  int v35; // r0
  unsigned int v36; // r2
  void **v37; // r1
  unsigned int v38; // r5
  int v39; // r0
  unsigned int v40; // r2
  unsigned int *v41; // r6
  void **v42; // r0
  char *v43; // r3
  unsigned int v44; // r5
  char *v45; // r5
  char *v46; // r4
  unsigned int v47; // r7
  unsigned int k; // r5
  unsigned int v49; // r0
  _BYTE *v50; // r3
  char *v51; // r1
  _BYTE *v52; // r1
  int v53; // r1
  char *v54; // r0
  int v55; // r1
  char *v56; // r2
  char *v57; // r3
  unsigned int v58; // r0
  int v59; // r1
  char *v60; // r0
  int v61; // r7
  void *v62; // r0
  char *v63; // r0
  int v64; // r3
  unsigned int v65; // r2
  int v66; // r1
  int v67; // r5
  void *v68; // r0
  int v69; // r7
  unsigned int *v70; // r6
  _BYTE *v71; // r1
  _BYTE *v72; // r2
  size_t v73; // r0
  unsigned int v74; // r2
  unsigned int v75; // r5
  int v76; // r6
  char *v77; // r5
  unsigned int v78; // r0
  _BOOL4 v80; // [sp+8h] [bp-48h]
  size_t v81; // [sp+10h] [bp-40h]
  int v82; // [sp+14h] [bp-3Ch]
  size_t v83; // [sp+18h] [bp-38h]
  int v84; // [sp+18h] [bp-38h]
  void ***v85; // [sp+1Ch] [bp-34h]
  const char *v86; // [sp+20h] [bp-30h]
  unsigned int v87; // [sp+20h] [bp-30h]
  char *s; // [sp+24h] [bp-2Ch]
  char *sa; // [sp+24h] [bp-2Ch]
  char *sb; // [sp+24h] [bp-2Ch]
  char **v91; // [sp+28h] [bp-28h]
  unsigned int v92; // [sp+2Ch] [bp-24h]
  unsigned int v93; // [sp+2Ch] [bp-24h]
  void **v94; // [sp+2Ch] [bp-24h]
  int v95; // [sp+2Ch] [bp-24h]
  int v96; // [sp+30h] [bp-20h]
  _DWORD *v97; // [sp+30h] [bp-20h]
  void **v98; // [sp+34h] [bp-1Ch]
  unsigned int *v99; // [sp+38h] [bp-18h]
  char *v101; // [sp+40h] [bp-10h] BYREF
  unsigned int v102; // [sp+44h] [bp-Ch]
  int v103; // [sp+48h] [bp-8h]
  int v104; // [sp+4Ch] [bp-4h]

  if ( a1 )
  {
    v3 = *(_DWORD **)a1;
    if ( *(_DWORD *)a1 )
    {
      *(_DWORD *)(a1 + 4) = 0;
      qfree(v3);
      *(_DWORD *)(a1 + 8) = 0;
      *(_DWORD *)a1 = 0;
    }
    v4 = *(char **)(a1 + 12);
    v98 = (void **)(a1 + 12);
    v5 = 1;
    v99 = a2;
    if ( v4 )
    {
      v92 = *(_DWORD *)(a1 + 16);
      if ( v92 )
      {
        for ( i = 8; ; i += 12 )
        {
          v7 = *(void **)&v4[i - 8];
          v8 = &v4[i - 8];
          if ( v7 )
          {
            v9 = v4;
            *(_DWORD *)&v4[i - 4] = 0;
            qfree(v7);
            *(_DWORD *)v8 = 0;
            *(_DWORD *)&v9[i] = 0;
          }
          if ( v5 >= v92 )
            break;
          ++v5;
          v4 = (char *)*v98;
        }
        v4 = (char *)*v98;
        a2 = v99;
      }
      *(_DWORD *)(a1 + 16) = 0;
      qfree(v4);
      *(_DWORD *)(a1 + 20) = 0;
      *(_DWORD *)(a1 + 12) = 0;
    }
    v10 = *(void **)(a1 + 24);
    if ( v10 )
    {
      *(_DWORD *)(a1 + 28) = 0;
      qfree(v10);
      *(_DWORD *)(a1 + 32) = 0;
      *(_DWORD *)(a1 + 24) = 0;
    }
    v11 = *(char **)(a1 + 36);
    v91 = (char **)(a1 + 36);
    if ( v11 )
    {
      v93 = *(_DWORD *)(a1 + 40);
      if ( v93 )
      {
        v12 = 1;
        for ( j = 8; ; j += 12 )
        {
          v14 = *(void **)&v11[j - 8];
          v15 = &v11[j - 8];
          if ( v14 )
          {
            v16 = v11;
            *(_DWORD *)&v11[j - 4] = 0;
            qfree(v14);
            *(_DWORD *)v15 = 0;
            *(_DWORD *)&v16[j] = 0;
          }
          if ( v12 >= v93 )
            break;
          ++v12;
          v11 = *v91;
        }
        v11 = *v91;
        a2 = v99;
      }
      *(_DWORD *)(a1 + 40) = 0;
      qfree(v11);
      *(_DWORD *)(a1 + 44) = 0;
      *(_DWORD *)(a1 + 36) = 0;
    }
    v17 = a2[1];
    if ( *a2 < v17 )
    {
      s = (char *)unpack_dd(a2, v17);
      v80 = (unsigned int)s > 0xFFFFFEFF && (unsigned __int8)s != 0;
      if ( v80 )
        s = (char *)unpack_dd(a2, a2[1]);
      if ( s )
      {
        v85 = (void ***)(a1 + 24);
        v18 = 0;
        do
        {
          v21 = *(_DWORD *)(a1 + 16);
          v96 = v18;
          if ( *(_DWORD *)(a1 + 20) >= (unsigned int)(v21 + 1) )
          {
            v22 = *v98;
          }
          else
          {
            v22 = qvector_reserve((int)v98, *(void **)(a1 + 12), v21 + 1, 0xCu);
            *(_DWORD *)(a1 + 12) = v22;
            v21 = *(_DWORD *)(a1 + 16);
          }
          v23 = (int)v22 + 12 * v21;
          *(_DWORD *)(v23 + 8) = 0;
          *(_DWORD *)v23 = 0;
          v24 = (unsigned int *)(v23 + 4);
          *(_DWORD *)(v23 + 4) = 0;
          ++*(_DWORD *)(a1 + 16);
          v25 = (const char *)*v99;
          v26 = (_BYTE *)*v99;
          do
          {
            if ( (unsigned int)v26 >= v99[1] )
              goto LABEL_45;
            v27 = v26 + 1;
            v28 = *v26++ == 0;
          }
          while ( !v28 );
          *v99 = (unsigned int)v27;
          if ( !v25 || (v86 = v25, v29 = strlen(v25), v30 = v86, !v29) )
          {
LABEL_45:
            *v24 = 0;
            v20 = &byte_B3CBE;
            goto LABEL_46;
          }
          v83 = v29;
          v31 = v29 + 1;
          if ( *(_DWORD *)(v23 + 8) >= v29 + 1 )
          {
            v19 = *(void **)v23;
          }
          else
          {
            v32 = v29 + 1;
            v19 = qvector_reserve(v23, *(void **)v23, v31, 1u);
            v31 = v32;
            v30 = v86;
            *(_DWORD *)v23 = v19;
          }
          *v24 = v31;
          memmove(v19, v30, v83);
          *(_BYTE *)(*(_DWORD *)v23 + v83) = 0;
          if ( *v24 )
            v20 = *(char **)v23;
          else
            v20 = &byte_B3CBE;
LABEL_46:
          v101 = v20;
          v33 = *(void ***)(a1 + 24);
          v34 = *(_DWORD *)(a1 + 32);
          v35 = *(_DWORD *)(a1 + 28);
          v36 = v35 + 1;
          if ( v33 > (void **)&v101 || &v33[v34] <= (void **)&v101 )
          {
            if ( v34 < v36 )
            {
              v33 = (void **)qvector_reserve((int)v85, v33, v36, 4u);
              *(_DWORD *)(a1 + 24) = v33;
              v35 = *(_DWORD *)(a1 + 28);
              v20 = v101;
            }
          }
          else if ( v34 < v36 )
          {
            v33 = (void **)qvector_reserve((int)v85, v33, v36, 4u);
            *(_DWORD *)(a1 + 24) = v33;
            v35 = *(_DWORD *)(a1 + 28);
          }
          v33[v35] = v20;
          ++*(_DWORD *)(a1 + 28);
          v18 = v96 + 1;
        }
        while ( (char *)(v96 + 1) != s );
      }
      else
      {
        v85 = (void ***)(a1 + 24);
      }
      v101 = nullptr;
      v37 = *(void ***)(a1 + 24);
      v38 = *(_DWORD *)(a1 + 32);
      v39 = *(_DWORD *)(a1 + 28);
      v40 = v39 + 1;
      if ( v37 > (void **)&v101 || &v37[v38] <= (void **)&v101 )
      {
        v43 = nullptr;
        v41 = v99;
        if ( v38 < v40 )
        {
          v37 = (void **)qvector_reserve((int)v85, v37, v40, 4u);
          *v85 = v37;
          v39 = *(_DWORD *)(a1 + 28);
          v43 = v101;
        }
        v42 = &v37[v39];
      }
      else
      {
        v41 = v99;
        if ( v38 < v40 )
        {
          v37 = (void **)qvector_reserve((int)v85, v37, v40, 4u);
          *v85 = v37;
          v39 = *(_DWORD *)(a1 + 28);
        }
        v42 = &v37[v39];
        v43 = nullptr;
      }
      *v42 = v43;
      ++*(_DWORD *)(a1 + 28);
      v44 = unpack_dd(v41, v41[1]);
      sub_74404((int)v91, v44);
      v87 = v44;
      if ( v44 )
      {
        v45 = nullptr;
        do
        {
          v46 = *v91;
          v47 = unpack_dd(v41, v41[1]);
          v101 = nullptr;
          sa = v45;
          v94 = (void **)&v46[12 * (_DWORD)v45];
          sub_26B98(v94, v47, &v101);
          if ( v47 )
          {
            for ( k = 0; k < v47; ++k )
            {
              v49 = *v41;
              v50 = (_BYTE *)*v41;
              while ( 1 )
              {
                v51 = nullptr;
                if ( (unsigned int)v50 >= v41[1] )
                  break;
                v52 = v50 + 1;
                v28 = *v50++ == 0;
                if ( v28 )
                {
                  *v41 = (unsigned int)v52;
                  v51 = (char *)v49;
                  break;
                }
              }
              sub_1B09C((int)&v101, v51);
              if ( v102 >= 2 )
              {
                v53 = *(_DWORD *)(a1 + 16);
                if ( *(_DWORD *)(a1 + 20) >= (unsigned int)(v53 + 1) )
                {
                  v54 = (char *)*v98;
                }
                else
                {
                  v54 = (char *)qvector_reserve((int)v98, *v98, v53 + 1, 0xCu);
                  *(_DWORD *)(a1 + 12) = v54;
                  v53 = *(_DWORD *)(a1 + 16);
                }
                v55 = 12 * v53;
                *(_DWORD *)&v54[v55] = 0;
                v56 = &v54[v55];
                *((_DWORD *)v56 + 1) = 0;
                *((_DWORD *)v56 + 2) = 0;
                ++*(_DWORD *)(a1 + 16);
                v57 = *(char **)&v54[v55];
                *(_DWORD *)&v54[v55] = v101;
                v58 = *(_DWORD *)&v54[v55 + 4];
                *((_DWORD *)v56 + 1) = v102;
                v59 = *((_DWORD *)v56 + 2);
                *((_DWORD *)v56 + 2) = v103;
                v102 = v58;
                v101 = v57;
                v103 = v59;
                if ( *((_DWORD *)v56 + 1) )
                  v60 = *(char **)v56;
                else
                  v60 = &byte_B3CBE;
                v41 = v99;
                *((_DWORD *)*v94 + k) = v60;
              }
              if ( v101 )
              {
                v102 = 0;
                qfree(v101);
                v103 = 0;
                v101 = nullptr;
              }
            }
          }
          v45 = sa + 1;
        }
        while ( (unsigned int)(sa + 1) < v87 );
      }
      v84 = unpack_dd(v41, v41[1]);
      if ( v84 )
      {
        v61 = 0;
        do
        {
          v64 = *(_DWORD *)(a1 + 4);
          v65 = v64 + 1;
          if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v64 + 1) )
          {
            v97 = *(_DWORD **)a1;
          }
          else
          {
            v97 = qvector_reserve(a1, *(void **)a1, v65, 0x14u);
            *(_DWORD *)a1 = v97;
            v64 = *(_DWORD *)(a1 + 4);
            v65 = v64 + 1;
          }
          *(_DWORD *)(a1 + 4) = v65;
          v66 = *(_DWORD *)(a1 + 16);
          v95 = v61;
          if ( *(_DWORD *)(a1 + 20) >= (unsigned int)(v66 + 1) )
          {
            v68 = *v98;
          }
          else
          {
            v67 = v64;
            v68 = qvector_reserve((int)v98, *(void **)(a1 + 12), v66 + 1, 0xCu);
            v64 = v67;
            *(_DWORD *)(a1 + 12) = v68;
            v66 = *(_DWORD *)(a1 + 16);
          }
          v69 = (int)v68 + 12 * v66;
          *(_DWORD *)(v69 + 8) = 0;
          *(_DWORD *)v69 = 0;
          v70 = (unsigned int *)(v69 + 4);
          *(_DWORD *)(v69 + 4) = 0;
          ++*(_DWORD *)(a1 + 16);
          v71 = (_BYTE *)*v99;
          sb = (char *)*v99;
          do
          {
            if ( (unsigned int)v71 >= v99[1] )
              goto LABEL_103;
            v72 = v71 + 1;
            v28 = *v71++ == 0;
          }
          while ( !v28 );
          *v99 = (unsigned int)v72;
          if ( !sb || (v82 = v64, v73 = strlen(sb), v64 = v82, !v73) )
          {
LABEL_103:
            *v70 = 0;
            v63 = &byte_B3CBE;
            goto LABEL_104;
          }
          v81 = v73;
          v74 = v73 + 1;
          if ( *(_DWORD *)(v69 + 8) >= v73 + 1 )
          {
            v62 = *(void **)v69;
          }
          else
          {
            v75 = v73 + 1;
            v62 = qvector_reserve(v69, *(void **)v69, v74, 1u);
            v74 = v75;
            *(_DWORD *)v69 = v62;
          }
          *v70 = v74;
          memmove(v62, sb, v81);
          *(_BYTE *)(*(_DWORD *)v69 + v81) = 0;
          if ( *v70 )
            v63 = *(char **)v69;
          else
            v63 = &byte_B3CBE;
          v64 = v82;
LABEL_104:
          v76 = 5 * v64;
          v97[5 * v64] = v63;
          v77 = (char *)&v97[5 * v64];
          *((_DWORD *)v77 + 1) = unpack_dd(v99, v99[1]);
          v77[8] = unpack_dd(v99, v99[1]);
          v77[9] = unpack_dd(v99, v99[1]);
          v78 = unpack_dd(v99, v99[1]);
          if ( v78 && v78 <= *(_DWORD *)(a1 + 40) )
            v97[v76 + 3] = *(_DWORD *)&(*v91)[12 * v78 - 12];
          else
            *((_DWORD *)v77 + 3) = 0;
          v41 = v99;
          *((_DWORD *)v77 + 4) = unpack_dq(v99, v99[1]) - 1;
          v61 = v95 + 1;
        }
        while ( v95 + 1 != v84 );
      }
      if ( v80 )
        *(_DWORD *)(a1 + 48) = unpack_dd(v41, v41[1]);
    }
  }
  return _stack_chk_guard - v104;
}
// B3CBE: using guessed type char byte_B3CBE;
