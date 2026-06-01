/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9E5B0
// Address: 0x0009E5B0

//----- (0009E5B0) --------------------------------------------------------
int __cdecl sub_9E5B0(unsigned int *a1, int a2, int a3)
{
  int v3; // ecx
  char *v4; // edi
  char *v5; // edi
  unsigned int v6; // edi
  void *v7; // eax
  int v8; // eax
  _DWORD *v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // edx
  int v12; // ecx
  char *v13; // eax
  unsigned int v14; // esi
  int v15; // edx
  unsigned int v16; // ecx
  int v17; // ecx
  int *v18; // eax
  char *v19; // eax
  int *v20; // ecx
  bool v21; // cf
  bool v22; // zf
  unsigned int v23; // ecx
  unsigned int v24; // esi
  int *v25; // eax
  int v26; // edx
  unsigned int v27; // esi
  void *v28; // eax
  int errdesc; // eax
  int v31; // [esp+4h] [ebp-48h]
  void *v32; // [esp+4h] [ebp-48h]
  FILE *v33; // [esp+8h] [ebp-44h]
  int v34; // [esp+Ch] [ebp-40h]
  int v35; // [esp+10h] [ebp-3Ch] BYREF
  const char *v36; // [esp+14h] [ebp-38h]
  int v37; // [esp+18h] [ebp-34h] BYREF
  unsigned int v38; // [esp+1Ch] [ebp-30h]
  unsigned int v39; // [esp+20h] [ebp-2Ch]
  int v40; // [esp+28h] [ebp-24h] BYREF
  unsigned int v41; // [esp+2Ch] [ebp-20h]
  unsigned int v42; // [esp+30h] [ebp-1Ch]
  unsigned int v43; // [esp+38h] [ebp-14h]

  v43 = __readgsdword(0x14u);
  v40 = 0;
  v41 = 0;
  v42 = 0;
  if ( a2 <= 0 )
    goto LABEL_33;
  v3 = 0;
  v36 = "r";
  do
  {
    v4 = *(char **)(a3 + 4 * v3);
    if ( !v4 )
      break;
    v34 = v3;
    if ( *v4 != 64 )
    {
      v32 = qstrdup(v4);
      v37 = (int)v32;
      v13 = (char *)v40;
      v14 = v41 + 1;
      if ( v40 > (unsigned int)&v37 || v40 + 4 * v42 <= (unsigned int)&v37 )
      {
        if ( v42 < v14 )
        {
          v13 = (char *)qvector_reserve((int)&v40, (void *)v40, v41 + 1, 4u);
          v40 = (int)v13;
          v16 = v41;
          v15 = v37;
          goto LABEL_31;
        }
      }
      else if ( v42 < v14 )
      {
        v13 = (char *)qvector_reserve((int)&v40, (void *)v40, v41 + 1, 4u);
        v15 = (int)v32;
        v40 = (int)v13;
        v16 = v41;
LABEL_31:
        v18 = (int *)&v13[4 * v16];
        v17 = v34;
        *v18 = v15;
        ++v41;
        goto LABEL_32;
      }
      v16 = v41;
      v15 = (int)v32;
      goto LABEL_31;
    }
    v5 = v4 + 1;
    v33 = qfopen(v5, (int)v36);
    if ( !v33 )
    {
      errdesc = get_errdesc(v5, 0xFFFFFFFF);
      sub_1DE10("indirect file %s", errdesc);
    }
    v37 = 0;
    v38 = 0;
    v39 = 0;
    while ( qgetline(&v37, v33) >= 0 )
    {
      if ( (int)qcleanline((int)&v37, 59, 3) > 0 )
      {
        v6 = v38;
        if ( v39 > v38 )
        {
          if ( v38 )
          {
            if ( v37 )
            {
              v7 = qrealloc((void *)v37, v38);
              if ( v7 )
              {
                v37 = (int)v7;
                v39 = v6;
              }
            }
          }
        }
        v39 = 0;
        v38 = 0;
        v8 = v37;
        v37 = 0;
        v31 = v8;
        v35 = v8;
        v9 = (_DWORD *)v40;
        v10 = v41;
        v11 = v41 + 1;
        if ( v40 > (unsigned int)&v35 || v40 + 4 * v42 <= (unsigned int)&v35 )
        {
          if ( v42 < v11 )
          {
            v9 = qvector_reserve((int)&v40, (void *)v40, v41 + 1, 4u);
            v40 = (int)v9;
            v10 = v41;
            v12 = v35;
            goto LABEL_7;
          }
        }
        else if ( v42 < v11 )
        {
          v9 = qvector_reserve((int)&v40, (void *)v40, v41 + 1, 4u);
          v40 = (int)v9;
          v10 = v41;
        }
        v12 = v31;
LABEL_7:
        v9[v10] = v12;
        ++v41;
      }
    }
    qfclose(v33);
    v17 = v34;
    if ( v37 )
    {
      v38 = 0;
      qfree((void *)v37);
      v37 = 0;
      v39 = 0;
      v17 = v34;
    }
LABEL_32:
    v3 = v17 + 1;
  }
  while ( v3 < a2 );
LABEL_33:
  if ( a1 )
    *a1 = v41;
  v37 = 0;
  v19 = (char *)v40;
  v20 = (int *)(v40 + 4 * v42);
  v21 = v20 < &v37;
  v22 = v20 == &v37;
  v23 = v41;
  v24 = v41 + 1;
  if ( v40 > (unsigned int)&v37 || v21 || v22 )
  {
    v26 = 0;
    if ( v42 < v24 )
    {
      v19 = (char *)qvector_reserve((int)&v40, (void *)v40, v41 + 1, 4u);
      v40 = (int)v19;
      v23 = v41;
      v26 = v37;
    }
    v25 = (int *)&v19[4 * v23];
  }
  else
  {
    if ( v42 < v24 )
    {
      v19 = (char *)qvector_reserve((int)&v40, (void *)v40, v41 + 1, 4u);
      v40 = (int)v19;
      v23 = v41;
    }
    v25 = (int *)&v19[4 * v23];
    v26 = 0;
  }
  *v25 = v26;
  v27 = v41 + 1;
  v41 = v27;
  if ( v42 > v27 )
  {
    if ( v27 )
    {
      if ( v40 )
      {
        v28 = qrealloc((void *)v40, 4 * v27);
        if ( v28 )
        {
          v40 = (int)v28;
          v42 = v27;
        }
      }
    }
  }
  v42 = 0;
  v41 = 0;
  return v40;
}
