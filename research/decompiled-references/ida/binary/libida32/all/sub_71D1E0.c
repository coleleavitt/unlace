void *__fastcall sub_71D1E0(__int64 a1, _WORD *a2, int a3)
{
  _WORD *v3; // rdi
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx

  v3 = (_WORD *)(a1 + 2);
  *(v3 - 1) = *a2 - a3;
  v4 = a3;
  v5 = (unsigned __int16)*a2 + *(unsigned __int16 *)((char *)a2 + (unsigned __int16)*a2 + 2) + 2;
  if ( v5 < v4 )
    sub_722BF0(v3, a2, v5);
  return memmove(v3, (char *)a2 + v4 + 2, v5 - v4);
}

