void __fastcall sub_7A5360(__int64 a1)
{
  char *v2; // rdi

  if ( *(_QWORD *)(a1 + 8) > 1u )
    set_registry_name(*(char **)a1);
  v2 = *(char **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v2);
  }
}

