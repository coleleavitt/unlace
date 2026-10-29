/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400581E0
// Address: 0x00000001400581E0

//----- (00000001400581E0) ----------------------------------------------------
_QWORD *__fastcall sub_1400581E0(__int64 a1, int a2, __int64 a3, int a4, char a5)
{
  unsigned __int64 v8; // r8
  unsigned __int64 v10; // r8
  __int64 v11; // r8
  unsigned __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // r14
  void *v15; // rdx
  __int64 v16; // rbp
  unsigned __int64 v17; // r8
  _QWORD *result; // rax

  v8 = *(_QWORD *)(a1 + 8) + 1LL;
  if ( v8 > *(_QWORD *)(a1 + 16) )
    *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, v8, 1u);
  *(_BYTE *)(*(_QWORD *)a1 + (*(_QWORD *)(a1 + 8))++) = a5;
  v10 = *(_QWORD *)(a1 + 32) + 1LL;
  if ( v10 > *(_QWORD *)(a1 + 40) )
    *(_QWORD *)(a1 + 24) = sub_14005ABE0(a1 + 24, *(void **)(a1 + 24), v10, 0x10u);
  v11 = *(_QWORD *)(a1 + 24) + 16LL * (*(_QWORD *)(a1 + 32))++;
  *(_QWORD *)(v11 + 8) = a3;
  v12 = 0;
  *(_DWORD *)v11 = a4;
  *(_DWORD *)(v11 + 4) = a2;
  v13 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 76) = v13;
  *(_QWORD *)(a1 + 56) = 0;
  if ( v13 )
  {
    v14 = 0;
    do
    {
      v15 = *(void **)(a1 + 48);
      v16 = v14 + *(_QWORD *)(a1 + 24);
      v17 = *(_QWORD *)(a1 + 56) + 1LL;
      if ( v17 > *(_QWORD *)(a1 + 64) )
      {
        v15 = sub_14005ABE0(a1 + 48, v15, v17, 8u);
        *(_QWORD *)(a1 + 48) = v15;
      }
      ++v12;
      v14 += 16;
      *((_QWORD *)v15 + (*(_QWORD *)(a1 + 56))++) = v16;
    }
    while ( v12 < *(unsigned int *)(a1 + 76) );
  }
  result = *(_QWORD **)(a1 + 48);
  *(_QWORD *)(a1 + 80) = *result;
  return result;
}
