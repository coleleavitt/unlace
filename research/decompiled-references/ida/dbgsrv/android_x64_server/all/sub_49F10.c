/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49F10
// Address: 0x0000000000049F10

//----- (0000000000049F10) ----------------------------------------------------
__int64 __fastcall sub_49F10(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm0
  size_t v3; // rbx
  void *v4; // rax
  size_t v5; // rbx
  void *v6; // rax
  _QWORD *v7; // rbp
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rbp
  bool v11; // zf
  __int64 v12; // rbx
  size_t v13; // r13
  void *v14; // rax
  size_t v15; // r13
  void *v16; // rax
  __int64 result; // rax

  *(_OWORD *)a1 = *(_OWORD *)a2;
  v2 = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  v3 = *(_QWORD *)(a2 + 24);
  if ( v3 )
  {
    v4 = qalloc_or_throw(*(_QWORD *)(a2 + 24));
    *(_QWORD *)(a1 + 16) = v4;
    *(_QWORD *)(a1 + 32) = v3;
    memcpy(v4, *(const void **)(a2 + 16), v3);
    v2 = 0;
    *(_QWORD *)(a1 + 24) = v3;
  }
  *(_OWORD *)(a1 + 40) = v2;
  *(_QWORD *)(a1 + 56) = 0;
  v5 = *(_QWORD *)(a2 + 48);
  if ( v5 )
  {
    v6 = qalloc_or_throw(*(_QWORD *)(a2 + 48));
    *(_QWORD *)(a1 + 40) = v6;
    *(_QWORD *)(a1 + 56) = v5;
    memcpy(v6, *(const void **)(a2 + 40), v5);
    *(_QWORD *)(a1 + 48) = v5;
  }
  *(_OWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 64) = a1 + 72;
  v7 = *(_QWORD **)(a2 + 64);
  if ( v7 != (_QWORD *)(a2 + 72) )
  {
    do
    {
      sub_4A190((_QWORD **)(a1 + 64), (_QWORD *)(a1 + 72), v7 + 4, (__int64)(v7 + 4));
      v8 = (_QWORD *)v7[1];
      if ( v8 )
      {
        do
        {
          v9 = v8;
          v8 = (_QWORD *)*v8;
        }
        while ( v8 );
      }
      else
      {
        v9 = (_QWORD *)v7[2];
        if ( (_QWORD *)*v9 != v7 )
        {
          v10 = (__int64)(v7 + 2);
          do
          {
            v9 = *(_QWORD **)(*(_QWORD *)v10 + 16LL);
            v11 = *v9 == *(_QWORD *)v10;
            v10 = *(_QWORD *)v10 + 16LL;
          }
          while ( !v11 );
        }
      }
      v7 = v9;
    }
    while ( v9 != (_QWORD *)(a2 + 72) );
  }
  *(_OWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  v12 = a2;
  v13 = *(_QWORD *)(a2 + 96);
  if ( v13 )
  {
    v14 = qalloc_or_throw(*(_QWORD *)(a2 + 96));
    *(_QWORD *)(a1 + 88) = v14;
    *(_QWORD *)(a1 + 104) = v13;
    memcpy(v14, *(const void **)(a2 + 88), v13);
    *(_QWORD *)(a1 + 96) = v13;
  }
  *(_OWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  v15 = *(_QWORD *)(a2 + 120);
  if ( v15 )
  {
    v16 = qalloc_or_throw(*(_QWORD *)(a2 + 120));
    *(_QWORD *)(a1 + 112) = v16;
    *(_QWORD *)(a1 + 128) = v15;
    v12 = a2;
    memcpy(v16, *(const void **)(a2 + 112), v15);
    *(_QWORD *)(a1 + 120) = v15;
  }
  result = *(unsigned int *)(v12 + 136);
  *(_DWORD *)(a1 + 136) = result;
  return result;
}
