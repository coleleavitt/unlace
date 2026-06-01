__int64 __fastcall sub_8CC190(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  void *v4; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v5; // [rsp+8h] [rbp-20h]

  sub_2587E20(&v4, a2, *(unsigned int *)(a2 + 8));
  v2 = v5;
  *(_DWORD *)(a1 + 8) = v5;
  if ( v2 <= 0x40 )
  {
    *(_QWORD *)a1 = v4;
    return a1;
  }
  sub_2585B30(a1);
  if ( v5 <= 0x40 || !v4 )
    return a1;
  operator delete[](v4);
  return a1;
}

