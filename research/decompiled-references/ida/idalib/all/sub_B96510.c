_BYTE *__fastcall sub_B96510(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v4; // rax
  __int64 v5; // r12
  __int64 v6; // r15
  __int64 *i; // rbp
  _WORD *v8; // rdx
  _BYTE *result; // rax

  v4 = *(_BYTE **)(a2 + 32);
  if ( (unsigned __int64)v4 >= *(_QWORD *)(a2 + 24) )
  {
    sub_227BA10(a2, 91);
  }
  else
  {
    *(_QWORD *)(a2 + 32) = v4 + 1;
    *v4 = 91;
  }
  v5 = a1 + 104 + 8LL * *(unsigned int *)(a1 + 100);
  if ( v5 != a1 + 104 )
  {
    v6 = *(_QWORD *)(a1 + 104);
    for ( i = (__int64 *)(a1 + 112); ; ++i )
    {
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v6 + 88LL))(v6, a2, a3);
      if ( (__int64 *)v5 == i )
        break;
      v8 = *(_WORD **)(a2 + 32);
      v6 = *i;
      if ( *(_QWORD *)(a2 + 24) - (_QWORD)v8 > 1u )
      {
        *v8 = 8236;
        *(_QWORD *)(a2 + 32) += 2LL;
      }
      else
      {
        sub_227BF10(a2, ", ", 2);
      }
    }
  }
  result = *(_BYTE **)(a2 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(a2 + 24) )
    return (_BYTE *)sub_227BA10(a2, 93);
  *(_QWORD *)(a2 + 32) = result + 1;
  *result = 93;
  return result;
}
