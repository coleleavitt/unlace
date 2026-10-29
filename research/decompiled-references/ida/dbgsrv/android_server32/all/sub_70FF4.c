/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70FF4
// Address: 0x00070FF4

//----- (00070FF4) --------------------------------------------------------
_DWORD *__fastcall sub_70FF4(_DWORD *a1, char *a2, int (__fastcall *a3)(_DWORD **, const char *))
{
  int v4; // r7
  _DWORD *v5; // r4
  const char *v6; // r6
  const char *v7; // r0
  int v8; // r0
  int *v9; // r1
  const char *v10; // r1
  const char *v11; // r1
  char *v12; // r6
  const char **v13; // r7
  unsigned int i; // r4
  const char *v15; // r5
  _DWORD *v16; // r6
  unsigned int v17; // r6
  int *v18; // r7
  int *v19; // r5
  int v20; // r1
  int **v21; // r5
  int v22; // r1
  int *v23; // r4
  void **v24; // r7
  void *v25; // r0
  unsigned int v26; // r0
  _DWORD *v27; // r4
  char *v28; // r0
  int v29; // r5
  unsigned int v30; // r7
  unsigned int v31; // r4
  unsigned int v32; // r0
  void *v33; // r0
  _DWORD *v34; // r0
  int v35; // r1
  int *v36; // r4
  void **v37; // r7
  void *v38; // r0
  int v41; // [sp+14h] [bp-44h]
  _DWORD *v43; // [sp+20h] [bp-38h]
  int v44; // [sp+20h] [bp-38h]
  const char *v45; // [sp+24h] [bp-34h]
  int v46; // [sp+24h] [bp-34h]
  const char *v47; // [sp+28h] [bp-30h] BYREF
  int v48; // [sp+2Ch] [bp-2Ch]
  int v49; // [sp+30h] [bp-28h]
  const char **v50; // [sp+38h] [bp-20h] BYREF
  int v51; // [sp+3Ch] [bp-1Ch]
  _DWORD *v52; // [sp+40h] [bp-18h] BYREF
  int v53; // [sp+44h] [bp-14h]
  int v54; // [sp+48h] [bp-10h]
  int v55; // [sp+4Ch] [bp-Ch]
  int v56; // [sp+50h] [bp-8h]

  sub_1B09C((int)&v47, a2);
  v4 = a1[38];
  v5 = a1 + 38;
  if ( !v4 )
  {
    v11 = v47;
    if ( v48 )
      goto LABEL_21;
    goto LABEL_20;
  }
  v41 = v48;
  v6 = &byte_B3CBE;
  if ( v48 )
    v6 = v47;
  v45 = v47;
  v43 = v5;
  do
  {
    v7 = &byte_B3CBE;
    if ( *(_DWORD *)(v4 + 20) )
      v7 = *(const char **)(v4 + 16);
    v8 = strcmp(v7, v6);
    if ( v8 >= 0 )
      v5 = (_DWORD *)v4;
    v9 = (int *)(v4 + 4);
    if ( v8 >= 0 )
      v9 = (int *)v4;
    v4 = *v9;
  }
  while ( *v9 );
  if ( v5 != v43 )
  {
    v10 = v5[5] ? (const char *)v5[4] : &byte_B3CBE;
    if ( strcmp(v6, v10) >= 0 )
    {
      v26 = v5[7];
      v27 = nullptr;
      if ( v26 != -1 )
      {
        if ( v26 >= a1[35] )
        {
          if ( !under_debugger )
            interr(1472);
          goto LABEL_73;
        }
        v27 = *(_DWORD **)(a1[34] + 4 * v26);
      }
      v28 = (char *)v45;
      if ( v45 )
        goto LABEL_67;
      return v27;
    }
  }
  v11 = v45;
  if ( !v41 )
LABEL_20:
    v11 = &byte_B3CBE;
LABEL_21:
  v12 = byte_C5BC1;
  v13 = (const char **)off_DAB88;
  v44 = -1;
  for ( i = 1; i < 0x148; ++i )
  {
    v15 = v11;
    if ( !strcmp(*v13, v11) )
    {
      v55 = 0;
      v54 = 0;
      v53 = 0;
      v52 = nullptr;
      v56 = -1;
      if ( ((unsigned __int8)v12[1] << 8) + (unsigned __int8)*v12 == 0xFFFF )
      {
        v17 = 0;
        v18 = dword_C517C;
        v19 = &dword_C5BBC;
        do
        {
          v20 = v17;
          if ( (*((unsigned __int8 *)v19 + 1) << 8) + *(unsigned __int8 *)v19 != 0xFFFF )
            v20 = (*((unsigned __int8 *)v19 + 1) << 8) + *(unsigned __int8 *)v19;
          if ( v20 == i )
          {
            v51 = 0;
            v50 = nullptr;
            if ( !v17 )
            {
              v16 = nullptr;
LABEL_55:
              v21 = (int **)a1;
              goto LABEL_56;
            }
            v50 = (const char **)*v18;
            v51 = v18[1] + 1;
            rangeset_t_add((int)&v52, (int)&v50);
          }
          v19 = (int *)((char *)v19 + 5);
          v18 += 2;
          ++v17;
        }
        while ( v17 < 0x148 );
        v21 = (int **)a1;
        v16 = qalloc_or_throw(20);
        *v16 = 0;
        v16[1] = 0;
        v16[2] = 0;
        v16[3] = 0;
        v16[4] = -1;
        v22 = a1[35];
        v23 = a1 + 35;
        v24 = (void **)(a1 + 34);
        if ( a1[36] >= (unsigned int)(v22 + 1) )
        {
          v25 = *v24;
        }
        else
        {
          v25 = qvector_reserve((int)(a1 + 34), *v24, v22 + 1, 4u);
          *v24 = v25;
          v22 = *v23;
        }
        *((_DWORD *)v25 + v22) = v16;
        ++*v23;
        v46 = v53;
        if ( v53 )
        {
          v29 = 0;
          do
          {
            v30 = v52[2 * v29];
            v31 = v52[2 * v29 + 1];
            if ( v30 < v31 )
            {
              do
              {
                v32 = (unsigned __int8)((unsigned int)sub_70BD4(v30) >> 16);
                if ( v32 <= 0xB && ((1 << v32) & 0xA80) != 0 )
                {
                  v50 = (const char **)v30++;
                  v51 = v30;
                  rangeset_t_add((int)v16, (int)&v50);
                }
                else
                {
                  ++v30;
                }
              }
              while ( v30 != v31 );
            }
            ++v29;
          }
          while ( v29 != v46 );
          goto LABEL_55;
        }
LABEL_56:
        v33 = v52;
        v27 = nullptr;
        if ( v52 )
        {
LABEL_63:
          v53 = 0;
          qfree(v33);
          v54 = 0;
          v52 = nullptr;
        }
LABEL_64:
        if ( v16 )
        {
          v44 = (int)v21[35] - 1;
          v27 = v16;
        }
        goto LABEL_66;
      }
      if ( !under_debugger )
        interr(1473);
LABEL_73:
      __debugbreak();
    }
    ++v13;
    v12 += 5;
    v11 = v15;
  }
  if ( a3 )
  {
    v55 = 0;
    v54 = 0;
    v53 = 0;
    v52 = nullptr;
    v56 = -1;
    if ( a3(&v52, v15) )
    {
      v16 = nullptr;
    }
    else
    {
      v34 = qalloc_or_throw(20);
      v16 = v34;
      *v34 = 0;
      v34[1] = 0;
      v34[2] = 0;
      v34[3] = 0;
      v34[4] = -1;
      v35 = a1[35];
      v36 = a1 + 35;
      v37 = (void **)(a1 + 34);
      if ( a1[36] >= (unsigned int)(v35 + 1) )
      {
        v38 = *v37;
      }
      else
      {
        v38 = qvector_reserve((int)(a1 + 34), *v37, v35 + 1, 4u);
        *v37 = v38;
        v35 = *v36;
      }
      *((_DWORD *)v38 + v35) = v16;
      ++*v36;
      rangeset_t_swap((int)v16, (int)&v52);
    }
    v33 = v52;
    v21 = (int **)a1;
    v27 = nullptr;
    if ( v52 )
      goto LABEL_63;
    goto LABEL_64;
  }
  v21 = (int **)a1;
  v27 = nullptr;
LABEL_66:
  v50 = &v47;
  sub_7148C((int)&v52, v21 + 37, (int)&v47, (int)&byte_C6224, (int *)&v50);
  v52[7] = v44;
  v28 = (char *)v47;
  if ( v47 )
  {
LABEL_67:
    v48 = 0;
    qfree(v28);
    v49 = 0;
    v47 = nullptr;
  }
  return v27;
}
// B3CBE: using guessed type char byte_B3CBE;
// C517C: using guessed type int dword_C517C[2];
// C5BBC: using guessed type int dword_C5BBC;
// C6224: using guessed type char byte_C6224;
// DAB88: using guessed type char *off_DAB88[359];
// E0550: using guessed type char under_debugger;
