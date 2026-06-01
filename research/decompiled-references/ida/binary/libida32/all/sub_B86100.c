void __fastcall sub_B86100(__int64 a1, __int64 a2, const void *a3, unsigned int a4)
{
  __int64 v5; // rbx
  void *v6; // rax

  if ( a4 )
  {
    *(_DWORD *)(a1 + 128) = a4;
    v5 = 8LL * a4;
    v6 = (void *)sub_B85C20((__int64 *)(a2 + 2352), v5, 3u);
    *(_QWORD *)(a1 + 120) = memcpy(v6, a3, v5);
  }
}

