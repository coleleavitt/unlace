void __fastcall sub_21CB270(__int64 a1, unsigned __int64 a2)
{
  const void *v2; // rbp
  __int64 v3; // r12
  char *v4; // rax
  size_t v5; // r12
  char *v6; // r14

  v2 = *(const void **)a1;
  if ( a2 > *(_QWORD *)(a1 + 16) - *(_QWORD *)a1 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    v4 = (char *)operator new(a2);
    v5 = v3 - (_QWORD)v2;
    v6 = v4;
    if ( v5 )
      memcpy(v4, v2, v5);
    if ( *(_QWORD *)a1 )
      operator delete(*(void **)a1);
    *(_QWORD *)a1 = v6;
    *(_QWORD *)(a1 + 8) = &v6[v5];
    *(_QWORD *)(a1 + 16) = &v6[a2];
  }
}
