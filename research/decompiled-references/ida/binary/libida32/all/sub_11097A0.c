_QWORD *__fastcall sub_11097A0(_QWORD *a1, __int64 a2, char *a3)
{
  size_t v3; // rcx
  _QWORD *v5; // r13

  v3 = 0;
  v5 = *(_QWORD **)(a2 + 8);
  if ( a3 )
    v3 = j__strlen(a3);
  sub_10C27E0(a1, v5, a3, v3, a2);
  return a1;
}

