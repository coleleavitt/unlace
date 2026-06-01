/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002AF70
// Address: 0x000000010002AF70

//----- (000000010002AF70) ----------------------------------------------------
__int64 __fastcall sub_10002AF70(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // r14
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // rax
  _BYTE *v6; // rax
  __int64 v7; // rax
  size_t v8; // r14
  bool v9; // cf
  size_t v10; // rax
  void **v11; // r15
  void *v12; // rax
  void *v13; // rcx
  __int64 v14; // r12
  __int64 v15; // rcx
  size_t v16; // rcx
  unsigned __int64 v17; // r13

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 344) + 8LL * *(_QWORD *)(a1 + 352) - 8);
  v2 = *(_QWORD *)(v1 + 16);
  v3 = *(_QWORD *)(v2 + 8);
  v4 = 0;
  v9 = v3 == 0;
  v5 = v3 - 1;
  if ( !v9 )
    v4 = v5;
  v6 = *(_BYTE **)v2;
  if ( *(_QWORD *)(v2 + 16) < (unsigned __int64)(v4 + 2) )
  {
    v6 = qvector_reserve(*(_QWORD *)(v1 + 16), *(void **)v2, v4 + 2, 1u);
    *(_QWORD *)v2 = v6;
  }
  *(_QWORD *)(v2 + 8) = v4 + 2;
  v6[v4] = 46;
  *(_BYTE *)(*(_QWORD *)v2 + v4 + 1) = 0;
  v7 = *(_QWORD *)(a1 + 48);
  v8 = 0;
  v9 = v7 == 0;
  v10 = v7 - 1;
  if ( !v9 )
    v8 = v10;
  if ( !v9 && v10 != 0 )
  {
    v11 = *(void ***)(v1 + 16);
    v12 = *v11;
    v13 = v11[1];
    v14 = 0;
    v9 = v13 == nullptr;
    v15 = (__int64)v13 - 1;
    if ( !v9 )
      v14 = v15;
    v16 = v14 + v8;
    v17 = v14 + v8 + 1;
    if ( (unsigned __int64)v11[2] < v17 )
    {
      v12 = qvector_reserve((__int64)v11, v12, v14 + v8 + 1, 1u);
      v16 = v14 + v8;
      *v11 = v12;
    }
    v11[1] = (void *)v17;
    *((_BYTE *)v12 + v16) = 0;
    memcpy((char *)*v11 + v14, *(const void **)(a1 + 40), v8);
  }
  return 0;
}
