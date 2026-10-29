/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000209C0
// Address: 0x00000001000209C0

//----- (00000001000209C0) ----------------------------------------------------
__int64 __fastcall sub_1000209C0(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v4; // r15
  char *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rbx
  const void *v10; // r12
  size_t v11; // rax
  size_t v12; // r13
  unsigned __int64 v13; // rdx
  void *v14; // rax
  void *v15; // rbx
  void **v16; // rax
  unsigned __int64 v17; // rsi
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // rdi
  void **v21; // rax
  unsigned __int64 v22; // rsi
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  int v25; // esi
  void *v26; // rdx
  unsigned __int64 v28; // [rsp+10h] [rbp-50h]
  __int64 v29; // [rsp+18h] [rbp-48h]
  void *v31; // [rsp+28h] [rbp-38h] BYREF

  if ( *a2 )
  {
    v29 = a1 + 48;
    v4 = a2 + 1;
    do
    {
      v6 = *(char **)(a1 + 24);
      v7 = *(_QWORD *)(a1 + 32);
      if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v7 + 1) )
      {
        v6 = (char *)qvector_reserve(a1 + 24, v6, v7 + 1, 0x18u);
        *(_QWORD *)(a1 + 24) = v6;
        v7 = *(_QWORD *)(a1 + 32);
      }
      v8 = 3 * v7;
      *(_OWORD *)&v6[8 * v8] = 0;
      *(_QWORD *)&v6[8 * v8 + 16] = 0;
      ++*(_QWORD *)(a1 + 32);
      v9 = (__int64)&v6[8 * v8];
      v10 = (const void *)*(v4 - 1);
      if ( v10 && (v11 = strlen((const char *)*(v4 - 1))) != 0 )
      {
        v12 = v11;
        v13 = v11 + 1;
        v14 = *(void **)v9;
        if ( *(_QWORD *)(v9 + 16) < v13 )
        {
          v28 = v13;
          v14 = qvector_reserve(v9, *(void **)v9, v13, 1u);
          v13 = v28;
          *(_QWORD *)v9 = v14;
        }
        *(_QWORD *)(v9 + 8) = v13;
        memmove(v14, v10, v12);
        *(_BYTE *)(*(_QWORD *)v9 + v12) = 0;
      }
      else
      {
        *(_QWORD *)(v9 + 8) = 0;
      }
      v15 = *(void **)v9;
      v31 = v15;
      v16 = *(void ***)(a1 + 48);
      v17 = *(_QWORD *)(a1 + 64);
      v18 = *(_QWORD *)(a1 + 56);
      v19 = v18 + 1;
      if ( v16 <= &v31 && &v16[v17] > &v31 )
      {
        if ( v17 < v19 )
        {
          v16 = (void **)qvector_reserve(v29, v16, v19, 8u);
          *(_QWORD *)(a1 + 48) = v16;
          v18 = *(_QWORD *)(a1 + 56);
        }
      }
      else if ( v17 < v19 )
      {
        v16 = (void **)qvector_reserve(v29, v16, v19, 8u);
        *(_QWORD *)(a1 + 48) = v16;
        v18 = *(_QWORD *)(a1 + 56);
        v15 = v31;
      }
      v16[v18] = v15;
      ++*(_QWORD *)(a1 + 56);
    }
    while ( *v4++ != 0 );
  }
  v20 = a1 + 48;
  v31 = nullptr;
  v21 = *(void ***)(a1 + 48);
  v22 = *(_QWORD *)(a1 + 64);
  v23 = *(_QWORD *)(a1 + 56);
  v24 = v23 + 1;
  if ( v21 <= &v31 && &v21[v22] > &v31 )
  {
    if ( v22 < v24 )
    {
      v21 = (void **)qvector_reserve(v20, v21, v24, 8u);
      *(_QWORD *)(a1 + 48) = v21;
      v23 = *(_QWORD *)(a1 + 56);
    }
    v25 = a3;
    v21[v23] = nullptr;
  }
  else
  {
    if ( v22 >= v24 )
    {
      v26 = nullptr;
    }
    else
    {
      v21 = (void **)qvector_reserve(v20, v21, v24, 8u);
      *(_QWORD *)(a1 + 48) = v21;
      v23 = *(_QWORD *)(a1 + 56);
      v26 = v31;
    }
    v25 = a3;
    v21[v23] = v26;
  }
  ++*(_QWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 96) = v25;
  return __stack_chk_guard;
}
