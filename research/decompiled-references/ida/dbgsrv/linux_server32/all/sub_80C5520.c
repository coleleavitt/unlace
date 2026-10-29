/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C5520
// Address: 0x080C5520

//----- (080C5520) --------------------------------------------------------
void __cdecl __noreturn sub_80C5520(_DWORD *a1, int a2)
{
  int v2; // eax
  int v3; // edx
  size_t v4; // esi
  void *v5; // eax
  unsigned int v6; // ebx
  const char *v7; // edi
  size_t v8; // esi
  size_t v9; // eax
  size_t v10; // edx
  void *v11; // eax
  size_t v12; // ecx
  size_t v13; // esi
  unsigned int v14; // edi
  void *v15; // eax
  _DWORD *v16; // edi
  int v17; // eax
  const char *v18; // edx
  int v19; // eax
  char *v20; // edx
  size_t v21; // esi
  int v22; // edx
  _BYTE *v23; // eax
  unsigned int v24; // ecx
  _DWORD *v25; // esi
  void (__cdecl *v26)(const char *, _DWORD, int, int); // esi
  char *v27; // edi
  _BYTE *v28; // eax
  _BYTE *v29; // eax
  int v30; // ecx
  int v31; // [esp-Ch] [ebp-5Ch]
  int v32; // [esp-8h] [ebp-58h]
  int v33; // [esp-4h] [ebp-54h]
  unsigned __int8 v34; // [esp+0h] [ebp-50h]
  size_t v35; // [esp+4h] [ebp-4Ch]
  int v36; // [esp+8h] [ebp-48h]
  const char *v37; // [esp+Ch] [ebp-44h]
  const char *v38; // [esp+10h] [ebp-40h]
  int v39; // [esp+14h] [ebp-3Ch]
  int v40; // [esp+18h] [ebp-38h]
  size_t n; // [esp+1Ch] [ebp-34h]
  size_t na; // [esp+1Ch] [ebp-34h]
  size_t nb; // [esp+1Ch] [ebp-34h]
  size_t nc; // [esp+1Ch] [ebp-34h]
  int v45; // [esp+20h] [ebp-30h]
  void *ptr; // [esp+28h] [ebp-28h] BYREF
  size_t v47; // [esp+2Ch] [ebp-24h]
  unsigned int v48; // [esp+30h] [ebp-20h]
  unsigned int v49; // [esp+34h] [ebp-1Ch]

  v49 = __readgsdword(0x14u);
  v2 = a1[1];
  ptr = nullptr;
  v47 = 0;
  v48 = 0;
  v39 = v2;
  if ( !v2 )
  {
    v26 = (void (__cdecl *)(const char *, _DWORD, int, int))a1[9];
    v27 = (char *)&qword_811CFF4 - 258076;
    if ( v26 )
      goto LABEL_34;
    goto LABEL_41;
  }
  v45 = 0;
  v38 = "    ";
  v37 = "  -%c%s";
  while ( 1 )
  {
    v16 = (_DWORD *)(*a1 + 20 * v45);
    v17 = *(char *)v16;
    if ( !(_BYTE)v17 )
      break;
    v18 = "    ";
    if ( v16[4] )
      v18 = (char *)&qword_811CFF4 - 278857;
    sub_8070240(&ptr, "  -%c%s", v17, v18);
LABEL_17:
    v19 = v16[1];
    if ( v19 )
    {
      v20 = (char *)&qword_811CFF4 - 281405;
      if ( v16[4] )
        v20 = (char *)&qword_811CFF4 - 278857;
      sub_8070240(&ptr, (char *)&qword_811CFF4 - 271772, v19, v20);
    }
    v4 = v47;
    if ( v47 )
    {
      v3 = v47;
      v4 = v47 - 1;
      na = v47 + 1;
      v5 = ptr;
      v6 = v47 + 1;
      if ( v48 >= v47 + 1 )
        goto LABEL_4;
    }
    else
    {
      na = 2;
      v5 = ptr;
      v3 = 1;
      v6 = 2;
      if ( v48 >= 2 )
        goto LABEL_4;
    }
    v36 = v3;
    v5 = sub_80CF920((int)&ptr, v5, v6, 1u);
    v3 = v36;
    ptr = v5;
LABEL_4:
    v47 = na;
    *((_BYTE *)v5 + v3) = 0;
    *((_BYTE *)ptr + v4) = 32;
    v7 = (const char *)v16[2];
    if ( v7 )
    {
      v8 = v47;
      v9 = strlen(v7);
      v10 = v9;
      nb = v9;
      if ( v8 )
      {
        --v8;
        v10 = v9 + v8;
      }
      v11 = ptr;
      v12 = v10 + 1;
      if ( v48 < v10 + 1 )
      {
        v35 = v10;
        v36 = v10 + 1;
        v11 = sub_80CF920((int)&ptr, ptr, v10 + 1, 1u);
        v10 = v35;
        v12 = v36;
        ptr = v11;
      }
      v47 = v12;
      *((_BYTE *)v11 + v10) = 0;
      memmove((char *)ptr + v8, v7, nb);
    }
    v13 = v47;
    if ( v47 )
    {
      n = v47;
      v14 = v47 + 1;
      v15 = ptr;
      v13 = v47 - 1;
      if ( v48 < v47 + 1 )
        goto LABEL_25;
    }
    else
    {
      n = 1;
      v15 = ptr;
      v14 = 2;
      if ( v48 < 2 )
      {
LABEL_25:
        v15 = sub_80CF920((int)&ptr, v15, v14, 1u);
        ptr = v15;
      }
    }
    v47 = v14;
    ++v45;
    *((_BYTE *)v15 + n) = 0;
    *((_BYTE *)ptr + v13) = 10;
    if ( v39 == v45 )
    {
      v26 = (void (__cdecl *)(const char *, _DWORD, int, int))a1[9];
      if ( v26 )
      {
LABEL_32:
        v27 = (char *)&qword_811CFF4 - 258076;
        if ( v47 )
          v27 = (char *)ptr;
LABEL_34:
        v28 = (char *)&qword_811CFF4 - 258076;
        if ( a1[4] )
          v28 = (_BYTE *)a1[3];
        v29 = sub_80CE780(v28);
        ((void (__stdcall *)(const char *, _BYTE *, char *, int, int, int, int, size_t, int, const char *, const char *, int, _DWORD *, size_t, int, __int64 *, void *, size_t, unsigned int))v26)(
          "Usage: %s [options]\n%s",
          v29,
          v27,
          v31,
          v32,
          v33,
          a2,
          v35,
          v36,
          v37,
          v38,
          v39,
          a1,
          n,
          v45,
          &qword_811CFF4,
          ptr,
          v47,
          v48);
        if ( *(_DWORD *)(v40 + 28) > 1u )
          v26("\n%s\n", *(_DWORD *)(v40 + 24), v30, v30);
        if ( v49 == __readgsdword(0x14u) )
          sub_80CFF70(v34);
        sub_80D7AB0();
      }
LABEL_41:
      v26 = *((void (__cdecl **)(const char *, _DWORD, int, int))&qword_811CFF4 - 15);
      goto LABEL_32;
    }
  }
  v21 = v47;
  if ( v47 )
  {
    v22 = v47 + 7;
    v21 = v47 - 1;
    nc = v47 + 8;
    v23 = ptr;
    v24 = v47 + 8;
    if ( v48 >= v47 + 8 )
    {
LABEL_28:
      v47 = nc;
      v23[v22] = 0;
      v25 = (char *)ptr + v21;
      *v25 = 538976288;
      v25[1] = 538976288;
      goto LABEL_17;
    }
  }
  else
  {
    nc = 9;
    v23 = ptr;
    v22 = 8;
    v24 = 9;
    if ( v48 >= 9 )
      goto LABEL_28;
  }
  v36 = v22;
  v23 = sub_80CF920((int)&ptr, v23, v24, 1u);
  v22 = v36;
  ptr = v23;
  goto LABEL_28;
}
// 80C5837: variable 'v31' is possibly undefined
// 80C5837: variable 'v32' is possibly undefined
// 80C5837: variable 'v33' is possibly undefined
// 80C5837: variable 'v35' is possibly undefined
// 80C5837: variable 'v36' is possibly undefined
// 80C5837: variable 'v37' is possibly undefined
// 80C5837: variable 'v38' is possibly undefined
// 80C5837: variable 'n' is possibly undefined
// 80C5837: variable 'v45' is possibly undefined
// 80C583F: variable 'v40' is possibly undefined
// 80C5851: variable 'v30' is possibly undefined
// 80C586C: variable 'v34' is possibly undefined
// 811CFF4: using guessed type __int64 qword_811CFF4;
