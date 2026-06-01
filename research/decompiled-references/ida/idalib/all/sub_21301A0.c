bool __fastcall sub_21301A0(__int64 a1, const void *a2, size_t a3)
{
  bool v3; // zf
  __int64 v4; // rbx
  __int64 v6; // rbp
  _QWORD v8[7]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 848) == 0;
  v8[0] = a2;
  v8[1] = a3;
  if ( !v3 )
    return sub_21300B0(a1 + 808, (__int64)v8) != a1 + 816;
  v4 = *(_QWORD *)(a1 + 760);
  v6 = v4 + 16LL * *(unsigned int *)(a1 + 768);
  if ( v4 == v6 )
    return 0;
  while ( *(_QWORD *)(v4 + 8) != a3 || a3 && memcmp(*(const void **)v4, a2, a3) )
  {
    v4 += 16;
    if ( v6 == v4 )
      return 0;
  }
  return v4 != v6;
}
