__int64 __fastcall set_immd(void *a1)
{
  _QWORD *v1; // rbp
  __int64 result; // rax
  unsigned __int8 v3; // [rsp+Fh] [rbp-19h]

  v1 = *(_QWORD **)(qword_2CCB598 + 1672);
  if ( (~((unsigned __int16)sub_3BE900(v1, (unsigned __int64)a1, 4) >> 8) & 6) != 0 )
    return 0;
  result = sub_3CFD10(v1, a1, 0x40000000);
  if ( !(_BYTE)result )
    return 0;
  if ( qword_2CCB548 )
  {
    v3 = result;
    qword_2CCB548(a1, 1);
    return v3;
  }
  return result;
}
