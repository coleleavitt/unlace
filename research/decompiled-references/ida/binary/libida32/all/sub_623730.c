__int64 __fastcall sub_623730(__int64 a1)
{
  void *v2; // rdi
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 4216) && *(_QWORD *)a1 )
  {
    if ( (debug & 0x10) != 0 )
      sub_383DA0();
    free_dll(a1);
  }
  v2 = *(void **)(a1 + 96);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 104) = 0;
    qfree(v2);
  }
  result = *(_QWORD *)(a1 + 88);
  if ( result )
    --*(_DWORD *)(result + 12);
  return result;
}

