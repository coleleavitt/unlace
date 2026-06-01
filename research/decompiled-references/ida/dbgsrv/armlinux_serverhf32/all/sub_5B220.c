/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5B220
// Address: 0x0005B220

//----- (0005B220) --------------------------------------------------------
void __fastcall sub_5B220(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // r6
  _DWORD *v4; // r3
  unsigned int v5; // r10
  unsigned int v6; // r9
  _DWORD *v7; // r5
  void *v8; // r0
  void *v9; // r0
  _DWORD *v10; // r10
  unsigned int v11; // r5
  unsigned int v12; // r9
  int v13; // r3
  size_t v14; // r10
  char *v15; // r5
  size_t v16; // r10
  void *v17; // r0
  void *v18; // r0
  _DWORD *v19; // r0
  __int64 v20; // kr00_8
  _DWORD *v21; // r5
  int v22; // r9
  _DWORD *v23; // r6
  int v24; // r3
  int v25; // r3
  int v26; // r3
  int v27; // r3
  int v28; // r3
  void *v29; // r0
  void *v30; // r0
  size_t v31; // r5
  size_t v32; // r5
  unsigned int v33; // r5
  unsigned int v34; // r10
  unsigned int v35; // r8
  int v36; // r3
  size_t v37; // r9
  unsigned int v38; // r5
  size_t v39; // r9
  void *v40; // r0
  void *v41; // r0
  void *v42; // r0
  _DWORD *v43; // r0
  __int64 v44; // kr08_8
  _DWORD *v45; // r10
  _DWORD *v46; // r5
  int v47; // r9
  _DWORD *v48; // r6
  int v49; // r3
  int v50; // r3
  int v51; // r3
  int v52; // r3
  int v53; // r3
  void *v54; // r0
  void *v55; // r0
  _DWORD s[64]; // [sp+14h] [bp-208h] BYREF
  int v58; // [sp+114h] [bp-108h]
  void *v59; // [sp+118h] [bp-104h]
  size_t v60; // [sp+11Ch] [bp-100h]
  size_t v61; // [sp+120h] [bp-FCh]
  int v62; // [sp+124h] [bp-F8h]
  void *v63; // [sp+128h] [bp-F4h]
  size_t v64; // [sp+12Ch] [bp-F0h]
  size_t v65; // [sp+130h] [bp-ECh]
  _BYTE dest[216]; // [sp+134h] [bp-E8h] BYREF
  char v67; // [sp+20Ch] [bp-10h]
  int v68; // [sp+210h] [bp-Ch]

  v2 = a1[1];
  if ( v2 == a2 )
    return;
  memset(s, 0, sizeof(s));
  v4 = &s[14];
  memset(&s[8], 255, 12);
  do
  {
    *(_BYTE *)v4 = 0;
    *((_BYTE *)v4 + 1) = 0;
    *((_BYTE *)v4 + 2) = 0;
    *((_BYTE *)v4 + 3) = 0;
    *((_BYTE *)v4 + 4) = 0;
    *((_BYTE *)v4 + 5) = 0;
    *((_BYTE *)v4 + 20) = 0;
    *((_BYTE *)v4 + 21) = 0;
    *((_BYTE *)v4 + 22) = 0;
    *((_BYTE *)v4 + 23) = 0;
    *((_WORD *)v4 + 3) = 0;
    v4[4] = 0;
    v4[2] = 0;
    v4[3] = 0;
    v4 += 6;
  }
  while ( &s[62] != v4 );
  if ( v2 <= a2 )
  {
    if ( v2 >= a2 )
      goto LABEL_12;
    v10 = (_DWORD *)*a1;
    v11 = a1[2];
    if ( *a1 <= (unsigned int)s && s < &v10[64 * v11] )
    {
      v31 = s[2];
      v59 = nullptr;
      v60 = 0;
      v61 = 0;
      v58 = s[0];
      if ( s[2] )
      {
        v59 = sub_77E84(s[2]);
        v61 = v31;
        memcpy(v59, (const void *)s[1], v31);
        v60 = v31;
      }
      v32 = s[6];
      v63 = nullptr;
      v64 = 0;
      v65 = 0;
      v62 = s[4];
      if ( s[6] )
      {
        v63 = sub_77E84(s[6]);
        v65 = v32;
        memcpy(v63, (const void *)s[5], v32);
        v64 = v32;
      }
      memcpy(dest, &s[8], sizeof(dest));
      v33 = a1[2];
      v68 = s[63];
      v67 = s[62];
      if ( a2 > v33 )
      {
        v43 = sub_77EB0((int)a1, nullptr, a2, 0x100u);
        v44 = *(_QWORD *)(a1 + 1);
        v45 = v43;
        a1[2] = v33;
        v46 = (_DWORD *)*a1;
        v47 = v44 - 1;
        if ( (int)v44 - 1 >= 0 )
        {
          v48 = v43;
          do
          {
            *v48 = *v46;
            v48[1] = v46[1];
            v49 = v46[2];
            v46[1] = 0;
            v48[2] = v49;
            v50 = v46[3];
            v46[2] = 0;
            v48[3] = v50;
            v51 = v46[4];
            v46[3] = 0;
            v48[4] = v51;
            v48[5] = v46[5];
            v52 = v46[6];
            v46[5] = 0;
            v48[6] = v52;
            v53 = v46[7];
            v46[6] = 0;
            v48[7] = v53;
            v46[7] = 0;
            memcpy(v48 + 8, v46 + 8, 0xD9u);
            v48[63] = v46[63];
            v54 = (void *)v46[5];
            if ( v54 )
            {
              v46[6] = 0;
              sub_77E08(v54);
            }
            v55 = (void *)v46[1];
            if ( v55 )
            {
              v46[2] = 0;
              sub_77E08(v55);
            }
            --v47;
            v46 += 64;
            v48 += 64;
          }
          while ( v47 != -1 );
          v46 = (_DWORD *)*a1;
        }
        sub_77E08(v46);
        *a1 = v45;
        a1[2] = HIDWORD(v44);
      }
      v34 = a1[1];
      if ( a2 > v34 )
      {
        v35 = v34 << 8;
        do
        {
          v38 = *a1 + v35;
          *(_DWORD *)v38 = v58;
          *(_DWORD *)(v38 + 4) = 0;
          *(_DWORD *)(v38 + 8) = 0;
          v39 = v60;
          *(_DWORD *)(v38 + 12) = 0;
          if ( v39 )
          {
            v40 = sub_77E84(v39);
            *(_DWORD *)(v38 + 4) = v40;
            *(_DWORD *)(v38 + 12) = v39;
            memcpy(v40, v59, v39);
            *(_DWORD *)(v38 + 8) = v39;
          }
          v36 = v62;
          *(_DWORD *)(v38 + 20) = 0;
          *(_DWORD *)(v38 + 24) = 0;
          *(_DWORD *)(v38 + 28) = 0;
          *(_DWORD *)(v38 + 16) = v36;
          v37 = v64;
          if ( v64 )
          {
            v41 = sub_77E84(v64);
            *(_DWORD *)(v38 + 20) = v41;
            *(_DWORD *)(v38 + 28) = v37;
            memcpy(v41, v63, v37);
            *(_DWORD *)(v38 + 24) = v37;
          }
          ++v34;
          memcpy((void *)(v38 + 32), dest, 0xD8u);
          v35 += 256;
          *(_BYTE *)(v38 + 248) = v67;
          *(_DWORD *)(v38 + 252) = v68;
        }
        while ( a2 != v34 );
      }
      v42 = v63;
      a1[1] = a2;
      if ( v42 )
      {
        v64 = 0;
        sub_77E08(v42);
      }
      if ( v59 )
      {
        v60 = 0;
        sub_77E08(v59);
      }
      goto LABEL_12;
    }
    if ( a2 <= v11 )
      goto LABEL_21;
    v19 = sub_77EB0((int)a1, nullptr, a2, 0x100u);
    v20 = *(_QWORD *)(a1 + 1);
    v10 = v19;
    a1[2] = v11;
    v21 = (_DWORD *)*a1;
    v22 = v20 - 1;
    if ( (int)v20 - 1 >= 0 )
    {
      v23 = v19;
      do
      {
        *v23 = *v21;
        v23[1] = v21[1];
        v24 = v21[2];
        v21[1] = 0;
        v23[2] = v24;
        v25 = v21[3];
        v21[2] = 0;
        v23[3] = v25;
        v26 = v21[4];
        v21[3] = 0;
        v23[4] = v26;
        v23[5] = v21[5];
        v27 = v21[6];
        v21[5] = 0;
        v23[6] = v27;
        v28 = v21[7];
        v21[6] = 0;
        v23[7] = v28;
        v21[7] = 0;
        memcpy(v23 + 8, v21 + 8, 0xD9u);
        v23[63] = v21[63];
        v29 = (void *)v21[5];
        if ( v29 )
        {
          v21[6] = 0;
          sub_77E08(v29);
        }
        v30 = (void *)v21[1];
        if ( v30 )
        {
          v21[2] = 0;
          sub_77E08(v30);
        }
        --v22;
        v21 += 64;
        v23 += 64;
      }
      while ( v22 != -1 );
      v21 = (_DWORD *)*a1;
    }
    sub_77E08(v21);
    v2 = a1[1];
    *a1 = v10;
    a1[2] = HIDWORD(v20);
    if ( a2 > v2 )
    {
LABEL_21:
      v12 = v2 << 8;
      while ( 1 )
      {
        v15 = (char *)v10 + v12;
        *(_DWORD *)((char *)v10 + v12) = s[0];
        *((_DWORD *)v15 + 1) = 0;
        *((_DWORD *)v15 + 2) = 0;
        v16 = s[2];
        *((_DWORD *)v15 + 3) = 0;
        if ( v16 )
        {
          v17 = sub_77E84(v16);
          *((_DWORD *)v15 + 1) = v17;
          *((_DWORD *)v15 + 3) = v16;
          memcpy(v17, (const void *)s[1], v16);
          *((_DWORD *)v15 + 2) = v16;
        }
        v13 = s[4];
        *((_DWORD *)v15 + 5) = 0;
        *((_DWORD *)v15 + 6) = 0;
        *((_DWORD *)v15 + 7) = 0;
        *((_DWORD *)v15 + 4) = v13;
        v14 = s[6];
        if ( s[6] )
        {
          v18 = sub_77E84(s[6]);
          *((_DWORD *)v15 + 5) = v18;
          *((_DWORD *)v15 + 7) = v14;
          memcpy(v18, (const void *)s[5], v14);
          *((_DWORD *)v15 + 6) = v14;
        }
        ++v2;
        memcpy(v15 + 32, &s[8], 0xD8u);
        v12 += 256;
        v15[248] = s[62];
        *((_DWORD *)v15 + 63) = s[63];
        if ( a2 <= v2 )
          break;
        v10 = (_DWORD *)*a1;
      }
    }
  }
  else
  {
    v5 = a2 << 8;
    v6 = a2;
    do
    {
      v7 = (_DWORD *)(*a1 + v5);
      v8 = (void *)v7[5];
      if ( v8 )
      {
        v7[6] = 0;
        sub_77E08(v8);
      }
      v9 = (void *)v7[1];
      if ( v9 )
      {
        v7[2] = 0;
        sub_77E08(v9);
      }
      ++v6;
      v5 += 256;
    }
    while ( v2 != v6 );
  }
  a1[1] = a2;
LABEL_12:
  if ( s[5] )
  {
    s[6] = 0;
    sub_77E08((void *)s[5]);
  }
  if ( s[1] )
  {
    s[2] = 0;
    sub_77E08((void *)s[1]);
  }
}
