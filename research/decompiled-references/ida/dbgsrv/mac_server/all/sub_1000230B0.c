/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000230B0
// Address: 0x00000001000230B0

//----- (00000001000230B0) ----------------------------------------------------
_QWORD *__fastcall sub_1000230B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // r13
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // r12
  void *v8; // rdi
  char *v9; // rax
  _QWORD *result; // rax

  v3 = 16 * a3;
  v4 = *(_QWORD *)(a1 + v3 + 448);
  v5 = *(_QWORD *)(a1 + v3 + 456);
  v6 = *(_QWORD *)(a1 + v3 + 712);
  v7 = *(_QWORD *)(a1 + v3 + 704);
  if ( *(int *)a2 >= -1 )
  {
    v8 = *(void **)(a2 + 8);
    if ( v8 )
    {
      *(_QWORD *)(a2 + 16) = 0;
      qfree(v8);
      *(_QWORD *)(a2 + 8) = 0;
      *(_QWORD *)(a2 + 24) = 0;
    }
    *(_DWORD *)a2 = -2;
  }
  *(_OWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 24) = 0;
  v9 = (char *)qvector_reserve(a2 + 8, nullptr, 0x20u, 1u);
  *(_QWORD *)(a2 + 8) = v9;
  __bzero(&v9[*(_QWORD *)(a2 + 16)], 32LL - *(_QWORD *)(a2 + 16));
  *(_QWORD *)(a2 + 16) = 32;
  result = *(_QWORD **)(a2 + 8);
  result[1] = v5;
  *result = v4;
  result[3] = v6;
  result[2] = v7;
  *(_DWORD *)a2 = 0;
  return result;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
