_BYTE *__fastcall sub_86AEF0(unsigned int *a1, int a2, __int64 a3)
{
  _BYTE *result; // rax
  char v4; // dl
  char v5; // bp

  result = (_BYTE *)*a1;
  if ( !(_DWORD)result )
  {
    if ( a2 > 126 )
    {
      a1[36] = 1;
      result = sub_867CC0((__int64)a1, 1u, 0, 0, 142, a3);
      if ( result )
        *result = -113;
    }
    else if ( *((_BYTE *)&unk_23C2F30 + a2) <= 7u )
    {
      v5 = byte_23C2F10[a2] + 88;
      result = sub_867B60((__int64)a1, 2);
      if ( result )
      {
        *result = 1;
        ++*((_QWORD *)a1 + 15);
        result[1] = v5;
      }
    }
    else
    {
      result = sub_867B60((__int64)a1, 3);
      if ( result )
      {
        *result = 2;
        v4 = byte_23C2F10[a2];
        *((_QWORD *)a1 + 15) += 2LL;
        result[1] = 65;
        result[2] = v4 + 88;
      }
    }
  }
  return result;
}
