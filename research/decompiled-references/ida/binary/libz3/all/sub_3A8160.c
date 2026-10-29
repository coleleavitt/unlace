__int64 __fastcall sub_3A8160(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rdi

  v1 = a1[1];
  result = *(unsigned int *)(v1 - 4);
  v3 = (unsigned int)(result - 1);
  v4 = *(_QWORD *)(v1 + 8 * v3);
  *(_DWORD *)(v1 - 4) = v3;
  if ( v4 )
  {
    v5 = *a1;
    if ( (*(_DWORD *)(v4 + 8))-- == 1 )
      return sub_15D7BC0(v5, v4);
  }
  return result;
}

