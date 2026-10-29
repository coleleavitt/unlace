__int64 __fastcall sub_F0CF10(__int64 *a1, __int64 a2, double a3)
{
  int v4; // r13d
  int i; // ebx
  __int64 v6; // r15
  size_t v7; // r14
  void *v8; // rdi
  __int64 v9; // rax

  v4 = *((_DWORD *)a1 + 2);
  if ( v4 > 0 )
  {
    for ( i = 0; i != v4; ++i )
    {
      while ( 1 )
      {
        v6 = *a1;
        v7 = j__strlen("  ");
        v8 = *(void **)(v6 + 32);
        if ( v7 <= *(_QWORD *)(v6 + 24) - (_QWORD)v8 )
          break;
        ++i;
        sub_227BF10(v6, "  ", v7);
        if ( v4 == i )
          goto LABEL_8;
      }
      if ( v7 )
      {
        memcpy(v8, "  ", v7);
        *(_QWORD *)(v6 + 32) += v7;
      }
    }
  }
LABEL_8:
  sub_F0C550(a1, a2, a3);
  v9 = sub_995540(*a1, &byte_22F0C30);
  return sub_227BF10(v9, a1[5], a1[6]);
}
