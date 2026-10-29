/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B0340
// Address: 0x080B0340

//----- (080B0340) --------------------------------------------------------
int __cdecl sub_80B0340(void **a1, int a2, int a3)
{
  unsigned int v3; // eax
  unsigned int v4; // edi
  unsigned int v5; // ebx
  unsigned __int8 *v6; // edi
  int v7; // ebx
  const char *v8; // edx
  char *v9; // eax
  size_t v10; // eax
  size_t v11; // edx
  char *v12; // ecx
  int i; // edi
  char *v14; // edx
  void *v15; // eax
  unsigned int v17; // ecx
  void *v18; // eax
  char *v19; // [esp+4h] [ebp-484h]
  size_t v20; // [esp+Ch] [ebp-47Ch]
  unsigned int v21; // [esp+14h] [ebp-474h]
  int src; // [esp+18h] [ebp-470h]
  unsigned __int8 *v23; // [esp+1Ch] [ebp-46Ch]
  int v24; // [esp+1Ch] [ebp-46Ch]
  size_t v25; // [esp+1Ch] [ebp-46Ch]
  void *ptr; // [esp+20h] [ebp-468h] BYREF
  int v27; // [esp+24h] [ebp-464h]
  int v28; // [esp+28h] [ebp-460h]
  int v29; // [esp+2Ch] [ebp-45Ch] BYREF
  char s[1024]; // [esp+30h] [ebp-458h] BYREF
  void *v31; // [esp+430h] [ebp-58h]
  int v32; // [esp+434h] [ebp-54h]
  void *v33; // [esp+43Ch] [ebp-4Ch]
  int v34; // [esp+440h] [ebp-48h]
  void *v35; // [esp+448h] [ebp-40h]
  int v36; // [esp+44Ch] [ebp-3Ch]
  void *v37; // [esp+454h] [ebp-34h]
  int v38; // [esp+458h] [ebp-30h]
  int v39; // [esp+464h] [ebp-24h]
  int v40; // [esp+468h] [ebp-20h]
  unsigned int v41; // [esp+46Ch] [ebp-1Ch]

  v41 = __readgsdword(0x14u);
  ptr = nullptr;
  v27 = 0;
  v28 = 0;
  v19 = *(char **)a2;
  v3 = *(unsigned __int16 *)(a2 + 24);
  if ( !(_WORD)v3 )
    goto LABEL_35;
  if ( (unsigned __int16)v3 <= 0xBu )
    goto LABEL_40;
  v4 = *(_DWORD *)(a2 + 26);
  v5 = *(_DWORD *)(a2 + 30);
  if ( *(_BYTE *)(a2 + 16) )
  {
    v4 = _byteswap_ulong(v4);
    v5 = _byteswap_ulong(v5);
  }
  if ( v3 < v4 + v5 + 12 )
  {
LABEL_40:
    src = -1;
    goto LABEL_33;
  }
  v6 = (unsigned __int8 *)(a2 + v4 + 38);
  if ( v5 )
  {
    v23 = &v6[v5];
    do
      sub_8070240(&ptr, "%02x", *v6++);
    while ( v6 != v23 );
    v7 = *(_DWORD *)(a2 + 12);
    if ( v27 )
      v8 = (const char *)ptr;
    else
      v8 = (const char *)&dword_80DDFD8;
  }
  else
  {
LABEL_35:
    v8 = (const char *)&dword_80DDFD8;
    v7 = *(_DWORD *)(a2 + 12);
  }
  v9 = (char *)&dword_80DDFD8;
  if ( *(_DWORD *)(a3 + 4) )
    v9 = *(char **)a3;
  sub_805D890((int)&v29, v9, 0, v19, (const char *)(a2 + 1050), 0, v8);
  v40 = v7;
  v29 = (int)&off_811C1C8;
  v39 = a2 + 16;
  if ( sub_805A400((__int64 ***)&v29) )
  {
    if ( a1 )
    {
      v10 = strlen(s);
      v11 = v10;
      if ( v10 )
      {
        v17 = v10 + 1;
        v18 = *a1;
        if ( (unsigned int)a1[2] < v17 )
        {
          v20 = v11;
          v21 = v17;
          v18 = sub_80CF920((int)a1, v18, v17, 1u);
          v11 = v20;
          v17 = v21;
          *a1 = v18;
        }
        a1[1] = (void *)v17;
        v25 = v11;
        memmove(v18, s, v11);
        *((_BYTE *)*a1 + v25) = 0;
      }
      else
      {
        a1[1] = nullptr;
      }
    }
    src = 0;
  }
  else
  {
    src = -1;
  }
  v29 = (int)&off_811B7E0;
  if ( v37 )
  {
    v38 = 0;
    sub_80CF780(v37);
  }
  if ( v35 )
  {
    v36 = 0;
    sub_80CF780(v35);
  }
  if ( v33 )
  {
    v34 = 0;
    sub_80CF780(v33);
  }
  v12 = (char *)v31;
  if ( v31 )
  {
    if ( v32 )
    {
      v24 = v32;
      for ( i = 0; i != v24; ++i )
      {
        v14 = &v12[12 * i];
        v15 = *(void **)v14;
        if ( *(_DWORD *)v14 )
        {
          *((_DWORD *)v14 + 1) = 0;
          sub_80CF780(v15);
          v12 = (char *)v31;
        }
      }
    }
    v32 = 0;
    sub_80CF780(v12);
  }
  if ( ptr )
  {
    v27 = 0;
    sub_80CF780(ptr);
  }
LABEL_33:
  if ( v41 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return src;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811B7E0: using guessed type int (__cdecl *off_811B7E0)(int, int);
// 811C1C8: using guessed type int (__cdecl *off_811C1C8)(int, int);
