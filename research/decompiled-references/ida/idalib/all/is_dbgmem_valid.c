__int64 is_dbgmem_valid()
{
  __int64 v0; // rbx
  char v1; // dl
  __int64 result; // rax

  v0 = qword_2CCB598;
  v1 = is_debugger_on();
  result = 1;
  if ( v1 )
    return *(unsigned __int8 *)(*(_QWORD *)(v0 + 1672) + 805LL);
  return result;
}
