__int64 __fastcall sub_E4D0(__int64 a1, __int64 a2)
{
  char *v2; // rax
  char *v3; // rbp
  size_t v4; // rax
  size_t v5; // r14
  size_t v6; // r13
  void *v7; // rax

  v2 = sub_BD50(a2);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( v2 )
  {
    v3 = v2;
    v4 = strlen(v2);
    v5 = v4 + 1;
    v6 = v4;
    v7 = (void *)qvector_reserve(a1, 0, v4 + 1, 1);
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = v5;
    memmove(v7, v3, v6);
    *(_BYTE *)(*(_QWORD *)a1 + v6) = 0;
    if ( *(_QWORD *)(a1 + 8) > 1u )
      return a1;
  }
  sub_E410((__int64 *)a1, (__int64)"Unknown CPU [%u]", *(unsigned __int16 *)(a2 + 522));
  return a1;
}

