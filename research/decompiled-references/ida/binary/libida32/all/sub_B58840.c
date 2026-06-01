void __fastcall sub_B58840(__int64 a1, const void *a2, unsigned __int64 a3)
{
  __int64 v5; // r13
  __int64 *v6; // rdi
  void *v7; // rax

  if ( a3 )
  {
    v5 = 8 * a3;
    *(_DWORD *)(a1 + 80) = a3;
    v6 = (__int64 *)(sub_B685F0(a1) + 2352);
    if ( a3 <= 0xFFFFFFFFFFFFFFFLL )
    {
      v7 = (void *)sub_B57ED0(v6, v5, 3u);
      *(_QWORD *)(a1 + 72) = v7;
LABEL_4:
      memmove(v7, a2, v5);
      return;
    }
    v7 = (void *)sub_B57ED0(v6, -1, 3u);
    *(_QWORD *)(a1 + 72) = v7;
    if ( v5 )
      goto LABEL_4;
  }
}

