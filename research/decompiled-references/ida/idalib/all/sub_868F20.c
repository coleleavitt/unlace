_BYTE *__fastcall sub_868F20(unsigned int *a1, int a2)
{
  _BYTE *result; // rax
  _BYTE *v3; // rdx
  char v4; // cl
  char v5; // cl

  result = (_BYTE *)*a1;
  if ( !(_DWORD)result )
  {
    if ( *((_BYTE *)&unk_23C2F30 + a2) > 7u )
    {
      result = sub_867B60((__int64)a1, 4);
      if ( !result )
        return result;
      *result = 3;
      v3 = result + 3;
      v4 = byte_23C2F10[a2];
      *((_QWORD *)a1 + 15) += 3LL;
      result[1] = 65;
      result[2] = v4 + 80;
      goto LABEL_5;
    }
    result = sub_867B60((__int64)a1, 3);
    if ( result )
    {
      *result = 2;
      v3 = result + 2;
      v5 = byte_23C2F10[a2];
      *((_QWORD *)a1 + 15) += 2LL;
      result[1] = v5 + 80;
LABEL_5:
      *v3 = -61;
    }
  }
  return result;
}
