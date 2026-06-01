__int64 __fastcall sub_F16100(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  int v5; // ebp
  _DWORD *v6; // rbp
  __int64 result; // rax
  _DWORD *i; // r13
  __int64 v9; // rbx
  int v10; // r14d
  __int64 v11; // rbx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 (__fastcall *v16)(__int64 *, __int64, _QWORD); // rbx
  __int64 v17; // rax
  __int64 v18; // rax

  sub_F15AA0(a1, (_WORD *)a2);
  v3 = a1[1];
  v4 = *(unsigned int *)(v3 + 8);
  v5 = *(_BYTE *)(a2 + 20) & 1;
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(v3 + 12) )
  {
    sub_2237220(a1[1], v3 + 16, v4 + 1, 4);
    v4 = *(unsigned int *)(v3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v3 + 4 * v4) = v5;
  ++*(_DWORD *)(v3 + 8);
  v6 = *(_DWORD **)(a2 + 24);
  result = 3LL * (*(_WORD *)(a2 + 20) >> 1);
  for ( i = &v6[6 * (*(_WORD *)(a2 + 20) >> 1)]; i != v6; result = v16(a1, v17, 0) )
  {
    while ( 1 )
    {
      v11 = a1[1];
      v18 = *(unsigned int *)(v11 + 8);
      v12 = *(unsigned int *)(v11 + 12);
      v13 = v18 + 1;
      if ( !*v6 )
        break;
      if ( *v6 == 1 )
      {
        if ( v13 > v12 )
        {
          sub_2237220(a1[1], v11 + 16, v13, 4);
          v18 = *(unsigned int *)(v11 + 8);
        }
        *(_DWORD *)(*(_QWORD *)v11 + 4 * v18) = 1;
        ++*(_DWORD *)(v11 + 8);
      }
      else
      {
        if ( v13 > v12 )
        {
          sub_2237220(a1[1], v11 + 16, v13, 4);
          v18 = *(unsigned int *)(v11 + 8);
        }
        *(_DWORD *)(*(_QWORD *)v11 + 4 * v18) = 2;
        ++*(_DWORD *)(v11 + 8);
      }
      v9 = a1[1];
      v10 = v6[2];
      result = *(unsigned int *)(v9 + 8);
      if ( result + 1 > (unsigned __int64)*(unsigned int *)(v9 + 12) )
      {
        sub_2237220(a1[1], v9 + 16, result + 1, 4);
        result = *(unsigned int *)(v9 + 8);
      }
      v6 += 6;
      *(_DWORD *)(*(_QWORD *)v9 + 4 * result) = v10;
      ++*(_DWORD *)(v9 + 8);
      if ( i == v6 )
        return result;
    }
    if ( v13 > v12 )
    {
      sub_2237220(a1[1], v11 + 16, v13, 4);
      v18 = *(unsigned int *)(v11 + 8);
    }
    v14 = (__int64)v6;
    v6 += 6;
    *(_DWORD *)(*(_QWORD *)v11 + 4 * v18) = 0;
    v15 = *a1;
    ++*(_DWORD *)(v11 + 8);
    v16 = *(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v15 + 40);
    v17 = sub_C00930(v14);
  }
  return result;
}
