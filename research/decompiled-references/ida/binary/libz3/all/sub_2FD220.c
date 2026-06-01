__int64 __fastcall sub_2FD220(__int64 a1)
{
  void *v1; // rsi
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx

  v1 = *(void **)a1;
  result = *(unsigned int *)(a1 + 8);
  v3 = *(_QWORD *)a1 + 8 * result;
  if ( *(_QWORD *)a1 != v3 )
  {
    result = *(_QWORD *)a1;
    do
    {
      v4 = *(_QWORD *)result;
      result += 8;
      *(_BYTE *)(v4 + 6) &= ~1u;
    }
    while ( result != v3 );
  }
  *(_DWORD *)(a1 + 8) = 0;
  if ( v1 )
  {
    if ( v1 != (void *)(a1 + 16) )
      return sub_186B220(v1);
  }
  return result;
}

