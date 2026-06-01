/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100028DB8
// Address: 0x0000000100028DB8

//----- (0000000100028DB8) ----------------------------------------------------
__int64 __fastcall sub_100028DB8(__int64 a1, int a2)
{
  __int64 v4; // x8
  __int64 v5; // x23
  int v6; // w22
  _DWORD *v7; // x20
  void **v8; // x0
  unsigned int v9; // w24
  __int64 v10; // x8
  __int64 v11; // x25
  void **v12; // x22
  char *v13; // x0
  __int64 v14; // x8
  unsigned int v15; // w8
  unsigned __int64 v16; // x20
  _QWORD **v17; // x21
  _QWORD *v18; // x9
  _QWORD *v19; // x8
  _Unwind_Exception *v21; // x0
  char v22; // [xsp+7h] [xbp-49h] BYREF

  v4 = *(_QWORD *)(a1 + 256);
  v5 = *(int *)(*(_QWORD *)(a1 + 248) + 4 * v4 - 4);
  if ( v4 )
    *(_QWORD *)(a1 + 256) = v4 - 1;
  v6 = *(_DWORD *)(a1 + 208);
  v7 = operator new(0x20u);
  v7[6] = 0;
  *v7 = a2;
  v8 = (void **)qalloc_or_throw(24);
  v8[1] = nullptr;
  v8[2] = nullptr;
  *v8 = nullptr;
  *((_QWORD *)v7 + 1) = v8;
  v9 = v6 - v5;
  if ( v6 == (_DWORD)v5 )
  {
    v10 = *(_QWORD *)(a1 + 344) + 8LL * *(_QWORD *)(a1 + 352);
    *((_QWORD *)v7 + 2) = *(_QWORD *)(v10 - 8);
    *(_QWORD *)(v10 - 8) = v7;
  }
  else
  {
    v11 = **(_QWORD **)(a1 + 200);
    v12 = v8;
    v13 = (char *)qvector_reserve(v8, nullptr, (int)v9, 1u);
    *v12 = v13;
    bzero((char *)v12[1] + (_QWORD)v13, (int)v9 - (_QWORD)v12[1]);
    v12[1] = (void *)(int)v9;
    memcpy(*v12, (const void *)(v11 + v5), (int)v9);
    v14 = *(_QWORD *)(a1 + 344) + 8LL * *(_QWORD *)(a1 + 352);
    *((_QWORD *)v7 + 2) = *(_QWORD *)(v14 - 8);
    *(_QWORD *)(v14 - 8) = v7;
    v15 = *(_DWORD *)(a1 + 208);
    v16 = v15 - v9;
    if ( v15 < v9 )
    {
      if ( under_debugger == 1 )
        __break(1u);
      interr(708);
      _Unwind_Resume(v21);
    }
    *(_DWORD *)(a1 + 208) = v16;
    v17 = *(_QWORD ***)(a1 + 200);
    v18 = v17[1];
    if ( (unsigned __int64)v18 >= v16 )
    {
      if ( v18 != (_QWORD *)v16 )
      {
        v22 = 0;
        sub_10001B764(v17, v15 - v9, &v22);
      }
    }
    else
    {
      v19 = *v17;
      if ( (unsigned __int64)v17[2] < v16 )
      {
        v19 = qvector_reserve(*(_QWORD **)(a1 + 200), *v17, v16, 1u);
        *v17 = v19;
        v18 = v17[1];
      }
      bzero((char *)v18 + (_QWORD)v19, v16 - (_QWORD)v18);
      v17[1] = (_QWORD *)v16;
    }
  }
  *(_BYTE *)(a1 + 212) = -87;
  return 0;
}
// 100028F90: variable 'v21' is possibly undefined
// 1000A590D: using guessed type char under_debugger;
