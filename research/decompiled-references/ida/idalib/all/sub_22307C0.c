_QWORD *__fastcall sub_22307C0(_QWORD *a1, const void *a2, size_t a3, const void ***a4)
{
  __int64 v5; // rbx
  __int64 v7; // rax
  __int64 v8; // [rsp+8h] [rbp-50h] BYREF
  __int64 v9[2]; // [rsp+10h] [rbp-48h] BYREF
  char v10; // [rsp+20h] [rbp-38h]

  sub_2230400(&v8, a3, a4, 0);
  v5 = v8;
  if ( v8 )
  {
    if ( a3 )
    {
      memmove(*(void **)(v8 + 8), a2, a3);
      v5 = v8;
    }
    v10 &= ~1u;
    v9[0] = 0;
  }
  else
  {
    v7 = std::_V2::generic_category((std::_V2 *)&v8);
    v10 |= 1u;
    LODWORD(v9[0]) = 12;
    v9[1] = v7;
  }
  *a1 = v5;
  sub_22307A0(v9);
  return a1;
}
