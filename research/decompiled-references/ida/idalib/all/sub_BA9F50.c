void __fastcall sub_BA9F50(__int64 a1, const void *a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // r13
  void *v6; // rax

  *(_QWORD *)a1 = 0;
  if ( a3 )
  {
    v5 = 8LL * a3;
    v6 = (void *)sub_BA9960((__int64 *)(a4 + 2352), v5, 3u);
    *(_DWORD *)(a1 + 8) = a3;
    *(_QWORD *)a1 = v6;
    memcpy(v6, a2, v5);
  }
}
