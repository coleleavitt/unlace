_QWORD *__fastcall sub_1713630(unsigned __int16 *a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int16 *v3; // rbx
  _QWORD *result; // rax
  __int64 v5; // r12
  int v7; // ebp
  int v8; // eax
  _BYTE *v9; // r15
  unsigned __int64 v10; // rax

  v3 = a1 + 16;
  result = (_QWORD *)(16LL * *a1);
  v5 = (__int64)result + (_QWORD)a1 + 32;
  if ( (unsigned __int16 *)v5 != a1 + 16 )
  {
    v7 = 0;
    do
    {
      v8 = *(_DWORD *)v3;
      v9 = *((_BYTE **)v3 + 1);
      if ( *(_DWORD *)v3 == 2 )
      {
        result = (_QWORD *)sub_1713630(*((_QWORD *)v3 + 1), a3, a3);
      }
      else
      {
        LOBYTE(v8) = v8 == 0;
        v7 |= v8;
        v10 = strlen(*((const char **)v3 + 1));
        if ( (_BYTE)v7 )
        {
          if ( 0x7FFFFFFFFFFFFFFFLL - a3[1] < v10 )
            goto LABEL_12;
          result = sub_9EE560(a3, v9, v10);
        }
        else
        {
          if ( 0x7FFFFFFFFFFFFFFFLL - a2[1] < v10 )
LABEL_12:
            std::__throw_length_error("basic_string::append");
          result = sub_9EE560(a2, v9, v10);
        }
      }
      v3 += 8;
    }
    while ( (unsigned __int16 *)v5 != v3 );
  }
  return result;
}
