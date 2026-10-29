unsigned __int64 __fastcall sub_15D92D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // ecx
  __int64 v9; // rdx
  unsigned __int64 result; // rax

  v6 = (unsigned __int64)(a2 - 80) >> 3;
  if ( v6 < *(unsigned int *)(a1 + 104) && (v7 = *(_QWORD *)(a1 + 96) + 80 * v6, (v8 = *(_DWORD *)(v7 + 8)) != 0) )
  {
    result = *(_QWORD *)(*(_QWORD *)v7 + 8LL * v8 - 8);
    *(_DWORD *)(v7 + 8) = v8 - 1;
  }
  else
  {
    v9 = *(_QWORD *)a1;
    *(_QWORD *)(a1 + 80) += a2;
    result = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(a1 + 8) >= a2 + result && v9 )
      *(_QWORD *)a1 = a2 + result;
    else
      return sub_986170(a1, a2, a2, 3, a5, a6);
  }
  return result;
}
