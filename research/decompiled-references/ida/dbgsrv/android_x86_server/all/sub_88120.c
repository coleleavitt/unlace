/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_88120
// Address: 0x00088120

//----- (00088120) --------------------------------------------------------
unsigned int __cdecl sub_88120(int *a1, unsigned int a2, unsigned int a3)
{
  int v3; // eax
  size_t v5; // [esp+14h] [ebp-118h]
  size_t v6; // [esp+14h] [ebp-118h]
  int v7; // [esp+18h] [ebp-114h] BYREF
  void *v8; // [esp+1Ch] [ebp-110h]
  size_t v9; // [esp+20h] [ebp-10Ch]
  size_t v10; // [esp+24h] [ebp-108h]
  int v11; // [esp+28h] [ebp-104h]
  void *v12; // [esp+2Ch] [ebp-100h]
  size_t v13; // [esp+30h] [ebp-FCh]
  size_t v14; // [esp+34h] [ebp-F8h]
  _BYTE dest[224]; // [esp+38h] [ebp-F4h] BYREF
  unsigned int v16; // [esp+118h] [ebp-14h]

  v16 = __readgsdword(0x14u);
  if ( a1[1] <= a2 )
  {
    if ( a1[1] < a2 )
    {
      if ( *a1 > a3 || (a1[2] << 8) + *a1 <= a3 )
      {
        sub_88380(a1, a2, a3);
      }
      else
      {
        v7 = *(_DWORD *)a3;
        v8 = nullptr;
        v9 = 0;
        v10 = 0;
        if ( *(_DWORD *)(a3 + 8) )
        {
          v5 = *(_DWORD *)(a3 + 8);
          v8 = qalloc_or_throw(v5);
          v10 = v5;
          memcpy(v8, *(const void **)(a3 + 4), v5);
          v9 = v5;
        }
        v11 = *(_DWORD *)(a3 + 16);
        v12 = nullptr;
        v13 = 0;
        v14 = 0;
        v3 = *(_DWORD *)(a3 + 24);
        if ( v3 )
        {
          v6 = *(_DWORD *)(a3 + 24);
          v12 = qalloc_or_throw(v3);
          v14 = v6;
          memcpy(v12, *(const void **)(a3 + 20), v6);
          v13 = v6;
        }
        memcpy(dest, (const void *)(a3 + 32), sizeof(dest));
        sub_88380(a1, a2, (int)&v7);
        if ( v12 )
        {
          v13 = 0;
          qfree(v12);
          v12 = nullptr;
          v14 = 0;
        }
        if ( v8 )
        {
          v9 = 0;
          qfree(v8);
          v8 = nullptr;
          v10 = 0;
        }
      }
    }
  }
  else
  {
    sub_88050(a1, a2);
  }
  return __readgsdword(0x14u);
}
