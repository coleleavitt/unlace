__int64 __fastcall sub_536B30(_QWORD *a1)
{
  void *v2; // rdi
  const void *v3; // rsi
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rdx

  v2 = (void *)a1[1];
  v3 = (const void *)a1[2];
  if ( v2 == v3 )
  {
    result = a1[3];
    *(_QWORD *)(*a1 + 16LL) += result;
  }
  else
  {
    memmove(v2, v3, a1[4]);
    v4 = -((__int64)(a1[1] - a1[2]) >> 3);
    if ( (__int64)(a1[1] - a1[2]) >> 3 > 0 )
      v4 = (__int64)(a1[1] - a1[2]) >> 3;
    result = a1[3] - v4;
    v6 = *a1;
    a1[3] = result;
    *(_QWORD *)(v6 + 16) += result;
  }
  return result;
}
