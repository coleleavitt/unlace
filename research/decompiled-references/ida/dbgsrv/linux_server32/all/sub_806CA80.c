/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_806CA80
// Address: 0x0806CA80

//----- (0806CA80) --------------------------------------------------------
int __cdecl sub_806CA80(void **a1, unsigned int *a2, int *a3, char a4)
{
  unsigned int v4; // eax
  unsigned int v5; // edx
  int v6; // esi
  int v7; // edx
  size_t v8; // ecx
  unsigned __int32 v9; // eax
  unsigned __int32 v11; // ecx
  unsigned __int32 v12; // eax
  size_t v13; // edx
  size_t v14; // ecx
  size_t v15; // ecx
  size_t v16; // [esp-5Ch] [ebp-5Ch]
  size_t v17; // [esp-5Ch] [ebp-5Ch]
  size_t v18; // [esp-58h] [ebp-58h]
  size_t v19; // [esp-58h] [ebp-58h]
  size_t v20; // [esp-58h] [ebp-58h]
  size_t v21; // [esp-58h] [ebp-58h]
  unsigned __int32 v22; // [esp-54h] [ebp-54h]
  int v23; // [esp-50h] [ebp-50h]
  size_t v24; // [esp-50h] [ebp-50h]
  const void *v25; // [esp-50h] [ebp-50h]
  const void *v26; // [esp-50h] [ebp-50h]
  unsigned int v27; // [esp-4Ch] [ebp-4Ch]
  void *v28; // [esp-4Ch] [ebp-4Ch]
  void *v29; // [esp-4Ch] [ebp-4Ch]
  unsigned int v30; // [esp-40h] [ebp-40h]
  int v31; // [esp-40h] [ebp-40h]
  int v32; // [esp-40h] [ebp-40h]
  unsigned int v33; // [esp-40h] [ebp-40h]
  unsigned int v34; // [esp-40h] [ebp-40h]
  void *v35; // [esp-3Ch] [ebp-3Ch] BYREF
  unsigned int v36; // [esp-38h] [ebp-38h]
  int v37; // [esp-34h] [ebp-34h]
  void *v38; // [esp-2Ch] [ebp-2Ch] BYREF
  unsigned int v39; // [esp-28h] [ebp-28h]
  int v40; // [esp-24h] [ebp-24h]
  unsigned int v41; // [esp-20h] [ebp-20h]

  v4 = *a2;
  v41 = __readgsdword(0x14u);
  if ( v4 > 0xFFFFFFFB || (v5 = v4 + 4, v30 = a3[1], v30 < v4 + 4) )
  {
    v6 = 0;
    goto LABEL_10;
  }
  v23 = *a3;
  v27 = *(_DWORD *)(*a3 + v4);
  v6 = 0;
  if ( a4 )
  {
    if ( v5 > 0xFFFFFFFB )
      goto LABEL_10;
    if ( v30 < v4 + 8 )
      goto LABEL_10;
    if ( v4 + 8 > 0xFFFFFFFB )
      goto LABEL_10;
    v7 = v4 + 12;
    if ( v30 < v4 + 12 )
      goto LABEL_10;
    v27 = _byteswap_ulong(v27);
    v11 = _byteswap_ulong(*(_DWORD *)(v23 + v4 + 4));
    v12 = _byteswap_ulong(*(_DWORD *)(v23 + v4 + 8));
    v24 = v11;
    v22 = v12;
  }
  else
  {
    if ( v5 > 0xFFFFFFFB )
      goto LABEL_10;
    if ( v30 < v4 + 8 )
      goto LABEL_10;
    if ( v4 + 8 > 0xFFFFFFFB )
      goto LABEL_10;
    v7 = v4 + 12;
    if ( v30 < v4 + 12 )
      goto LABEL_10;
    v8 = *(_DWORD *)(v23 + v4 + 4);
    v9 = *(_DWORD *)(v23 + v4 + 8);
    v24 = v8;
    v22 = v9;
  }
  v35 = nullptr;
  v36 = 0;
  v37 = 0;
  v31 = v7;
  v6 = sub_806C800((int)&v35, a3, v7, v27, 1);
  if ( (_BYTE)v6 )
  {
    v38 = nullptr;
    v39 = 0;
    v40 = 0;
    v32 = v31 + ((v27 + 3) & 0xFFFFFFFC);
    v6 = sub_806C800((int)&v38, a3, v32, v24, 0);
    if ( (_BYTE)v6 )
    {
      v13 = ((v24 + 3) & 0xFFFFFFFC) + v32;
      if ( a1 )
      {
        v33 = v36;
        if ( v36 && (v14 = v36 - 1, v36 != 1) )
        {
          v26 = v35;
          v29 = *a1;
          if ( (unsigned int)a1[2] < v36 )
          {
            v17 = v36 - 1;
            v21 = v13;
            v29 = sub_80CF920((int)a1, v29, v36, 1u);
            v14 = v17;
            v13 = v21;
            *a1 = v29;
          }
          v19 = v13;
          a1[1] = (void *)v33;
          memmove(v29, v26, v14);
          *((char *)*a1 + v33 - 1) = 0;
          v13 = v19;
        }
        else
        {
          a1[1] = nullptr;
        }
        v34 = v39;
        if ( v39 && (v15 = v39 - 1, v39 != 1) )
        {
          v25 = v38;
          v28 = a1[3];
          if ( (unsigned int)a1[5] < v39 )
          {
            v16 = v39 - 1;
            v20 = v13;
            v28 = sub_80CF920((int)(a1 + 3), v28, v39, 1u);
            v15 = v16;
            v13 = v20;
            a1[3] = v28;
          }
          v18 = v13;
          a1[4] = (void *)v34;
          memmove(v28, v25, v15);
          *((char *)a1[3] + v34 - 1) = 0;
          v13 = v18;
        }
        else
        {
          a1[4] = nullptr;
        }
        a1[6] = (void *)v22;
      }
      *a2 = v13;
    }
    if ( v38 )
    {
      v39 = 0;
      sub_80CF780(v38);
    }
  }
  if ( v35 )
  {
    v36 = 0;
    sub_80CF780(v35);
  }
LABEL_10:
  if ( v41 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v6;
}
