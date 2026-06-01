unsigned __int64 __fastcall sub_11BC1D0(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // al
  int v5; // edx
  __int64 v6; // rax
  unsigned __int64 result; // rax
  __int64 v8; // rdx
  int v9; // eax

  v4 = sub_12AFEA0();
  if ( *(_DWORD *)(a1 + 60) == 13 && !v4 )
  {
    sub_10DC5D0(a3, (__int64)"-z");
    sub_10DC5D0(a3, (__int64)"record");
  }
  else
  {
    sub_10DC5D0(a3, (__int64)"--no-as-needed");
  }
  v5 = *(_DWORD *)(a1 + 60);
  if ( v5 != 18 && (*(_DWORD *)(a1 + 64) & 0xFFFFFFDF) != 0x11 && v5 != 39 )
  {
    sub_10DC5D0(a3, (__int64)"-lpthread");
    v9 = *(_DWORD *)(a1 + 60);
    if ( v9 != 12 && v9 != 17 )
      sub_10DC5D0(a3, (__int64)"-lrt");
  }
  v6 = *(unsigned int *)(a3 + 8);
  if ( v6 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    sub_2237220(a3, a3 + 16, v6 + 1, 8);
    v6 = *(unsigned int *)(a3 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v6) = "-lm";
  result = *(unsigned int *)(a1 + 60);
  ++*(_DWORD *)(a3 + 8);
  if ( (unsigned int)result > 0x12 || (v8 = 399372, !_bittest64(&v8, result)) )
  {
    sub_10DC5D0(a3, (__int64)"-ldl");
    result = *(unsigned int *)(a1 + 60);
  }
  if ( (unsigned int)(result - 2) <= 1 || (unsigned int)(result - 11) <= 1 )
  {
    sub_10DC5D0(a3, (__int64)"-lexecinfo");
    result = *(unsigned int *)(a1 + 60);
  }
  if ( (_DWORD)result == 17 )
  {
    sub_10DC5D0(a3, (__int64)"-lbsd");
    result = *(unsigned int *)(a1 + 60);
  }
  if ( (_DWORD)result == 7 )
  {
    result = *(unsigned int *)(a1 + 64);
    if ( (unsigned int)(result - 17) > 8 && (_DWORD)result != 49 )
      return sub_10DC5D0(a3, (__int64)"-lresolv");
  }
  return result;
}
