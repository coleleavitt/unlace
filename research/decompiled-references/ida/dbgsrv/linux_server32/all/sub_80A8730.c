/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A8730
// Address: 0x080A8730

//----- (080A8730) --------------------------------------------------------
_BYTE *__cdecl sub_80A8730(_DWORD *a1, __int64 a2, char *s, int a4)
{
  _BYTE *v4; // ebp
  _DWORD *v5; // edx
  int v6; // eax
  unsigned int v7; // esi
  void *v8; // ecx
  int v9; // esi
  char *v10; // eax
  size_t v11; // eax
  size_t v12; // edi
  int v13; // eax
  char *v15; // eax
  _DWORD *v16; // edx
  char *v17; // ecx
  int v18; // eax
  char *v19; // esi
  char *v20; // edi
  int v21; // ebp
  int v22; // ecx
  __int64 v23; // xmm1_8
  int v24; // ecx
  __int64 v25; // xmm2_8
  int v26; // ecx
  __int64 v27; // xmm0_8
  int v28; // ecx
  void *v29; // ecx
  void *v30; // ecx
  unsigned int v32; // edx
  void *v33; // eax
  __int64 v34; // [esp+0h] [ebp-3Ch]
  unsigned int v35; // [esp+0h] [ebp-3Ch]
  int v36; // [esp+14h] [ebp-28h]
  char *v37; // [esp+18h] [ebp-24h]
  void *v38; // [esp+18h] [ebp-24h]
  _BYTE *v39; // [esp+1Ch] [ebp-20h]
  _DWORD *v40; // [esp+40h] [ebp+4h]

  v34 = a2;
  v4 = sub_80CF710(a4 + 1);
  if ( v4 )
  {
    v5 = a1;
    v6 = a1[34];
    v7 = a1[35];
    if ( v7 < v6 + 1 )
    {
      v15 = (char *)sub_80CF920((int)(a1 + 33), nullptr, v6 + 1, 0x28u);
      v16 = a1;
      v17 = v15;
      v18 = a1[35];
      a1[35] = v7;
      v19 = (char *)a1[33];
      v36 = v18;
      if ( a1[34] - 1 >= 0 )
      {
        v37 = v17;
        v20 = v17;
        v39 = v4;
        v21 = a1[34] - 1;
        do
        {
          v22 = *(_DWORD *)v19;
          v23 = *(_QWORD *)(v19 + 4);
          *(_DWORD *)v19 = 0;
          *((_DWORD *)v19 + 1) = 0;
          *(_DWORD *)v20 = v22;
          *(_QWORD *)(v20 + 4) = v23;
          v24 = *((_DWORD *)v19 + 3);
          v25 = *((_QWORD *)v19 + 2);
          *((_DWORD *)v19 + 2) = 0;
          *((_DWORD *)v20 + 3) = v24;
          *((_QWORD *)v20 + 2) = v25;
          v26 = *((_DWORD *)v19 + 6);
          v27 = *((_QWORD *)v19 + 4);
          *((_DWORD *)v19 + 3) = 0;
          *((_DWORD *)v19 + 5) = 0;
          *((_DWORD *)v20 + 6) = v26;
          v28 = *((_DWORD *)v19 + 7);
          *((_QWORD *)v20 + 4) = v27;
          *((_DWORD *)v20 + 7) = v28;
          v29 = *((void **)v19 + 3);
          if ( v29 )
          {
            *((_DWORD *)v19 + 4) = 0;
            sub_80CF780(v29);
          }
          v30 = *(void **)v19;
          if ( *(_DWORD *)v19 )
          {
            *((_DWORD *)v19 + 1) = 0;
            sub_80CF780(v30);
          }
          v19 += 40;
          v20 += 40;
        }
        while ( v21-- != 0 );
        v16 = a1;
        v17 = v37;
        v4 = v39;
        v19 = (char *)a1[33];
      }
      v40 = v16;
      v38 = v17;
      sub_80CF780(v19);
      v5 = v40;
      v8 = v38;
      v40[35] = v36;
      v6 = v40[34];
      v40[33] = v38;
    }
    else
    {
      v8 = (void *)a1[33];
    }
    v9 = (int)v8 + 40 * v6;
    v10 = s;
    *(_DWORD *)v9 = 0;
    *(_DWORD *)(v9 + 4) = 0;
    *(_DWORD *)(v9 + 8) = 0;
    *(_DWORD *)(v9 + 12) = 0;
    *(_DWORD *)(v9 + 16) = 0;
    *(_DWORD *)(v9 + 20) = 0;
    ++v5[34];
    *(_QWORD *)(v9 + 32) = v34;
    if ( v10 && (v11 = strlen(s), (v12 = v11) != 0) )
    {
      v32 = v11 + 1;
      v33 = *(void **)(v9 + 12);
      if ( *(_DWORD *)(v9 + 20) < v32 )
      {
        v35 = v32;
        v33 = sub_80CF920(v9 + 12, v33, v32, 1u);
        v32 = v35;
        *(_DWORD *)(v9 + 12) = v33;
      }
      *(_DWORD *)(v9 + 16) = v32;
      memmove(v33, s, v12);
      *(_BYTE *)(*(_DWORD *)(v9 + 12) + v12) = 0;
    }
    else
    {
      *(_DWORD *)(v9 + 16) = 0;
    }
    v13 = a4;
    *(_DWORD *)(v9 + 28) = v4;
    *(_DWORD *)(v9 + 24) = v13;
    v4[v13] = 0;
  }
  return v4;
}
