const char *__fastcall file_history_chooser_t__::vfunc_3(__int64 a1, _QWORD *a2)
{
  const char *result; // rax

  *a2 = (*(_QWORD *)(a1 + 296) == 0) + *(_QWORD *)(a1 + 296) - 1LL;
  result = &s1;
  if ( *(_QWORD *)(a1 + 296) )
    return *(const char **)(a1 + 288);
  return result;
}
