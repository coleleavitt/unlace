/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_99360
// Address: 0x00099360

//----- (00099360) --------------------------------------------------------
int __cdecl sub_99360(int a1, int a2, char a3)
{
  int v3; // edi
  void *v4; // eax
  void *v5; // eax
  void *v6; // eax
  char *v7; // ecx
  int v8; // eax
  _DWORD *v9; // eax
  int v10; // esi
  _DWORD *v11; // eax
  int v12; // edx
  int v13; // esi
  char *v14; // esi
  unsigned int v15; // ecx
  int i; // edi
  void *v17; // eax
  char *v18; // esi
  char *v19; // eax
  unsigned int v20; // esi
  char *v21; // edx
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // edi
  void **v25; // ecx
  size_t v26; // esi
  bool v27; // cc
  size_t v28; // edi
  void *v29; // eax
  char *v30; // eax
  unsigned int v31; // ecx
  int *v32; // edx
  __int16 v33; // ax
  char *v34; // edx
  char *v35; // ecx
  unsigned int v36; // esi
  char *v37; // edx
  unsigned int v38; // ecx
  char *v39; // eax
  char *v40; // eax
  void *v41; // eax
  char *v42; // eax
  char *v43; // ecx
  int *v44; // eax
  int v45; // edx
  int v46; // esi
  unsigned int v47; // edi
  int j; // esi
  void *v49; // eax
  char *v50; // edi
  void *v52; // [esp+4h] [ebp-78h]
  int v53; // [esp+18h] [ebp-64h]
  unsigned int *v54; // [esp+18h] [ebp-64h]
  int v55; // [esp+1Ch] [ebp-60h]
  unsigned int v56; // [esp+1Ch] [ebp-60h]
  void **v57; // [esp+1Ch] [ebp-60h]
  unsigned int v58; // [esp+1Ch] [ebp-60h]
  int v59; // [esp+20h] [ebp-5Ch]
  int v60; // [esp+20h] [ebp-5Ch]
  unsigned int v61; // [esp+20h] [ebp-5Ch]
  int v62; // [esp+20h] [ebp-5Ch]
  int v63; // [esp+20h] [ebp-5Ch]
  unsigned int v64; // [esp+20h] [ebp-5Ch]
  unsigned int v65; // [esp+24h] [ebp-58h]
  char *v66; // [esp+24h] [ebp-58h]
  char *v67; // [esp+24h] [ebp-58h]
  int v68; // [esp+28h] [ebp-54h]
  int v69; // [esp+28h] [ebp-54h]
  unsigned int v70; // [esp+2Ch] [ebp-50h]
  unsigned int v71; // [esp+2Ch] [ebp-50h]
  char *v72; // [esp+30h] [ebp-4Ch]
  __int16 v73; // [esp+34h] [ebp-48h]
  char *endptr; // [esp+38h] [ebp-44h] BYREF
  unsigned int v75; // [esp+3Ch] [ebp-40h]
  int v76; // [esp+40h] [ebp-3Ch]
  int v77; // [esp+48h] [ebp-34h] BYREF
  unsigned int v78; // [esp+4Ch] [ebp-30h]
  int v79; // [esp+50h] [ebp-2Ch]
  int v80; // [esp+58h] [ebp-24h] BYREF
  unsigned int v81; // [esp+5Ch] [ebp-20h]
  int v82; // [esp+60h] [ebp-1Ch]
  char v83; // [esp+67h] [ebp-15h] BYREF
  unsigned int v84; // [esp+68h] [ebp-14h]

  v3 = a1;
  v84 = __readgsdword(0x14u);
  if ( (a3 & 1) == 0 )
  {
    v4 = *(void **)a1;
    if ( *(_DWORD *)a1 )
    {
      *(_DWORD *)(a1 + 4) = 0;
      qfree(v4);
      *(_DWORD *)a1 = 0;
      *(_DWORD *)(a1 + 8) = 0;
    }
    *(_WORD *)(a1 + 12) = 0;
    v5 = *(void **)(a1 + 16);
    if ( v5 )
    {
      *(_DWORD *)(a1 + 20) = 0;
      qfree(v5);
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 24) = 0;
    }
    v6 = *(void **)(a1 + 28);
    if ( v6 )
    {
      *(_DWORD *)(a1 + 32) = 0;
      qfree(v6);
      *(_DWORD *)(a1 + 28) = 0;
      *(_DWORD *)(a1 + 36) = 0;
    }
  }
  if ( *(_DWORD *)(a2 + 4) < 2u )
    return 0;
  v80 = 0;
  v81 = 0;
  v82 = 0;
  sub_99BE0(a2, (int)&v80, "@", 0);
  v53 = 0;
  if ( v81 > 2 )
    goto LABEL_81;
  if ( v81 != 2 )
  {
LABEL_29:
    v77 = 0;
    v78 = 0;
    v79 = 0;
    v62 = 3 * v53;
    if ( *(_DWORD *)(v80 + 12 * v53 + 4) )
      v18 = *(char **)(v80 + 12 * v53);
    else
      v18 = byte_EF875;
    v57 = (void **)(v80 + 12 * v53);
    v69 = v80;
    v54 = (unsigned int *)(v57 + 1);
    if ( *v18 != 91 )
    {
      if ( !strncasecmp(v18, "::ffff:", 7u) && strchr(v18, 46) )
        v18 += 7;
      v72 = nullptr;
      v30 = strchr(v18, 58);
      v31 = 0;
      v32 = (int *)v57;
      goto LABEL_48;
    }
    v19 = strchr(v18, 93);
    if ( v19 && v19 != v18 + 1 )
    {
      v52 = v18 + 1;
      v20 = v19 - v18;
      sub_2DCA0(&endptr, v52, v20 - 1);
      v21 = endptr;
      v22 = v75;
      endptr = nullptr;
      v75 = 0;
      v77 = (int)v21;
      v70 = v22;
      v78 = v22;
      v79 = v76;
      v23 = *v54;
      v24 = *v54 - 1;
      if ( !*v54 )
        v24 = 0;
      v65 = v20;
      v25 = v57;
      v72 = v21;
      if ( v20 && v24 )
      {
        v26 = 0;
        v27 = v24 <= v65;
        v28 = v24 - v65;
        if ( !v27 )
        {
          memmove(*v57, (char *)*v57 + v65, v28);
          v25 = v57;
          v26 = v28;
        }
        if ( *(_DWORD *)(v69 + 4 * v62 + 8) >= v26 + 1 )
        {
          v29 = *v25;
        }
        else
        {
          v29 = qvector_reserve((int)v25, *v25, v26 + 1, 1u);
          v25 = v57;
          *v57 = v29;
        }
        *v54 = v26 + 1;
        *((_BYTE *)v29 + v26) = 0;
        v23 = *v54;
      }
      v32 = (int *)v25;
      if ( v23 )
        v18 = (char *)*v25;
      else
        v18 = byte_EF875;
      v3 = a1;
      v31 = v70;
      v30 = v18;
      if ( *v18 != 58 )
      {
LABEL_77:
        v44 = &v77;
        if ( v31 < 2 )
          v44 = v32;
        v63 = *(_DWORD *)v3;
        v45 = *(_DWORD *)(v3 + 4);
        v46 = *(_DWORD *)(v3 + 8);
        *(_DWORD *)v3 = *v44;
        *(_DWORD *)(v3 + 4) = v44[1];
        *(_DWORD *)(v3 + 8) = v44[2];
        *v44 = v63;
        v44[1] = v45;
        v44[2] = v46;
        LOBYTE(v44) = 1;
        v53 = (int)v44;
        v40 = (char *)v77;
        if ( v77 )
          goto LABEL_80;
        goto LABEL_81;
      }
LABEL_48:
      if ( !v30 )
        goto LABEL_77;
      v71 = v31;
      v66 = v30 + 1;
      v33 = strtoul(v30 + 1, &endptr, 10);
      v34 = endptr;
      if ( v66 != endptr )
      {
        v73 = v33;
        while ( *v34 == 32 )
          ++v34;
        if ( !*v34 )
        {
          endptr = v34;
          v35 = &v66[~(unsigned int)v18];
          if ( !v35 )
          {
            v32 = (int *)v57;
            v41 = *v57;
            if ( *v57 )
            {
              *v54 = 0;
              qfree(v41);
              *v57 = nullptr;
              *(_DWORD *)(v69 + 4 * v62 + 8) = 0;
              v32 = (int *)v57;
            }
            goto LABEL_76;
          }
          v36 = (unsigned int)(v35 + 1);
          v37 = v35;
          v38 = *v54;
          if ( *v54 >= v36 )
          {
            v42 = v37;
            v32 = (int *)v57;
            v43 = v42;
            if ( *v54 == v36 )
            {
LABEL_75:
              v43[*v32] = 0;
LABEL_76:
              *(_WORD *)(v3 + 12) = v73;
              v31 = v71;
              goto LABEL_77;
            }
            v67 = v42;
            v83 = 0;
            sub_44400((char **)v57, v36, &v83);
          }
          else
          {
            v67 = v37;
            if ( *(_DWORD *)(v69 + 4 * v62 + 8) >= v36 )
            {
              v39 = (char *)*v57;
            }
            else
            {
              v39 = (char *)qvector_reserve((int)v57, *v57, v36, 1u);
              *v57 = v39;
              v38 = *v54;
            }
            memset(&v39[v38], 0, v36 - v38);
            *v54 = v36;
          }
          v32 = (int *)v57;
          v43 = v67;
          goto LABEL_75;
        }
        endptr = v34;
      }
      v53 = 0;
      v40 = v72;
      if ( v72 )
      {
LABEL_80:
        v78 = 0;
        qfree(v40);
        v77 = 0;
        v79 = 0;
      }
LABEL_81:
      v7 = (char *)v80;
      if ( !v80 )
        return v53;
      goto LABEL_82;
    }
LABEL_43:
    v53 = 0;
    goto LABEL_81;
  }
  v7 = (char *)v80;
  if ( *(_DWORD *)(v80 + 4) >= 2u )
  {
    v77 = 0;
    v78 = 0;
    v79 = 0;
    sub_99BE0(v80, (int)&v77, ":", 0);
    if ( v78 <= 2 )
    {
      v9 = (_DWORD *)v77;
      v59 = *(_DWORD *)(a1 + 16);
      v55 = *(_DWORD *)(a1 + 20);
      v10 = *(_DWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 16) = *(_DWORD *)v77;
      *(_DWORD *)(a1 + 20) = v9[1];
      *(_DWORD *)(a1 + 24) = v9[2];
      *v9 = v59;
      v9[1] = v55;
      v9[2] = v10;
      v8 = 0;
      v53 = 1;
      if ( v78 == 2 )
      {
        v11 = (_DWORD *)v77;
        v60 = *(_DWORD *)(a1 + 28);
        v12 = *(_DWORD *)(a1 + 32);
        v13 = *(_DWORD *)(a1 + 36);
        *(_DWORD *)(a1 + 28) = *(_DWORD *)(v77 + 12);
        *(_DWORD *)(a1 + 32) = v11[4];
        *(_DWORD *)(a1 + 36) = v11[5];
        v11[3] = v60;
        v11[4] = v12;
        v11[5] = v13;
        v8 = 0;
      }
    }
    else
    {
      v8 = 1;
      v53 = 0;
    }
    v14 = (char *)v77;
    if ( v77 )
    {
      v56 = v78;
      v68 = v8;
      if ( v78 )
      {
        v15 = 1;
        for ( i = 0; ; i += 12 )
        {
          v17 = *(void **)&v14[i];
          if ( v17 )
          {
            v61 = v15;
            *(_DWORD *)&v14[i + 4] = 0;
            qfree(v17);
            *(_DWORD *)&v14[i] = 0;
            *(_DWORD *)&v14[i + 8] = 0;
            v15 = v61;
          }
          if ( v15 >= v56 )
            break;
          v14 = (char *)v77;
          ++v15;
        }
        v14 = (char *)v77;
        v3 = a1;
      }
      v78 = 0;
      qfree(v14);
      v77 = 0;
      v79 = 0;
      v8 = v68;
    }
    if ( v8 )
      goto LABEL_43;
    goto LABEL_29;
  }
  v53 = 0;
  if ( !v80 )
    return v53;
LABEL_82:
  v58 = v81;
  if ( v81 )
  {
    v47 = 1;
    for ( j = 0; ; j += 12 )
    {
      v49 = *(void **)&v7[j];
      if ( v49 )
      {
        v64 = v47;
        *(_DWORD *)&v7[j + 4] = 0;
        v50 = v7;
        qfree(v49);
        *(_DWORD *)&v50[j] = 0;
        *(_DWORD *)&v50[j + 8] = 0;
        v47 = v64;
      }
      if ( v47 >= v58 )
        break;
      v7 = (char *)v80;
      ++v47;
    }
    v7 = (char *)v80;
  }
  v81 = 0;
  qfree(v7);
  v80 = 0;
  v82 = 0;
  return v53;
}
