void __fastcall sub_BA9FB0(__int64 a1, const void *a2, unsigned int a3, const void *a4, __int64 a5)
{
  __int64 v6; // r15
  __int64 *v7; // rbp
  __int64 v9; // r12
  void *v10; // rax
  void *v11; // rax
  void *v12; // rax

  if ( a3 )
  {
    v6 = 4LL * a3;
    v7 = (__int64 *)(a5 + 2352);
    v9 = 8LL * a3;
    v10 = (void *)sub_BA9960((__int64 *)(a5 + 2352), v6, 3u);
    v11 = memset(v10, 0, v6);
    *(_QWORD *)(a1 + 16) = v11;
    memcpy(v11, a4, v6);
    *(_QWORD *)a1 = 0;
    v12 = (void *)sub_BA9960(v7, v9, 3u);
    *(_DWORD *)(a1 + 8) = a3;
    *(_QWORD *)a1 = v12;
    memcpy(v12, a2, v9);
  }
}
