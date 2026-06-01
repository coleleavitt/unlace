_BYTE *__fastcall sub_20323F0(__int64 a1, unsigned __int8 *a2, size_t a3)
{
  unsigned __int8 *v4; // r12
  unsigned __int8 *v5; // rbx
  unsigned __int8 v6; // bp
  _BYTE *result; // rax
  _BYTE *v8; // rax

  if ( (unsigned int)*a2 - 48 > 9 )
  {
    v4 = &a2[a3];
    if ( a2 == &a2[a3] )
      return (_BYTE *)sub_9954E0(a1, a2, a3);
    v5 = a2;
    while ( 1 )
    {
      v6 = *v5;
      if ( !isalnum(*v5) && (unsigned __int8)(v6 - 45) > 1u && v6 != 95 )
        break;
      if ( v4 == ++v5 )
        return (_BYTE *)sub_9954E0(a1, a2, a3);
    }
  }
  v8 = *(_BYTE **)(a1 + 32);
  if ( (unsigned __int64)v8 >= *(_QWORD *)(a1 + 24) )
  {
    sub_227BA10(a1, 34);
  }
  else
  {
    *(_QWORD *)(a1 + 32) = v8 + 1;
    *v8 = 34;
  }
  sub_22449A0(a2, a3, a1);
  result = *(_BYTE **)(a1 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(a1 + 24) )
    return (_BYTE *)sub_227BA10(a1, 34);
  *(_QWORD *)(a1 + 32) = result + 1;
  *result = 34;
  return result;
}
