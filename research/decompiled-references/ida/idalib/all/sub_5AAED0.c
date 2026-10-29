__int64 __fastcall sub_5AAED0(__int64 *a1, int a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // r12
  int v5; // r13d
  __int64 *v6; // rax
  unsigned int v8[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v3 = (unsigned int)(a2 - 1);
  v8[0] = a3;
  if ( (unsigned int)v3 > 3 )
    return 0;
  v4 = dword_23AF980[v3];
  if ( (_DWORD)v4 == -1 )
    return 0;
  v5 = v8[0];
  if ( (int)v8[0] <= 0 || (int)v8[0] >= (unsigned __int64)a1[2] )
    return 0;
  v6 = (__int64 *)(a1[1] + 24LL * (int)v8[0]);
  if ( v6[1] )
  {
    if ( a2 != (unsigned int)get_encoding_bpu_by_name(*v6) )
      return 0;
  }
  else if ( a2 != (unsigned int)get_encoding_bpu_by_name((__int64)haystack) )
  {
    return 0;
  }
  if ( v8[0] != *((_DWORD *)a1 + v4 + 8) )
  {
    sub_5A8CB0(v4, (unsigned int *)a1 + v4 + 8, v8, 0xB3u);
    *((_DWORD *)a1 + v4 + 8) = v5;
    if ( a2 == 1 )
    {
      sub_5AAC40((_QWORD *)*a1);
      sub_359AE0(*a1, 0xFFFFFFFFFFFFFFFFLL, 0);
    }
  }
  return 1;
}
