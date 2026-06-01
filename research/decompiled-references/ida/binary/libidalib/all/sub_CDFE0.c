__int64 __fastcall sub_CDFE0(int a1, __int64 a2, int a3)
{
  _DWORD *v4; // rdi
  __int64 result; // rax
  unsigned int v6; // [rsp+4h] [rbp-14h]

  v4 = qword_252758;
  if ( qword_252758 )
  {
    *(_QWORD *)qword_252758 = a2;
    v4[3] = a1;
    v4[2] = a3;
    result = sub_CDCF0((__int64)v4, 9);
    v6 = *((_DWORD *)qword_252758 + 4);
  }
  else
  {
    result = sub_9E1E0();
  }
  if ( (_DWORD)result )
    return v6;
  return result;
}

