/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_805DF40
// Address: 0x0805DF40

//----- (0805DF40) --------------------------------------------------------
unsigned int __cdecl sub_805DF40(int a1, _DWORD *a2)
{
  _DWORD *v2; // esi
  int v3; // ebx
  const char *v4; // eax
  int *v5; // eax
  const char *v6; // ecx
  const char *v7; // edx
  char *v8; // eax
  const char *v9; // eax
  int *v10; // edx
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  size_t v14; // ebx
  int *v15; // edx
  char *v16; // ebx
  int v17; // eax
  int v18; // eax
  int v19; // ebx
  int v20; // ecx
  char *v21; // edx
  int v22; // eax
  unsigned int v23; // ecx
  size_t v24; // eax
  char *v25; // edx
  char *v26; // eax
  char *v27; // eax
  char *i; // edx
  char *v29; // ecx
  int j; // esi
  char *v31; // edx
  void *v32; // eax
  unsigned int result; // eax
  int v34; // eax
  _DWORD *v35; // esi
  void *v36; // edx
  size_t v37; // [esp-Ch] [ebp-4F0h]
  size_t n; // [esp+0h] [ebp-4E4h]
  char *v39; // [esp+4h] [ebp-4E0h]
  char *v40; // [esp+4h] [ebp-4E0h]
  int *v41; // [esp+4h] [ebp-4E0h]
  char *v42; // [esp+8h] [ebp-4DCh]
  const char *v43; // [esp+Ch] [ebp-4D8h]
  int *v44; // [esp+Ch] [ebp-4D8h]
  int v45; // [esp+Ch] [ebp-4D8h]
  int v46; // [esp+Ch] [ebp-4D8h]
  int (**v47)(); // [esp+14h] [ebp-4D0h]
  char *v48; // [esp+14h] [ebp-4D0h]
  char *v49; // [esp+14h] [ebp-4D0h]
  char *v50; // [esp+14h] [ebp-4D0h]
  char *v51; // [esp+14h] [ebp-4D0h]
  signed int v52; // [esp+18h] [ebp-4CCh]
  size_t v53; // [esp+18h] [ebp-4CCh]
  size_t v54; // [esp+18h] [ebp-4CCh]
  size_t v55; // [esp+18h] [ebp-4CCh]
  size_t v56; // [esp+18h] [ebp-4CCh]
  size_t v57; // [esp+18h] [ebp-4CCh]
  size_t v58; // [esp+18h] [ebp-4CCh]
  void *v59; // [esp+1Ch] [ebp-4C8h] BYREF
  size_t v60; // [esp+20h] [ebp-4C4h]
  int v61; // [esp+24h] [ebp-4C0h]
  void *src; // [esp+2Ch] [ebp-4B8h] BYREF
  size_t size; // [esp+30h] [ebp-4B4h]
  int v64; // [esp+34h] [ebp-4B0h]
  _DWORD v65[2]; // [esp+3Ch] [ebp-4A8h] BYREF
  void *ptr; // [esp+44h] [ebp-4A0h]
  size_t v67; // [esp+48h] [ebp-49Ch]
  size_t v68; // [esp+4Ch] [ebp-498h]
  void *v69; // [esp+50h] [ebp-494h]
  size_t v70; // [esp+54h] [ebp-490h]
  size_t v71; // [esp+58h] [ebp-48Ch]
  int v72; // [esp+60h] [ebp-484h] BYREF
  size_t v73; // [esp+64h] [ebp-480h]
  int *v74; // [esp+68h] [ebp-47Ch]
  int *v75; // [esp+6Ch] [ebp-478h]
  int v76; // [esp+70h] [ebp-474h]
  void *v77; // [esp+74h] [ebp-470h]
  int v78; // [esp+78h] [ebp-46Ch]
  int v79; // [esp+7Ch] [ebp-468h]
  void *v80; // [esp+80h] [ebp-464h]
  int v81; // [esp+84h] [ebp-460h]
  int v82; // [esp+88h] [ebp-45Ch]
  int v83; // [esp+8Ch] [ebp-458h]
  int v84; // [esp+90h] [ebp-454h] BYREF
  char s2[1024]; // [esp+94h] [ebp-450h] BYREF
  void *v86; // [esp+494h] [ebp-50h]
  size_t v87; // [esp+498h] [ebp-4Ch]
  void *v88; // [esp+4A0h] [ebp-44h]
  int v89; // [esp+4A4h] [ebp-40h]
  void *v90; // [esp+4ACh] [ebp-38h]
  int v91; // [esp+4B0h] [ebp-34h]
  void *v92; // [esp+4B8h] [ebp-2Ch]
  int v93; // [esp+4BCh] [ebp-28h]
  unsigned int v94; // [esp+4C8h] [ebp-1Ch]

  v2 = (_DWORD *)a1;
  v3 = a2[6];
  v94 = __readgsdword(0x14u);
  v4 = (const char *)&dword_80DDFD8;
  if ( v3 )
    v4 = (const char *)a2[5];
  v43 = sub_80D3BC0(v4, "libpthread");
  v47 = (int (**)())(a1 + 560);
  if ( v43 )
  {
    v47 = (int (**)())(a1 + 584);
    *(_DWORD *)(a1 + 796) = *a2;
  }
  sub_805AE20((int (**)())a1, v47, (int)a2);
  v5 = sub_80A4AE0();
  v6 = (const char *)&dword_80DDFD8;
  v42 = (char *)v5;
  if ( a2[15] )
    v6 = (const char *)a2[14];
  v7 = (const char *)&dword_80DDFD8;
  if ( a2[18] )
    v7 = (const char *)a2[17];
  v8 = (char *)&dword_80DDFD8;
  if ( a2[3] )
    v8 = (char *)a2[2];
  sub_805D890((int)&v84, v42, 1, v8, v7, a2[20], v6);
  if ( sub_805A400((__int64 ***)&v84) )
  {
    v9 = (const char *)&dword_80DDFD8;
    if ( a2[3] )
      v9 = (const char *)a2[2];
    if ( strcmp(v9, s2) )
    {
      sub_80A03F0(a1, "load separate debug info '%s'\n", s2);
      src = nullptr;
      size = 0;
      v64 = 0;
      src = sub_80CF920((int)&src, nullptr, 1u, 1u);
      size = 1;
      *(_BYTE *)src = 0;
      v59 = nullptr;
      v60 = 0;
      v61 = 0;
      n = strlen(s2);
      v59 = sub_80CF920((int)&v59, nullptr, n + 1, 1u);
      v60 = n + 1;
      memmove(v59, s2, n);
      *((_BYTE *)v59 + n) = 0;
      v65[1] = 0;
      ptr = nullptr;
      v34 = *a2;
      v67 = 0;
      v65[0] = v34;
      v68 = 0;
      v56 = v60;
      if ( v60 )
      {
        ptr = sub_80CF8B0(v60);
        v68 = v56;
        memcpy(ptr, v59, v56);
        v67 = v56;
      }
      v69 = nullptr;
      v70 = 0;
      v71 = 0;
      v57 = size;
      if ( size )
      {
        v69 = sub_80CF8B0(size);
        v71 = v57;
        memcpy(v69, src, v57);
        v70 = v57;
      }
      v72 = 0;
      v74 = &v72;
      v75 = &v72;
      v73 = 0;
      v76 = 0;
      v77 = nullptr;
      v78 = 0;
      v79 = 0;
      v80 = nullptr;
      v81 = 0;
      v82 = 0;
      v83 = 0;
      if ( v59 )
      {
        v60 = 0;
        sub_80CF780(v59);
      }
      if ( src )
      {
        size = 0;
        sub_80CF780(src);
      }
      sub_805AE20((int (**)())a1, v47, (int)v65);
      if ( v80 )
      {
        v81 = 0;
        sub_80CF780(v80);
      }
      if ( v77 )
      {
        v78 = 0;
        sub_80CF780(v77);
      }
      if ( v73 )
      {
        v58 = v73;
        do
        {
          v35 = (_DWORD *)v58;
          sub_8057050(*(_DWORD **)(v58 + 12));
          v36 = *(void **)(v58 + 20);
          v58 = *(_DWORD *)(v58 + 8);
          if ( v36 )
          {
            v35[6] = 0;
            sub_80CF780(v36);
          }
          operator delete(v35, 0x20u);
        }
        while ( v58 );
        v2 = (_DWORD *)a1;
      }
      if ( v69 )
      {
        v70 = 0;
        sub_80CF780(v69);
      }
      if ( ptr )
      {
        v67 = 0;
        sub_80CF780(ptr);
      }
    }
  }
  if ( v43 )
  {
    v52 = 4 * v2[147];
    if ( v52 >> 2 )
    {
      v10 = (int *)v2[146];
      v48 = (char *)v2[140];
      v11 = v2[141];
      v12 = 4 * v11;
      v13 = (v52 >> 2) + v11;
      v14 = 0;
      if ( v2[142] < v13 )
      {
        v41 = (int *)v2[146];
        v46 = v12;
        v48 = (char *)sub_80CF920((int)(v2 + 140), v48, v13, 4u);
        v12 = v46;
        v2[140] = v48;
        v10 = v41;
        v14 = 4 * v2[141] - v46;
      }
      v44 = v10;
      v39 = &v48[v12];
      v49 = &v48[v12 + v52];
      memmove(v49, v39, v14);
      v15 = v44;
      if ( v52 )
      {
        v16 = v39;
        do
        {
          v17 = *v15;
          v16 += 4;
          ++v15;
          *((_DWORD *)v16 - 1) = v17;
        }
        while ( v49 != v16 );
      }
      v2[141] += v52 >> 2;
    }
    v18 = v2[150];
    v50 = (char *)(4 * v18);
    v19 = (4 * v18) >> 2;
    if ( v19 )
    {
      v20 = v2[144];
      v21 = (char *)v2[143];
      v53 = v2[149];
      v22 = 4 * v20;
      v23 = v19 + v20;
      v45 = v22;
      v24 = 0;
      if ( v2[145] < v23 )
      {
        v21 = (char *)sub_80CF920((int)(v2 + 143), v21, v23, 4u);
        v2[143] = v21;
        v24 = 4 * v2[144] - v45;
      }
      v40 = &v50[v53];
      v37 = v24;
      v25 = &v21[v45];
      v26 = &v50[(_DWORD)v25];
      v51 = v25;
      memmove(v26, v25, v37);
      v27 = (char *)v53;
      for ( i = v51; v40 != v27; v27 += 4 )
      {
        i += 4;
        *((_DWORD *)i - 1) = *(_DWORD *)v27;
      }
      v2[144] += v19;
      v18 = v2[150];
    }
    if ( v18 )
    {
      v54 = 0;
      do
      {
        *(_DWORD *)(v2[149] + 4 * v54) = sub_80CF830(*(char **)(v2[149] + 4 * v54));
        ++v54;
      }
      while ( v54 < v2[150] );
    }
  }
  v84 = (int)&off_811B7E0;
  if ( v92 )
  {
    v93 = 0;
    sub_80CF780(v92);
  }
  if ( v90 )
  {
    v91 = 0;
    sub_80CF780(v90);
  }
  if ( v88 )
  {
    v89 = 0;
    sub_80CF780(v88);
  }
  v29 = (char *)v86;
  if ( v86 )
  {
    if ( v87 )
    {
      v55 = v87;
      for ( j = 0; j != v55; ++j )
      {
        v31 = &v29[12 * j];
        v32 = *(void **)v31;
        if ( *(_DWORD *)v31 )
        {
          *((_DWORD *)v31 + 1) = 0;
          sub_80CF780(v32);
          v29 = (char *)v86;
        }
      }
    }
    v87 = 0;
    sub_80CF780(v29);
  }
  result = v94 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811B7E0: using guessed type int (__cdecl *off_811B7E0)(int, int);
