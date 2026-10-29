__int64 __fastcall sub_13AC10(unsigned __int64 a1, unsigned __int8 *a2)
{
  unsigned __int64 v2; // rax
  __int64 result; // rax

  v2 = *((_QWORD *)a2 + 1);
  *((_QWORD *)a2 + 1) = v2 + 1;
  if ( v2 > 0x3E7 )
  {
    *((_QWORD *)a2 + 1) = 0;
    result = sub_19F870(a1, a2);
    *a2 = result;
  }
  else
  {
    result = *a2;
  }
  if ( !(_BYTE)result )
    return (a1 >> 10) & 1;
  return result;
}

