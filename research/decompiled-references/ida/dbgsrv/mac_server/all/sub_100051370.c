/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100051370
// Address: 0x0000000100051370

//----- (0000000100051370) ----------------------------------------------------
_BYTE *__fastcall sub_100051370(__int64 a1, __int64 a2, const void *a3, int a4)
{
  _BYTE *result; // rax
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // r13
  size_t v11; // rax
  unsigned __int64 v12; // r12
  void *v13; // rax
  _QWORD *v14; // r14
  int v15; // r14d
  _BYTE *v16; // [rsp+0h] [rbp-40h]
  size_t __len; // [rsp+8h] [rbp-38h]
  int v18; // [rsp+10h] [rbp-30h]

  result = qalloc((unsigned int)(a4 + 1));
  if ( result )
  {
    v18 = a4;
    v16 = result;
    sub_10005ECC0((char **)(a1 + 232), *(_QWORD *)(a1 + 240) + 1LL);
    v7 = *(_QWORD *)(a1 + 232);
    v8 = *(_QWORD *)(a1 + 240);
    v9 = 9 * v8;
    *(_OWORD *)(v7 + 8 * v9 + 32) = 0;
    *(_OWORD *)(v7 + 8 * v9 + 16) = 0;
    *(_OWORD *)(v7 + 8 * v9) = 0;
    ++*(_QWORD *)(a1 + 240);
    v10 = v7 + 72 * v8;
    *(_QWORD *)(v7 + 8 * v9 + 64) = a2;
    if ( a3 && (v11 = strlen((const char *)a3)) != 0 )
    {
      __len = v11;
      v12 = v11 + 1;
      v13 = *(void **)(v10 + 24);
      if ( *(_QWORD *)(v10 + 40) < v12 )
      {
        v14 = (_QWORD *)(v7 + 8 * v9 + 24);
        v13 = qvector_reserve((__int64)v14, *(void **)(v10 + 24), v12, 1u);
        *v14 = v13;
      }
      v15 = v18;
      *(_QWORD *)(v10 + 32) = v12;
      memmove(v13, a3, __len);
      *(_BYTE *)(*(_QWORD *)(v10 + 24) + __len) = 0;
    }
    else
    {
      *(_QWORD *)(v10 + 32) = 0;
      v15 = v18;
    }
    *(_DWORD *)(v10 + 48) = v15;
    *(_QWORD *)(v10 + 56) = v16;
    v16[v15] = 0;
    return v16;
  }
  return result;
}
