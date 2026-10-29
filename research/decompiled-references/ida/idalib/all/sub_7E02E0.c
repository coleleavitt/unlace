__int64 __fastcall sub_7E02E0(__int64 a1)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rbp
  unsigned int v4; // eax
  char *v5; // r13
  bool v6; // cf
  char *v7; // rax
  __int64 *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int64 v12; // r12
  __int64 v13; // rbx
  size_t v14; // r12
  size_t v15; // r14
  __int64 v16; // rsi
  unsigned __int64 v17; // r15
  __int64 v19; // rax
  __int64 v20; // rax

  v2 = a1 + 8;
  v3 = *(_QWORD *)(v2 + 8);
  v4 = unpack_dd(v2);
  v5 = *(char **)(a1 + 8);
  v6 = __CFADD__(v5, v4);
  v7 = &v5[v4];
  if ( !v6 && v3 >= (unsigned __int64)v7 )
  {
    *(_QWORD *)(a1 + 8) = v7;
    if ( v5 )
    {
      v8 = *(__int64 **)(a1 + 40);
      v9 = v8[1];
      v10 = *v8;
      if ( v8[2] < (unsigned __int64)(v9 + 1) )
      {
        v20 = qvector_reserve(*(_QWORD *)(a1 + 40), v10, v9 + 1, 32);
        v9 = v8[1];
        *v8 = v20;
        v10 = v20;
      }
      v11 = v10 + 32 * v9;
      *(_QWORD *)v11 = -1;
      *(_OWORD *)(v11 + 16) = 0;
      *(_QWORD *)(v11 + 8) = 0;
      ++v8[1];
      *(_DWORD *)v11 = *(_DWORD *)(a1 + 24);
      *(_DWORD *)(v11 + 4) = *(_DWORD *)(a1 + 28);
      v12 = *(_QWORD *)(a1 + 8);
      v13 = *(_QWORD *)(v11 + 16);
      v14 = v12 - (_QWORD)v5;
      v15 = v14;
      if ( v13 )
      {
        --v13;
        v16 = *(_QWORD *)(v11 + 8);
        v15 = v14 + v13;
        v17 = v14 + v13 + 1;
        if ( *(_QWORD *)(v11 + 24) >= v17 )
          goto LABEL_8;
      }
      else
      {
        v16 = *(_QWORD *)(v11 + 8);
        v17 = v14 + 1;
        if ( *(_QWORD *)(v11 + 24) >= v14 + 1 )
        {
LABEL_8:
          *(_QWORD *)(v11 + 16) = v17;
          *(_BYTE *)(v16 + v15) = 0;
          memmove((void *)(v13 + *(_QWORD *)(v11 + 8)), v5, v14);
          return 0;
        }
      }
      v19 = qvector_reserve(v11 + 8, v16, v17, 1);
      *(_QWORD *)(v11 + 8) = v19;
      v16 = v19;
      goto LABEL_8;
    }
  }
  return 0xFFFFFFFFLL;
}
