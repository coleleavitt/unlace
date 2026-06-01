/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002BA90
// Address: 0x000000010002BA90

//----- (000000010002BA90) ----------------------------------------------------
__int64 __fastcall sub_10002BA90(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  int v4; // r13d
  _DWORD *v5; // r15
  void **v6; // rax
  int v7; // r13d
  __int64 v8; // rax
  __int64 v9; // rcx
  size_t v10; // r12
  const void *v11; // r14
  unsigned __int64 v12; // rdx
  void **v13; // r13
  char *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  bool v17; // cf
  __int64 v18; // r14
  __int64 v19; // r15
  unsigned __int64 v20; // rcx
  char *v21; // rax
  _Unwind_Exception *v23; // rax
  unsigned __int8 v24; // [rsp+Fh] [rbp-31h] BYREF

  v2 = *(_QWORD *)(a1 + 256);
  v3 = *(int *)(*(_QWORD *)(a1 + 248) + 4 * v2 - 4);
  if ( v2 )
    *(_QWORD *)(a1 + 256) = v2 - 1;
  v4 = *(_DWORD *)(a1 + 208);
  v5 = operator new(0x20u);
  v5[6] = 0;
  *v5 = a2;
  v6 = (void **)qalloc_or_throw(24);
  *(_OWORD *)v6 = 0;
  v6[2] = nullptr;
  *((_QWORD *)v5 + 1) = v6;
  v7 = v4 - v3;
  if ( v7 )
  {
    v10 = v7;
    v11 = (const void *)(**(_QWORD **)(a1 + 200) + v3);
    v12 = v7;
    v13 = v6;
    v14 = (char *)qvector_reserve((__int64)v6, nullptr, v12, 1u);
    *v13 = v14;
    __bzero((char *)v13[1] + (_QWORD)v14, v10 - (_QWORD)v13[1]);
    v13[1] = (void *)v10;
    memcpy(*v13, v11, v10);
    v15 = *(_QWORD *)(a1 + 344);
    v16 = *(_QWORD *)(a1 + 352);
    *((_QWORD *)v5 + 2) = *(_QWORD *)(v15 + 8 * v16 - 8);
    *(_QWORD *)(v15 + 8 * v16 - 8) = v5;
    LODWORD(v11) = *(_DWORD *)(a1 + 208);
    v17 = (unsigned int)v11 < (unsigned int)v10;
    v18 = (unsigned int)((_DWORD)v11 - v10);
    if ( v17 )
    {
      if ( under_debugger == 1 )
        BUG();
      interr(0x2C4u);
      _Unwind_Resume(v23);
    }
    *(_DWORD *)(a1 + 208) = v18;
    v19 = *(_QWORD *)(a1 + 200);
    v20 = *(_QWORD *)(v19 + 8);
    if ( v20 >= (unsigned int)v18 )
    {
      if ( v20 != v18 )
      {
        v24 = 0;
        sub_10001CE90(v19, (unsigned int)v18, &v24);
      }
    }
    else
    {
      v21 = *(char **)v19;
      if ( *(_QWORD *)(v19 + 16) < (unsigned __int64)(unsigned int)v18 )
      {
        v21 = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(void **)v19, (unsigned int)v18, 1u);
        *(_QWORD *)v19 = v21;
        v20 = *(_QWORD *)(v19 + 8);
      }
      __bzero(&v21[v20], (unsigned int)v18 - v20);
      *(_QWORD *)(v19 + 8) = (unsigned int)v18;
    }
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 344);
    v9 = *(_QWORD *)(a1 + 352);
    *((_QWORD *)v5 + 2) = *(_QWORD *)(v8 + 8 * v9 - 8);
    *(_QWORD *)(v8 + 8 * v9 - 8) = v5;
  }
  *(_BYTE *)(a1 + 212) = -87;
  return 0;
}
// 10002BC5D: variable 'v23' is possibly undefined
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
// 1000AE23D: using guessed type char under_debugger;
