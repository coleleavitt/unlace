/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_526D0
// Address: 0x000526D0

//----- (000526D0) --------------------------------------------------------
unsigned int __cdecl sub_526D0(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // esi
  int *v5; // edi
  int v6; // esi
  const char *v7; // eax
  const char *v8; // ebx
  void *v9; // eax
  size_t v10; // esi
  int v12; // [esp+14h] [ebp-38h]
  void **v13; // [esp+18h] [ebp-34h]
  const void *v14; // [esp+1Ch] [ebp-30h]
  unsigned int v15; // [esp+20h] [ebp-2Ch]
  int v16; // [esp+28h] [ebp-24h] BYREF
  void *v17; // [esp+2Ch] [ebp-20h]
  size_t v18; // [esp+30h] [ebp-1Ch]
  size_t v19; // [esp+34h] [ebp-18h]
  unsigned int v20; // [esp+38h] [ebp-14h]

  v3 = a2;
  v20 = __readgsdword(0x14u);
  v4 = *(_DWORD *)(a1 + 48);
  v5 = (int *)(a1 + 44);
  if ( !v4 )
  {
    v10 = *(_DWORD *)(a3 + 4);
LABEL_14:
    v16 = v3;
    v17 = nullptr;
    v18 = 0;
    v19 = 0;
    if ( v10 )
    {
      v17 = qalloc_or_throw(v10);
      v19 = v10;
      memcpy(v17, *(const void **)a3, v10);
      v18 = v10;
    }
    sub_52910(v5, &v16);
    if ( v17 )
    {
      v18 = 0;
      qfree(v17);
      v17 = nullptr;
      v19 = 0;
    }
    return __readgsdword(0x14u);
  }
  v6 = 16 * (v4 - 1);
  v7 = byte_EF875;
  v12 = *v5;
  v8 = byte_EF875;
  if ( *(_DWORD *)(*v5 + v6 + 8) )
    v8 = *(const char **)(*v5 + v6 + 4);
  v13 = (void **)(*v5 + v6 + 4);
  v15 = *(_DWORD *)(a3 + 4);
  v14 = *(const void **)a3;
  if ( v15 )
    v7 = *(const char **)a3;
  if ( strcmp(v8, v7) )
  {
    v3 = a2;
    if ( *(_DWORD *)(v12 + v6) == a2 )
    {
      if ( v13 != (void **)a3 )
      {
        if ( v15 < 2 )
        {
          *(_DWORD *)(v12 + v6 + 8) = 0;
        }
        else
        {
          if ( *(_DWORD *)(v12 + v6 + 12) >= v15 )
          {
            v9 = *v13;
          }
          else
          {
            v9 = qvector_reserve((int)v13, *v13, v15, 1u);
            *v13 = v9;
          }
          *(_DWORD *)(v12 + v6 + 8) = v15;
          memmove(v9, v14, v15 - 1);
          *((char *)*v13 + v15 - 1) = 0;
        }
      }
      return __readgsdword(0x14u);
    }
    v10 = v15;
    goto LABEL_14;
  }
  return __readgsdword(0x14u);
}
