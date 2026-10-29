void __fastcall sub_F0DB90(__int64 a1, __int64 a2, double a3)
{
  __int64 v4; // r15
  int v5; // r12d
  int i; // ebx
  size_t v7; // rax
  void *v8; // rdi
  size_t v9; // r14
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9

  v4 = *(_QWORD *)a1;
  v5 = *(_DWORD *)(a1 + 8) - 1;
  if ( v5 > 0 )
  {
    for ( i = 0; i != v5; ++i )
    {
      while ( 1 )
      {
        v7 = j__strlen("  ");
        v8 = *(void **)(v4 + 32);
        v9 = v7;
        if ( v7 <= *(_QWORD *)(v4 + 24) - (_QWORD)v8 )
          break;
        ++i;
        sub_227BF10(v4, "  ", v7);
        v4 = *(_QWORD *)a1;
        if ( v5 == i )
          goto LABEL_8;
      }
      if ( v7 )
      {
        memcpy(v8, "  ", v7);
        *(_QWORD *)(v4 + 32) += v9;
        v4 = *(_QWORD *)a1;
      }
    }
  }
LABEL_8:
  v10 = sub_995540(v4, "default:");
  sub_227BF10(v10, *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 48));
  sub_F0C470(a1, *(char **)(a2 + 24), 0, v11, v12, v13, a3);
}
