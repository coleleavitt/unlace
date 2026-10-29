/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400471C0
// Address: 0x00000001400471C0

//----- (00000001400471C0) ----------------------------------------------------
__int64 __fastcall sub_1400471C0(__int64 a1)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  __int64 v3; // rbp
  __int64 v4; // rsi
  _QWORD *v5; // rdi
  void *v6; // rcx
  int v7; // esi
  __int64 v8; // rdi
  void *v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // rdi
  void *v13; // rcx

  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_WORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 172) = -1;
  *(_QWORD *)(a1 + 184) = -1;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 272) = 0;
  v2 = *(void (__fastcall ****)(_QWORD, __int64))a1;
  if ( v2 )
  {
    (**v2)(v2, 1);
    *(_QWORD *)a1 = 0;
  }
  *(_OWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  if ( *(_QWORD *)(a1 + 104) )
  {
    v3 = *(_QWORD *)(a1 + 112);
    if ( v3 )
    {
      v4 = 0;
      do
      {
        v5 = (_QWORD *)(v4 + *(_QWORD *)(a1 + 104));
        v6 = (void *)v5[2];
        if ( v6 )
        {
          v5[3] = 0;
          j_free(v6);
          v5[2] = 0;
          v5[4] = 0;
        }
        v4 += 120;
        --v3;
      }
      while ( v3 );
    }
    *(_QWORD *)(a1 + 112) = 0;
    j_free(*(void **)(a1 + 104));
    *(_QWORD *)(a1 + 104) = 0;
    *(_QWORD *)(a1 + 120) = 0;
  }
  v7 = 0;
  if ( *(_QWORD *)(a1 + 240) )
  {
    v8 = 0;
    do
    {
      j_free(*(void **)(v8 + *(_QWORD *)(a1 + 232) + 56));
      ++v7;
      v8 += 72;
    }
    while ( (unsigned __int64)v7 < *(_QWORD *)(a1 + 240) );
  }
  v9 = *(void **)(a1 + 128);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 136) = 0;
    j_free(v9);
    *(_QWORD *)(a1 + 128) = 0;
    *(_QWORD *)(a1 + 144) = 0;
  }
  if ( *(_QWORD *)(a1 + 256) )
  {
    v10 = *(_QWORD *)(a1 + 264);
    if ( v10 )
    {
      v11 = 0;
      do
      {
        v12 = v11 + *(_QWORD *)(a1 + 256);
        v13 = *(void **)v12;
        if ( *(_QWORD *)v12 )
        {
          *(_QWORD *)(v12 + 8) = 0;
          j_free(v13);
          *(_QWORD *)v12 = 0;
          *(_QWORD *)(v12 + 16) = 0;
        }
        v11 += 24;
        --v10;
      }
      while ( v10 );
    }
    *(_QWORD *)(a1 + 264) = 0;
    j_free(*(void **)(a1 + 256));
    *(_QWORD *)(a1 + 256) = 0;
    *(_QWORD *)(a1 + 272) = 0;
  }
  return a1;
}
