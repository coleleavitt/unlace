/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7B410
// Address: 0x0007B410

//----- (0007B410) --------------------------------------------------------
int __cdecl sub_7B410(int a1, int a2, _DWORD *a3)
{
  int v3; // esi
  _DWORD *v4; // edi
  const char *v5; // eax
  int v6; // eax
  const char *v7; // eax
  int v9; // eax
  int v10; // edx
  _DWORD *v11; // ecx
  const void **v12; // eax
  unsigned int v13; // esi
  const void *v14; // edx
  void *v15; // eax
  _DWORD *v16; // edi
  const char *v17; // [esp+1Ch] [ebp-30h]
  int v18; // [esp+1Ch] [ebp-30h]
  const void *v19; // [esp+20h] [ebp-2Ch]
  char *v20; // [esp+28h] [ebp-24h] BYREF
  int v21; // [esp+2Ch] [ebp-20h]
  int v22; // [esp+30h] [ebp-1Ch]
  unsigned int v23; // [esp+38h] [ebp-14h]

  v23 = __readgsdword(0x14u);
  v20 = nullptr;
  v21 = 0;
  v22 = 0;
  sub_7AEC0(a3, (int)&v20);
  v3 = *(_DWORD *)(a1 + 4);
  if ( !v3 )
    goto LABEL_13;
  v17 = byte_EF875;
  if ( v21 )
    v17 = v20;
  v4 = (_DWORD *)(a1 + 4);
  do
  {
    v5 = byte_EF875;
    if ( *(_DWORD *)(v3 + 20) )
      v5 = *(const char **)(v3 + 16);
    v6 = strcmp(v5, v17);
    if ( v6 >= 0 )
      v4 = (_DWORD *)v3;
    v3 = *(_DWORD *)(v3 + 4 * ((unsigned int)v6 >> 31));
  }
  while ( v3 );
  if ( v4 == (_DWORD *)(a1 + 4) )
  {
LABEL_13:
    v18 = 0;
  }
  else
  {
    if ( v4[5] )
      v7 = (const char *)v4[4];
    else
      v7 = byte_EF875;
    v9 = strcmp(v17, v7);
    v18 = 0;
    if ( v9 >= 0 )
    {
      v11 = (_DWORD *)a2;
      if ( a2 )
      {
        v12 = (const void **)(v4 + 7);
        LOBYTE(v10) = 1;
        v18 = v10;
        if ( v4 + 7 != (_DWORD *)a2 )
        {
          v13 = v4[8];
          if ( v13 < 2 )
          {
            *(_DWORD *)(a2 + 4) = 0;
          }
          else
          {
            v14 = *v12;
            if ( *(_DWORD *)(a2 + 8) >= v13 )
            {
              v15 = *(void **)a2;
            }
            else
            {
              v19 = *v12;
              v15 = qvector_reserve(a2, *(void **)a2, v13, 1u);
              v11 = (_DWORD *)a2;
              *(_DWORD *)a2 = v15;
              v14 = v19;
            }
            v11[1] = v13;
            v16 = v11;
            memmove(v15, v14, v13 - 1);
            *(_BYTE *)(*v16 + v13 - 1) = 0;
          }
        }
      }
    }
  }
  if ( v20 )
  {
    v21 = 0;
    qfree(v20);
    v20 = nullptr;
    v22 = 0;
  }
  return v18;
}
// 7B549: variable 'v10' is possibly undefined
