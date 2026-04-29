__int64 __fastcall sub_14F20(__int64 a1, _QWORD *a2, const void *a3)
{
  size_t v4; // rax
  size_t v5; // r12
  void *v7; // rdi
  size_t v8; // r13
  __int64 v9; // rax

  if ( a3 && (v4 = strlen((const char *)a3), (v5 = v4) != 0) )
  {
    v7 = (void *)a2[2];
    v8 = v4 + 1;
    if ( a2[4] < v4 + 1 )
    {
      v9 = qvector_reserve(a2 + 2, a2[2], v8, 1);
      a2[2] = v9;
      v7 = (void *)v9;
    }
    a2[3] = v8;
    memmove(v7, a3, v5);
    *(_BYTE *)(a2[2] + v5) = 0;
    return 0;
  }
  else
  {
    a2[3] = 0;
    return 0;
  }
}
