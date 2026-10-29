/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_91510
// Address: 0x00091510

//----- (00091510) --------------------------------------------------------
unsigned int __cdecl sub_91510(unsigned int *a1, char a2, unsigned int *a3)
{
  signed int v3; // esi
  int v4; // esi
  unsigned int v5; // edi
  unsigned int v6; // eax
  unsigned int v7; // ecx
  char *v8; // eax
  const void *v9; // eax
  unsigned int v10; // ecx
  void *v11; // edx
  size_t v13; // [esp+4h] [ebp-28h]
  char **v14; // [esp+8h] [ebp-24h]
  signed int v15; // [esp+10h] [ebp-1Ch]
  char v16; // [esp+17h] [ebp-15h] BYREF
  unsigned int v17; // [esp+18h] [ebp-14h]

  v17 = __readgsdword(0x14u);
  v3 = unpack_dd(a3, a3[1]);
  sub_916B0(a1, v3);
  v15 = v3;
  if ( v3 > 0 )
  {
    v4 = 8;
    do
    {
      v5 = *a1;
      v14 = (char **)(v5 + v4);
      *(_DWORD *)(v5 + v4 - 8) = unpack_dd(a3, a3[1]);
      v6 = unpack_dd(a3, a3[1]);
      v7 = *(_DWORD *)(v5 + v4 + 4);
      v13 = v6;
      if ( v7 >= v6 )
      {
        if ( v7 != v6 )
        {
          v16 = 0;
          sub_43860(v14, v6, &v16);
          if ( a2 )
            goto LABEL_12;
          goto LABEL_15;
        }
      }
      else
      {
        if ( *(_DWORD *)(v5 + v4 + 8) >= v6 )
        {
          v8 = *(char **)(v5 + v4);
        }
        else
        {
          v8 = (char *)qvector_reserve((int)v14, *(void **)(v5 + v4), v6, 1u);
          *(_DWORD *)(v5 + v4) = v8;
          v7 = *(_DWORD *)(v5 + v4 + 4);
        }
        memset(&v8[v7], 0, v13 - v7);
        *(_DWORD *)(v5 + v4 + 4) = v13;
      }
      if ( a2 )
      {
LABEL_12:
        *(_DWORD *)(v5 + v4 - 4) = unpack_dd(a3, a3[1]);
        v9 = (const void *)*a3;
        v10 = *a3 + v13;
        if ( v10 >= *a3 && v10 <= a3[1] )
        {
          v11 = *(void **)(v5 + v4);
          *a3 = v10;
          memcpy(v11, v9, v13);
        }
      }
LABEL_15:
      v4 += 20;
      --v15;
    }
    while ( v15 );
  }
  return __readgsdword(0x14u);
}
