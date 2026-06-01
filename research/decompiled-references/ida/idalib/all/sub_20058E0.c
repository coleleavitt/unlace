__int64 __fastcall sub_20058E0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  char **v5; // rsi

  v4 = *(_QWORD *)(a2 + 40);
  v5 = *(char ***)(a2 + 32);
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)a1 = 0;
  sub_20045C0(a2, v5, 0xAAAAAAAAAAAAAAABLL * ((v4 - (__int64)v5) >> 4), (char **)a1);
  return a1;
}
