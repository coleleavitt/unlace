__int64 __fastcall sub_D16FD0(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // rdi

  result = *((unsigned int *)a1 + 4);
  v2 = (unsigned int)(result - 1);
  v3 = *(_QWORD *)(a1[1] + 8 * v2);
  *((_DWORD *)a1 + 4) = v2;
  if ( v3 )
  {
    v4 = *a1;
    if ( (*(_DWORD *)(v3 + 8))-- == 1 )
      return sub_15D7BC0(v4, v3);
  }
  return result;
}

