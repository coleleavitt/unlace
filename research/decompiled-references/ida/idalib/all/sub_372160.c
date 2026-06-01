__int64 __fastcall sub_372160(__int64 *a1, __int64 *a2, int *a3)
{
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 result; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __int64 *v11; // rbp
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rsi

  v3 = *a2;
  v4 = *a1;
  v5 = *(_QWORD *)(*a1 + 16);
  v6 = **(_QWORD **)(*a1 + 8);
  result = 0;
  if ( (v5 & *(_QWORD *)(v6 + 56 * v3 + 48)) == *(_QWORD *)(*a1 + 24) )
  {
    v8 = v3 + *a3;
    v9 = (*a3 != 1) + v3;
    if ( v9 < v8 )
    {
      while ( 1 )
      {
        v11 = *(__int64 **)v4;
        v12 = *(_QWORD *)(*(_QWORD *)v4 + 8LL);
        v13 = *(_QWORD *)(v6 + 56 * v9 + 48) & v5;
        v14 = **(_QWORD **)v4;
        if ( *(_QWORD *)(*(_QWORD *)v4 + 16LL) < (unsigned __int64)(v12 + 1) )
        {
          v10 = qvector_reserve(v11, v14, v12 + 1, 8);
          *v11 = v10;
          v14 = v10;
          v12 = v11[1];
        }
        ++v9;
        *(_QWORD *)(v14 + 8 * v12) = v13;
        ++v11[1];
        if ( v8 == v9 )
          break;
        v5 = *(_QWORD *)(v4 + 16);
        v6 = **(_QWORD **)(v4 + 8);
      }
    }
    return 1;
  }
  return result;
}
