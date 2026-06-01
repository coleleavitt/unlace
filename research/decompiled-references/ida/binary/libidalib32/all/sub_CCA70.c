__int64 __fastcall sub_CCA70(int a1, int a2, int a3)
{
  _DWORD *v4; // rdi
  __int64 result; // rax
  unsigned int v6; // [rsp+4h] [rbp-14h]

  v4 = qword_2515B0;
  if ( qword_2515B0 )
  {
    *(_DWORD *)qword_2515B0 = a2;
    v4[2] = a1;
    v4[1] = a3;
    result = sub_CC780((__int64)v4, 9);
    v6 = *((_DWORD *)qword_2515B0 + 3);
  }
  else
  {
    result = sub_9E0A0();
  }
  if ( (_DWORD)result )
    return v6;
  return result;
}

