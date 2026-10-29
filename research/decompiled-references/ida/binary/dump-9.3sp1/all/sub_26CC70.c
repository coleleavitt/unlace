__int64 __fastcall sub_26CC70(__int64 *a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  _QWORD *v13; // r15
  __int64 v14; // rsi
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v21; // rsi
  __int64 v22; // rdx
  int v23; // r8d
  _DWORD *v24; // rcx
  _DWORD *v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // [rsp+4h] [rbp-3Ch]
  __int64 v30; // [rsp+8h] [rbp-38h]

  v30 = a5;
  if ( a5 <= 0 || (v5 = a4) == 0 )
  {
    if ( !under_debugger )
      sub_383060(52484);
    BUG();
  }
  v8 = a4 / a5;
  if ( !(a4 % a5) )
  {
    v11 = a4 / a5;
    v12 = 1 % v8;
    if ( 1 % v8 )
      return sub_26A690(a2, *(_QWORD *)(a1[1] + 64), (__int64)a3, v11);
LABEL_9:
    if ( (unsigned __int64)(v11 + 1) > 2 )
      v11 = v12;
    return sub_26A690(a2, *(_QWORD *)(a1[1] + 64), (__int64)a3, v11);
  }
  v9 = a5 / a4;
  v10 = a5 % a4;
  v11 = a5 / a4;
  if ( !v10 )
  {
    v30 = v9;
    v12 = 1 % v11;
    v5 = 1 % v11;
    if ( !(1 % v11) )
      goto LABEL_9;
  }
  v13 = (_QWORD *)a1[1];
  if ( *(_DWORD *)(a2 + 8) == 65 )
  {
    v21 = v13[10];
    v22 = v13[11];
    v23 = *(_DWORD *)(a2 + 32);
    v24 = (_DWORD *)(v21 + 4 * v22);
    if ( (_DWORD *)v21 == v24 )
      goto LABEL_17;
    v25 = (_DWORD *)v13[10];
    while ( v23 != *v25 )
    {
      if ( v24 == ++v25 )
        goto LABEL_17;
    }
    if ( v24 == v25 )
    {
LABEL_17:
      v26 = v22 + 1;
      if ( v13[12] < v26 )
      {
        v29 = *(_DWORD *)(a2 + 32);
        v27 = qvector_reserve((__int64)(v13 + 10), v21, v26, 4);
        v28 = v13[11];
        v23 = v29;
        v13[10] = v27;
        v24 = (_DWORD *)(v27 + 4 * v28);
      }
      *v24 = v23;
      ++v13[11];
      v13 = (_QWORD *)a1[1];
    }
  }
  v14 = v13[8];
  v15 = sub_26A690(a2, v14, (__int64)a3, v5);
  v18 = j__qalloc_or_throw(64, v14, v16, v17);
  v19 = sub_240F50(*a1, v30, 0, -1, 0, 2u, 0);
  *(_QWORD *)v18 = -1;
  *(_QWORD *)(v18 + 24) = v15;
  *(_DWORD *)(v18 + 8) = 39;
  *(_QWORD *)(v18 + 12) = -1;
  *(_QWORD *)(v18 + 32) = v19;
  *(_QWORD *)(v18 + 40) = 0;
  *(_QWORD *)(v18 + 48) = 0;
  *(_DWORD *)(v18 + 56) = 0;
  *(_QWORD *)v18 = *a3;
  sub_2441C0(v18, *(_QWORD *)(*a1 + 112), 0);
  *(_DWORD *)(v18 + 56) |= 1u;
  return v18;
}
