/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_966E0
// Address: 0x000966E0

//----- (000966E0) --------------------------------------------------------
int __cdecl sub_966E0(int a1, unsigned int a2, void *a3, size_t n, _DWORD *a5, int *a6)
{
  _BYTE *v6; // eax
  _BYTE *v7; // eax
  char *v8; // esi
  unsigned int v9; // ecx
  int v10; // edi
  void *v11; // eax
  char *v12; // edx
  int v13; // esi
  int v15; // [esp+4h] [ebp-38h]
  int v16; // [esp+Ch] [ebp-30h]
  int v17[4]; // [esp+10h] [ebp-2Ch] BYREF
  char *src; // [esp+20h] [ebp-1Ch] BYREF
  unsigned int v19[6]; // [esp+24h] [ebp-18h] BYREF

  v19[1] = __readgsdword(0x14u);
  sub_96B40((int)v17, 39);
  v6 = pack_dd(&src, (unsigned int)v19 + 1, a2);
  sub_3A950(v17, &src, v6 - (_BYTE *)&src);
  v7 = pack_dd(&src, (unsigned int)v19 + 1, n);
  sub_3A950(v17, &src, v7 - (_BYTE *)&src);
  sub_3A950(v17, a3, n);
  v8 = (char *)(*(int (__cdecl **)(int, int, int *))(*(_DWORD *)a1 + 8))(a1, 39, v17);
  if ( v8 )
  {
    v9 = (unsigned int)&v8[*(_DWORD *)v8 + 5];
    src = v8 + 5;
    v19[0] = v9;
    v16 = unpack_dd((unsigned int *)&src, v9);
    v10 = unpack_dd((unsigned int *)&src, v19[0]);
    if ( a5 )
    {
      if ( v10 > 0 )
      {
        v11 = qalloc(v10);
        *a5 = v11;
        if ( v11 )
        {
          v12 = src;
          v15 = -1;
          if ( &src[v10] < src || (unsigned int)&src[v10] > v19[0] )
          {
LABEL_11:
            v13 = v15;
            goto LABEL_13;
          }
          src += v10;
          memcpy(v11, v12, v10);
        }
      }
    }
    if ( a6 )
      *a6 = v10;
    qfree(v8);
    v15 = v16;
    goto LABEL_11;
  }
  v13 = -1;
LABEL_13:
  if ( v17[0] )
  {
    v17[1] = 0;
    qfree((void *)v17[0]);
    v17[0] = 0;
    v17[2] = 0;
  }
  return v13;
}
// 96826: conditional instruction was optimized away because %0x18.4!=0
