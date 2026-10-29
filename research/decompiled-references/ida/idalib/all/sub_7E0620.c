__int64 __fastcall sub_7E0620(__int64 a1)
{
  unsigned __int64 v1; // r13
  unsigned int v2; // eax
  char *v3; // r15
  size_t v4; // r12
  char *v5; // rax
  unsigned __int64 v6; // r13
  unsigned int v7; // eax
  char *v8; // r14
  bool v9; // cf
  char *v10; // rax
  __int64 *v11; // r13
  __int64 v12; // rax
  __int64 v13; // rsi
  size_t v14; // r8
  __int64 v15; // rbx
  __int64 v16; // r13
  __int64 v17; // rsi
  unsigned __int64 v18; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // [rsp+0h] [rbp-48h]
  size_t v23; // [rsp+8h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 16);
  v2 = unpack_dd(a1 + 8);
  v3 = *(char **)(a1 + 8);
  v4 = v2;
  v5 = &v3[v2];
  if ( !__CFADD__(v4, v3) && v1 >= (unsigned __int64)v5 )
  {
    *(_QWORD *)(a1 + 8) = v5;
    if ( v3 )
    {
      v6 = *(_QWORD *)(a1 + 16);
      v7 = unpack_dd(a1 + 8);
      v8 = *(char **)(a1 + 8);
      v9 = __CFADD__(v8, v7);
      v10 = &v8[v7];
      if ( !v9 && v6 >= (unsigned __int64)v10 )
      {
        *(_QWORD *)(a1 + 8) = v10;
        if ( v8 )
        {
          v11 = *(__int64 **)(a1 + 40);
          v12 = v11[1];
          v13 = *v11;
          if ( v11[2] < (unsigned __int64)(v12 + 1) )
          {
            v21 = qvector_reserve(*(_QWORD *)(a1 + 40), v13, v12 + 1, 56);
            *v11 = v21;
            v13 = v21;
            v12 = v11[1];
          }
          v14 = v4;
          v15 = v13 + 56 * v12;
          *(_QWORD *)v15 = -1;
          *(_OWORD *)(v15 + 16) = 0;
          *(_QWORD *)(v15 + 8) = 0;
          *(_QWORD *)(v15 + 32) = 0;
          *(_OWORD *)(v15 + 40) = 0;
          ++v11[1];
          v16 = *(_QWORD *)(v15 + 16);
          *(_DWORD *)v15 = *(_DWORD *)(a1 + 24);
          *(_DWORD *)(v15 + 4) = *(_DWORD *)(a1 + 28);
          if ( v16 )
          {
            --v16;
            v17 = *(_QWORD *)(v15 + 8);
            v14 = v4 + v16;
            v18 = v4 + v16 + 1;
            if ( *(_QWORD *)(v15 + 24) >= v18 )
              goto LABEL_11;
          }
          else
          {
            v17 = *(_QWORD *)(v15 + 8);
            v18 = v4 + 1;
            if ( *(_QWORD *)(v15 + 24) >= v4 + 1 )
            {
LABEL_11:
              *(_QWORD *)(v15 + 16) = v18;
              *(_BYTE *)(v17 + v14) = 0;
              memmove((void *)(v16 + *(_QWORD *)(v15 + 8)), v3, v4);
              sub_7DCFA0((__int64 *)(v15 + 32), v8, *(_QWORD *)(a1 + 8) - (_QWORD)v8);
              return 0;
            }
          }
          v23 = v14;
          v22 = v18;
          v20 = qvector_reserve(v15 + 8, v17, v18, 1);
          v14 = v23;
          v18 = v22;
          *(_QWORD *)(v15 + 8) = v20;
          v17 = v20;
          goto LABEL_11;
        }
      }
    }
  }
  return 0xFFFFFFFFLL;
}
