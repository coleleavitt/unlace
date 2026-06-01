/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8062DB0
// Address: 0x08062DB0

//----- (08062DB0) --------------------------------------------------------
int __cdecl sub_8062DB0(int a1, int *a2)
{
  int v2; // ebx
  bool v3; // cc
  int v4; // ecx
  int *v5; // edx
  int v6; // eax
  char *v7; // eax
  __int64 v8; // xmm0_8
  void *v9; // eax
  size_t v10; // eax
  void *v11; // ecx
  size_t v12; // edx
  int *v13; // edx
  const char *v14; // eax
  const char *v15; // esi
  size_t v16; // eax
  size_t v17; // ecx
  unsigned int v18; // edx
  void *v19; // eax
  int *v20; // eax
  int v21; // esi
  const char *v22; // eax
  unsigned int *v23; // esi
  unsigned int v24; // eax
  const char *v25; // ebx
  char *v26; // edx
  const char *v27; // edx
  int v28; // eax
  int v29; // eax
  char **v30; // esi
  int v31; // ebx
  int v32; // esi
  unsigned int v34; // ecx
  void *v35; // eax
  int v36; // [esp+8h] [ebp-1058h]
  size_t v37; // [esp+8h] [ebp-1058h]
  char *s1; // [esp+Ch] [ebp-1054h]
  char *s1a; // [esp+Ch] [ebp-1054h]
  char *s1c; // [esp+Ch] [ebp-1054h]
  char *s1b; // [esp+Ch] [ebp-1054h]
  char *s; // [esp+10h] [ebp-1050h]
  char *sd; // [esp+10h] [ebp-1050h]
  char *sa; // [esp+10h] [ebp-1050h]
  const char *sb; // [esp+10h] [ebp-1050h]
  char *sc; // [esp+10h] [ebp-1050h]
  int v47; // [esp+14h] [ebp-104Ch]
  int v48; // [esp+14h] [ebp-104Ch]
  void *dest; // [esp+20h] [ebp-1040h] BYREF
  __int64 v50; // [esp+24h] [ebp-103Ch]
  int (**v51[2])(); // [esp+30h] [ebp-1030h] BYREF
  void *ptr; // [esp+38h] [ebp-1028h]
  __int64 v53; // [esp+3Ch] [ebp-1024h]
  char v54[4096]; // [esp+44h] [ebp-101Ch] BYREF
  unsigned int v55; // [esp+1044h] [ebp-1Ch]

  v47 = a1;
  v2 = *(_DWORD *)(a1 + 548);
  v55 = __readgsdword(0x14u);
  if ( v2 )
  {
    v32 = 1;
    goto LABEL_52;
  }
  v3 = *(_DWORD *)(a1 + 776) <= 1u;
  dest = nullptr;
  v50 = 0;
  if ( v3 )
  {
    v4 = *(_DWORD *)(a1 + 788);
    v51[1] = (int (**)())2;
    v5 = &dword_80DDFD8;
    v51[0] = &off_811B814;
    ptr = nullptr;
    v53 = 0;
    if ( v4 )
      v5 = *(int **)(a1 + 784);
    s = (char *)v5;
    v6 = sub_8072650((int)v5, v51, 0);
    if ( v6 )
    {
      if ( v6 == 2 )
      {
        v7 = (char *)&dword_80DDFD8;
        if ( (_DWORD)v53 )
          v7 = (char *)ptr;
        sub_80CE860(v54, 4096, v7);
        v8 = v50;
        v9 = ptr;
        ptr = dest;
        s1 = (char *)dest;
        dest = v9;
        v50 = v53;
        v53 = v8;
        v10 = strlen(v54);
        v11 = s1;
        v12 = v10;
        if ( v10 )
        {
          v34 = v10 + 1;
          v35 = *(void **)(a1 + 772);
          if ( *(_DWORD *)(a1 + 780) < v34 )
          {
            v37 = v12;
            s1b = (char *)v34;
            v35 = sub_80CF920(a1 + 772, v35, v34, 1u);
            v34 = (unsigned int)s1b;
            *(_DWORD *)(a1 + 772) = v35;
            v12 = v37;
          }
          *(_DWORD *)(a1 + 776) = v34;
          s1c = (char *)v12;
          memmove(v35, v54, v12);
          s1c[*(_DWORD *)(a1 + 772)] = 0;
          v11 = ptr;
        }
        else
        {
          *(_DWORD *)(a1 + 776) = 0;
        }
        v51[0] = &off_811B814;
        if ( v11 )
        {
          LODWORD(v53) = 0;
          sub_80CF780(v11);
        }
        goto LABEL_13;
      }
      sub_8058E50(a1, "%s: could not read symbols on remote computer", s);
    }
    else if ( !*(_BYTE *)(a1 + 556) )
    {
      *(_BYTE *)(a1 + 556) = 1;
      sub_8058E50(
        a1,
        "AUTOHIDE DATABASE\n%s:\nCould not find the elf interpreter name,\nshared object events will not be reported",
        s);
    }
    v51[0] = &off_811B814;
    if ( ptr )
    {
      LODWORD(v53) = 0;
      sub_80CF780(ptr);
    }
LABEL_58:
    v32 = 0;
    goto LABEL_49;
  }
  v14 = sub_80CE780(*(_BYTE **)(a1 + 772));
  v15 = v14;
  if ( !v14 || (v16 = strlen(v14), (v17 = v16) == 0) )
  {
    LODWORD(v50) = 0;
    v13 = &dword_80DDFD8;
    goto LABEL_21;
  }
  v18 = v16 + 1;
  v19 = dest;
  if ( HIDWORD(v50) < v18 )
  {
    s1a = (char *)v17;
    sc = (char *)v18;
    v19 = sub_80CF920((int)&dest, dest, v18, 1u);
    v17 = (size_t)s1a;
    dest = v19;
    v18 = (unsigned int)sc;
  }
  LODWORD(v50) = v18;
  sd = (char *)v17;
  memmove(v19, v15, v17);
  sd[(_DWORD)dest] = 0;
LABEL_13:
  if ( (_DWORD)v50 )
    v13 = (int *)dest;
  else
    v13 = &dword_80DDFD8;
LABEL_21:
  v20 = &dword_80DDFD8;
  if ( *(_DWORD *)(a1 + 776) )
    v20 = *(int **)(a1 + 772);
  sub_80A03F0(a1, "INTERP: %s, SONAME: %s\n", v20, v13);
  sa = (char *)&dword_80DDFD8;
  if ( *(_DWORD *)(a1 + 776) )
    sa = *(char **)(a1 + 772);
  if ( a2[1] )
  {
    v36 = a2[1];
    v48 = *a2;
    v21 = 0;
    while ( 1 )
    {
      v22 = (const char *)&dword_80DDFD8;
      if ( *(_DWORD *)(v48 + 12) )
        v22 = *(const char **)(v48 + 8);
      if ( !strcmp(v22, sa) )
        break;
      v48 += 40;
      if ( v36 == ++v21 )
      {
        v47 = a1;
        goto LABEL_64;
      }
    }
    v23 = (unsigned int *)v48;
    v47 = a1;
    if ( !v23 )
      goto LABEL_64;
    v24 = sub_805D340(a1, a2, v23);
    v25 = (const char *)&dword_80DDFD8;
    if ( (_DWORD)v50 )
      v25 = (const char *)dest;
    v26 = (char *)&dword_80DDFD8;
    if ( *(_DWORD *)(a1 + 776) )
      v26 = *(char **)(a1 + 772);
    sub_80609C0(a1, *v23, v24, v26, v25);
    v27 = (const char *)&dword_80DDFD8;
    if ( (_DWORD)v50 )
      v27 = (const char *)dest;
    if ( *(_DWORD *)(a1 + 628) )
      sub_805E840(a1, v27);
    v28 = sub_805AEE0((_DWORD *)a1, "_r_debug");
    if ( v28 != -1
      && sub_80623D0(a1, -1, v28, (unsigned int *)v51, 20, 0) == 20
      && ptr
      && !(unsigned __int8)sub_80627F0(a1, a1 + 548, (int)ptr) )
    {
      sub_80A03F0(a1, "%a: could not set shlib bpt\n", ptr);
    }
    v29 = *(_DWORD *)(a1 + 548);
    if ( v29 )
    {
      sb = "_r_debug";
LABEL_48:
      sub_80A03F0(a1, "%a: added shlib bpt (%s)\n", v29, sb);
      v32 = 1;
      goto LABEL_49;
    }
    v30 = (char **)&off_811B874;
    do
    {
      while ( 1 )
      {
        sb = *v30;
        v31 = sub_805AEE0((_DWORD *)a1, *v30);
        if ( (unsigned int)(v31 - 1) <= 0xFFFFFFFD )
          break;
        if ( &dword_811B888[1] == (int *)++v30 )
          goto LABEL_47;
      }
      if ( (unsigned __int8)sub_80627F0(a1, a1 + 548, v31) )
        break;
      sub_80A03F0(a1, "%a: could not set shlib bpt (name=%s)\n", v31, sb);
      ++v30;
    }
    while ( &dword_811B888[1] != (int *)v30 );
LABEL_47:
    v29 = *(_DWORD *)(a1 + 548);
    if ( v29 )
      goto LABEL_48;
    goto LABEL_58;
  }
LABEL_64:
  sub_8058E50(v47, "%s: could not find in process memory", sa);
  v32 = 0;
LABEL_49:
  if ( dest )
  {
    LODWORD(v50) = 0;
    sub_80CF780(dest);
  }
LABEL_52:
  if ( v55 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v32;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811B814: using guessed type int (*off_811B814)();
// 811B874: using guessed type _UNKNOWN *off_811B874;
// 811B888: using guessed type int[3];
