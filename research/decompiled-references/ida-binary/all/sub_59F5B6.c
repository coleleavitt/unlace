void *__fastcall sub_59F5B6(__int64 a1)
{
  void *result; // rax

  result = (void *)*(unsigned int *)(a1 + 8);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a1 + 8) -= *(unsigned __int16 *)(a1 + 28);
    return memmove(
             (void *)(a1 + 12),
             (const void *)(a1 + 12 + *(unsigned __int16 *)(a1 + 28)),
             *(unsigned int *)(a1 + 8));
  }
  return result;
}
