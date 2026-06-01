/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B9180
// Address: 0x080B9180

//----- (080B9180) --------------------------------------------------------
unsigned int __cdecl sub_80B9180(_DWORD *a1, char a2, unsigned int *a3)
{
  unsigned int *v3; // edi
  unsigned int v4; // eax
  unsigned int v5; // edx
  char *v6; // esi
  unsigned int v7; // ebp
  size_t v8; // esi
  _DWORD *v9; // ecx
  size_t v10; // edx
  __int64 v11; // xmm0_8
  int v12; // edi
  size_t v13; // ebp
  void *v14; // eax
  int i; // esi
  int *v16; // ebp
  unsigned int v17; // ecx
  unsigned int v18; // eax
  const void *v19; // eax
  unsigned int v20; // edx
  void *v21; // ebp
  unsigned int result; // eax
  unsigned int v23; // esi
  unsigned int v24; // ebp
  int v25; // ecx
  void *v26; // eax
  int v27; // ebp
  _DWORD *v28; // eax
  void *v29; // eax
  void *v30; // eax
  int v31; // [esp+0h] [ebp-54h]
  size_t v32; // [esp+Ch] [ebp-48h]
  size_t v33; // [esp+Ch] [ebp-48h]
  char *v34; // [esp+Ch] [ebp-48h]
  _DWORD *v35; // [esp+10h] [ebp-44h]
  unsigned int v36; // [esp+10h] [ebp-44h]
  unsigned int v37; // [esp+10h] [ebp-44h]
  __int64 v38; // [esp+20h] [ebp-34h] BYREF
  void *src; // [esp+28h] [ebp-2Ch]
  size_t n; // [esp+2Ch] [ebp-28h]
  int v41; // [esp+30h] [ebp-24h]
  unsigned int v42; // [esp+34h] [ebp-20h]

  v3 = a3;
  v42 = __readgsdword(0x14u);
  v4 = sub_80CDEC0(a3, a3[1]);
  v5 = a1[1];
  v31 = v4;
  if ( v5 != v4 )
  {
    v38 = 0;
    src = nullptr;
    n = 0;
    v41 = 0;
    if ( v4 < v5 )
    {
      v23 = v4;
      v24 = v5;
      do
      {
        v25 = *a1 + 20 * v23;
        v26 = *(void **)(v25 + 8);
        if ( v26 )
        {
          *(_DWORD *)(v25 + 12) = 0;
          sub_80CF780(v26);
        }
        ++v23;
      }
      while ( v23 < v24 );
      v3 = a3;
      goto LABEL_32;
    }
    v6 = (char *)*a1;
    v7 = a1[2];
    if ( (unsigned int)&v38 >= *a1 && &v38 < (__int64 *)&v6[20 * v7] )
    {
      if ( v7 < v4 )
      {
        v30 = sub_80CF920((int)a1, v6, v4, 0x14u);
        v5 = a1[1];
        *a1 = v30;
      }
      if ( v5 < v31 )
      {
        do
        {
          v27 = 5 * v5++;
          v28 = (_DWORD *)(*a1 + 4 * v27);
          *v28 = 0;
          v28[1] = 0;
          v28[2] = 0;
          v28[3] = 0;
          v28[4] = 0;
        }
        while ( v31 != v5 );
      }
LABEL_32:
      a1[1] = v31;
      goto LABEL_12;
    }
    if ( v7 < v4 )
    {
      v29 = sub_80CF920((int)a1, v6, v4, 0x14u);
      v5 = a1[1];
      *a1 = v29;
    }
    if ( v5 >= v31 )
      goto LABEL_32;
    v8 = v5;
    v9 = a1;
    v10 = v31;
    do
    {
      while ( 1 )
      {
        v11 = v38;
        v12 = *v9 + 20 * v8;
        *(_DWORD *)(v12 + 8) = 0;
        *(_DWORD *)(v12 + 12) = 0;
        *(_QWORD *)v12 = v11;
        v13 = n;
        *(_DWORD *)(v12 + 16) = 0;
        if ( v13 )
          break;
        if ( ++v8 >= v10 )
          goto LABEL_11;
      }
      v35 = v9;
      ++v8;
      v32 = v10;
      v14 = sub_80CF8B0(v13);
      *(_DWORD *)(v12 + 16) = v13;
      *(_DWORD *)(v12 + 8) = v14;
      memcpy(v14, src, v13);
      v10 = v32;
      *(_DWORD *)(v12 + 12) = v13;
      v9 = v35;
    }
    while ( v8 < v32 );
LABEL_11:
    v3 = a3;
    a1[1] = v31;
  }
LABEL_12:
  if ( v31 > 0 )
  {
    for ( i = 0; i != v31; ++i )
    {
      while ( 1 )
      {
        v16 = (int *)(*a1 + 20 * i);
        *v16 = sub_80CDEC0(v3, v3[1]);
        v17 = sub_80CDEC0(v3, v3[1]);
        v18 = v16[3];
        if ( v18 < v17 )
        {
          v34 = (char *)v16[2];
          if ( v16[4] < v17 )
          {
            v37 = v17;
            v34 = (char *)sub_80CF920((int)(v16 + 2), v34, v17, 1u);
            v17 = v37;
            v16[2] = (int)v34;
            v18 = v16[3];
          }
          v36 = v17;
          memset(&v34[v18], 0, v17 - v18);
          v17 = v36;
          v16[3] = v36;
        }
        else if ( v17 != v18 )
        {
          v16[3] = v17;
        }
        if ( a2 )
        {
          v33 = v17;
          v16[1] = sub_80CDEC0(v3, v3[1]);
          v19 = (const void *)*v3;
          v20 = *v3 + v33;
          if ( v3[1] >= v20 && v20 >= (unsigned int)v19 )
            break;
        }
        if ( v31 == ++i )
          goto LABEL_22;
      }
      v21 = (void *)v16[2];
      *v3 = v20;
      memcpy(v21, v19, v33);
    }
  }
LABEL_22:
  result = v42 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
