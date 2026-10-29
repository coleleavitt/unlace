__int64 __fastcall sub_B39070(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdi

  v2 = a1[4];
  if ( v2 )
    result = sub_186B220((void *)(v2 - 8));
  v4 = a1[3];
  if ( v4 )
    result = sub_186B220((void *)(v4 - 8));
  v5 = a1[1];
  if ( v5 )
  {
    v6 = a1[2];
    if ( (*(_DWORD *)(v5 + 8))-- == 1 )
      result = sub_15D7BC0(v6, v5);
  }
  if ( *a1 )
    return sub_186B220((void *)(*a1 - 8LL));
  return result;
}

