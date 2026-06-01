/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6DA68
// Address: 0x0006DA68

//----- (0006DA68) --------------------------------------------------------
void __fastcall sub_6DA68(__int64 *a1, int *a2, unsigned int a3)
{
  unsigned int v5; // r4
  char *v6; // r0
  const char *v7; // r2
  char *v8; // r4
  unsigned int v9; // r3
  int v10; // r5
  int v11; // r8
  char *v12; // r1
  int v13; // r2
  void **v14; // r4
  unsigned int v15; // r3
  int v16; // r6
  size_t v17; // r6
  void *v18; // r3
  int v19; // r9
  size_t v20; // r10
  void *v21; // r1
  void *v22; // r6
  int v23; // r9
  unsigned int v24; // r6
  void *v25; // r1
  int v26; // r6
  size_t v27; // r6
  void *v28; // r3
  size_t v29; // r10
  unsigned int v30; // r9
  void *v31; // r1
  const void **v32; // r6
  int v33; // r1
  const void **v34; // r1
  const void **v35; // r5
  const void *v36; // r3
  unsigned int v37; // r3
  void *v38; // r1
  const void *v39; // r7
  size_t v40; // r7
  size_t v41; // r9
  unsigned int v42; // r4
  int v43; // r3
  __int64 v44; // kr18_8
  unsigned int v45; // r2
  char *v46; // r3
  unsigned int v47; // r6
  int v48; // r4
  int v49; // r5
  void *v50; // r0
  char *v51; // r3
  void *v52; // r0
  unsigned int v53; // [sp+4h] [bp-30h]
  int v54; // [sp+4h] [bp-30h]
  unsigned int v55; // [sp+4h] [bp-30h]
  void *ptr; // [sp+14h] [bp-20h] BYREF
  unsigned int v57; // [sp+18h] [bp-1Ch]
  unsigned int v58; // [sp+1Ch] [bp-18h]
  __int64 v59; // [sp+20h] [bp-14h] BYREF
  unsigned int v60; // [sp+28h] [bp-Ch]

  v5 = a3;
  ptr = nullptr;
  v57 = 0;
  v58 = 0;
  if ( !a3 )
  {
    v10 = *a2;
    v11 = *a2 + 24 * a2[1];
    if ( v11 == *a2 )
    {
      v37 = 0;
      v38 = nullptr;
      goto LABEL_46;
    }
    while ( 1 )
    {
LABEL_5:
      v12 = (char *)ptr;
      if ( v5 + 1 > v58 )
      {
        v12 = (char *)sub_78018((int)&ptr, ptr, v5 + 1, 0xCu);
        v5 = v57;
        ptr = v12;
      }
      v13 = 3 * v5;
      v14 = (void **)&v12[12 * v5];
      *(_DWORD *)&v12[4 * v13] = 0;
      v14[1] = nullptr;
      v15 = v57;
      v14[2] = nullptr;
      v57 = v15 + 1;
      v16 = *(_DWORD *)(v10 + 4);
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v14[1];
          v19 = (int)v18 - 1;
          v20 = (size_t)v18 + v17 - 1;
          if ( !v18 )
          {
            v19 = 0;
            v20 = v17;
          }
          v21 = *v14;
          v53 = v20 + 1;
          if ( v20 != -1 )
          {
            v21 = sub_78018((int)v14, v21, v53, 1u);
            *v14 = v21;
          }
          v14[1] = (void *)v53;
          *((_BYTE *)v21 + v20) = 0;
          memcpy((char *)*v14 + v19, *(const void **)v10, v17);
        }
      }
      if ( *(_DWORD *)(v10 + 16) <= 1u )
        goto LABEL_4;
      v22 = v14[1];
      if ( v22 )
      {
        v23 = (int)v22 - 1;
        v24 = (unsigned int)v22 + 1;
        v25 = *v14;
        if ( v24 <= (unsigned int)v14[2] )
          goto LABEL_17;
      }
      else
      {
        v23 = 0;
        v24 = 2;
        v25 = *v14;
        if ( (unsigned int)v14[2] >= 2 )
          goto LABEL_17;
      }
      v25 = sub_78018((int)v14, v25, v24, 1u);
      *v14 = v25;
LABEL_17:
      v14[1] = (void *)v24;
      *((_BYTE *)v25 + v23) = 61;
      *((_BYTE *)*v14 + v23 + 1) = 0;
      v26 = *(_DWORD *)(v10 + 16);
      if ( v26 && (v27 = v26 - 1) != 0 )
      {
        v28 = v14[1];
        if ( v28 )
        {
          v43 = (int)v28 - 1;
          v31 = *v14;
          v29 = v27 + v43;
          v54 = v43;
          v30 = v27 + v43 + 1;
          if ( v30 > (unsigned int)v14[2] )
          {
LABEL_43:
            v31 = sub_78018((int)v14, v31, v30, 1u);
            *v14 = v31;
          }
        }
        else
        {
          v54 = 0;
          v29 = v27;
          v30 = v27 + 1;
          v31 = *v14;
          if ( v27 + 1 > (unsigned int)v14[2] )
            goto LABEL_43;
        }
        v14[1] = (void *)v30;
        *((_BYTE *)v31 + v29) = 0;
        v10 += 24;
        memcpy((char *)*v14 + v54, *(const void **)(v10 - 12), v27);
        v5 = v57;
        if ( v11 == v10 )
          goto LABEL_22;
      }
      else
      {
LABEL_4:
        v10 += 24;
        v5 = v57;
        if ( v11 == v10 )
          goto LABEL_22;
      }
    }
  }
  v6 = (char *)sub_78018((int)&ptr, nullptr, 1u, 0xCu);
  v7 = (const char *)v5;
  ptr = v6;
  v8 = &v6[12 * v57];
  *(_DWORD *)v8 = 0;
  *((_DWORD *)v8 + 1) = 0;
  v9 = v57;
  *((_DWORD *)v8 + 2) = 0;
  v57 = v9 + 1;
  sub_188E0((int)v8, "-O%s", v7);
  v10 = *a2;
  v5 = v57;
  v11 = *a2 + 24 * a2[1];
  if ( *a2 != v11 )
    goto LABEL_5;
LABEL_22:
  v59 = 0;
  v60 = 0;
  if ( !v5 )
    goto LABEL_45;
  v32 = (const void **)ptr;
  v33 = 3 * v5--;
  v34 = (const void **)((char *)ptr + 4 * v33);
  if ( ptr != v34 )
  {
    v35 = (const void **)ptr;
    do
    {
      v36 = v35[1];
      if ( v36 )
        v5 = (unsigned int)v36 + v5 - 1;
      v35 += 3;
    }
    while ( v34 != v35 );
    v37 = v5;
    v38 = (void *)v5;
    if ( !v5 )
    {
      while ( 1 )
      {
LABEL_37:
        if ( v5 > 1 )
        {
          if ( v5 + 1 > v37 )
          {
            v38 = sub_78018((int)&v59, v38, v5 + 1, 1u);
            LODWORD(v59) = v38;
          }
          HIDWORD(v59) = v5 + 1;
          *((_BYTE *)v38 + v5) = 0;
          *(_BYTE *)(v59 + v5 - 1) = 58;
          v5 = HIDWORD(v59);
          v38 = (void *)v59;
          v37 = v60;
        }
        v39 = v32[1];
        if ( !v39 )
          goto LABEL_36;
        v40 = (size_t)v39 - 1;
        if ( !v40 )
          goto LABEL_36;
        if ( v5 )
        {
          v41 = v40 + v5 - 1;
          v55 = v5 - 1;
          v42 = v40 + v5;
          if ( v42 > v37 )
            goto LABEL_59;
        }
        else
        {
          v41 = v40;
          v55 = 0;
          v42 = v40 + 1;
          if ( v40 + 1 > v37 )
          {
LABEL_59:
            v38 = sub_78018((int)&v59, v38, v42, 1u);
            LODWORD(v59) = v38;
          }
        }
        HIDWORD(v59) = v42;
        *((_BYTE *)v38 + v41) = 0;
        memcpy((void *)(v59 + v55), *v32, v40);
        v5 = HIDWORD(v59);
        v38 = (void *)v59;
        v37 = v60;
LABEL_36:
        v32 += 3;
        if ( v35 == v32 )
          goto LABEL_46;
      }
    }
    goto LABEL_60;
  }
  if ( !v5 )
  {
LABEL_45:
    v37 = v5;
    v38 = (void *)v5;
    goto LABEL_46;
  }
LABEL_60:
  v52 = sub_78018((int)&v59, nullptr, v5, 1u);
  v32 = (const void **)ptr;
  v38 = v52;
  LODWORD(v59) = v52;
  v5 = HIDWORD(v59);
  v37 = v60;
  v35 = (const void **)((char *)ptr + 12 * v57);
  if ( ptr != v35 )
    goto LABEL_37;
LABEL_46:
  v44 = *a1;
  v45 = *((_DWORD *)a1 + 2);
  *(_DWORD *)a1 = v38;
  v59 = v44;
  *((_DWORD *)a1 + 1) = v5;
  v60 = v45;
  *((_DWORD *)a1 + 2) = v37;
  if ( (_DWORD)v44 )
  {
    HIDWORD(v59) = 0;
    sub_77F70((void *)v44);
  }
  v46 = (char *)ptr;
  if ( ptr )
  {
    v47 = v57;
    if ( v57 )
    {
      v48 = 0;
      v49 = 0;
      do
      {
        v50 = *(void **)&v46[v48];
        v51 = &v46[v48];
        if ( v50 )
        {
          *((_DWORD *)v51 + 1) = 0;
          sub_77F70(v50);
        }
        ++v49;
        v48 += 12;
        v46 = (char *)ptr;
      }
      while ( v47 != v49 );
    }
    v57 = 0;
    sub_77F70(v46);
  }
}
