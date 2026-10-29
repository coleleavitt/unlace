void __fastcall sub_71380(__int64 a1)
{
  char *v2; // rdi

  if ( *(_QWORD *)(a1 + 8) > 1u )
    sub_9C8C0(*(char **)a1);
  v2 = *(char **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    j__free(v2);
  }
}

