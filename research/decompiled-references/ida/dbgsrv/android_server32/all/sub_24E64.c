/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_24E64
// Address: 0x00024E64

//----- (00024E64) --------------------------------------------------------
int __fastcall sub_24E64(_DWORD *a1, int a2, unsigned int a3, int a4)
{
  int result; // r0
  const char *v6; // r5
  void *v7; // r0
  size_t v8; // r6
  int v9; // r1
  int v10; // r3
  size_t v11; // r1
  unsigned int v12; // r5
  _DWORD *v13; // r7
  void *v14; // r0
  size_t v15; // [sp+0h] [bp-2Ch]
  int v16; // [sp+4h] [bp-28h]
  unsigned int *v17; // [sp+Ch] [bp-20h]
  const char *v18; // [sp+10h] [bp-1Ch]
  void **v19; // [sp+18h] [bp-14h]
  unsigned int v20[2]; // [sp+20h] [bp-Ch] BYREF

  result = 0;
  if ( a2 == 1 )
  {
    v20[0] = a3;
    v20[1] = a3 + a4;
    v6 = unpack_ds(v20, a3 + a4, 0);
    v7 = (void *)a1[237];
    if ( v7 )
    {
      a1[238] = 0;
      qfree(v7);
      a1[237] = 0;
      a1[239] = 0;
    }
    v19 = (void **)(a1 + 237);
    if ( v6 )
    {
      v18 = v6;
      v8 = strlen(v6);
      v9 = a1[238];
      v10 = v9 - 1;
      if ( !v9 )
        v10 = 0;
      v11 = v10 + v8;
      v12 = v10 + v8 + 1;
      v17 = a1 + 238;
      if ( a1[239] >= v12 )
      {
        v13 = a1 + 237;
        v14 = *v19;
      }
      else
      {
        v13 = a1 + 237;
        v15 = v10 + v8;
        v16 = v10;
        v14 = qvector_reserve((int)v19, *v19, v12, 1u);
        v11 = v15;
        v10 = v16;
        *v19 = v14;
      }
      *v17 = v12;
      *((_BYTE *)v14 + v11) = 0;
      memmove((void *)(*v13 + v10), v18, v8);
    }
    return 1;
  }
  return result;
}
