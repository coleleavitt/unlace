_QWORD *__fastcall sub_1AEA0(__int64 a1, double a2, double a3)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  _QWORD *result; // rax
  __int64 qword; // rax
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r13

  v3 = *(_QWORD *)(a1 + 16);
  *(_BYTE *)(a1 + 404) = 1;
  v4 = v3 + 80;
  result = (_QWORD *)sub_3BD30(v3 + 80, 7);
  if ( (_DWORD)result )
  {
    result = (_QWORD *)sub_3BD50(v4, (unsigned int)result);
    if ( result )
    {
      sub_41B70(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), (__int64)result);
      result = (_QWORD *)is_mapped();
      if ( (_BYTE)result )
      {
        qword = get_qword();
        v7 = qword;
        if ( *(_DWORD *)(a1 + 376) == 4 )
        {
          if ( qword != *(_QWORD *)(a1 + 388) )
            sub_BFC0((__int64)"AUTOHIDE SESSION\naddress of the GOT header (%a) != .TOC. symbol (%a)", a2, a3);
        }
        else
        {
          result = *(_QWORD **)(a1 + 396);
          if ( (unsigned __int64)result >= v7 )
            return result;
          v8 = v7 - (_QWORD)result;
          result = (_QWORD *)is_mapped();
          if ( !(_BYTE)result )
            return result;
          result = (_QWORD *)getseg();
          if ( !result || v8 != *result )
            return result;
          *(_QWORD *)(a1 + 388) = v7;
          *(_DWORD *)(a1 + 376) = 3;
        }
        return (_QWORD *)op_offset();
      }
    }
  }
  return result;
}

