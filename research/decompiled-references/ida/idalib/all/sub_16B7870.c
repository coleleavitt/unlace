__int64 __fastcall sub_16B7870(__int64 a1, const void *a2, size_t a3)
{
  __int64 result; // rax
  size_t v4; // rbx
  _BYTE *v5; // rax
  unsigned __int64 v6; // rax

  *(_QWORD *)a1 = &off_2BC6678;
  result = 1;
  if ( a3 )
  {
    v4 = a3;
    v5 = memchr(a2, 0, a3);
    if ( v5 )
    {
      v6 = v5 - (_BYTE *)a2;
      if ( v4 > v6 )
        v4 = v6;
    }
    result = v4 + 1;
  }
  *(_QWORD *)(a1 + 8) = result;
  *(_BYTE *)(a1 + 16) = 1;
  return result;
}
