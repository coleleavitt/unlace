__int64 __fastcall sub_51D250(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  const char *v4; // r8

  v2 = *(_QWORD *)(a1 + 48);
  if ( (a2 & 0x7FFFFFFF) != 0 )
  {
    v4 = &s1;
    if ( v2 )
      v4 = *(const char **)(a1 + 40);
    return reg_int_op(v4, 1, a2, "QuickFilterFlags");
  }
  else if ( v2 )
  {
    return reg_delete(*(_QWORD *)(a1 + 40), "QuickFilterFlags");
  }
  else
  {
    return reg_delete(&s1, "QuickFilterFlags");
  }
}
