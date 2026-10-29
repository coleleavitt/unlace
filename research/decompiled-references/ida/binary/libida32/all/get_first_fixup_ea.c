__int64 get_first_fixup_ea()
{
  __int64 v0; // rdx
  __int64 result; // rax

  v0 = *(_QWORD *)(qword_2CA1698 + 1480);
  result = 0xFFFFFFFFLL;
  if ( *(_QWORD *)(v0 + 2400) )
    return *(unsigned int *)(*(_QWORD *)(v0 + 2384) + 32LL);
  return result;
}

