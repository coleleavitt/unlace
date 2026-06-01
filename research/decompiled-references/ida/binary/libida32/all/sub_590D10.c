__int64 __fastcall sub_590D10(__int64 *a1, int a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // r12
  int v5; // r13d
  _QWORD *v7; // rax
  unsigned int *v9; // rsi
  unsigned int v10[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v3 = (unsigned int)(a2 - 1);
  v10[0] = a3;
  if ( (unsigned int)v3 > 3 )
    return 0;
  v4 = dword_238B820[v3];
  if ( (_DWORD)v4 == -1 )
    return 0;
  v5 = v10[0];
  if ( (int)v10[0] <= 0 || (int)v10[0] >= (unsigned __int64)a1[2] )
    return 0;
  v7 = (_QWORD *)(a1[1] + 24LL * (int)v10[0]);
  if ( v7[1] )
  {
    if ( a2 != (unsigned int)get_encoding_bpu_by_name(*v7) )
      return 0;
  }
  else if ( a2 != (unsigned int)get_encoding_bpu_by_name(haystack) )
  {
    return 0;
  }
  if ( v10[0] != *((_DWORD *)a1 + v4 + 8) )
  {
    v9 = (unsigned int *)a1 + v4 + 8;
    sub_58EAF0(v4, v9, v10, 0xB3u);
    *v9 = v5;
    if ( a2 == 1 )
    {
      sub_590A80((_QWORD *)*a1, (const char *)v9);
      sub_356720(*a1, 0xFFFFFFFF, 0);
    }
  }
  return 1;
}

