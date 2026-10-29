/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_87D60
// Address: 0x00087D60

//----- (00087D60) --------------------------------------------------------
unsigned int __cdecl sub_87D60(unsigned int *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // edi
  unsigned int *v4; // edx
  unsigned int v5; // eax
  int v6; // esi
  void *v7; // eax
  size_t v8; // esi
  __int64 v9; // xmm0_8
  unsigned int v11; // [esp+18h] [ebp-44h]
  unsigned int v12; // [esp+1Ch] [ebp-40h]
  int v13; // [esp+20h] [ebp-3Ch] BYREF
  void *v14; // [esp+24h] [ebp-38h]
  size_t v15; // [esp+28h] [ebp-34h]
  size_t v16; // [esp+2Ch] [ebp-30h]
  __int64 v17; // [esp+30h] [ebp-2Ch]
  __int64 v18; // [esp+38h] [ebp-24h]
  int v19; // [esp+40h] [ebp-1Ch]
  unsigned int v20; // [esp+48h] [ebp-14h]

  v3 = a2;
  v4 = a1;
  v20 = __readgsdword(0x14u);
  v5 = a1[1];
  v11 = v5;
  if ( v5 <= a2 )
  {
    if ( v5 < a2 )
    {
      if ( *a1 > a3 || *a1 + 36 * a1[2] <= a3 )
      {
        sub_87F30((int)a1, a2, a3);
      }
      else
      {
        v13 = *(_DWORD *)a3;
        v14 = nullptr;
        v15 = 0;
        v16 = 0;
        v8 = *(_DWORD *)(a3 + 8);
        if ( v8 )
        {
          v14 = qalloc_or_throw(v8);
          v16 = v8;
          memcpy(v14, *(const void **)(a3 + 4), v8);
          v4 = a1;
          v3 = a2;
          v15 = v8;
        }
        v19 = *(_DWORD *)(a3 + 32);
        v9 = *(_QWORD *)(a3 + 16);
        v18 = *(_QWORD *)(a3 + 24);
        v17 = v9;
        sub_87F30((int)v4, v3, (int)&v13);
        if ( v14 )
        {
          v15 = 0;
          qfree(v14);
          v14 = nullptr;
          v16 = 0;
        }
      }
    }
  }
  else
  {
    v6 = 36 * a2 + 4;
    do
    {
      v7 = *(void **)(*v4 + v6);
      if ( v7 )
      {
        v12 = *v4;
        *(_DWORD *)(*v4 + v6 + 4) = 0;
        qfree(v7);
        *(_DWORD *)(v12 + v6) = 0;
        *(_DWORD *)(v12 + v6 + 8) = 0;
        v4 = a1;
      }
      ++v3;
      v6 += 36;
    }
    while ( v3 < v11 );
    v4[1] = a2;
  }
  return __readgsdword(0x14u);
}
