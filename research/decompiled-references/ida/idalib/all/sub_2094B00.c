__int64 __fastcall sub_2094B00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  int v5; // r12d
  _QWORD v7[4]; // [rsp+8h] [rbp-20h] BYREF

  v4 = *(unsigned int *)(a3 + 8);
  v5 = *(unsigned __int8 *)(a2 + 168);
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    sub_2237220(a3, a3 + 16, v4 + 1, 4);
    v4 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v4) = v5;
  ++*(_DWORD *)(a3 + 8);
  v7[0] = a3;
  sub_20949C0(v7, a2 + 8);
  sub_20949C0(v7, a2 + 88);
  sub_20949C0(v7, a2 + 120);
  return sub_20949C0(v7, a2 + 152);
}
