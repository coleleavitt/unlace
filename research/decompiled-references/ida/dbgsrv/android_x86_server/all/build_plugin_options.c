/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: build_plugin_options
// Address: 0x0009FCB0

//----- (0009FCB0) --------------------------------------------------------
unsigned int __cdecl build_plugin_options(int a1, _DWORD *a2, int a3)
{
  _DWORD *v3; // edx
  int v4; // ecx
  int *v5; // esi
  unsigned int v6; // ecx
  void *v7; // eax
  int v8; // edi
  size_t v9; // ecx
  int v10; // eax
  int v11; // ebx
  unsigned int v12; // edi
  int v13; // eax
  int v14; // edi
  int v15; // edx
  _BYTE *v16; // eax
  int v17; // edi
  size_t v18; // ecx
  int v19; // eax
  int v20; // ebx
  unsigned int v21; // edi
  _BYTE *v22; // eax
  void *v23; // eax
  int v24; // edx
  int v25; // esi
  char *v26; // esi
  unsigned int v27; // ecx
  int i; // edi
  void *v29; // eax
  int v31; // [esp+10h] [ebp-4Ch]
  unsigned int v32; // [esp+10h] [ebp-4Ch]
  unsigned int v33; // [esp+14h] [ebp-48h]
  _BYTE *v34; // [esp+18h] [ebp-44h]
  size_t v35; // [esp+1Ch] [ebp-40h]
  size_t v36; // [esp+1Ch] [ebp-40h]
  int v37; // [esp+20h] [ebp-3Ch]
  void *v38; // [esp+28h] [ebp-34h] BYREF
  int v39; // [esp+2Ch] [ebp-30h]
  int v40; // [esp+30h] [ebp-2Ch]
  int v41; // [esp+38h] [ebp-24h] BYREF
  unsigned int v42; // [esp+3Ch] [ebp-20h]
  unsigned int v43; // [esp+40h] [ebp-1Ch]
  unsigned int v44; // [esp+48h] [ebp-14h]

  v44 = __readgsdword(0x14u);
  v41 = 0;
  v42 = 0;
  v43 = 0;
  if ( a3 )
  {
    v41 = (int)qvector_reserve((int)&v41, nullptr, 1u, 0xCu);
    v3 = (_DWORD *)(v41 + 12 * v42);
    *v3 = 0;
    v3[1] = 0;
    v3[2] = 0;
    ++v42;
    sub_1F400((int)v3, "-O%s", a3);
  }
  v4 = 24 * a2[1];
  if ( v4 )
  {
    v5 = (int *)(*a2 + 16);
    do
    {
      v37 = v4;
      v6 = v42;
      if ( v43 >= v42 + 1 )
      {
        v7 = (void *)v41;
      }
      else
      {
        v7 = qvector_reserve((int)&v41, (void *)v41, v42 + 1, 0xCu);
        v41 = (int)v7;
        v6 = v42;
      }
      v31 = (int)v7 + 12 * v6;
      *(_DWORD *)v31 = 0;
      *(_DWORD *)(v31 + 4) = 0;
      *(_DWORD *)(v31 + 8) = 0;
      ++v42;
      v8 = *(v5 - 3);
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v8 != 1 )
        {
          v10 = *(_DWORD *)(v31 + 4);
          v11 = v10 - 1;
          if ( !v10 )
            v11 = 0;
          v12 = v11 + v8;
          if ( *(_DWORD *)(v31 + 8) >= v12 )
          {
            v34 = *(_BYTE **)v31;
          }
          else
          {
            v35 = v9;
            v34 = qvector_reserve(v31, *(void **)v31, v12, 1u);
            *(_DWORD *)v31 = v34;
            v9 = v35;
          }
          *(_DWORD *)(v31 + 4) = v12;
          v34[v11 + v9] = 0;
          memcpy((void *)(*(_DWORD *)v31 + v11), (const void *)*(v5 - 4), v9);
        }
      }
      if ( (unsigned int)*v5 >= 2 )
      {
        v13 = *(_DWORD *)(v31 + 4);
        v14 = v13 - 1;
        if ( !v13 )
          v14 = 0;
        v15 = v14 + 2;
        if ( *(_DWORD *)(v31 + 8) >= (unsigned int)(v14 + 2) )
        {
          v16 = *(_BYTE **)v31;
        }
        else
        {
          v16 = qvector_reserve(v31, *(void **)v31, v14 + 2, 1u);
          *(_DWORD *)v31 = v16;
          v15 = v14 + 2;
        }
        *(_DWORD *)(v31 + 4) = v15;
        v16[v14] = 61;
        *(_BYTE *)(*(_DWORD *)v31 + v14 + 1) = 0;
        v17 = *v5;
        if ( *v5 )
        {
          v18 = v17 - 1;
          if ( v17 != 1 )
          {
            v19 = *(_DWORD *)(v31 + 4);
            v20 = v19 - 1;
            if ( !v19 )
              v20 = 0;
            v21 = v20 + v17;
            if ( *(_DWORD *)(v31 + 8) >= v21 )
            {
              v22 = *(_BYTE **)v31;
            }
            else
            {
              v36 = v18;
              v22 = qvector_reserve(v31, *(void **)v31, v21, 1u);
              *(_DWORD *)v31 = v22;
              v18 = v36;
            }
            *(_DWORD *)(v31 + 4) = v21;
            v22[v20 + v18] = 0;
            memcpy((void *)(*(_DWORD *)v31 + v20), (const void *)*(v5 - 1), v18);
          }
        }
      }
      v5 += 6;
      v4 = v37 - 24;
    }
    while ( v37 != 24 );
  }
  sub_A0180((int)&v38, (const void ***)&v41, ":");
  v23 = *(void **)a1;
  v24 = *(_DWORD *)(a1 + 4);
  v25 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)a1 = v38;
  *(_DWORD *)(a1 + 4) = v39;
  *(_DWORD *)(a1 + 8) = v40;
  v38 = v23;
  v39 = v24;
  v40 = v25;
  if ( v23 )
  {
    v39 = 0;
    qfree(v23);
    v38 = nullptr;
    v40 = 0;
  }
  v26 = (char *)v41;
  if ( v41 )
  {
    v33 = v42;
    if ( v42 )
    {
      v27 = 1;
      for ( i = 0; ; i += 12 )
      {
        v29 = *(void **)&v26[i];
        if ( v29 )
        {
          v32 = v27;
          *(_DWORD *)&v26[i + 4] = 0;
          qfree(v29);
          *(_DWORD *)&v26[i] = 0;
          *(_DWORD *)&v26[i + 8] = 0;
          v27 = v32;
        }
        if ( v27 >= v33 )
          break;
        v26 = (char *)v41;
        ++v27;
      }
      v26 = (char *)v41;
    }
    v42 = 0;
    qfree(v26);
    v41 = 0;
    v43 = 0;
  }
  return __readgsdword(0x14u);
}
