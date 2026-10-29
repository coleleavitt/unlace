/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_251F0
// Address: 0x000251F0

//----- (000251F0) --------------------------------------------------------
unsigned int __cdecl sub_251F0(int a1, _DWORD *a2)
{
  char *v2; // eax
  const char *v3; // eax
  int v4; // edi
  _DWORD *v5; // esi
  char *v6; // eax
  char *v7; // eax
  char *v8; // edx
  char *v9; // ecx
  char *v10; // edi
  _DWORD *v11; // ebx
  int v12; // esi
  const char *v13; // eax
  int v14; // esi
  char *v15; // eax
  char *v16; // eax
  int v17; // edi
  int v18; // eax
  int v19; // esi
  unsigned int v20; // ecx
  int v21; // edx
  unsigned int v22; // eax
  unsigned int v23; // edi
  int v24; // esi
  _BYTE *v25; // ebx
  int v26; // eax
  unsigned int v27; // edi
  char *v28; // esi
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // edi
  int v32; // ecx
  int v33; // eax
  int v34; // esi
  unsigned int v35; // ecx
  int v36; // edx
  unsigned int v37; // eax
  int v38; // esi
  _BYTE *v39; // ebx
  int v40; // eax
  unsigned int v41; // edi
  char *v42; // esi
  unsigned int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // edi
  int v46; // ecx
  unsigned int v47; // esi
  unsigned int v49; // ebx
  int v50; // edx
  __int128 v51; // xmm1
  unsigned int v52; // edx
  int v53; // ecx
  int v54; // ebx
  __int128 v55; // xmm1
  int v56; // [esp+8h] [ebp-4D4h]
  int v57; // [esp+8h] [ebp-4D4h]
  int v58; // [esp+8h] [ebp-4D4h]
  char *elf_debug_file_directory; // [esp+Ch] [ebp-4D0h]
  _BYTE *v60; // [esp+Ch] [ebp-4D0h]
  const char *v61; // [esp+10h] [ebp-4CCh]
  int v62; // [esp+10h] [ebp-4CCh]
  unsigned int v63; // [esp+10h] [ebp-4CCh]
  int v64; // [esp+14h] [ebp-4C8h]
  unsigned int v65; // [esp+14h] [ebp-4C8h]
  unsigned int v66; // [esp+18h] [ebp-4C4h]
  int v67; // [esp+18h] [ebp-4C4h]
  int v68; // [esp+1Ch] [ebp-4C0h]
  unsigned int v69; // [esp+1Ch] [ebp-4C0h]
  int v70[4]; // [esp+20h] [ebp-4BCh] BYREF
  _DWORD v71[2]; // [esp+30h] [ebp-4ACh] BYREF
  char *v72; // [esp+38h] [ebp-4A4h]
  int v73; // [esp+3Ch] [ebp-4A0h]
  int v74; // [esp+78h] [ebp-464h] BYREF
  int v75; // [esp+7Ch] [ebp-460h]
  int v76; // [esp+80h] [ebp-45Ch]
  _DWORD *v77; // [esp+84h] [ebp-458h]
  int v78; // [esp+88h] [ebp-454h]
  int v79; // [esp+90h] [ebp-44Ch] BYREF
  _DWORD s2[274]; // [esp+94h] [ebp-448h] BYREF

  s2[269] = __readgsdword(0x14u);
  if ( a2[6] )
    v2 = (char *)a2[5];
  else
    v2 = byte_EF875;
  v3 = stristr(v2, "libpthread");
  v4 = a1 + 520;
  if ( !v3 )
    v4 = a1 + 496;
  v5 = a2;
  v56 = v4;
  if ( v3 )
    *(_DWORD *)(a1 + 704) = *a2;
  v61 = v3;
  if ( *a2 == -1 )
  {
    if ( a2[3] )
      v7 = (char *)a2[2];
    else
      v7 = byte_EF875;
    sub_8A3F0(a1, "Can't import symbols from %s: no imagebase\n", v7);
    v5 = a2;
  }
  else
  {
    s2[0] = 49;
    v79 = (int)&off_134680;
    s2[1] = a1;
    s2[2] = a2;
    s2[3] = v4;
    if ( a2[3] )
      v6 = (char *)a2[2];
    else
      v6 = byte_EF875;
    sub_40950(v6, &v79, 0);
  }
  elf_debug_file_directory = get_elf_debug_file_directory();
  v8 = byte_EF875;
  v9 = byte_EF875;
  if ( v5[3] )
    v9 = (char *)v5[2];
  v10 = byte_EF875;
  if ( v5[15] )
    v10 = (char *)v5[14];
  v11 = v5;
  v12 = v5[17];
  if ( v11[12] )
    v8 = (char *)a2[11];
  sub_25930((int)&v79, (int)elf_debug_file_directory, 1, v9, v10, v12, v8);
  if ( sub_25BE0((int)&v79) )
  {
    v13 = a2[3] ? (const char *)a2[2] : byte_EF875;
    if ( strcmp(v13, (const char *)s2) )
    {
      sub_8A3F0(a1, "load separate debug info '%s'\n", s2);
      v14 = *a2;
      sub_1B530((int)&v74, (char *)s2);
      sub_1B530((int)v70, &byte_DCEE2);
      sub_24F20(v71, v14, 0, (int)&v74, (const void **)v70);
      if ( v70[0] )
      {
        v70[1] = 0;
        qfree((void *)v70[0]);
        v70[0] = 0;
        v70[2] = 0;
      }
      if ( v74 )
      {
        v75 = 0;
        qfree((void *)v74);
        v74 = 0;
        v76 = 0;
      }
      if ( v71[0] == -1 )
      {
        if ( v73 )
          v16 = v72;
        else
          v16 = byte_EF875;
        sub_8A3F0(a1, "Can't import symbols from %s: no imagebase\n", v16);
      }
      else
      {
        v75 = 49;
        v74 = (int)&off_134680;
        v76 = a1;
        v77 = v71;
        v78 = v56;
        if ( v73 )
          v15 = v72;
        else
          v15 = byte_EF875;
        sub_40950(v15, &v74, 0);
      }
      sub_25060((int)v71);
    }
  }
  v17 = a1;
  if ( v61 )
  {
    v18 = *(_DWORD *)(a1 + 524);
    if ( (v18 & 0x3FFFFFFF) == 0 )
      goto LABEL_55;
    v19 = *(_DWORD *)(a1 + 500);
    v20 = *(_DWORD *)(a1 + 520);
    v57 = *(_DWORD *)(a1 + 524);
    v21 = (4 * v18) >> 2;
    v22 = v21 + v19;
    v64 = v19;
    if ( *(_DWORD *)(a1 + 504) >= (unsigned int)(v21 + v19) )
    {
      v26 = *(_DWORD *)(a1 + 500);
      v25 = *(_BYTE **)(a1 + 496);
    }
    else
    {
      v23 = *(_DWORD *)(a1 + 520);
      v24 = v21;
      v25 = qvector_reserve(a1 + 496, *(void **)(a1 + 496), v22, 4u);
      *(_DWORD *)(a1 + 496) = v25;
      v26 = *(_DWORD *)(a1 + 500);
      v21 = v24;
      v20 = v23;
      v19 = v64;
    }
    v66 = v20;
    v27 = v20 + 4 * v57;
    v28 = &v25[4 * ((4 * v19) >> 2)];
    v60 = v25;
    v62 = v21;
    memmove(&v28[4 * v21], v28, &v25[4 * v26] - v28);
    if ( v66 != v27 )
    {
      v29 = (unsigned int)(4 * v57 - 4) >> 2;
      if ( v29 + 1 >= 8 && ((unsigned int)v28 >= v27 || v66 >= (unsigned int)&v25[4 * v64 + 4 + 4 * v29]) )
      {
        v69 = v29 + 1;
        v49 = (v29 + 1) & 0xFFFFFFF8;
        v28 += 4 * v49;
        v30 = v66 + 4 * v49;
        v50 = 0;
        do
        {
          v51 = *(_OWORD *)(v66 + 4 * v50 + 16);
          *(_OWORD *)&v60[4 * v64 + 4 * v50] = *(_OWORD *)(v66 + 4 * v50);
          *(_OWORD *)&v60[4 * v64 + 16 + 4 * v50] = v51;
          v50 += 8;
        }
        while ( v49 != v50 );
        if ( v69 == v49 )
          goto LABEL_54;
      }
      else
      {
        v30 = v66;
      }
      v31 = v27 - v30;
      v32 = 0;
      do
      {
        *(_DWORD *)&v28[v32] = *(_DWORD *)(v30 + v32);
        v32 += 4;
      }
      while ( v31 != v32 );
    }
LABEL_54:
    v17 = a1;
    *(_DWORD *)(a1 + 500) += v62;
LABEL_55:
    v33 = *(_DWORD *)(v17 + 536);
    if ( (v33 & 0x3FFFFFFF) == 0 )
      goto LABEL_67;
    v34 = *(_DWORD *)(v17 + 512);
    v35 = *(_DWORD *)(v17 + 532);
    v58 = *(_DWORD *)(v17 + 536);
    v36 = (4 * v33) >> 2;
    v37 = v36 + v34;
    v63 = v35;
    v67 = v34;
    if ( *(_DWORD *)(v17 + 516) >= (unsigned int)(v36 + v34) )
    {
      v40 = *(_DWORD *)(v17 + 512);
      v39 = *(_BYTE **)(v17 + 508);
    }
    else
    {
      v38 = v36;
      v39 = qvector_reserve(v17 + 508, *(void **)(v17 + 508), v37, 4u);
      *(_DWORD *)(a1 + 508) = v39;
      v40 = *(_DWORD *)(a1 + 512);
      v36 = v38;
      v35 = v63;
      v34 = v67;
    }
    v41 = v35 + 4 * v58;
    v42 = &v39[4 * ((4 * v34) >> 2)];
    v68 = v36;
    memmove(&v42[4 * v36], v42, &v39[4 * v40] - v42);
    if ( v63 != v41 )
    {
      v43 = (unsigned int)(4 * v58 - 4) >> 2;
      if ( v43 + 1 >= 8 && ((unsigned int)v42 >= v41 || v63 >= (unsigned int)&v39[4 * v67 + 4 + 4 * v43]) )
      {
        v65 = v43 + 1;
        v52 = (v43 + 1) & 0xFFFFFFF8;
        v42 += 4 * v52;
        v44 = v63 + 4 * v52;
        v53 = (int)&v39[4 * v67 + 16];
        v54 = 0;
        do
        {
          v55 = *(_OWORD *)(v63 + 4 * v54 + 16);
          *(_OWORD *)(v53 + 4 * v54 - 16) = *(_OWORD *)(v63 + 4 * v54);
          *(_OWORD *)(v53 + 4 * v54) = v55;
          v54 += 8;
        }
        while ( v52 != v54 );
        if ( v65 == v52 )
          goto LABEL_66;
      }
      else
      {
        v44 = v63;
      }
      v45 = v41 - v44;
      v46 = 0;
      do
      {
        *(_DWORD *)&v42[v46] = *(_DWORD *)(v44 + v46);
        v46 += 4;
      }
      while ( v45 != v46 );
    }
LABEL_66:
    v17 = a1;
    *(_DWORD *)(a1 + 512) += v68;
    v33 = *(_DWORD *)(a1 + 536);
LABEL_67:
    if ( v33 )
    {
      v47 = 0;
      do
      {
        *(_DWORD *)(*(_DWORD *)(v17 + 532) + 4 * v47) = qstrdup(*(char **)(*(_DWORD *)(v17 + 532) + 4 * v47));
        ++v47;
      }
      while ( v47 < *(_DWORD *)(v17 + 536) );
    }
  }
  sub_260F0((int)&v79);
  return __readgsdword(0x14u);
}
// DCEE2: using guessed type char byte_DCEE2;
// 134680: using guessed type int (__cdecl *off_134680)(int, int, char *s);
