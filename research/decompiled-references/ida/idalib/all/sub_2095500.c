__int64 __fastcall sub_2095500(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // r12d
  _QWORD v5[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = *(unsigned int *)(a1 + 8);
  v3 = *(unsigned __int8 *)(a2 + 160);
  if ( v2 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    sub_2237220(a1, a1 + 16, v2 + 1, 4);
    v2 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v2) = v3;
  ++*(_DWORD *)(a1 + 8);
  v5[0] = a1;
  sub_20949C0(v5, a2);
  sub_20949C0(v5, a2 + 80);
  sub_20949C0(v5, a2 + 112);
  return sub_20949C0(v5, a2 + 144);
}
