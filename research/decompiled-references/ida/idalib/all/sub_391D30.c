__int64 __fastcall sub_391D30(__int64 a1, __int64 a2, const char *a3)
{
  size_t v5; // rax
  size_t v6; // r12
  size_t v7; // r13
  void *v8; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( a2 == -1 )
  {
    if ( a3 )
    {
      v5 = strlen(a3);
      v6 = v5;
      if ( v5 )
      {
        v7 = v5 + 1;
        v8 = (void *)qvector_reserve(a1, 0, v5 + 1, 1);
        *(_QWORD *)a1 = v8;
        *(_QWORD *)(a1 + 8) = v7;
        memmove(v8, a3, v6);
        *(_BYTE *)(*(_QWORD *)a1 + v6) = 0;
      }
    }
  }
  else
  {
    sub_35A790((char **)a1);
  }
  return a1;
}
