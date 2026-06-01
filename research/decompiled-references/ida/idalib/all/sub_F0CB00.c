__int64 __fastcall sub_F0CB00(_QWORD *a1, __int64 a2, double a3)
{
  int v4; // r13d
  __int64 v5; // r15
  int i; // ebx
  size_t v7; // rax
  void *v8; // rdi
  size_t v9; // r14

  v4 = *((_DWORD *)a1 + 2);
  v5 = *a1;
  if ( v4 > 0 )
  {
    for ( i = 0; i != v4; ++i )
    {
      while ( 1 )
      {
        v7 = j__strlen("  ");
        v8 = *(void **)(v5 + 32);
        v9 = v7;
        if ( v7 <= *(_QWORD *)(v5 + 24) - (_QWORD)v8 )
          break;
        ++i;
        sub_227BF10(v5, "  ", v7);
        v5 = *a1;
        if ( v4 == i )
          goto LABEL_8;
      }
      if ( v7 )
      {
        memcpy(v8, "  ", v7);
        *(_QWORD *)(v5 + 32) += v9;
        v5 = *a1;
      }
    }
  }
LABEL_8:
  sub_995540(v5, "@autoreleasepool");
  sub_F0C550(a1, *(_QWORD *)(a2 + 16), a3);
  return sub_227BF10(*a1, a1[5], a1[6]);
}
