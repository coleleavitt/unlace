void __fastcall sub_B58700(__int64 a1, __int64 a2, const void *a3, unsigned __int64 a4)
{
  size_t v4; // r12
  __int64 *v6; // rdi
  void *v8; // rax

  if ( a4 )
  {
    v4 = 8 * a4;
    v6 = (__int64 *)(a2 + 2352);
    if ( a4 <= 0xFFFFFFFFFFFFFFFLL )
    {
      v8 = (void *)sub_B57ED0(v6, 8 * a4, 3u);
      *(_QWORD *)(a1 + 120) = v8;
LABEL_4:
      memmove(v8, a3, v4);
      return;
    }
    v8 = (void *)sub_B57ED0(v6, -1, 3u);
    *(_QWORD *)(a1 + 120) = v8;
    if ( v4 )
      goto LABEL_4;
  }
}

