_BYTE *__fastcall sub_E7C870(__int64 a1, int a2, _BYTE *a3, size_t a4, __int64 a5, __int64 a6)
{
  __int64 v11; // rdi
  _BYTE *v12; // rax
  __int64 i; // rbx
  _BYTE *v14; // rsi
  size_t v15; // rdx
  __int64 v16; // rdi
  _BYTE *result; // rax

  v11 = *(_QWORD *)(a1 + 8);
  if ( a2 == 4 )
  {
    sub_995540(v11, "W4");
  }
  else
  {
    v12 = *(_BYTE **)(v11 + 32);
    if ( a2 == 2 )
    {
      if ( (unsigned __int64)v12 >= *(_QWORD *)(v11 + 24) )
      {
        sub_227BA10(v11, 84);
      }
      else
      {
        *(_QWORD *)(v11 + 32) = v12 + 1;
        *v12 = 84;
      }
    }
    else if ( (unsigned __int64)v12 >= *(_QWORD *)(v11 + 24) )
    {
      sub_227BA10(v11, 85);
    }
    else
    {
      *(_QWORD *)(v11 + 32) = v12 + 1;
      *v12 = 85;
    }
  }
  sub_E7C4B0(a1, a3, a4);
  for ( i = a5 + 16 * a6; a5 != i; i -= 16 )
  {
    v14 = *(_BYTE **)(i - 16);
    v15 = *(_QWORD *)(i - 8);
    sub_E7C4B0(a1, v14, v15);
  }
  v16 = *(_QWORD *)(a1 + 8);
  result = *(_BYTE **)(v16 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(v16 + 24) )
    return (_BYTE *)sub_227BA10(v16, 64);
  *(_QWORD *)(v16 + 32) = result + 1;
  *result = 64;
  return result;
}
