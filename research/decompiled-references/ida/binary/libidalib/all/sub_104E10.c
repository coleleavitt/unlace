__int64 __fastcall sub_104E10(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // rdx

  v2 = sub_1545C0(*a2);
  if ( !v2 )
    return 7;
  v3 = v2;
  if ( !(unsigned int)navstack_t_stack_index() )
    return 7;
  v5 = sub_103190(v3);
  result = 3;
  if ( v5 )
  {
    if ( *(_BYTE *)(v5 + 1248) )
      return 7;
  }
  return result;
}

