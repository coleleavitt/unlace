void __fastcall sub_879F80(_QWORD *a1)
{
  void *v2; // rdi
  __int64 v3; // rax

  v2 = (void *)a1[4];
  if ( !v2 )
  {
    v3 = *(_QWORD *)(*a1 + 2400LL);
    if ( v3 && *(_DWORD *)(v3 - 4) > 5u )
    {
      v2 = *(void **)(v3 + 40);
      if ( v2 )
        v2 = __dynamic_cast(
               v2,
               (const struct __class_type_info *)&`typeinfo for'euf::th_solver,
               (const struct __class_type_info *)&`typeinfo for'arith::solver,
               0);
    }
    a1[4] = v2;
  }
}

