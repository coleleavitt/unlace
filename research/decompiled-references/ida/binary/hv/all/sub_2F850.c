__int64 __fastcall sub_2F850(__int64 a1, unsigned __int8 *a2)
{
  unsigned int v2; // ebp
  void *ptr[7]; // [rsp+0h] [rbp-38h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  sub_2F7C0((__int64)ptr, a1, a2);
  v2 = sub_6DB60(a1, ptr);
  if ( !v2 && *(_DWORD *)(a1 + 252) )
    ++*(_DWORD *)(a1 + 248);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    j__free(ptr[0]);
  }
  return v2;
}

