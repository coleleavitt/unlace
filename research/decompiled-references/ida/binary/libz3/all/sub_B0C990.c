__int64 __fastcall sub_B0C990(__int64 a1)
{
  __int64 v1; // rax
  int v2; // ebp
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // ebp
  __int64 result; // rax
  __int64 v8; // rdx

  v1 = *(_QWORD *)(a1 + 688);
  if ( v1 )
    v2 = *(_DWORD *)(v1 - 4);
  else
    v2 = 0;
  v3 = *(_QWORD *)(a1 + 696);
  if ( !v3 || (v4 = *(unsigned int *)(v3 - 4), (_DWORD)v4 == *(_DWORD *)(v3 - 8)) )
  {
    sub_2FD3F0((unsigned int **)(a1 + 696));
    v3 = *(_QWORD *)(a1 + 696);
    v4 = *(unsigned int *)(v3 - 4);
  }
  *(_DWORD *)(v3 + 4 * v4) = v2;
  ++*(_DWORD *)(v3 - 4);
  v5 = *(_QWORD *)(a1 + 816);
  if ( v5 )
    v6 = *(_DWORD *)(v5 - 4);
  else
    v6 = 0;
  result = *(_QWORD *)(a1 + 824);
  if ( !result || (v8 = *(unsigned int *)(result - 4), (_DWORD)v8 == *(_DWORD *)(result - 8)) )
  {
    sub_2FD3F0((unsigned int **)(a1 + 824));
    result = *(_QWORD *)(a1 + 824);
    *(_DWORD *)(result + 4LL * (unsigned int)(*(_DWORD *)(result - 4))++) = v6;
  }
  else
  {
    *(_DWORD *)(result + 4 * v8) = v6;
    ++*(_DWORD *)(result - 4);
  }
  return result;
}

