__int64 __fastcall sub_3A5900(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v5; // rdx
  __int64 v7; // rax
  __int64 *v8; // r15
  _QWORD *v9; // r13
  __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // ebx
  __int64 v14; // r8
  __int64 v15; // rsi
  __int64 v16; // rdx
  unsigned __int16 v17; // cx
  __int64 v18; // rax
  __int64 v19; // [rsp+0h] [rbp-48h]

  v5 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)v5 != 2 )
    return sub_3A56A0(a1, a2, v5, *(_WORD *)(v5 + 88), a3, a4);
  v7 = qalloc_or_throw(24);
  *(_OWORD *)(v7 + 8) = 0;
  v8 = (__int64 *)v7;
  *(_QWORD *)v7 = 0;
  v9 = *(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL);
  if ( v9[1] )
  {
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    while ( 1 )
    {
      if ( v11 < v12 + 1 )
      {
        v19 = v14;
        v18 = qvector_reserve(v8, v10, v12 + 1, 24);
        v12 = v8[1];
        v14 = v19;
        *v8 = v18;
        v10 = v18;
      }
      v15 = v10 + 24 * v12;
      ++v13;
      *(_DWORD *)(v15 + 16) = 0xFFFF;
      *(_QWORD *)v15 = 0;
      *(_QWORD *)(v15 + 8) = 0;
      ++v8[1];
      v16 = *v9 + 24 * v14;
      *(_WORD *)(v15 + 16) = *(_WORD *)(v16 + 16);
      v17 = *(_WORD *)(v16 + 18);
      *(_WORD *)(v15 + 18) = v17;
      sub_3A56A0(a1, v15, v16, v17, a3, 0.0);
      v14 = v13;
      if ( (unsigned __int64)v13 >= v9[1] )
        break;
      v12 = v8[1];
      v11 = v8[2];
      v10 = *v8;
    }
  }
  cleanup_argloc(a2);
  if ( v8 )
  {
    *(_DWORD *)a2 = 2;
    *(_QWORD *)(a2 + 8) = v8;
  }
  return 1;
}
