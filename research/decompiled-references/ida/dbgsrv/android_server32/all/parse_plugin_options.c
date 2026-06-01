/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: parse_plugin_options
// Address: 0x00073390

//----- (00073390) --------------------------------------------------------
int __fastcall parse_plugin_options(int a1, char *a2)
{
  int result; // r0
  const char *v4; // r0
  int v5; // r3
  const char *v6; // r4
  _DWORD *v7; // r1
  int v8; // r5
  int v9; // r7
  char *v10; // r0
  void **v11; // r4
  const char *v12; // r0
  size_t v13; // r0
  size_t v14; // r3
  void *v15; // r0
  size_t v16; // r0
  size_t v17; // r4
  void *v18; // r2
  size_t v19; // r6
  size_t v20; // [sp+8h] [bp-2Ch]
  size_t v21; // [sp+Ch] [bp-28h]
  const char *v22; // [sp+10h] [bp-24h]
  int v23; // [sp+14h] [bp-20h]
  _DWORD *v24; // [sp+18h] [bp-1Ch]
  char *s; // [sp+1Ch] [bp-18h]
  char *v26[3]; // [sp+20h] [bp-14h] BYREF
  const char *v27; // [sp+2Ch] [bp-8h] BYREF

  result = 0;
  if ( a2 && *a2 )
  {
    sub_1B09C((int)v26, a2);
    v4 = qstrtok(v26[0], ":", &v27);
    v23 = a1;
    while ( v4 )
    {
      v5 = *(_DWORD *)(a1 + 4);
      if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v5 + 1) )
      {
        v7 = *(_DWORD **)a1;
      }
      else
      {
        v6 = v4;
        v7 = qvector_reserve(a1, *(void **)a1, v5 + 1, 0x18u);
        *(_DWORD *)a1 = v7;
        v5 = *(_DWORD *)(a1 + 4);
        v4 = v6;
      }
      v8 = 6 * v5;
      v7[6 * v5] = 0;
      v24 = v7;
      v9 = (int)&v7[6 * v5];
      *(_DWORD *)(v9 + 4) = 0;
      *(_DWORD *)(v9 + 8) = 0;
      *(_DWORD *)(v9 + 12) = 0;
      *(_DWORD *)(v9 + 16) = 0;
      *(_DWORD *)(v9 + 20) = 0;
      ++*(_DWORD *)(a1 + 4);
      s = (char *)v4;
      v10 = strchr(v4, 61);
      if ( v10 )
      {
        *v10 = 0;
        v11 = (void **)(v9 + 12);
        v12 = v10 + 1;
        if ( v12 && (v22 = v12, (v13 = strlen(v12)) != 0) )
        {
          v14 = v13;
          v21 = v13;
          v20 = v13 + 1;
          if ( *(_DWORD *)(v9 + 20) >= v13 + 1 )
          {
            v15 = *v11;
          }
          else
          {
            v15 = qvector_reserve(v9 + 12, *v11, v13 + 1, 1u);
            *v11 = v15;
            a1 = v23;
            v14 = v21;
          }
          v24[v8 + 4] = v20;
          memmove(v15, v22, v14);
          *((_BYTE *)*v11 + v21) = 0;
        }
        else
        {
          *(_DWORD *)(v9 + 16) = 0;
        }
      }
      v16 = strlen(s);
      if ( v16 )
      {
        v17 = v16;
        v18 = *(void **)v9;
        v19 = v16 + 1;
        if ( *(_DWORD *)(v9 + 8) < v16 + 1 )
        {
          v18 = qvector_reserve(v9, *(void **)v9, v16 + 1, 1u);
          *(_DWORD *)v9 = v18;
        }
        v24[v8 + 1] = v19;
        memmove(v18, s, v17);
        *(_BYTE *)(*(_DWORD *)v9 + v17) = 0;
        a1 = v23;
      }
      else
      {
        *(_DWORD *)(v9 + 4) = 0;
      }
      v4 = qstrtok(nullptr, ":", &v27);
    }
    if ( v26[0] )
    {
      v26[1] = nullptr;
      qfree(v26[0]);
      v26[2] = nullptr;
      v26[0] = nullptr;
    }
    return 1;
  }
  return result;
}
