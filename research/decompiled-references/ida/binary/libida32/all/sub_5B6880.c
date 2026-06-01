void *__fastcall sub_5B6880(__int64 a1, __int64 a2)
{
  void *result; // rax
  __int64 v3; // rsi
  __int64 v4; // rax
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v6; // [rsp+8h] [rbp-30h]
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  result = nullptr;
  ptr = nullptr;
  v6 = 0;
  if ( a2 )
  {
    ptr = (void *)qvector_reserve(&ptr, 0, a2, 8);
    memset((char *)ptr + 8 * v6, 0, 8 * (a2 - v6));
    *(_QWORD *)&v6 = a2;
    v3 = 8 * a2;
    v4 = 0;
    do
    {
      *(_QWORD *)((char *)ptr + v4) = *(_QWORD *)(a1 + v4);
      v4 += 8;
    }
    while ( v3 != v4 );
    result = ptr;
    if ( (unsigned __int64)v6 < *((_QWORD *)&v6 + 1) && ptr && (_QWORD)v6 )
    {
      result = (void *)qrealloc(ptr);
      if ( !result )
        return ptr;
    }
  }
  return result;
}

