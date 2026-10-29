__int64 __fastcall sub_89F790(__int64 a1, char *a2)
{
  unsigned int v2; // ebp
  void *ptr[7]; // [rsp+0h] [rbp-38h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  sub_89F700((__int64 *)ptr, a1, a2);
  v2 = sub_79F460((__int64 *)a1, (__int64 *)ptr);
  if ( !v2 && *(_DWORD *)(a1 + 252) )
    ++*(_DWORD *)(a1 + 248);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
  }
  return v2;
}

