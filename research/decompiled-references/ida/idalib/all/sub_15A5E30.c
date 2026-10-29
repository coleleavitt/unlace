unsigned __int64 __fastcall sub_15A5E30(__int64 a1, const void *a2, size_t a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 *v8; // rdi
  void *v9; // rcx
  unsigned __int64 result; // rax

  v8 = *(unsigned __int64 **)a1;
  v9 = (void *)*v8;
  v8[10] += a3 + 1;
  result = (unsigned __int64)v9 + a3 + 1;
  if ( v8[1] >= result && v9 )
  {
    *v8 = result;
  }
  else
  {
    result = sub_986170((__int64)v8, a3 + 1, a3 + 1, 0, a5, a6);
    v9 = (void *)result;
  }
  if ( a3 )
  {
    result = (unsigned __int64)memmove(v9, a2, a3);
    v9 = (void *)result;
  }
  *((_BYTE *)v9 + a3) = 0;
  *(_QWORD *)(a1 + 40) = v9;
  return result;
}
