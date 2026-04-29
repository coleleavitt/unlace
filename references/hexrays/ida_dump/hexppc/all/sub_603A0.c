void *__fastcall sub_603A0(__int64 *a1, int a2)
{
  void *result; // rax
  __int64 v4; // rdi
  bool v5; // sf
  signed int v6; // ebx
  int v7; // esi
  __int64 v8; // r12

  if ( a2 < 0 )
  {
    if ( !under_debugger )
      sub_37EEE0(50313);
    BUG();
  }
  result = (void *)a2;
  if ( a2 >= (unsigned __int64)a1[1] )
  {
    v4 = *a1;
    v5 = a2 + 64 < 0;
    v6 = (a2 + 64) & 0xFFFFFFC0;
    v7 = v6 + 7;
    if ( !v5 )
      v7 = v6;
    v8 = qrealloc_or_throw(v4, v7 >> 3);
    result = memset((void *)(v8 + 8 * ((unsigned __int64)a1[1] >> 6)), 0, (unsigned __int64)(v6 - a1[1]) >> 3);
    *a1 = v8;
    a1[1] = v6;
  }
  return result;
}
