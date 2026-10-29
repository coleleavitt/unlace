/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_69104
// Address: 0x00069104

//----- (00069104) --------------------------------------------------------
int __fastcall sub_69104(int a1, int a2, unsigned int *a3)
{
  signed int v4; // r5
  int v5; // r4
  int v6; // r6
  unsigned int v7; // r0
  size_t v8; // r5
  unsigned int v9; // r1
  char *v10; // r0
  const void *v11; // r1
  unsigned int v12; // r2
  void *v13; // r0
  int *v15; // [sp+10h] [bp-20h]
  int v17; // [sp+1Ch] [bp-14h]
  signed int v18; // [sp+20h] [bp-10h]
  _BYTE v20[4]; // [sp+28h] [bp-8h] BYREF
  int v21; // [sp+2Ch] [bp-4h]

  v4 = unpack_dd(a3, a3[1]);
  v15 = (int *)a1;
  sub_691F8(a1, v4);
  if ( v4 >= 1 )
  {
    v5 = 8;
    do
    {
      v18 = v4;
      v17 = *v15;
      v6 = *v15 + v5;
      *(_DWORD *)(v6 - 8) = unpack_dd(a3, a3[1]);
      v7 = unpack_dd(a3, a3[1]);
      v8 = v7;
      v9 = *(_DWORD *)(v6 + 4);
      if ( v9 >= v7 )
      {
        if ( v9 != v7 )
        {
          v20[0] = 0;
          sub_370F6((void **)v6, v7, v20);
        }
      }
      else
      {
        if ( *(_DWORD *)(v6 + 8) >= v7 )
        {
          v10 = *(char **)(v17 + v5);
        }
        else
        {
          v10 = (char *)qvector_reserve(v6, *(void **)(v17 + v5), v7, 1u);
          *(_DWORD *)(v17 + v5) = v10;
          v9 = *(_DWORD *)(v6 + 4);
        }
        memset(&v10[v9], 0, v8 - v9);
        *(_DWORD *)(v6 + 4) = v8;
      }
      if ( a2 )
      {
        *(_DWORD *)(v6 - 4) = unpack_dd(a3, a3[1]);
        v11 = (const void *)*a3;
        v12 = *a3 + v8;
        if ( v12 >= *a3 && v12 <= a3[1] )
        {
          v13 = *(void **)(v17 + v5);
          *a3 = v12;
          qmemcpy(v13, v11, v8);
        }
      }
      v5 += 20;
      v4 = v18 - 1;
    }
    while ( v18 != 1 );
  }
  return _stack_chk_guard - v21;
}
