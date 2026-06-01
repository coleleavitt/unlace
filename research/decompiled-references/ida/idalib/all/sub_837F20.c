__int64 __fastcall sub_837F20(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &off_2BFC0D0;
  result = *(unsigned int *)(a1 + 20);
  if ( (_DWORD)result == 1 )
    return unmake_linput(*(_QWORD *)(a1 + 24));
  if ( (_DWORD)result != 2 )
  {
    if ( (_DWORD)result )
      sub_836F30();
    return close_linput(*(void **)(a1 + 24));
  }
  return result;
}
