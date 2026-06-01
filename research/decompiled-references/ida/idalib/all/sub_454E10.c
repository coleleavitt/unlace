void __fastcall sub_454E10(_QWORD *a1, const void *a2)
{
  size_t v2; // rax
  size_t v3; // r12
  size_t v4; // r13

  if ( a2 && (v2 = strlen((const char *)a2), (v3 = v2) != 0) )
  {
    v4 = v2 + 1;
    if ( a1[2] < v2 + 1 )
      *a1 = qvector_reserve(a1, *a1, v2 + 1, 1);
    a1[1] = v4;
    memmove((void *)*a1, a2, v3);
    *(_BYTE *)(*a1 + v3) = 0;
  }
  else
  {
    a1[1] = 0;
  }
}
