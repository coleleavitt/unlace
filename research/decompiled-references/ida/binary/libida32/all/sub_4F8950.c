__int64 __fastcall sub_4F8950(__int64 a1, int a2, __int64 (__fastcall *a3)(unsigned int *, __int64), __int64 a4)
{
  _QWORD *v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rbx
  unsigned int *v10; // rax
  __int64 result; // rax
  __int64 v12; // r13
  unsigned int *i; // rbx
  __int64 v14; // rax
  unsigned int v15; // r10d
  __int64 v16; // rsi
  __int64 v17; // rax
  unsigned int j; // esi
  unsigned int *v19; // rax
  unsigned int *v20; // rbx
  unsigned int v22; // [rsp+14h] [rbp-44h]

  if ( a2 == -1 )
    return 0xFFFFFFFFLL;
  v6 = *(_QWORD **)(*(_QWORD *)a1 + 1568LL);
  v7 = v6[15];
  if ( !v7 )
  {
    v12 = a1 + 1552;
    for ( i = sub_4EEBF0(a1 + 1552); i; i = sub_4EE960(v12, *i) )
    {
      v14 = v6[15];
      v15 = i[7];
      v16 = v6[14];
      if ( v6[16] < (unsigned __int64)(v14 + 1) )
      {
        v22 = i[7];
        v17 = qvector_reserve(v6 + 14, v16, v14 + 1, 4);
        v15 = v22;
        v6[14] = v17;
        v16 = v17;
        v14 = v6[15];
      }
      *(_DWORD *)(v16 + 4 * v14) = v15;
      ++v6[15];
    }
    v7 = v6[15];
    if ( !v7 )
    {
      for ( j = -1; ; j = *v20 )
      {
        v19 = sub_4EEB90(v12, j);
        v20 = v19;
        if ( !v19 )
          break;
        if ( v19[7] == a2 )
        {
          result = a3(v19, a4);
          if ( (_DWORD)result != -1 )
            return result;
        }
      }
      return 0xFFFFFFFFLL;
    }
  }
  v8 = v7 - 1;
  if ( v8 < 0 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    if ( *(_DWORD *)(v6[14] + 4 * v8) == a2 )
    {
      v10 = sub_4EE890(a1 + 1552, v8);
      result = a3(v10, a4);
      if ( (_DWORD)result != -1 )
        break;
    }
    if ( v8-- == 0 )
      return 0xFFFFFFFFLL;
  }
  return result;
}

