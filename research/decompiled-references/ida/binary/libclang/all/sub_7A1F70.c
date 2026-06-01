_BYTE *__fastcall sub_7A1F70(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v4; // rax
  __int64 *v5; // rbx
  __int64 v6; // r13
  __int64 v7; // r14
  _WORD *v8; // rdx
  _BYTE *result; // rax

  v4 = *(_BYTE **)(a2 + 32);
  if ( (unsigned __int64)v4 >= *(_QWORD *)(a2 + 24) )
  {
    sub_26239D0(a2, 91);
  }
  else
  {
    *(_QWORD *)(a2 + 32) = v4 + 1;
    *v4 = 91;
  }
  v5 = (__int64 *)(a1 + 104);
  v6 = a1 + 104 + 8LL * *(unsigned int *)(a1 + 100);
  if ( v6 != a1 + 104 )
  {
    v7 = *(_QWORD *)(a1 + 104);
    while ( 1 )
    {
      ++v5;
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v7 + 88LL))(v7, a2, a3);
      if ( (__int64 *)v6 == v5 )
        break;
      v8 = *(_WORD **)(a2 + 32);
      v7 = *v5;
      if ( *(_QWORD *)(a2 + 24) - (_QWORD)v8 <= 1u )
      {
        sub_26240F0(a2, ", ", 2);
      }
      else
      {
        *v8 = 8236;
        *(_QWORD *)(a2 + 32) += 2LL;
      }
    }
  }
  result = *(_BYTE **)(a2 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(a2 + 24) )
    return (_BYTE *)sub_26239D0(a2, 93);
  *(_QWORD *)(a2 + 32) = result + 1;
  *result = 93;
  return result;
}

