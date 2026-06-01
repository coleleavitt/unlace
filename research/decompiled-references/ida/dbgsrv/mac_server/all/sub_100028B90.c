/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100028B90
// Address: 0x0000000100028B90

//----- (0000000100028B90) ----------------------------------------------------
__int64 __fastcall sub_100028B90(__int64 a1)
{
  __int64 v1; // rax
  __int64 *v2; // rsi
  unsigned int v3; // r14d
  int v4; // edx
  unsigned __int64 v5; // r14
  __int64 v6; // r15
  char *v7; // rax
  unsigned __int64 v8; // rcx
  char v9; // r12
  __int64 v10; // r14
  void *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r14
  void *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r14
  void *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r14
  void *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r14
  void *v23; // rax
  __int64 v24; // rcx
  unsigned __int8 v26; // [rsp+7h] [rbp-29h] BYREF

  v1 = *(_QWORD *)(a1 + 232);
  v2 = (__int64 *)*(unsigned int *)(*(_QWORD *)(a1 + 224) + 4 * v1 - 4);
  if ( v1 )
    *(_QWORD *)(a1 + 232) = v1 - 1;
  v3 = *(_DWORD *)(a1 + 208);
  v4 = v3 - ((_DWORD)v2 + 4);
  if ( v4 )
  {
    sub_100032CB0(*(void ***)(a1 + 200), v2, v4);
    *(_BYTE *)(a1 + 212) = -1;
  }
  else
  {
    if ( v3 <= 4 )
    {
      if ( under_debugger == 1 )
        BUG();
      interr(0x2C4u);
      JUMPOUT(0x100028E10LL);
    }
    v5 = v3 - 5;
    *(_DWORD *)(a1 + 208) = v5;
    v6 = *(_QWORD *)(a1 + 200);
    v7 = *(char **)v6;
    v8 = *(_QWORD *)(v6 + 8);
    v9 = *(_BYTE *)(*(_QWORD *)v6 + v5);
    if ( v8 >= v5 )
    {
      if ( v8 != v5 )
      {
        v26 = 0;
        sub_10001CE90(v6, v5, &v26);
      }
    }
    else
    {
      if ( *(_QWORD *)(v6 + 16) < v5 )
      {
        v7 = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(void **)v6, v5, 1u);
        *(_QWORD *)v6 = v7;
        v8 = *(_QWORD *)(v6 + 8);
      }
      __bzero(&v7[v8], v5 - v8);
      *(_QWORD *)(v6 + 8) = v5;
    }
    *(_BYTE *)(a1 + 212) = -87;
    if ( v9 == -85 )
    {
      *(_BYTE *)(a1 + 212) = -85;
      v10 = *(_QWORD *)(a1 + 200);
      v11 = *(void **)v10;
      v12 = *(_QWORD *)(v10 + 8);
      if ( *(_QWORD *)(v10 + 16) < (unsigned __int64)(v12 + 1) )
      {
        v11 = qvector_reserve(*(_QWORD *)(a1 + 200), v11, v12 + 1, 1u);
        *(_QWORD *)v10 = v11;
        v12 = *(_QWORD *)(v10 + 8);
      }
      *((_BYTE *)v11 + v12) = -85;
      ++*(_QWORD *)(v10 + 8);
      ++*(_DWORD *)(a1 + 208);
      v13 = *(_QWORD *)(a1 + 200);
      v14 = *(void **)v13;
      v15 = *(_QWORD *)(v13 + 8);
      if ( *(_QWORD *)(v13 + 16) < (unsigned __int64)(v15 + 1) )
      {
        v14 = qvector_reserve(*(_QWORD *)(a1 + 200), v14, v15 + 1, 1u);
        *(_QWORD *)v13 = v14;
        v15 = *(_QWORD *)(v13 + 8);
      }
      *((_BYTE *)v14 + v15) = 0;
      ++*(_QWORD *)(v13 + 8);
      ++*(_DWORD *)(a1 + 208);
      v16 = *(_QWORD *)(a1 + 200);
      v17 = *(void **)v16;
      v18 = *(_QWORD *)(v16 + 8);
      if ( *(_QWORD *)(v16 + 16) < (unsigned __int64)(v18 + 1) )
      {
        v17 = qvector_reserve(*(_QWORD *)(a1 + 200), v17, v18 + 1, 1u);
        *(_QWORD *)v16 = v17;
        v18 = *(_QWORD *)(v16 + 8);
      }
      *((_BYTE *)v17 + v18) = 0;
      ++*(_QWORD *)(v16 + 8);
      ++*(_DWORD *)(a1 + 208);
      v19 = *(_QWORD *)(a1 + 200);
      v20 = *(void **)v19;
      v21 = *(_QWORD *)(v19 + 8);
      if ( *(_QWORD *)(v19 + 16) < (unsigned __int64)(v21 + 1) )
      {
        v20 = qvector_reserve(*(_QWORD *)(a1 + 200), v20, v21 + 1, 1u);
        *(_QWORD *)v19 = v20;
        v21 = *(_QWORD *)(v19 + 8);
      }
      *((_BYTE *)v20 + v21) = 0;
      ++*(_QWORD *)(v19 + 8);
      ++*(_DWORD *)(a1 + 208);
      v22 = *(_QWORD *)(a1 + 200);
      v23 = *(void **)v22;
      v24 = *(_QWORD *)(v22 + 8);
      if ( *(_QWORD *)(v22 + 16) < (unsigned __int64)(v24 + 1) )
      {
        v23 = qvector_reserve(*(_QWORD *)(a1 + 200), v23, v24 + 1, 1u);
        *(_QWORD *)v22 = v23;
        v24 = *(_QWORD *)(v22 + 8);
      }
      *((_BYTE *)v23 + v24) = 0;
      ++*(_QWORD *)(v22 + 8);
      ++*(_DWORD *)(a1 + 208);
    }
    else
    {
      ((void (__fastcall *)(__int64))loc_100028E10)(a1);
    }
  }
  return 0;
}
// 100028E02: control flows out of bounds to 100028E10
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
// 1000AE23D: using guessed type char under_debugger;
