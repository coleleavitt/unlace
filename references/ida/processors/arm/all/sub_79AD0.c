__int64 __fastcall sub_79AD0(__int64 a1, __int64 a2, unsigned __int16 a3, int a4, __int64 a5, __int64 a6, int a7)
{
  int v7; // ebp
  __int64 v8; // rax
  __int64 *v9; // rbx
  __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // r12d
  __int16 v14; // r15
  __int64 v15; // r13
  __int16 v16; // dx
  unsigned __int16 v17; // r10
  __int64 v18; // rax
  int v19; // ebx
  __int64 result; // rax
  __int64 v21; // rax
  int v22; // [rsp+4h] [rbp-54h]

  v7 = a5;
  if ( (_BYTE)a6 )
  {
    v21 = qalloc_or_throw();
    *(_QWORD *)v21 = 0;
    v9 = (__int64 *)v21;
    *(_OWORD *)(v21 + 8) = 0;
    if ( a4 <= 0 )
    {
LABEL_16:
      result = cleanup_argloc();
      if ( v9 )
      {
        *(_DWORD *)a1 = 2;
        *(_QWORD *)(a1 + 8) = v9;
      }
      return result;
    }
LABEL_5:
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    while ( 1 )
    {
      v17 = a3 + v13;
      if ( v11 < v12 + 1 )
      {
        v18 = qvector_reserve((__int64)v9, v10, v12 + 1, 24);
        v17 = a3 + v13;
        *v9 = v18;
        v10 = v18;
        v12 = v9[1];
      }
      v15 = v10 + 24 * v12;
      *(_QWORD *)v15 = 0;
      *(_DWORD *)(v15 + 16) = 0xFFFF;
      *(_QWORD *)(v15 + 8) = 0;
      ++v9[1];
      *(_WORD *)(v15 + 16) = v14;
      v22 = *(_DWORD *)(a2 + 4LL * v17);
      cleanup_argloc();
      *(_DWORD *)v15 = 3;
      *(_DWORD *)(v15 + 8) = v22;
      v16 = v7;
      if ( a7 <= v7 )
        v16 = a7;
      v7 -= a7;
      ++v13;
      v14 += a7;
      *(_WORD *)(v15 + 18) = v16;
      if ( a4 <= v13 )
        break;
      v12 = v9[1];
      v11 = v9[2];
      v10 = *v9;
    }
    goto LABEL_16;
  }
  if ( a4 > 1 && (_DWORD)a5 != 8 )
  {
    v8 = qalloc_or_throw();
    *(_QWORD *)v8 = 0;
    v9 = (__int64 *)v8;
    *(_OWORD *)(v8 + 8) = 0;
    goto LABEL_5;
  }
  v19 = *(_DWORD *)(a2 + 4LL * a3);
  if ( (_DWORD)a5 == 8 )
    return sub_79A80((_DWORD *)a1, v19, *(unsigned int *)(a2 + 4LL * a3 + 4), a2, a5, a6);
  result = cleanup_argloc();
  *(_DWORD *)a1 = 3;
  *(_DWORD *)(a1 + 8) = v19;
  return result;
}
