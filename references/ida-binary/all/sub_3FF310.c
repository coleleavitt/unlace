signed __int64 __fastcall sub_3FF310(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  signed __int64 result; // rax
  __int64 v7; // rcx
  int v8; // esi

  result = *(_QWORD *)(a1 + 376);
  if ( result )
  {
    v7 = *(unsigned int *)(a1 + 384);
    v8 = v7 + 1;
    if ( (int)v7 + 1 >= result )
      v8 = 0;
    *(_DWORD *)(a1 + 384) = v8;
    return sub_3FF1D0(a1, v8, (int)v7 + 1, v7, a5, a6);
  }
  return result;
}
