__int64 __fastcall sub_205E850(int a1, __int64 a2, __int64 **a3, char a4)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case '&':
      result = sub_205E4A0(0x26u, (_BYTE *)a2, a3, a4);
      break;
    case '\'':
    case '(':
    case ')':
    case '*':
    case '+':
    case ',':
    case '-':
    case '.':
    case '2':
      result = sub_205E4A0(0x32u, (_BYTE *)a2, a3, a4);
      break;
    case '/':
      result = sub_205E4A0(0x2Fu, (_BYTE *)a2, a3, a4);
      break;
    case '0':
      result = sub_205E4A0(0x30u, (_BYTE *)a2, a3, a4);
      break;
    case '1':
      if ( a3 == *(__int64 ***)(a2 + 8) )
        result = a2;
      else
        result = sub_205E4A0(0x31u, (_BYTE *)a2, a3, a4);
      break;
  }
  return result;
}
