__int64 __fastcall sub_91FE00(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  void *v5; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v6; // [rsp+8h] [rbp-20h]

  if ( !(_DWORD)a3 )
    a3 = *(unsigned int *)(a2 + 8);
  sub_2587E80(&v5, a2, a3);
  v3 = v6;
  *(_DWORD *)(a1 + 8) = v6;
  if ( v3 <= 0x40 )
  {
    *(_QWORD *)a1 = v5;
    return a1;
  }
  sub_2585B30(a1);
  if ( v6 <= 0x40 || !v5 )
    return a1;
  operator delete[](v5);
  return a1;
}

