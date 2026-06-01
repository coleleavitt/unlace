/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7CEC0
// Address: 0x0007CEC0

//----- (0007CEC0) --------------------------------------------------------
unsigned int __cdecl sub_7CEC0(int a1, void **a2, unsigned int *a3)
{
  unsigned int *v3; // edi
  unsigned int v4; // ecx
  _DWORD *v5; // edx
  int *v6; // esi
  unsigned int *v7; // esi
  unsigned __int8 *v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // ecx
  char *v12; // eax
  const void *v13; // ecx
  unsigned int v14; // edx
  void *v15; // eax
  int v16; // eax
  unsigned int *v17; // esi
  unsigned int *v18; // edi
  bool v19; // zf
  unsigned int v20; // eax
  unsigned int v21; // esi
  unsigned int v22; // edi
  _DWORD *v23; // esi
  int v24; // edi
  _BYTE *v25; // eax
  _BYTE *v26; // eax
  unsigned int v27; // esi
  void *v28; // eax
  _BYTE *v29; // ecx
  char *v30; // edx
  _BYTE *v31; // ecx
  unsigned int v32; // edx
  void *v33; // eax
  char *v34; // edi
  void **v35; // esi
  void *v36; // eax
  _BYTE *v37; // ecx
  char *v38; // eax
  _BYTE *v39; // eax
  char *v40; // esi
  size_t v41; // eax
  char *v42; // esi
  unsigned int v43; // ecx
  int i; // edi
  void *v45; // eax
  int v47; // [esp+8h] [ebp-64h]
  unsigned int *v48; // [esp+8h] [ebp-64h]
  char v49; // [esp+8h] [ebp-64h]
  char v50; // [esp+8h] [ebp-64h]
  char v51; // [esp+8h] [ebp-64h]
  unsigned int v52; // [esp+8h] [ebp-64h]
  unsigned int v53; // [esp+Ch] [ebp-60h]
  unsigned int *v54; // [esp+Ch] [ebp-60h]
  unsigned int v55; // [esp+Ch] [ebp-60h]
  int v56; // [esp+10h] [ebp-5Ch]
  int v57; // [esp+10h] [ebp-5Ch]
  int v58; // [esp+10h] [ebp-5Ch]
  unsigned int v59; // [esp+10h] [ebp-5Ch]
  int v60; // [esp+14h] [ebp-58h]
  unsigned int v61; // [esp+14h] [ebp-58h]
  unsigned int v62; // [esp+18h] [ebp-54h]
  unsigned int v63; // [esp+18h] [ebp-54h]
  size_t v64; // [esp+1Ch] [ebp-50h]
  int v65; // [esp+20h] [ebp-4Ch]
  int v66; // [esp+24h] [ebp-48h]
  int v67; // [esp+2Ch] [ebp-40h]
  char *v68; // [esp+30h] [ebp-3Ch] BYREF
  int v69; // [esp+34h] [ebp-38h]
  int v70; // [esp+38h] [ebp-34h]
  unsigned int v71; // [esp+3Ch] [ebp-30h] BYREF
  _DWORD *v72; // [esp+40h] [ebp-2Ch] BYREF
  unsigned int v73; // [esp+44h] [ebp-28h]
  int v74; // [esp+48h] [ebp-24h]
  _BYTE src[5]; // [esp+53h] [ebp-19h] BYREF
  _DWORD v76[5]; // [esp+58h] [ebp-14h] BYREF

  v3 = a3;
  v76[0] = __readgsdword(0x14u);
  v72 = nullptr;
  v73 = 0;
  v74 = 0;
  v60 = unpack_dd(a3, a3[1]);
  v65 = unpack_dd(v3, v3[1]);
  if ( (v60 | v65) < 0 || 0x7FFFFFFF - v65 < v60 )
  {
    v39 = pack_dd(src, (unsigned int)v76, 0);
    sub_3A950(a2, src, v39 - src);
    v63 = 0;
    if ( *(_BYTE *)(a1 + 96) )
      sub_1C900();
  }
  else
  {
    sub_7D710((unsigned int *)&v72, v65 + v60);
    v4 = (unsigned int)v72;
    v67 = 4 * v60;
    v5 = &v72[9 * v60];
    v62 = (unsigned int)v72;
    if ( 36 * v60 )
    {
      v56 = 36 * v60;
      v53 = (unsigned int)&v72[9 * v60];
      v6 = v72 + 8;
      v47 = 0;
      do
      {
        *((_BYTE *)v6 - 8) = 0;
        v47 = v47 + unpack_dq((unsigned __int8 **)a3, a3[1]) - 1;
        *(v6 - 8) = v47;
        *(v6 - 3) = unpack_dd(a3, a3[1]);
        *(v6 - 4) = unpack_dd(a3, a3[1]);
        *(v6 - 1) = unpack_dd(a3, a3[1]);
        *v6 = unpack_dd(a3, a3[1]);
        v6 += 9;
        v56 -= 36;
      }
      while ( v56 );
      v5 = (_DWORD *)v53;
      v4 = v53;
      v3 = a3;
    }
    v54 = &v5[9 * v65];
    if ( (unsigned int *)v4 != v54 )
    {
      v48 = (unsigned int *)(v4 + 12);
      v57 = 0;
      do
      {
        v7 = v48;
        v57 = v57 + unpack_dq((unsigned __int8 **)v3, v3[1]) - 1;
        *(v48 - 3) = v57;
        v8 = (unsigned __int8 *)*v3;
        v9 = v3[1];
        if ( *v3 < v9 )
        {
          v10 = *v8;
          *v3 = (unsigned int)(v8 + 1);
          if ( v10 )
          {
            v11 = *(v48 - 1);
            v64 = v10;
            if ( v11 >= v10 )
            {
              if ( v11 != v10 )
              {
                LOBYTE(v68) = 0;
                sub_43860((char **)v48 - 2, v10, (char *)&v68);
                v7 = v48;
                v10 = v64;
              }
            }
            else
            {
              if ( *v48 >= v10 )
              {
                v12 = (char *)*(v48 - 2);
              }
              else
              {
                v12 = (char *)qvector_reserve((int)(v48 - 2), (void *)*(v48 - 2), v10, 1u);
                v7 = v48;
                *(v48 - 2) = (unsigned int)v12;
                v11 = *(v48 - 1);
              }
              memset(&v12[v11], 0, v64 - v11);
              v10 = v64;
              *(v7 - 1) = v64;
            }
            v13 = (const void *)*v3;
            v9 = v3[1];
            v14 = *v3 + v10;
            if ( v14 >= *v3 && v14 <= v9 )
            {
              v15 = (void *)*(v7 - 2);
              *v3 = v14;
              memcpy(v15, v13, v64);
              v9 = v3[1];
            }
          }
        }
        v16 = unpack_dd(v3, v9);
        v17 = v3;
        v18 = v48 - 3;
        v48[1] = v16;
        v48[4] = unpack_dd(v17, v17[1]);
        v48[5] = unpack_dd(v17, v17[1]);
        v48 += 9;
        v19 = v18 + 9 == v54;
        v3 = v17;
      }
      while ( !v19 );
    }
    v20 = (unsigned int)v72;
    v66 = 9 * v60;
    if ( &v72[9 * v60] != v54 )
    {
      v21 = (unsigned int)&v72[9 * v60 + 5];
      v22 = v62 + 36 * v65 - (_DWORD)v72;
      do
      {
        if ( *(_BYTE *)(a1 + 96) )
          sub_1C900();
        v21 += 36;
        v22 -= 36;
      }
      while ( v22 );
      v20 = (unsigned int)v72;
    }
    v68 = nullptr;
    v69 = 0;
    v70 = 0;
    v63 = (*(int (__cdecl **)(_DWORD, unsigned int *, unsigned int, int, int, char **))(**(_DWORD **)(a1 + 244) + 164))(
            *(_DWORD *)(a1 + 244),
            &v71,
            v20,
            v60,
            v65,
            &v68);
    v61 = (unsigned int)v72;
    if ( 9 * v67 )
    {
      v23 = v72 + 6;
      v24 = 9 * v67;
      do
      {
        if ( *(_BYTE *)(a1 + 96) )
          sub_1C900();
        v23 += 9;
        v24 -= 36;
      }
      while ( v24 );
    }
    v25 = pack_dd(src, (unsigned int)v76, v63);
    sub_3A950(a2, src, v25 - src);
    v26 = pack_dd(src, (unsigned int)v76, v71);
    sub_3A950(a2, src, v26 - src);
    v27 = (unsigned int)v72;
    v55 = v61 + 9 * v67;
    if ( v72 != (_DWORD *)v55 )
    {
      do
      {
        v49 = *(_BYTE *)(v27 + 24);
        v28 = *a2;
        v29 = a2[1];
        if ( a2[2] < v29 + 1 )
        {
          v28 = qvector_reserve((int)a2, v28, (unsigned int)(v29 + 1), 1u);
          *a2 = v28;
          v29 = a2[1];
        }
        v29[(_DWORD)v28] = v49;
        v30 = (char *)a2[1];
        v31 = v30 + 1;
        a2[1] = v30 + 1;
        if ( !*(_BYTE *)(v27 + 24) && *(_DWORD *)(v27 + 16) == 4 )
        {
          v50 = *(_BYTE *)(v27 + 8);
          v32 = (unsigned int)(v30 + 2);
          v33 = *a2;
          if ( (unsigned int)a2[2] < v32 )
          {
            v33 = qvector_reserve((int)a2, v33, v32, 1u);
            *a2 = v33;
            v31 = a2[1];
          }
          v31[(_DWORD)v33] = v50;
          a2[1] = (char *)a2[1] + 1;
          sub_3A950(a2, *(void **)(v27 + 4), *(_DWORD *)(v27 + 8));
        }
        v27 += 36;
      }
      while ( v55 != v27 );
    }
    v58 = 36 * v65;
    if ( 36 * v65 )
    {
      v34 = (char *)(v61 + 4 * v66 + 24);
      do
      {
        v51 = *v34;
        v35 = a2;
        v36 = *a2;
        v37 = a2[1];
        if ( a2[2] < v37 + 1 )
        {
          v36 = qvector_reserve((int)a2, v36, (unsigned int)(v37 + 1), 1u);
          v35 = a2;
          *a2 = v36;
          v37 = a2[1];
        }
        v37[(_DWORD)v36] = v51;
        v35[1] = (char *)v35[1] + 1;
        if ( *(_BYTE *)(a1 + 96) )
          sub_1C900();
        v34 += 36;
        v58 -= 36;
      }
      while ( v58 );
    }
    if ( v63 != 1 )
    {
      if ( v69 )
        v38 = v68;
      else
        v38 = byte_EF875;
      v40 = &byte_DCEE2;
      if ( v38 )
        v40 = v38;
      v41 = strlen(v40);
      sub_3A950(a2, v40, v41 + 1);
    }
    if ( v68 )
    {
      v69 = 0;
      qfree(v68);
      v68 = nullptr;
      v70 = 0;
    }
  }
  v42 = (char *)v72;
  if ( v72 )
  {
    v59 = v73;
    if ( v73 )
    {
      v43 = 1;
      for ( i = 4; ; i += 36 )
      {
        v45 = *(void **)&v42[i];
        if ( v45 )
        {
          v52 = v43;
          *(_DWORD *)&v42[i + 4] = 0;
          qfree(v45);
          *(_DWORD *)&v42[i] = 0;
          *(_DWORD *)&v42[i + 8] = 0;
          v43 = v52;
        }
        if ( v43 >= v59 )
          break;
        v42 = (char *)v72;
        ++v43;
      }
      v42 = (char *)v72;
    }
    v73 = 0;
    qfree(v42);
    v72 = nullptr;
    v74 = 0;
  }
  return v63;
}
// DCEE2: using guessed type char byte_DCEE2;
