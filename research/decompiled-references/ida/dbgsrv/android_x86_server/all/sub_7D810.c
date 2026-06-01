/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7D810
// Address: 0x0007D810

//----- (0007D810) --------------------------------------------------------
unsigned int __cdecl sub_7D810(int a1, _DWORD *a2, unsigned int *a3)
{
  signed int v3; // edi
  int v4; // edx
  char *v5; // esi
  int v6; // eax
  int v7; // eax
  const char *v8; // edi
  _BYTE *v9; // eax
  char *v11; // ecx
  size_t v12; // eax
  size_t v13; // ecx
  unsigned int v14; // edx
  void *v15; // eax
  unsigned int *v16; // eax
  int v17; // eax
  unsigned __int8 *v18; // ecx
  unsigned int v19; // eax
  unsigned int v20; // edx
  void **v21; // eax
  unsigned int v22; // ecx
  char *v23; // eax
  size_t v24; // edi
  const void *v25; // ecx
  unsigned int v26; // edx
  char *v27; // eax
  int v28; // eax
  int v29; // esi
  _BYTE *v30; // eax
  _BYTE *v31; // eax
  char *v32; // eax
  char *v33; // esi
  size_t v34; // eax
  const char *v36; // [esp-Ch] [ebp-68h]
  int v37; // [esp+8h] [ebp-54h]
  unsigned int v38; // [esp+8h] [ebp-54h]
  size_t v39; // [esp+Ch] [ebp-50h]
  size_t v40; // [esp+Ch] [ebp-50h]
  void **v41; // [esp+10h] [ebp-4Ch]
  unsigned int v42; // [esp+14h] [ebp-48h]
  char **v43; // [esp+14h] [ebp-48h]
  signed int v44; // [esp+18h] [ebp-44h]
  int v45; // [esp+1Ch] [ebp-40h]
  char *v46; // [esp+20h] [ebp-3Ch] BYREF
  int v47; // [esp+24h] [ebp-38h]
  int v48; // [esp+28h] [ebp-34h]
  unsigned int v49; // [esp+2Ch] [ebp-30h] BYREF
  void *v50[2]; // [esp+30h] [ebp-2Ch] BYREF
  int v51; // [esp+38h] [ebp-24h]
  _BYTE src[5]; // [esp+43h] [ebp-19h] BYREF
  _DWORD v53[5]; // [esp+48h] [ebp-14h] BYREF

  v53[0] = __readgsdword(0x14u);
  v50[0] = nullptr;
  v50[1] = nullptr;
  v51 = 0;
  v3 = unpack_dd(a3, a3[1]);
  sub_7DD20((int *)v50, v3);
  v4 = a1;
  if ( v3 <= 0 )
    goto LABEL_35;
  v37 = 0;
  v5 = (char *)v50[0];
  v6 = 0;
  v44 = v3;
  do
  {
    v45 = v6;
    v5[248] = 0;
    v7 = unpack_dq((unsigned __int8 **)a3, a3[1]);
    v4 = a1;
    v37 = v37 + v7 - 1;
    *(_DWORD *)v5 = v37;
    v8 = (const char *)*a3;
    v9 = (_BYTE *)*a3;
    do
    {
      if ( (unsigned int)v9 >= a3[1] )
      {
        v11 = v5 + 4;
LABEL_11:
        *((_DWORD *)v5 + 2) = 0;
        v16 = a3;
        goto LABEL_12;
      }
    }
    while ( *v9++ != 0 );
    *a3 = (unsigned int)v9;
    v11 = v5 + 4;
    if ( !v8 )
      goto LABEL_11;
    v41 = (void **)(v5 + 4);
    v12 = strlen(v8);
    if ( !v12 )
    {
      v4 = a1;
      v11 = v5 + 4;
      goto LABEL_11;
    }
    v13 = v12;
    v14 = v12 + 1;
    if ( *((_DWORD *)v5 + 3) >= v12 + 1 )
    {
      v15 = *v41;
    }
    else
    {
      v39 = v12;
      v42 = v12 + 1;
      v15 = qvector_reserve((int)v41, *v41, v14, 1u);
      *v41 = v15;
      v13 = v39;
      v14 = v42;
    }
    *((_DWORD *)v5 + 2) = v14;
    v36 = v8;
    v24 = v13;
    memmove(v15, v36, v13);
    *(_BYTE *)(*((_DWORD *)v5 + 1) + v24) = 0;
    v16 = a3;
    v4 = a1;
    v11 = v5 + 4;
LABEL_12:
    if ( *((_DWORD *)v11 + 1) >= 2u )
    {
      *((_DWORD *)v5 + 63) = 0;
      v17 = unpack_dd(v16, v16[1]);
      *((_DWORD *)v5 + 4) = v17;
      if ( v17 != 4 )
        *((_DWORD *)v5 + 63) = unpack_dd(a3, a3[1]);
      v18 = (unsigned __int8 *)*a3;
      v19 = a3[1];
      if ( *a3 < v19 )
      {
        v20 = *v18;
        *a3 = (unsigned int)(v18 + 1);
        if ( v20 )
        {
          v21 = (void **)(v5 + 20);
          v22 = *((_DWORD *)v5 + 6);
          v40 = v20;
          v43 = (char **)(v5 + 20);
          if ( v22 >= v20 )
          {
            if ( v22 != v20 )
            {
              LOBYTE(v46) = 0;
              sub_43860(v43, v20, (char *)&v46);
              v20 = v40;
            }
          }
          else
          {
            if ( *((_DWORD *)v5 + 7) >= v20 )
            {
              v23 = (char *)*v21;
            }
            else
            {
              v23 = (char *)qvector_reserve((int)(v5 + 20), *v21, v20, 1u);
              *((_DWORD *)v5 + 5) = v23;
              v22 = *((_DWORD *)v5 + 6);
            }
            memset(&v23[v22], 0, v40 - v22);
            v20 = v40;
            *((_DWORD *)v5 + 6) = v40;
          }
          v25 = (const void *)*a3;
          v19 = a3[1];
          v26 = *a3 + v20;
          if ( v26 >= *a3 && v26 <= v19 )
          {
            v27 = *v43;
            *a3 = v26;
            memcpy(v27, v25, v40);
            v19 = a3[1];
          }
        }
      }
      v28 = unpack_dq((unsigned __int8 **)a3, v19);
      v4 = a1;
      *((_DWORD *)v5 + 10) = v28 - 1;
      if ( v28 )
      {
        sub_91F10((int)(v5 + 32), (int)a3);
        v4 = a1;
      }
    }
    if ( *(_BYTE *)(v4 + 96) )
    {
      sub_1C900();
      v4 = a1;
    }
    v6 = v45 + 1;
    v5 += 256;
    v3 = v44;
  }
  while ( v45 + 1 < v44 );
LABEL_35:
  v46 = nullptr;
  v47 = 0;
  v48 = 0;
  v29 = v4;
  v38 = (*(int (__cdecl **)(_DWORD, unsigned int *, void *, signed int, char **))(**(_DWORD **)(v4 + 244) + 176))(
          *(_DWORD *)(v4 + 244),
          &v49,
          v50[0],
          v3,
          &v46);
  if ( *(_BYTE *)(v29 + 96) )
    sub_1C900();
  v30 = pack_dd(src, (unsigned int)v53, v38);
  sub_3A950(a2, src, v30 - src);
  v31 = pack_dd(src, (unsigned int)v53, v49);
  sub_3A950(a2, src, v31 - src);
  if ( v38 != 1 )
  {
    if ( v47 )
      v32 = v46;
    else
      v32 = byte_EF875;
    v33 = &byte_DCEE2;
    if ( v32 )
      v33 = v32;
    v34 = strlen(v33);
    sub_3A950(a2, v33, v34 + 1);
  }
  if ( v46 )
  {
    v47 = 0;
    qfree(v46);
    v46 = nullptr;
    v48 = 0;
  }
  if ( v50[0] )
  {
    sub_88050((int *)v50, 0);
    qfree(v50[0]);
    v50[0] = nullptr;
    v51 = 0;
  }
  return __readgsdword(0x14u);
}
// DCEE2: using guessed type char byte_DCEE2;
