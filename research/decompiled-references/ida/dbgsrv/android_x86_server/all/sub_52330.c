/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_52330
// Address: 0x00052330

//----- (00052330) --------------------------------------------------------
unsigned int __cdecl sub_52330(int a1, int *a2)
{
  unsigned int v2; // eax
  size_t v3; // esi
  _DWORD *v4; // ecx
  unsigned int v5; // ebx
  unsigned int v6; // edi
  char *v7; // eax
  int *v8; // ecx
  int v9; // edi
  int v10; // eax
  int v11; // esi
  int v12; // esi
  _BYTE *v13; // eax
  _BYTE *v14; // eax
  _BYTE *v15; // eax
  char *v16; // eax
  size_t v17; // esi
  int v18; // esi
  int v20; // [esp+4h] [ebp-38h]
  int v21; // [esp+4h] [ebp-38h]
  int v22; // [esp+8h] [ebp-34h]
  unsigned int v23; // [esp+8h] [ebp-34h]
  int v24; // [esp+Ch] [ebp-30h]
  char v25; // [esp+13h] [ebp-29h] BYREF
  _WORD src[2]; // [esp+14h] [ebp-28h] BYREF
  _BYTE v27[3]; // [esp+19h] [ebp-23h] BYREF
  _DWORD v28[5]; // [esp+28h] [ebp-14h] BYREF

  v28[0] = __readgsdword(0x14u);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a1 + 4);
  v2 = a2[1];
  if ( v2 )
  {
    v3 = pack_dd(src, (unsigned int)v27, v2) - (_BYTE *)src;
    if ( v3 )
    {
      v4 = (_DWORD *)a1;
      v5 = *(_DWORD *)(a1 + 4);
      v6 = 0x7FFFFFFF;
      if ( !__CFADD__(v3, v5) )
        v6 = v3 + v5;
      v22 = *(_DWORD *)(a1 + 4);
      if ( v5 >= v6 )
      {
        if ( v5 != v6 )
        {
          v25 = 0;
          sub_43860((char **)a1, v6, &v25);
          v4 = (_DWORD *)a1;
        }
      }
      else
      {
        if ( *(_DWORD *)(a1 + 8) >= v6 )
        {
          v7 = *(char **)a1;
        }
        else
        {
          v7 = (char *)qvector_reserve(a1, *(void **)a1, v6, 1u);
          *(_DWORD *)a1 = v7;
        }
        memset(&v7[*(_DWORD *)(a1 + 4)], 0, v6 - *(_DWORD *)(a1 + 4));
        v4 = (_DWORD *)a1;
        *(_DWORD *)(a1 + 4) = v6;
      }
      memcpy((void *)(*v4 + v22), src, v3);
    }
    v8 = a2;
    if ( a2[1] )
    {
      v9 = 0;
      v10 = 0;
      v11 = 0;
      v23 = 0;
      do
      {
        v20 = v11;
        v12 = *v8;
        v13 = pack_dd(src, (unsigned int)v28, *(_DWORD *)(*v8 + v9) - v10);
        v14 = pack_dd(v13, (unsigned int)v28, *(_DWORD *)(v12 + v9 + 4) - v20);
        v15 = pack_dd(v14, (unsigned int)v28, *(_DWORD *)(v12 + v9 + 8));
        v21 = v12;
        v16 = pack_dd(v15, (unsigned int)v28, *(_DWORD *)(v12 + v9 + 12));
        v17 = v16 - (char *)src;
        if ( v16 != (char *)src )
        {
          v24 = *(_DWORD *)(a1 + 4);
          v25 = 0;
          sub_43860((char **)a1, v24 + v17, &v25);
          memcpy((void *)(*(_DWORD *)a1 + v24), src, v17);
        }
        v10 = *(_DWORD *)(v21 + v9);
        v11 = *(_DWORD *)(v21 + v9 + 4);
        v9 += 16;
        v8 = a2;
        ++v23;
      }
      while ( v23 < a2[1] );
    }
  }
  v18 = *(_DWORD *)(a1 + 4);
  src[0] = *(_WORD *)(a1 + 4) - *(_WORD *)(a1 + 12);
  v25 = 0;
  sub_43860((char **)a1, v18 + 2, &v25);
  *(_WORD *)(*(_DWORD *)a1 + v18) = src[0];
  return __readgsdword(0x14u);
}
// 52330: too many cbuild loops
