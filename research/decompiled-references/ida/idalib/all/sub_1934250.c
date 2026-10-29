unsigned __int64 __fastcall sub_1934250(__int64 a1, unsigned __int64 a2, double a3, __m128 a4)
{
  unsigned int v4; // eax
  __int64 v6; // rbx
  __int64 v7; // [rsp+0h] [rbp-28h] BYREF
  __int64 v8; // [rsp+8h] [rbp-20h]
  __int64 v9; // [rsp+10h] [rbp-18h]
  unsigned int v10; // [rsp+18h] [rbp-10h]

  *(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640) = *(_DWORD *)(*(_QWORD *)(a1 + 4616)
                                                                                               + ((5LL
                                                                                                 * *(unsigned int *)(a1 + 4624)
                                                                                                 - 10) << 7));
  v4 = *(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640);
  if ( v4 == 3 || v4 <= 1 )
    return a2;
  v7 = a1;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v6 = sub_1933BC0(&v7, a2, a3, a4);
  operator delete(v8, 16LL * v10, 8);
  return v6;
}
