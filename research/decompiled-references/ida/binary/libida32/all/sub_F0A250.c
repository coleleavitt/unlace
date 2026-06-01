__int64 __fastcall sub_F0A250(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  size_t v3; // rbp
  void *v4; // rdi
  const char *v5; // rbp
  size_t v6; // rax
  void *v7; // rdi
  size_t v8; // r13

  v2 = *(_QWORD *)(a1 + 1096);
  v3 = j__strlen(" ");
  v4 = *(void **)(v2 + 32);
  if ( v3 > *(_QWORD *)(v2 + 24) - (_QWORD)v4 )
  {
    v2 = sub_22581D0(v2, " ", v3);
  }
  else if ( v3 )
  {
    memcpy(v4, " ", v3);
    *(_QWORD *)(v2 + 32) += v3;
  }
  v5 = "->";
  if ( (*a2 & 0x80000LL) == 0 )
    v5 = ".";
  v6 = j__strlen(v5);
  v7 = *(void **)(v2 + 32);
  v8 = v6;
  if ( v6 <= *(_QWORD *)(v2 + 24) - (_QWORD)v7 )
  {
    if ( v6 )
    {
      memcpy(v7, v5, v6);
      *(_QWORD *)(v2 + 32) += v8;
    }
  }
  else
  {
    v2 = sub_22581D0(v2, v5, v6);
  }
  return sub_B62620(v2, a2[6]);
}

