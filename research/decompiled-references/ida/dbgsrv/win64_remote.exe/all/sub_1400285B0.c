/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400285B0
// Address: 0x00000001400285B0

//----- (00000001400285B0) ----------------------------------------------------
__int64 __fastcall sub_1400285B0(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, int a5)
{
  int v7; // r8d
  char *v8; // rdi
  __int64 v9; // rbp
  char *v10; // rdx
  unsigned __int64 v11; // r8
  __int64 v12; // rcx
  char v14[8]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+38h] [rbp-10h]

  if ( !a4 )
    return a2;
  v7 = a2 - a3 + a5;
  if ( v7 >= 0 && v7 < a5 )
  {
    v8 = (char *)(a4 + 32LL * v7);
    v9 = (unsigned int)(a5 - v7);
    do
    {
      v10 = v8;
      v8 += 32;
      v14[0] = 2;
      v15 = 0;
      v16 = 0;
      sub_140028E70(v14, v10);
      v11 = *(_QWORD *)(a1 + 32) + 1LL;
      if ( v11 > *(_QWORD *)(a1 + 40) )
        *(_QWORD *)(a1 + 24) = sub_14005ABE0(a1 + 24, *(void **)(a1 + 24), v11, 0x20u);
      v12 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32);
      *(_BYTE *)v12 = 2;
      *(_OWORD *)(v12 + 8) = 0;
      *(_QWORD *)(v12 + 24) = 0;
      sub_140028E70((char *)v12, v14);
      ++*(_QWORD *)(a1 + 32);
      sub_140029390((__int64)v14);
      --v9;
    }
    while ( v9 );
  }
  return a3;
}
