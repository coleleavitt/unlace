/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65070
// Address: 0x0000000000065070

//----- (0000000000065070) ----------------------------------------------------
__int64 __fastcall sub_65070(__int64 a1)
{
  _DWORD *v2; // r14
  _QWORD *v3; // rbx
  size_t v4; // r12
  void *v5; // rax
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  _QWORD *v8; // rax

  v2 = operator new(0x20u);
  v2[6] = 0;
  *v2 = 1;
  v3 = operator new(0x18u);
  *(_OWORD *)v3 = 0;
  v3[2] = 0;
  v4 = *(_QWORD *)(a1 + 48);
  if ( v4 )
  {
    v5 = qalloc_or_throw(*(_QWORD *)(a1 + 48));
    *v3 = v5;
    v3[2] = v4;
    memcpy(v5, *(const void **)(a1 + 40), v4);
    v3[1] = v4;
  }
  *((_QWORD *)v2 + 2) = v3;
  v6 = (_QWORD *)(a1 + 344);
  v7 = *(_QWORD *)(a1 + 352);
  if ( *(_QWORD *)(a1 + 360) >= (unsigned __int64)(v7 + 1) )
  {
    v8 = (_QWORD *)*v6;
  }
  else
  {
    v8 = qvector_reserve((__int64)v6, *(char **)(a1 + 344), v7 + 1, 8u);
    *(_QWORD *)(a1 + 344) = v8;
    v7 = *(_QWORD *)(a1 + 352);
  }
  v8[v7] = v2;
  ++*(_QWORD *)(a1 + 352);
  return 0;
}
