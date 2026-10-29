__int64 __fastcall hvui_progressor_t__::vfunc_0(_QWORD *a1, const void *a2)
{
  size_t v3; // rax
  size_t v4; // r12
  void *v6; // rdi
  size_t v7; // r13
  __int64 v8; // rax

  if ( a2 && (v3 = strlen((const char *)a2), (v4 = v3) != 0) )
  {
    v6 = (void *)a1[5];
    v7 = v3 + 1;
    if ( a1[7] < v3 + 1 )
    {
      v8 = qvector_reserve(a1 + 5, a1[5], v7, 1);
      a1[5] = v8;
      v6 = (void *)v8;
    }
    a1[6] = v7;
    memmove(v6, a2, v4);
    *(_BYTE *)(a1[5] + v4) = 0;
    return 0;
  }
  else
  {
    a1[6] = 0;
    return 0;
  }
}
