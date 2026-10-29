/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808CD90
// Address: 0x0808CD90

//----- (0808CD90) --------------------------------------------------------
int __cdecl sub_808CD90(__m128i *a1, int a2, char *a3, char a4)
{
  int v4; // eax
  int v5; // edi
  unsigned __int8 *v7; // eax
  int v8; // eax
  _DWORD *v9; // edx
  size_t v10; // ebx
  int *v11; // eax
  const char *v12; // ecx
  const char *v13; // eax
  int v14; // eax
  _DWORD *v15; // ecx
  int v16; // eax
  _DWORD *v17; // ecx
  int v18; // edx
  size_t v19; // ecx
  const char *v20; // eax
  const char *v21; // edx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __m128i *v25; // ecx
  char *v26; // eax
  size_t v27; // edx
  int v28; // eax
  size_t v29; // edi
  int v30; // eax
  int *v31; // edx
  char *v32; // eax
  int v33; // [esp+0h] [ebp-C8h]
  int *v34; // [esp+Ch] [ebp-BCh]
  char *s2; // [esp+10h] [ebp-B8h]
  size_t v36; // [esp+18h] [ebp-B0h]
  size_t v37; // [esp+18h] [ebp-B0h]
  size_t na; // [esp+1Ch] [ebp-ACh]
  size_t n; // [esp+1Ch] [ebp-ACh]
  _DWORD *v40; // [esp+20h] [ebp-A8h]
  _DWORD *v41; // [esp+20h] [ebp-A8h]
  int v42; // [esp+20h] [ebp-A8h]
  int v43; // [esp+20h] [ebp-A8h]
  char *s; // [esp+24h] [ebp-A4h]
  int *v45; // [esp+28h] [ebp-A0h]
  _DWORD *v46; // [esp+28h] [ebp-A0h]
  __m128i *v47; // [esp+2Ch] [ebp-9Ch] BYREF
  void *v48; // [esp+38h] [ebp-90h] BYREF
  size_t v49; // [esp+3Ch] [ebp-8Ch]
  int v50; // [esp+40h] [ebp-88h]
  void *ptr; // [esp+48h] [ebp-80h] BYREF
  size_t v52; // [esp+4Ch] [ebp-7Ch]
  int v53; // [esp+50h] [ebp-78h]
  unsigned __int8 v54; // [esp+98h] [ebp-30h] BYREF
  __int128 v55; // [esp+9Ch] [ebp-2Ch]
  unsigned int v56; // [esp+ACh] [ebp-1Ch]

  v47 = a1;
  v56 = __readgsdword(0x14u);
  sub_80D15A0((pthread_mutex_t *)dword_811E6F8);
  v4 = sub_807F510();
  if ( !a2 )
  {
    v45 = (int *)v4;
    v7 = (unsigned __int8 *)sub_8080B10(a3);
    if ( v7 )
    {
      if ( !v47 )
        goto LABEL_27;
      v54 = 2;
      v55 = 0;
      sub_8089810(&v54, v7);
      sub_8084300(v47, (__m128i *)&v54);
      sub_8089430((int)&v54);
      sub_80D1600((pthread_mutex_t *)dword_811E6F8);
      goto LABEL_10;
    }
    v28 = sub_80810B0(v45, a3);
    if ( v28 != 0x7FFFFFFF )
    {
      s = (char *)v28;
      if ( !v47 )
        goto LABEL_27;
      sub_8089430((int)v47);
      v25 = v47;
      v26 = s;
      v47->m128i_i8[0] = 6;
LABEL_51:
      v25->m128i_i32[1] = (__int32)v26;
      v5 = 0;
      sub_80D1600((pthread_mutex_t *)dword_811E6F8);
      goto LABEL_5;
    }
    sub_80C7910(0, a3);
    v5 = 1538;
    sub_80D1600((pthread_mutex_t *)dword_811E6F8);
LABEL_4:
    sub_80C7880(v5);
    goto LABEL_5;
  }
  if ( *(_BYTE *)a2 != 5 )
  {
    v5 = 1532;
    sub_80D1600((pthread_mutex_t *)dword_811E6F8);
    goto LABEL_4;
  }
  v8 = *(_DWORD *)(a2 + 4);
  ptr = nullptr;
  v52 = 0;
  v33 = v8;
  v53 = 0;
  if ( a3 )
  {
    na = strlen(a3);
    ptr = sub_80CF920((int)&ptr, nullptr, na + 1, 1u);
    v52 = na + 1;
    memmove(ptr, a3, na);
    *((_BYTE *)ptr + na) = 0;
    s2 = (char *)ptr;
    v9 = *(_DWORD **)(v33 + 8);
    v10 = v33 + 4;
    if ( !v9 )
      goto LABEL_33;
  }
  else
  {
    s2 = nullptr;
    v9 = *(_DWORD **)(v8 + 8);
    v10 = v8 + 4;
    if ( !v9 )
    {
      v23 = sub_8080DD0(*(_DWORD *)(v8 + 28));
      ptr = nullptr;
      v41 = (_DWORD *)v23;
      v52 = 0;
      v53 = 0;
      goto LABEL_46;
    }
  }
  v11 = &dword_80DDFD8;
  v36 = v10;
  if ( v52 )
    v11 = (int *)s2;
  v46 = v9;
  v34 = v11;
  n = v52;
  while ( 1 )
  {
    v16 = v46[5];
    if ( !n )
      break;
    if ( v16 )
      goto LABEL_26;
    v12 = s2;
    v40 = v46;
    v13 = (const char *)&dword_80DDFD8;
LABEL_18:
    v14 = strcmp(v13, v12);
    v15 = (_DWORD *)v46[2];
    v46 = (_DWORD *)v46[3];
    if ( v14 >= 0 )
    {
      v46 = v15;
      v36 = (size_t)v40;
    }
    if ( !v46 )
    {
      v19 = n;
      goto LABEL_29;
    }
  }
  v17 = v46;
  if ( v16 )
  {
LABEL_25:
    v46 = v17;
LABEL_26:
    v12 = (const char *)v34;
    v40 = v46;
    v13 = (const char *)v46[4];
    goto LABEL_18;
  }
  while ( 1 )
  {
    v18 = v17[2];
    if ( !v18 )
      break;
    v36 = (size_t)v17;
    v17 = (_DWORD *)v17[2];
    if ( *(_DWORD *)(v18 + 20) )
      goto LABEL_25;
  }
  v27 = (size_t)v17;
  v19 = 0;
  v36 = v27;
LABEL_29:
  if ( v36 == v10 )
    goto LABEL_33;
  if ( *(_DWORD *)(v36 + 20) )
  {
    v20 = *(const char **)(v36 + 16);
    v21 = (const char *)&dword_80DDFD8;
    if ( !v19 )
      goto LABEL_32;
    goto LABEL_43;
  }
  if ( v19 )
  {
    v20 = (const char *)&dword_80DDFD8;
LABEL_43:
    v21 = s2;
LABEL_32:
    if ( strcmp(v21, v20) < 0 )
    {
LABEL_33:
      if ( s2 )
      {
        v52 = 0;
        sub_80CF780(s2);
      }
      v22 = sub_8080DD0(*(_DWORD *)(v33 + 28));
      ptr = nullptr;
      v41 = (_DWORD *)v22;
      v52 = 0;
      v53 = 0;
      if ( a3 )
      {
        v37 = strlen(a3);
        ptr = sub_80CF920((int)&ptr, nullptr, v37 + 1, 1u);
        v52 = v37 + 1;
        memmove(ptr, a3, v37);
        *((_BYTE *)ptr + v37) = 0;
      }
LABEL_46:
      v24 = sub_8084920(v41, (int)&ptr);
      if ( ptr )
      {
        v42 = v24;
        v52 = 0;
        sub_80CF780(ptr);
        v24 = v42;
      }
      v43 = v24;
      if ( v24 != -1 )
      {
        if ( v47 )
        {
          sub_8089430((int)v47);
          v25 = v47;
          v26 = (char *)v43;
          v47->m128i_i8[0] = 6;
          goto LABEL_51;
        }
LABEL_27:
        v5 = 0;
        sub_80D1600((pthread_mutex_t *)dword_811E6F8);
        goto LABEL_5;
      }
      sub_80D1600((pthread_mutex_t *)dword_811E6F8);
      if ( !a4 )
      {
LABEL_63:
        ptr = nullptr;
        v52 = 0;
        v53 = 0;
        v30 = sub_8080DD0(*(_DWORD *)(v33 + 28));
        v31 = &dword_80DDFD8;
        if ( *(_DWORD *)(v30 + 36) )
          v31 = *(int **)(v30 + 32);
        sub_805ED10(&ptr, "%s.%s", v31, a3);
        v32 = (char *)&dword_80DDFD8;
        if ( v52 )
          v32 = (char *)ptr;
        sub_80C7910(0, v32);
        v5 = sub_80C7880(1538);
        if ( ptr )
        {
          v52 = 0;
          sub_80CF780(ptr);
        }
        goto LABEL_5;
      }
      v48 = nullptr;
      v49 = 0;
      v50 = 0;
      if ( a3 )
      {
        v29 = strlen(a3);
        v48 = sub_80CF920((int)&v48, nullptr, v29 + 1, 1u);
        v49 = v29 + 1;
        memmove(v48, a3, v29);
        *((_BYTE *)v48 + v29) = 0;
      }
      sub_808ACA0((int)&ptr, 0, 1);
      if ( !(unsigned __int8)sub_808CC00(&ptr, v33, (int)&v48, (unsigned __int8 **)&v47) )
      {
        sub_808AE30((int)&ptr);
        if ( v48 )
        {
          v49 = 0;
          sub_80CF780(v48);
        }
        goto LABEL_63;
      }
      sub_808AE30((int)&ptr);
      if ( v48 )
      {
        v5 = 0;
        v49 = 0;
        sub_80CF780(v48);
        goto LABEL_5;
      }
LABEL_10:
      v5 = 0;
      goto LABEL_5;
    }
  }
  if ( s2 )
  {
    v52 = 0;
    sub_80CF780(s2);
  }
  if ( !v47 )
    goto LABEL_27;
  v54 = 2;
  v55 = 0;
  sub_8089810(&v54, (unsigned __int8 *)(v36 + 28));
  sub_8084300(v47, (__m128i *)&v54);
  sub_8089430((int)&v54);
  v5 = 0;
  sub_80D1600((pthread_mutex_t *)dword_811E6F8);
LABEL_5:
  if ( v56 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v5;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811E6F8: using guessed type int dword_811E6F8;
