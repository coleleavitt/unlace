__int64 __fastcall sub_3937F0(__int64 a1)
{
  __int64 *v1; // rcx
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // rdi

  v1 = *(__int64 **)(a1 + 8);
  v2 = v1[1];
  result = (unsigned int)(*(_DWORD *)(v2 - 4) - 1);
  v4 = *(_QWORD *)(v2 + 8 * result);
  *(_DWORD *)(v2 - 4) = result;
  if ( v4 )
  {
    v5 = *v1;
    if ( (*(_DWORD *)(v4 + 8))-- == 1 )
      return sub_15D7BC0(v5, v4);
  }
  return result;
}

