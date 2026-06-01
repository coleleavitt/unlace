/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7F510
// Address: 0x0007F510

//----- (0007F510) --------------------------------------------------------
int __fastcall sub_7F510(int a1)
{
  int v1; // r5
  _DWORD *v2; // r5
  unsigned int v3; // r4
  int v4; // r1
  int *v5; // r0
  _DWORD *v6; // r2
  int v7; // r3
  int v8; // r6
  int v9; // r0
  int v10; // r0
  int v11; // r7
  char *v12; // r5
  char *v13; // r6
  char *v14; // r0
  int v15; // r4
  int v16; // r1
  int v17; // r0
  char *v18; // r1
  int v19; // r1
  int v20; // r1
  unsigned int v22; // r0
  unsigned int v23; // r5
  _DWORD *v24; // r6
  unsigned int v25; // r4
  int v26; // r1
  int *v27; // r0
  _DWORD *v28; // r2
  int v29; // r3
  int v30; // r5
  char *v31; // r0
  char *v32; // r6
  int v33; // r0
  char *v34; // r1
  int v35; // r2
  int v36; // r1
  int v37; // r2
  int *v38; // r1
  unsigned int v39; // r2
  FILE *stream; // [sp+1Ch] [bp-20h]
  char *s1; // [sp+20h] [bp-1Ch] BYREF
  int v44; // [sp+24h] [bp-18h]
  int v45; // [sp+28h] [bp-14h]
  int *v46; // [sp+2Ch] [bp-10h] BYREF
  unsigned int v47; // [sp+30h] [bp-Ch]
  unsigned int v48; // [sp+34h] [bp-8h]

  v1 = -1;
  stream = qfopen("/proc/cpuinfo", "r");
  if ( !stream )
    return v1;
  v47 = 0;
  v46 = nullptr;
  v48 = 0;
  v2 = qvector_reserve((int)&v46, nullptr, 1u, 8u);
  v3 = v48;
  v48 = 0;
  v4 = v47 - 1;
  v5 = v46;
  if ( (int)(v47 - 1) >= 0 )
  {
    v6 = v2;
    do
    {
      v7 = *v5;
      v8 = v5[1];
      v5 += 2;
      *v6 = v7;
      v6[1] = v8;
      v6 += 2;
      --v4;
    }
    while ( v4 >= 0 );
    v5 = v46;
  }
  qfree(v5);
  v48 = v3;
  v46 = v2;
  v9 = 2 * v47;
  v2[v9] = -1;
  v2[v9 + 1] = -1;
  ++v47;
  v44 = 0;
  s1 = nullptr;
  v45 = 0;
  while ( qgetline(&s1, stream) >= 0 )
  {
    v11 = v44;
    v12 = s1;
    v13 = &byte_B3CBE;
    if ( v44 )
      v13 = s1;
    v14 = strchr(v13, 58);
    v15 = v14 - v13;
    if ( !v14 || v15 == -1 )
    {
      v22 = v47;
      v23 = v48;
      if ( v48 >= v47 + 1 )
      {
        v24 = v46;
      }
      else
      {
        v24 = qvector_reserve((int)&v46, nullptr, v47 + 1, 8u);
        v25 = v48;
        v48 = v23;
        v26 = v47 - 1;
        v27 = v46;
        if ( (int)(v47 - 1) >= 0 )
        {
          v28 = v24;
          do
          {
            v29 = *v27;
            v30 = v27[1];
            v27 += 2;
            *v28 = v29;
            v28[1] = v30;
            v28 += 2;
            --v26;
          }
          while ( v26 >= 0 );
          v27 = v46;
        }
        qfree(v27);
        v48 = v25;
        v46 = v24;
        v22 = v47;
      }
      v10 = 2 * v22;
      v24[v10] = -1;
      v24[v10 + 1] = -1;
      ++v47;
    }
    else
    {
      v16 = v14 - v13;
      if ( v15 >= 1 )
      {
        v17 = v14 - 1 - v13;
        while ( 1 )
        {
          v18 = &v12[v17];
          if ( !(v17 | v11) )
            v18 = byte_DE331;
          v19 = (unsigned __int8)*v18;
          if ( v19 != 32 && v19 != 9 )
            break;
          v20 = v17 - 1;
          if ( v17-- + 1 <= 1 )
          {
            v16 = v20 + 1;
            goto LABEL_30;
          }
        }
        v16 = v17 + 1;
      }
LABEL_30:
      v31 = &v12[v16];
      if ( !(v11 | v16) )
        v31 = byte_DE331;
      *v31 = 0;
      if ( v44 )
        v32 = s1;
      else
        v32 = &byte_B3CBE;
      if ( !strcmp(v32, "processor") )
      {
        v33 = atoi(&v32[v15 + 1]);
        v34 = (char *)&v46[2 * v47];
        v35 = 7;
LABEL_39:
        *(_DWORD *)&v34[~v35] = v33;
      }
      else if ( !strcmp(v32, "core id") )
      {
        v33 = atoi(&v32[v15 + 1]);
        v34 = (char *)&v46[2 * v47];
        v35 = 3;
        goto LABEL_39;
      }
    }
  }
  qfclose(stream);
  v36 = v47;
  v37 = v47 - 1;
  v1 = 0;
  if ( v47 && v46[2 * v47 - 2] == -1 )
  {
    --v47;
    v36 = v37;
  }
  if ( a1 )
  {
    v1 = v36;
  }
  else
  {
    sub_7F918(v46, &v46[2 * v36]);
    if ( v47 )
    {
      v38 = v46 - 2;
      v39 = 0;
      v1 = 0;
      do
      {
        if ( !v39 || v38[2] != *v38 || v38[3] != v38[1] )
          ++v1;
        v38 += 2;
        ++v39;
      }
      while ( v39 < v47 );
    }
  }
  if ( s1 )
  {
    v44 = 0;
    qfree(s1);
    v45 = 0;
    s1 = nullptr;
  }
  if ( v46 )
  {
    v47 = 0;
    qfree(v46);
    v48 = 0;
    v46 = nullptr;
  }
  return v1;
}
// B3CBE: using guessed type char byte_B3CBE;
