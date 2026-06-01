__int64 __fastcall sub_18EB20(__int64 a1, __int64 a2)
{
  int v2; // edx
  __int64 result; // rax

  if ( under_debugger )
    BUG();
  interr();
  v2 = *(_DWORD *)(a2 + 4);
  result = v2 & 0x7FFFFFFF;
  if ( *(int *)((char *)&elf_gnu_hash_bucket[822] + 3) == 2 )
    result = v2 | 0x80000000;
  *(_DWORD *)(a2 + 4) = result;
  return result;
}

