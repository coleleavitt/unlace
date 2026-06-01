__int64 __fastcall sub_79F0C0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 *v2; // rbx
  __int64 result; // rax
  __int64 v4; // rdi

  v1 = 0x7FFFFFFF8LL;
  v2 = *(__int64 **)(a1 + 8);
  result = *v2;
  if ( *v2 )
    v1 = 8LL * (unsigned int)(*(_DWORD *)(result - 4) - 1);
  v4 = *(_QWORD *)(result + v1);
  if ( v4 )
  {
    sub_186B220((void *)(v4 - 8));
    result = *v2;
  }
  --*(_DWORD *)(result - 4);
  return result;
}

