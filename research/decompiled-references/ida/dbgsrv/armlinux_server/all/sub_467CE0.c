/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_467CE0
// Address: 0x0000000000467CE0

//----- (0000000000467CE0) ----------------------------------------------------
__int64 __fastcall sub_467CE0(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // x21
  __int64 *v5; // x0
  unsigned __int64 v6; // x25
  __int64 v7; // x20
  _QWORD *v8; // x19
  void *v9; // x0
  void *v10; // x0
  _QWORD *v12; // x26
  unsigned __int64 v13; // x19
  __int64 v14; // x20
  _QWORD *v15; // x28
  signed __int64 v16; // x26
  _QWORD *v17; // x19
  size_t v18; // x26
  void *v19; // x0
  void *v20; // x0
  _QWORD *v21; // x0
  __int64 v22; // x21
  __int64 v23; // x27
  _QWORD *v24; // x19
  __int64 v25; // x21
  _QWORD *v26; // x20
  void *v27; // x0
  void *v28; // x0
  size_t v29; // x19
  size_t v30; // x19
  unsigned __int64 v31; // x19
  unsigned __int64 v32; // x21
  __int64 v33; // x20
  size_t v34; // x27
  __int64 v35; // x19
  size_t v36; // x27
  void *v37; // x0
  void *v38; // x0
  void *v39; // x0
  void *v40; // x0
  __int64 v41; // x21
  __int64 v42; // x28
  void *v43; // x27
  _QWORD *v44; // x19
  __int64 v45; // x21
  _QWORD *v46; // x20
  void *v47; // x0
  void *v48; // x0
  __int64 s; // [xsp+68h] [xbp-368h] BYREF
  void *v50; // [xsp+70h] [xbp-360h]
  size_t v51; // [xsp+78h] [xbp-358h]
  int v52; // [xsp+88h] [xbp-348h]
  void *ptr; // [xsp+90h] [xbp-340h]
  size_t v54; // [xsp+98h] [xbp-338h]
  _QWORD src[5]; // [xsp+A8h] [xbp-328h] BYREF
  __int64 v56; // [xsp+D0h] [xbp-300h] BYREF
  char v57; // [xsp+210h] [xbp-1C0h] BYREF
  int v58; // [xsp+214h] [xbp-1BCh]
  __int64 v59; // [xsp+218h] [xbp-1B8h]
  void *v60; // [xsp+220h] [xbp-1B0h]
  size_t v61; // [xsp+228h] [xbp-1A8h]
  size_t v62; // [xsp+230h] [xbp-1A0h]
  int v63; // [xsp+238h] [xbp-198h]
  void *v64; // [xsp+240h] [xbp-190h]
  size_t v65; // [xsp+248h] [xbp-188h]
  size_t v66; // [xsp+250h] [xbp-180h]
  _BYTE dest[360]; // [xsp+258h] [xbp-178h] BYREF
  char v68; // [xsp+3C0h] [xbp-10h]
  int v69; // [xsp+3C4h] [xbp-Ch]
  __int64 v70; // [xsp+3C8h] [xbp-8h]

  v4 = a1[1];
  if ( v4 == a2 )
    return v70 ^ _stack_chk_guard;
  memset(&s, 0, 0x1B0u);
  v5 = &v56;
  memset(src, 255, 24);
  do
  {
    *(_BYTE *)v5 = 0;
    *((_BYTE *)v5 + 1) = 0;
    *((_BYTE *)v5 + 2) = 0;
    *((_BYTE *)v5 + 3) = 0;
    *((_BYTE *)v5 + 4) = 0;
    *((_BYTE *)v5 + 5) = 0;
    *((_WORD *)v5 + 3) = 0;
    v5[1] = 0;
    v5[2] = 0;
    v5 += 5;
    *(v5 - 2) = 0;
    *((_BYTE *)v5 - 8) = 0;
    *((_BYTE *)v5 - 7) = 0;
    *((_BYTE *)v5 - 6) = 0;
    *((_BYTE *)v5 - 5) = 0;
  }
  while ( v5 != (__int64 *)&v57 );
  if ( v4 > a2 )
  {
    v6 = a2;
    v7 = 432 * a2;
    do
    {
      v8 = (_QWORD *)(*a1 + v7);
      v9 = (void *)v8[5];
      if ( v9 )
      {
        v8[6] = 0;
        j__free(v9);
      }
      v10 = (void *)v8[1];
      if ( v10 )
      {
        v8[2] = 0;
        j__free(v10);
      }
      ++v6;
      v7 += 432;
    }
    while ( v4 != v6 );
    a1[1] = a2;
    goto LABEL_12;
  }
  if ( v4 < a2 )
  {
    v12 = (_QWORD *)*a1;
    v13 = a1[2];
    if ( *a1 <= (unsigned __int64)&s && &s < &v12[54 * v13] )
    {
      v29 = v51;
      v59 = s;
      v60 = nullptr;
      v61 = 0;
      v62 = 0;
      if ( v51 )
      {
        v60 = sub_491248(v51);
        v62 = v29;
        memcpy(v60, v50, v29);
        v61 = v29;
      }
      v30 = v54;
      v63 = v52;
      v64 = nullptr;
      v65 = 0;
      v66 = 0;
      if ( v54 )
      {
        v64 = sub_491248(v54);
        v66 = v30;
        memcpy(v64, ptr, v30);
        v65 = v30;
      }
      memcpy(dest, src, sizeof(dest));
      v31 = a1[2];
      v68 = v57;
      v69 = v58;
      if ( a2 > v31 )
      {
        v40 = sub_491288((__int64)a1, nullptr, a2, 0x1B0u);
        v41 = a1[1];
        v42 = a1[2];
        a1[2] = v31;
        v43 = v40;
        v44 = (_QWORD *)*a1;
        v45 = v41 - 1;
        if ( v45 >= 0 )
        {
          v46 = v40;
          do
          {
            *v46 = *v44;
            v46[1] = v44[1];
            v44[1] = 0;
            v46[2] = v44[2];
            v44[2] = 0;
            v46[3] = v44[3];
            v44[3] = 0;
            *((_DWORD *)v46 + 8) = *((_DWORD *)v44 + 8);
            v46[5] = v44[5];
            v44[5] = 0;
            v46[6] = v44[6];
            v44[6] = 0;
            v46[7] = v44[7];
            v44[7] = 0;
            memcpy(v46 + 8, v44 + 8, 0x168u);
            *((_BYTE *)v46 + 424) = *((_BYTE *)v44 + 424);
            *((_DWORD *)v46 + 107) = *((_DWORD *)v44 + 107);
            v47 = (void *)v44[5];
            if ( v47 )
            {
              v44[6] = 0;
              j__free(v47);
            }
            v48 = (void *)v44[1];
            if ( v48 )
            {
              v44[2] = 0;
              j__free(v48);
            }
            --v45;
            v44 += 54;
            v46 += 54;
          }
          while ( v45 != -1 );
          v44 = (_QWORD *)*a1;
        }
        j__free(v44);
        *a1 = v43;
        a1[2] = v42;
      }
      v32 = a1[1];
      if ( a2 > v32 )
      {
        v33 = 432 * v32;
        do
        {
          v35 = *a1 + v33;
          *(_QWORD *)v35 = v59;
          *(_QWORD *)(v35 + 8) = 0;
          *(_QWORD *)(v35 + 16) = 0;
          *(_QWORD *)(v35 + 24) = 0;
          v36 = v61;
          if ( v61 )
          {
            v37 = sub_491248(v61);
            *(_QWORD *)(v35 + 8) = v37;
            *(_QWORD *)(v35 + 24) = v36;
            memcpy(v37, v60, v36);
            *(_QWORD *)(v35 + 16) = v36;
          }
          *(_DWORD *)(v35 + 32) = v63;
          *(_QWORD *)(v35 + 40) = 0;
          *(_QWORD *)(v35 + 48) = 0;
          *(_QWORD *)(v35 + 56) = 0;
          v34 = v65;
          if ( v65 )
          {
            v38 = sub_491248(v65);
            *(_QWORD *)(v35 + 40) = v38;
            *(_QWORD *)(v35 + 56) = v34;
            memcpy(v38, v64, v34);
            *(_QWORD *)(v35 + 48) = v34;
          }
          memcpy((void *)(v35 + 64), dest, 0x168u);
          ++v32;
          *(_BYTE *)(v35 + 424) = v68;
          v33 += 432;
          *(_DWORD *)(v35 + 428) = v69;
        }
        while ( a2 != v32 );
      }
      v39 = v64;
      a1[1] = a2;
      if ( v39 )
      {
        v65 = 0;
        j__free(v39);
      }
      if ( v60 )
      {
        v61 = 0;
        j__free(v60);
      }
      goto LABEL_12;
    }
    if ( a2 > v13 )
    {
      v21 = sub_491288((__int64)a1, nullptr, a2, 0x1B0u);
      v22 = a1[1];
      v23 = a1[2];
      a1[2] = v13;
      v12 = v21;
      v24 = (_QWORD *)*a1;
      v25 = v22 - 1;
      if ( v25 >= 0 )
      {
        v26 = v21;
        do
        {
          *v26 = *v24;
          v26[1] = v24[1];
          v24[1] = 0;
          v26[2] = v24[2];
          v24[2] = 0;
          v26[3] = v24[3];
          v24[3] = 0;
          *((_DWORD *)v26 + 8) = *((_DWORD *)v24 + 8);
          v26[5] = v24[5];
          v24[5] = 0;
          v26[6] = v24[6];
          v24[6] = 0;
          v26[7] = v24[7];
          v24[7] = 0;
          memcpy(v26 + 8, v24 + 8, 0x168u);
          *((_BYTE *)v26 + 424) = *((_BYTE *)v24 + 424);
          *((_DWORD *)v26 + 107) = *((_DWORD *)v24 + 107);
          v27 = (void *)v24[5];
          if ( v27 )
          {
            v24[6] = 0;
            j__free(v27);
          }
          v28 = (void *)v24[1];
          if ( v28 )
          {
            v24[2] = 0;
            j__free(v28);
          }
          --v25;
          v24 += 54;
          v26 += 54;
        }
        while ( v25 != -1 );
        v24 = (_QWORD *)*a1;
      }
      j__free(v24);
      v4 = a1[1];
      *a1 = v12;
      a1[2] = v23;
      if ( a2 <= v4 )
      {
LABEL_38:
        a1[1] = a2;
        goto LABEL_12;
      }
    }
    v14 = 54 * v4;
    while ( 1 )
    {
      v17 = &v12[v14];
      v12[v14] = s;
      v17[1] = 0;
      v17[2] = 0;
      v17[3] = 0;
      v18 = v51;
      if ( v51 )
      {
        v19 = sub_491248(v51);
        v17[1] = v19;
        v17[3] = v18;
        v15 = v17 + 5;
        memcpy(v19, v50, v18);
        v17[2] = v18;
        v17[5] = 0;
        *((_DWORD *)v17 + 8) = v52;
        v17[6] = 0;
        v17[7] = 0;
        v16 = v54;
        if ( !v54 )
          goto LABEL_23;
      }
      else
      {
        v15 = v17 + 5;
        *((_DWORD *)v17 + 8) = v52;
        v17[5] = 0;
        v17[6] = 0;
        v17[7] = 0;
        v16 = v54;
        if ( !v54 )
          goto LABEL_23;
      }
      v20 = sub_491248(v16);
      v17[5] = v20;
      v15[2] = v16;
      memcpy(v20, ptr, v16);
      v17[6] = v16;
LABEL_23:
      memcpy(v17 + 8, src, 0x168u);
      ++v4;
      *((_BYTE *)v17 + 424) = v57;
      v14 += 54;
      *((_DWORD *)v17 + 107) = v58;
      if ( a2 <= v4 )
        goto LABEL_38;
      v12 = (_QWORD *)*a1;
    }
  }
LABEL_12:
  if ( ptr )
  {
    v54 = 0;
    j__free(ptr);
  }
  if ( v50 )
  {
    v51 = 0;
    j__free(v50);
  }
  return v70 ^ _stack_chk_guard;
}
// 467CE0: could not find valid save-restore pair for x25
