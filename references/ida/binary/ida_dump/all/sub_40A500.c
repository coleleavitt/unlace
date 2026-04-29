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
  int v20; // ebp
  __int64 v21; // rdx
  __int64 v22; // rsi
  int v23; // ebp
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax

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
        v13 = qvector_reserve();
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
      v24 = qvector_reserve();
      *a2 = v24;
      v16 = v24;
      v14 = a2[1];
    }
    *(_DWORD *)(v16 + 4 * v14) = v15;
    v17 = a2[1];
    v18 = *a2;
    v19 = v17 + 1;
    a2[1] = v17 + 1;
    v20 = a1[102];
    if ( a2[2] < (unsigned __int64)(v17 + 2) )
    {
      v26 = qvector_reserve();
      *a2 = v26;
      v18 = v26;
      v19 = a2[1];
    }
    *(_DWORD *)(v18 + 4 * v19) = v20;
    v21 = a2[1];
    v22 = *a2;
    result = v21 + 1;
    a2[1] = v21 + 1;
    v23 = a1[101];
    if ( a2[2] < (unsigned __int64)(v21 + 2) )
    {
      v25 = qvector_reserve();
      *a2 = v25;
      v22 = v25;
      result = a2[1];
    }
    *(_DWORD *)(v22 + 4 * result) = v23;
    ++a2[1];
  }
  return result;
}
