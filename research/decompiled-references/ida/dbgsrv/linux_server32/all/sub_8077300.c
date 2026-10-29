/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8077300
// Address: 0x08077300

//----- (08077300) --------------------------------------------------------
int __cdecl sub_8077300(_DWORD *a1)
{
  _DWORD *v1; // ebx
  _DWORD *v2; // edx
  void **v3; // ecx
  void **v4; // esi
  const char *v5; // ebx
  const char *v6; // ecx
  void *v7; // eax
  const char *v8; // esi
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // xmm1_8
  size_t v12; // esi
  void *v13; // eax
  char *v14; // edx
  void *v16; // eax
  __int64 v17; // xmm2_8
  char *v18; // edx
  int v19; // eax
  char *v20; // esi
  __int64 v21; // xmm3_8
  char *v22; // esi
  void *v23; // eax
  char *v24; // eax
  void **v25; // [esp+0h] [ebp-80h]
  _DWORD *v26; // [esp+4h] [ebp-7Ch]
  _DWORD *v27; // [esp+4h] [ebp-7Ch]
  char *v28; // [esp+8h] [ebp-78h]
  char *s1; // [esp+Ch] [ebp-74h]
  char *s1b; // [esp+Ch] [ebp-74h]
  char *s1a; // [esp+Ch] [ebp-74h]
  size_t n; // [esp+10h] [ebp-70h]
  size_t nb; // [esp+10h] [ebp-70h]
  size_t na; // [esp+10h] [ebp-70h]
  int v35; // [esp+14h] [ebp-6Ch]
  _DWORD *v36; // [esp+14h] [ebp-6Ch]
  void *ptr; // [esp+20h] [ebp-60h] BYREF
  __int64 v38; // [esp+24h] [ebp-5Ch]
  unsigned __int8 v39[4]; // [esp+2Ch] [ebp-54h] BYREF
  __int128 v40; // [esp+30h] [ebp-50h]
  void *v41; // [esp+40h] [ebp-40h]
  __int64 v42; // [esp+44h] [ebp-3Ch]
  unsigned __int8 v43[4]; // [esp+4Ch] [ebp-34h] BYREF
  __int128 v44; // [esp+50h] [ebp-30h]
  unsigned int v45; // [esp+64h] [ebp-1Ch]

  v45 = __readgsdword(0x14u);
  v1 = a1;
  v2 = (_DWORD *)a1[15];
  v3 = (void **)v2[12];
  v35 = a1[6];
  n = (size_t)&v3[8 * v2[13]];
  if ( (void **)n == v3 )
    goto LABEL_11;
  v26 = (_DWORD *)a1[15];
  v4 = (void **)v2[12];
  v25 = v4;
  do
  {
    v7 = v4[1];
    if ( v35 )
    {
      v5 = (const char *)a1[5];
      v6 = (const char *)&dword_80DDFD8;
      if ( !v7 )
        goto LABEL_4;
    }
    else
    {
      if ( !v7 )
        goto LABEL_22;
      v5 = (const char *)&dword_80DDFD8;
    }
    v6 = (const char *)*v4;
LABEL_4:
    if ( !strcmp(v6, v5) )
      goto LABEL_22;
    v4 += 8;
  }
  while ( (void **)n != v4 );
  v2 = v26;
  v1 = a1;
  v3 = v25;
LABEL_11:
  v8 = (const char *)&dword_80DDFD8;
  s1 = (char *)(v2 + 12);
  if ( v35 )
    v8 = (const char *)v1[5];
  ptr = nullptr;
  v38 = 0;
  if ( v8 )
  {
    v27 = v2;
    nb = strlen(v8);
    ptr = sub_80CF920((int)&ptr, nullptr, nb + 1, 1u);
    LODWORD(v38) = nb + 1;
    memmove(ptr, v8, nb);
    *((_BYTE *)ptr + nb) = 0;
    v2 = v27;
    v3 = (void **)v27[12];
  }
  v39[0] = 2;
  v9 = v2[14];
  na = (size_t)v3;
  v40 = 0;
  if ( &ptr >= v3 && &ptr < &v3[8 * v9] )
  {
    v16 = ptr;
    v17 = v38;
    v28 = (char *)v2;
    ptr = nullptr;
    v41 = v16;
    v38 = 0;
    v43[0] = 2;
    v42 = v17;
    v44 = 0;
    sub_8089810(v43, v39);
    v18 = v28;
    v19 = *((_DWORD *)v28 + 13);
    v20 = *((char **)v28 + 12);
    if ( *((_DWORD *)v28 + 14) < (unsigned int)(v19 + 1) )
    {
      v24 = (char *)sub_80CF920((int)s1, v20, v19 + 1, 0x20u);
      v18 = v28;
      v20 = v24;
      *((_DWORD *)v28 + 12) = v24;
      v19 = *((_DWORD *)v28 + 13);
    }
    v21 = v42;
    v22 = &v20[32 * v19];
    s1a = v18;
    HIDWORD(v42) = 0;
    *(_DWORD *)v22 = v41;
    v41 = nullptr;
    LODWORD(v42) = 0;
    v22[12] = 2;
    *(_QWORD *)(v22 + 4) = v21;
    *((_OWORD *)v22 + 1) = 0;
    sub_8089810((unsigned __int8 *)v22 + 12, v43);
    sub_8089430((int)v43);
    v14 = s1a;
    if ( v41 )
    {
      LODWORD(v42) = 0;
      sub_80CF780(v41);
      v14 = s1a;
    }
  }
  else
  {
    v10 = v2[13];
    if ( v9 < v10 + 1 )
    {
      v36 = v2;
      v23 = sub_80CF920((int)s1, v3, v10 + 1, 0x20u);
      v2 = v36;
      na = (size_t)v23;
      v36[12] = v23;
      v10 = v36[13];
    }
    v11 = v38;
    s1b = (char *)v2;
    v12 = 32 * v10 + na;
    v13 = ptr;
    HIDWORD(v38) = 0;
    ptr = nullptr;
    *(_DWORD *)v12 = v13;
    LODWORD(v38) = 0;
    *(_BYTE *)(v12 + 12) = 2;
    *(_QWORD *)(v12 + 4) = v11;
    *(_OWORD *)(v12 + 16) = 0;
    sub_8089810((unsigned __int8 *)(v12 + 12), v39);
    v14 = s1b;
  }
  ++*((_DWORD *)v14 + 13);
  sub_8089430((int)v39);
  if ( ptr )
  {
    LODWORD(v38) = 0;
    sub_80CF780(ptr);
  }
LABEL_22:
  if ( v45 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return 0;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
