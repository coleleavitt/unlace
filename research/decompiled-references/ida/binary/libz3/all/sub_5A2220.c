__int64 __fastcall sub_5A2220(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = *(_QWORD *)(a1 + 120);
  if ( !result || (v3 = *(unsigned int *)(result - 4), (_DWORD)v3 == *(_DWORD *)(result - 8)) )
  {
    sub_2FD3F0((unsigned int **)(a1 + 120));
    result = *(_QWORD *)(a1 + 120);
    *(_DWORD *)(result + 4LL * (unsigned int)(*(_DWORD *)(result - 4))++) = a2;
  }
  else
  {
    *(_DWORD *)(result + 4 * v3) = a2;
    ++*(_DWORD *)(result - 4);
  }
  return result;
}

