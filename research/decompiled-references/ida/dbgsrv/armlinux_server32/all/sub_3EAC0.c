/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3EAC0
// Address: 0x0003EAC0

//----- (0003EAC0) --------------------------------------------------------
void __fastcall sub_3EAC0(_DWORD *a1, int a2, int a3)
{
  int v3; // r7
  size_t v7; // r5
  int v8; // r10
  int v9; // r11
  int v10; // r9
  const char *v11; // r0
  const char *v12; // r1
  size_t v13; // r9
  int *v14; // r6
  unsigned int v15; // r5
  unsigned int v16; // r2
  size_t v17; // r1
  size_t v18; // r3
  int *v19; // r6
  void *v20; // r0
  const char *v21; // r1
  int *v22; // r0
  __int64 v23; // kr00_8
  int *v24; // r5
  int v25; // r10
  int *v26; // r11
  int v27; // r3
  int v28; // r3
  void *v29; // r0
  size_t v30; // r3
  size_t v31; // r3
  int *v32; // r3
  int *v33; // r0
  __int64 v34; // r2
  int *v35; // r5
  int v36; // r11
  int *v37; // r10
  int v38; // r3
  int v39; // r3
  void *v40; // r0
  const char *v41; // r6
  void *v42; // r0
  size_t v43; // [sp+4h] [bp-28h]
  size_t v44; // [sp+8h] [bp-24h]
  int v45; // [sp+Ch] [bp-20h]
  int v46; // [sp+14h] [bp-18h] BYREF
  void *v47; // [sp+18h] [bp-14h]
  size_t v48; // [sp+1Ch] [bp-10h]
  size_t v49; // [sp+20h] [bp-Ch]

  v3 = a1[12];
  v7 = *(_DWORD *)(a3 + 4);
  if ( !v3 )
  {
LABEL_7:
    v46 = a2;
    v47 = nullptr;
    v13 = v7;
    v48 = 0;
    v49 = 0;
    if ( v7 )
    {
      v20 = sub_77FEC(v7);
      v21 = *(const char **)a3;
      v13 = (size_t)v20;
      v49 = v7;
      v47 = v20;
      memcpy(v20, v21, v7);
      v48 = v7;
      v3 = a1[12];
    }
    v14 = (int *)a1[11];
    v15 = a1[13];
    v16 = v3 + 1;
    if ( v14 <= &v46 && &v46 < &v14[4 * v15] )
    {
      v30 = v48;
      v47 = nullptr;
      v48 = 0;
      v43 = v30;
      v31 = v49;
      v49 = 0;
      v44 = v31;
      if ( v15 < v16 )
      {
        v33 = (int *)sub_78018((int)(a1 + 11), nullptr, v16, 0x10u);
        v34 = *((_QWORD *)a1 + 6);
        v14 = v33;
        a1[13] = v15;
        v35 = (int *)a1[11];
        v36 = v34 - 1;
        v45 = HIDWORD(v34);
        if ( (int)v34 - 1 >= 0 )
        {
          v37 = v33;
          do
          {
            *v37 = *v35;
            v37[1] = v35[1];
            v38 = v35[2];
            v35[1] = 0;
            v37[2] = v38;
            v39 = v35[3];
            v35[2] = 0;
            v37[3] = v39;
            v40 = (void *)v35[1];
            v35[3] = 0;
            if ( v40 )
            {
              v35[2] = 0;
              sub_77F70(v40);
            }
            --v36;
            v35 += 4;
            v37 += 4;
          }
          while ( v36 != -1 );
          v35 = (int *)a1[11];
        }
        sub_77F70(v35);
        a1[11] = v14;
        v3 = a1[12];
        a1[13] = v45;
      }
      v32 = &v14[4 * v3];
      *v32 = a2;
      v32[1] = v13;
      v32[2] = v43;
      v32[3] = v44;
    }
    else
    {
      if ( v15 < v16 )
      {
        v22 = (int *)sub_78018((int)(a1 + 11), nullptr, v16, 0x10u);
        v23 = *((_QWORD *)a1 + 6);
        v14 = v22;
        a1[13] = v15;
        v24 = (int *)a1[11];
        v25 = v23 - 1;
        if ( (int)v23 - 1 >= 0 )
        {
          v26 = v22;
          do
          {
            *v26 = *v24;
            v26[1] = v24[1];
            v27 = v24[2];
            v24[1] = 0;
            v26[2] = v27;
            v28 = v24[3];
            v24[2] = 0;
            v26[3] = v28;
            v29 = (void *)v24[1];
            v24[3] = 0;
            if ( v29 )
            {
              v24[2] = 0;
              sub_77F70(v29);
            }
            --v25;
            v24 += 4;
            v26 += 4;
          }
          while ( v25 != -1 );
          v24 = (int *)a1[11];
        }
        sub_77F70(v24);
        v3 = a1[12];
        a1[11] = v14;
        a1[13] = HIDWORD(v23);
      }
      v17 = v48;
      v18 = v49;
      v14[4 * v3] = a2;
      v19 = &v14[4 * v3];
      v19[1] = v13;
      v19[2] = v17;
      v19[3] = v18;
    }
    ++a1[12];
    return;
  }
  v8 = a1[11];
  v9 = 16 * (v3 + 0xFFFFFFF);
  v10 = v8 + v9;
  if ( *(_DWORD *)(v8 + v9 + 8) )
  {
    v11 = *(const char **)(v10 + 4);
    if ( v7 )
      goto LABEL_4;
  }
  else
  {
    v11 = (const char *)&dword_8DB98;
    if ( v7 )
    {
LABEL_4:
      v12 = *(const char **)a3;
      goto LABEL_5;
    }
  }
  v12 = (const char *)&dword_8DB98;
LABEL_5:
  if ( !strcmp(v11, v12) )
    return;
  if ( *(_DWORD *)(v8 + v9) != a2 )
    goto LABEL_7;
  if ( v10 + 4 != a3 )
  {
    if ( v7 > 1 )
    {
      v41 = *(const char **)a3;
      v42 = *(void **)(v10 + 4);
      if ( *(_DWORD *)(v10 + 12) < v7 )
      {
        v42 = sub_78018(v10 + 4, *(void **)(v10 + 4), v7, 1u);
        *(_DWORD *)(v10 + 4) = v42;
      }
      *(_DWORD *)(v10 + 8) = v7;
      memmove(v42, v41, v7 - 1);
      *(_BYTE *)(*(_DWORD *)(v10 + 4) + v7 - 1) = 0;
    }
    else
    {
      *(_DWORD *)(v10 + 8) = 0;
    }
  }
}
// 8DB98: using guessed type int dword_8DB98;
