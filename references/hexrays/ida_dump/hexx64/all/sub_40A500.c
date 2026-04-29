__int64 __fastcall sub_40A500(_DWORD *a1, __int64 *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  int i; // r13d
  int v9; // eax
  __int64 v10; // rsi
  int v11; // r15d
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // ebp
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  int v21; // ebp
  __int64 v22; // rdx
  __int64 v23; // rsi
  unsigned __int64 v24; // rdx
  int v25; // ebp
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax

  result = 0;
  for ( i = 0; i < a4; result = i )
  {
    if ( *(_WORD *)(*(_QWORD *)(a3 + 8) + 32 * result + 24) != 0xFFFF )
    {
      v9 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 168LL))(a1);
      v10 = *a2;
      v11 = v9;
      v12 = a2[1];
      if ( a2[2] < (unsigned __int64)(v12 + 1) )
      {
        v13 = qvector_reserve(a2, v10, v12 + 1, 4);
        *a2 = v13;
        v10 = v13;
        v12 = a2[1];
      }
      *(_DWORD *)(v10 + 4 * v12) = v11;
      ++a2[1];
    }
    ++i;
  }
  if ( (*(_BYTE *)a3 & 1) != 0 )
  {
    v14 = a2[1];
    v15 = a1[99];
    v16 = *a2;
    if ( a2[2] < (unsigned __int64)(v14 + 1) )
    {
      v26 = qvector_reserve(a2, v16, v14 + 1, 4);
      *a2 = v26;
      v16 = v26;
      v14 = a2[1];
    }
    *(_DWORD *)(v16 + 4 * v14) = v15;
    v17 = a2[1];
    v18 = *a2;
    v19 = v17 + 1;
    v20 = v17 + 2;
    a2[1] = v19;
    v21 = a1[102];
    if ( a2[2] < v20 )
    {
      v28 = qvector_reserve(a2, v18, v20, 4);
      *a2 = v28;
      v18 = v28;
      v19 = a2[1];
    }
    *(_DWORD *)(v18 + 4 * v19) = v21;
    v22 = a2[1];
    v23 = *a2;
    result = v22 + 1;
    v24 = v22 + 2;
    a2[1] = result;
    v25 = a1[101];
    if ( a2[2] < v24 )
    {
      v27 = qvector_reserve(a2, v23, v24, 4);
      *a2 = v27;
      v23 = v27;
      result = a2[1];
    }
    *(_DWORD *)(v23 + 4 * result) = v25;
    ++a2[1];
  }
  return result;
}
