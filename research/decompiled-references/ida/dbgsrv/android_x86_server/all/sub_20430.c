/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_20430
// Address: 0x00020430

//----- (00020430) --------------------------------------------------------
unsigned int __cdecl sub_20430(int a1, char **a2)
{
  _DWORD *v2; // edi
  const char *v3; // eax
  const char *v4; // esi
  const char *v5; // ecx
  int v6; // eax
  char *v7; // edx
  void **v8; // esi
  unsigned int v9; // eax
  const void *v10; // ebx
  void *v11; // eax
  void *v12; // ecx
  char *v13; // esi
  _DWORD *v14; // ecx
  _DWORD *v15; // eax
  int v16; // edi
  bool v17; // zf
  char *v19; // [esp+20h] [ebp-3Ch]
  unsigned int v20; // [esp+20h] [ebp-3Ch]
  int v21; // [esp+24h] [ebp-38h]
  char *v22; // [esp+24h] [ebp-38h]
  int v23; // [esp+28h] [ebp-34h]
  size_t v24; // [esp+28h] [ebp-34h]
  char *v25; // [esp+38h] [ebp-24h] BYREF
  int v26; // [esp+3Ch] [ebp-20h]
  int v27; // [esp+40h] [ebp-1Ch]
  unsigned int v28; // [esp+48h] [ebp-14h]

  v28 = __readgsdword(0x14u);
  v2 = *(_DWORD **)(a1 + 568);
  if ( (_DWORD *)(a1 + 572) != v2 )
  {
    do
    {
      v25 = nullptr;
      v26 = 0;
      v27 = 0;
      if ( (unsigned __int8)sub_202B0(a1, &v25, v2[5]) )
      {
        v23 = v26;
        v19 = v25;
        v3 = v25;
        if ( !v26 )
          v3 = byte_EF875;
        v4 = (const char *)v2[13];
        v21 = v2[14];
        v5 = v4;
        if ( !v21 )
          v5 = byte_EF875;
        if ( strcmp(v3, v5) )
        {
          v6 = v2[15];
          v2[13] = v19;
          v2[14] = v23;
          v2[15] = v27;
          v25 = (char *)v4;
          v26 = v21;
          v27 = v6;
          v7 = sub_206D0(a2);
          *(_DWORD *)v7 = v2[5];
          v8 = (void **)(v7 + 4);
          if ( v7 + 4 != (char *)(v2 + 13) )
          {
            v9 = v2[14];
            if ( !v9 || (v24 = v9 - 1, v9 == 1) )
            {
              *((_DWORD *)v7 + 2) = 0;
            }
            else
            {
              v10 = (const void *)v2[13];
              v20 = v2[14];
              if ( *((_DWORD *)v7 + 3) >= v9 )
              {
                v12 = *v8;
              }
              else
              {
                v22 = v7;
                v11 = qvector_reserve((int)v8, *v8, v9, 1u);
                v7 = v22;
                v12 = v11;
                *v8 = v11;
                v9 = v20;
              }
              *((_DWORD *)v7 + 2) = v9;
              v13 = v7;
              memmove(v12, v10, v24);
              *(_BYTE *)(*((_DWORD *)v13 + 1) + v20 - 1) = 0;
            }
          }
        }
      }
      if ( v25 )
      {
        v26 = 0;
        qfree(v25);
        v25 = nullptr;
        v27 = 0;
      }
      v14 = (_DWORD *)v2[1];
      if ( v14 )
      {
        do
        {
          v15 = v14;
          v14 = (_DWORD *)*v14;
        }
        while ( v14 );
      }
      else
      {
        v15 = (_DWORD *)v2[2];
        if ( (_DWORD *)*v15 != v2 )
        {
          v16 = (int)(v2 + 2);
          do
          {
            v15 = *(_DWORD **)(*(_DWORD *)v16 + 8);
            v17 = *v15 == *(_DWORD *)v16;
            v16 = *(_DWORD *)v16 + 8;
          }
          while ( !v17 );
        }
      }
      v2 = v15;
    }
    while ( (_DWORD *)(a1 + 572) != v15 );
  }
  return __readgsdword(0x14u);
}
