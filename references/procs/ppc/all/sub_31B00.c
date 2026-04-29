__int64 __fastcall sub_31B00(__int64 a1, __int16 a2, int a3, int a4, char a5)
{
  __int64 v7; // rax
  __int64 *v8; // rbx
  int v9; // r15d
  int v10; // r12d
  int v11; // r14d
  __int16 v12; // dx
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int16 v15; // bp
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 result; // rax
  _DWORD *v19; // [rsp+0h] [rbp-58h]
  __int16 v22; // [rsp+10h] [rbp-48h]

  v7 = qalloc_or_throw(24);
  *(_QWORD *)v7 = 0;
  v8 = (__int64 *)v7;
  *(_OWORD *)(v7 + 8) = 0;
  if ( a5 || (unsigned __int8)getinf_flag(3, 4) )
  {
    v22 = 8;
    v9 = 8;
  }
  else
  {
    v22 = 4;
    v9 = 4;
  }
  v10 = 0;
  v11 = 0;
  if ( a3 > 0 )
  {
    do
    {
      v14 = *v8;
      v15 = a2 + v10;
      v16 = v8[1];
      if ( v8[2] < (unsigned __int64)(v16 + 1) )
      {
        v17 = qvector_reserve(v8, v14, v16 + 1, 24);
        *v8 = v17;
        v14 = v17;
        v16 = v8[1];
      }
      v12 = v22;
      v13 = v14 + 24 * v16;
      *(_DWORD *)(v13 + 16) = 0xFFFF;
      *(_QWORD *)v13 = 0;
      *(_QWORD *)(v13 + 8) = 0;
      ++v8[1];
      if ( a4 <= v9 )
        v12 = a4;
      *(_WORD *)(v13 + 16) = v11;
      a4 -= v9;
      v11 += v9;
      v19 = (_DWORD *)v13;
      ++v10;
      *(_WORD *)(v13 + 18) = v12;
      cleanup_argloc(v13);
      *v19 = 3;
      v19[2] = v15;
    }
    while ( a3 != v10 );
  }
  result = cleanup_argloc(a1);
  if ( v8 )
  {
    result = a1;
    *(_DWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v8;
  }
  return result;
}
