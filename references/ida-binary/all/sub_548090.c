__int64 __fastcall sub_548090(__int64 a1, __int64 a2, __int64 a3)
{
  size_t v4; // r12
  __int64 v5; // r12
  __int64 result; // rax
  void *v7; // rax
  void *v8; // rax

  *(_QWORD *)a2 = 0;
  *(_OWORD *)(a2 + 8) = 0;
  v4 = *(_QWORD *)(a3 + 8);
  if ( v4 )
  {
    v7 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 8));
    *(_QWORD *)(a2 + 16) = v4;
    *(_QWORD *)a2 = v7;
    memcpy(v7, *(const void **)a3, v4);
    *(_QWORD *)(a2 + 8) = v4;
  }
  *(_QWORD *)(a2 + 24) = 0;
  *(_OWORD *)(a2 + 32) = 0;
  v5 = *(_QWORD *)(a3 + 32);
  if ( v5 )
  {
    v8 = (void *)qalloc_or_throw(4 * v5);
    *(_QWORD *)(a2 + 24) = v8;
    *(_QWORD *)(a2 + 40) = v5;
    memcpy(v8, *(const void **)(a3 + 24), 4 * v5);
    *(_QWORD *)(a2 + 32) = v5;
  }
  *(_DWORD *)(a2 + 48) = *(_DWORD *)(a3 + 48);
  result = *(unsigned __int8 *)(a3 + 52);
  *(_BYTE *)(a2 + 52) = result;
  return result;
}
