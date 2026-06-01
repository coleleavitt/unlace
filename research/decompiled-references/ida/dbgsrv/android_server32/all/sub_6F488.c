/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6F488
// Address: 0x0006F488

//----- (0006F488) --------------------------------------------------------
int __fastcall sub_6F488(int a1, int a2, int a3)
{
  void *v5; // r0
  void *v6; // r0
  void *v7; // r0
  int v8; // r4
  int v9; // r1
  char *v10; // r6
  int v11; // r4
  int v12; // r1
  int v13; // r0
  char *v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r0
  char *v18; // r1
  int v19; // r2
  int v20; // r3
  char *v21; // r4
  unsigned int v22; // r7
  int i; // r6
  void *v24; // r0
  bool v25; // zf
  void **v26; // r6
  const char *v27; // r4
  char *v28; // r0
  const char *v29; // r3
  char *v30; // r6
  char *v31; // r0
  unsigned int v32; // r4
  unsigned int v33; // r1
  char *v34; // r0
  unsigned int v35; // r1
  void *v36; // r0
  char *v37; // r0
  unsigned int v38; // r2
  char *v39; // r4
  __int16 v40; // r3
  char *v41; // r0
  char *v42; // r4
  char *v43; // r1
  char *v44; // r6
  char *v45; // r0
  char **v46; // r7
  char *v47; // r0
  char *v48; // r0
  _DWORD *v49; // r1
  _DWORD *v50; // r2
  _DWORD *v51; // r3
  unsigned int v52; // r7
  int j; // r5
  void *v54; // r0
  int v56; // [sp+4h] [bp-4Ch]
  const char *v57; // [sp+4h] [bp-4Ch]
  __int16 v58; // [sp+4h] [bp-4Ch]
  __int16 v59; // [sp+4h] [bp-4Ch]
  unsigned int v60; // [sp+8h] [bp-48h]
  unsigned int v61; // [sp+8h] [bp-48h]
  int v62; // [sp+Ch] [bp-44h]
  char *v63; // [sp+Ch] [bp-44h]
  int v64; // [sp+10h] [bp-40h]
  int v65; // [sp+14h] [bp-3Ch]
  int v66; // [sp+18h] [bp-38h]
  void **v67; // [sp+1Ch] [bp-34h]
  void **v68; // [sp+1Ch] [bp-34h]
  unsigned int v69; // [sp+20h] [bp-30h]
  char **v70; // [sp+20h] [bp-30h]
  unsigned int v71; // [sp+20h] [bp-30h]
  char *endptr; // [sp+24h] [bp-2Ch] BYREF
  unsigned int v73; // [sp+28h] [bp-28h]
  int v74; // [sp+2Ch] [bp-24h]
  char *v75; // [sp+30h] [bp-20h] BYREF
  unsigned int v76; // [sp+34h] [bp-1Ch]
  int v77; // [sp+38h] [bp-18h]
  int v78; // [sp+3Ch] [bp-14h] BYREF
  unsigned int v79; // [sp+40h] [bp-10h]
  int v80; // [sp+44h] [bp-Ch]
  char v81[4]; // [sp+48h] [bp-8h] BYREF

  if ( !(a3 << 31) )
  {
    v5 = *(void **)a1;
    if ( *(_DWORD *)a1 )
    {
      *(_DWORD *)(a1 + 4) = 0;
      qfree(v5);
      *(_DWORD *)(a1 + 8) = 0;
      *(_DWORD *)a1 = 0;
    }
    *(_WORD *)(a1 + 12) = 0;
    v6 = *(void **)(a1 + 16);
    if ( v6 )
    {
      *(_DWORD *)(a1 + 20) = 0;
      qfree(v6);
      *(_DWORD *)(a1 + 24) = 0;
      *(_DWORD *)(a1 + 16) = 0;
    }
    v7 = *(void **)(a1 + 28);
    if ( v7 )
    {
      *(_DWORD *)(a1 + 32) = 0;
      qfree(v7);
      *(_DWORD *)(a1 + 36) = 0;
      *(_DWORD *)(a1 + 28) = 0;
    }
  }
  v8 = 0;
  if ( *(_DWORD *)(a2 + 4) >= 2u )
  {
    v65 = a1;
    v79 = 0;
    v78 = 0;
    v80 = 0;
    sub_6F968(a2, (int)&v78, "@", 0);
    if ( v79 > 2 )
    {
      v8 = 0;
      goto LABEL_78;
    }
    v9 = 0;
    if ( v79 == 2 )
    {
      v10 = (char *)v78;
      v8 = 0;
      if ( *(_DWORD *)(v78 + 4) < 2u )
        goto LABEL_79;
      v11 = 0;
      v76 = 0;
      v75 = nullptr;
      v77 = 0;
      sub_6F968(v78, (int)&v75, ":", 0);
      v12 = 1;
      if ( v76 <= 2 )
      {
        v13 = *(_DWORD *)(a1 + 16);
        v14 = v75;
        *(_DWORD *)(a1 + 16) = *(_DWORD *)v75;
        v15 = *(_DWORD *)(a1 + 20);
        *(_DWORD *)(a1 + 20) = *((_DWORD *)v14 + 1);
        v16 = *(_DWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 24) = *((_DWORD *)v14 + 2);
        *(_DWORD *)v14 = v13;
        *((_DWORD *)v14 + 1) = v15;
        *((_DWORD *)v14 + 2) = v16;
        v12 = 0;
        v11 = 1;
        if ( v76 == 2 )
        {
          v17 = *(_DWORD *)(a1 + 28);
          v18 = v75;
          *(_DWORD *)(a1 + 28) = *((_DWORD *)v75 + 3);
          v19 = *(_DWORD *)(a1 + 32);
          *(_DWORD *)(a1 + 32) = *((_DWORD *)v18 + 4);
          v20 = *(_DWORD *)(a1 + 36);
          *(_DWORD *)(a1 + 36) = *((_DWORD *)v18 + 5);
          v18 += 12;
          *(_DWORD *)v18 = v17;
          *((_DWORD *)v18 + 1) = v19;
          *((_DWORD *)v18 + 2) = v20;
          v12 = 0;
          v11 = 1;
        }
      }
      v62 = v11;
      v21 = v75;
      if ( v75 )
      {
        v69 = v76;
        v56 = v12;
        if ( v76 )
        {
          v22 = 1;
          for ( i = 8; ; i += 12 )
          {
            v24 = *(void **)&v21[i - 8];
            if ( v24 )
            {
              *(_DWORD *)&v21[i - 4] = 0;
              qfree(v24);
              *(_DWORD *)&v21[i - 8] = 0;
              *(_DWORD *)&v21[i] = 0;
            }
            if ( v22 >= v69 )
              break;
            ++v22;
            v21 = v75;
          }
          v21 = v75;
        }
        v76 = 0;
        qfree(v21);
        v77 = 0;
        v75 = nullptr;
        v12 = v56;
      }
      v8 = 0;
      v25 = v12 == 0;
      v9 = v62;
      if ( !v25 )
      {
LABEL_78:
        v10 = (char *)v78;
LABEL_79:
        if ( v10 )
        {
          v71 = v79;
          if ( v79 )
          {
            v52 = 1;
            for ( j = 8; ; j += 12 )
            {
              v54 = *(void **)&v10[j - 8];
              if ( v54 )
              {
                *(_DWORD *)&v10[j - 4] = 0;
                qfree(v54);
                *(_DWORD *)&v10[j - 8] = 0;
                *(_DWORD *)&v10[j] = 0;
              }
              if ( v52 >= v71 )
                break;
              ++v52;
              v10 = (char *)v78;
            }
            v10 = (char *)v78;
          }
          v79 = 0;
          qfree(v10);
          v80 = 0;
          v78 = 0;
        }
        return v8;
      }
    }
    v76 = 0;
    v75 = nullptr;
    v77 = 0;
    v66 = 12 * v9;
    v64 = v78;
    v26 = (void **)(v78 + 12 * v9);
    v70 = (char **)(v26 + 1);
    if ( v26[1] )
      v27 = (const char *)*v26;
    else
      v27 = &byte_B3CBE;
    if ( *v27 == 91 )
    {
      v28 = strchr(v27, 93);
      v29 = v27;
      v8 = 0;
      if ( !v28 || v28 == v29 + 1 )
        goto LABEL_78;
      v67 = v26;
      v30 = (char *)(v28 - v29);
      sub_266B8(&endptr, v29 + 1, v28 - v29 - 1);
      v31 = endptr;
      v32 = 0;
      endptr = nullptr;
      v33 = v73;
      v73 = 0;
      v63 = v31;
      v75 = v31;
      v60 = v33;
      v76 = v33;
      v77 = v74;
      v34 = *v70;
      v35 = (unsigned int)(*v70 - 1);
      if ( !*v70 )
        v35 = 0;
      if ( v30 && v35 )
      {
        if ( v35 > (unsigned int)v30 )
        {
          v32 = v35 - (_DWORD)v30;
          memmove(*v67, &v30[(_DWORD)*v67], v35 - (_DWORD)v30);
        }
        if ( *(_DWORD *)(v64 + v66 + 8) >= v32 + 1 )
        {
          v36 = *v67;
        }
        else
        {
          v36 = qvector_reserve((int)v67, *v67, v32 + 1, 1u);
          *v67 = v36;
        }
        *v70 = (char *)(v32 + 1);
        *((_BYTE *)v36 + v32) = 0;
        v34 = *v70;
      }
      if ( v34 )
      {
        v26 = v67;
        v27 = (const char *)*v67;
      }
      else
      {
        v27 = &byte_B3CBE;
        v26 = v67;
      }
      v38 = v60;
      v37 = (char *)v27;
      if ( *v27 != 58 )
        goto LABEL_74;
    }
    else
    {
      if ( !strncasecmp(v27, "::ffff:", 7u) && strchr(v27, 46) )
        v27 += 7;
      v37 = strchr(v27, 58);
      v63 = nullptr;
      v38 = 0;
    }
    if ( !v37 )
    {
LABEL_74:
      if ( v38 >= 2 )
        v26 = (void **)&v75;
      v49 = *(_DWORD **)v65;
      *(_DWORD *)v65 = *v26;
      v50 = *(_DWORD **)(v65 + 4);
      *(_DWORD *)(v65 + 4) = v26[1];
      v51 = *(_DWORD **)(v65 + 8);
      *(_DWORD *)(v65 + 8) = v26[2];
      *v26 = v49;
      v26[1] = v50;
      v26[2] = v51;
      v8 = 1;
      v47 = v75;
      if ( !v75 )
        goto LABEL_78;
LABEL_77:
      v76 = 0;
      qfree(v47);
      v77 = 0;
      v75 = nullptr;
      goto LABEL_78;
    }
    v57 = v27;
    v61 = v38;
    v68 = v26;
    v39 = v37 + 1;
    v40 = strtoul(v37 + 1, &endptr, 10);
    v41 = endptr;
    if ( v39 == endptr )
    {
LABEL_56:
      v8 = 0;
      v47 = v63;
      if ( !v63 )
        goto LABEL_78;
      goto LABEL_77;
    }
    while ( *v41 == 32 )
      ++v41;
    if ( *v41 )
    {
      endptr = v41;
      goto LABEL_56;
    }
    endptr = v41;
    v42 = &v39[~(unsigned int)v57];
    if ( !v42 )
    {
      v48 = (char *)*v26;
      if ( *v26 )
      {
        v59 = v40;
        *v70 = nullptr;
        qfree(v48);
        *v26 = nullptr;
        *(_DWORD *)(v64 + v66 + 8) = 0;
        v40 = v59;
      }
      goto LABEL_73;
    }
    v43 = *v70;
    v44 = v42 + 1;
    if ( *v70 >= v42 + 1 )
    {
      if ( *v70 == v42 + 1 )
      {
LABEL_72:
        v26 = v68;
        v42[(_DWORD)*v68] = 0;
LABEL_73:
        *(_WORD *)(v65 + 12) = v40;
        v38 = v61;
        goto LABEL_74;
      }
      v58 = v40;
      v81[0] = 0;
      sub_37884(v68, (unsigned int)(v42 + 1), v81);
    }
    else
    {
      v58 = v40;
      if ( *(_DWORD *)(v64 + v66 + 8) >= (unsigned int)v44 )
      {
        v45 = (char *)*v68;
        v46 = v70;
      }
      else
      {
        v45 = (char *)qvector_reserve((int)v68, *v68, (unsigned int)(v42 + 1), 1u);
        *v68 = v45;
        v46 = v70;
        v43 = *v70;
      }
      memset(&v43[(_DWORD)v45], 0, v44 - v43);
      *v46 = v44;
    }
    v40 = v58;
    goto LABEL_72;
  }
  return v8;
}
// B3CBE: using guessed type char byte_B3CBE;
