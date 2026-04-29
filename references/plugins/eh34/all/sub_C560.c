_QWORD *__fastcall sub_C560(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // r12
  unsigned int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rbx
  void (__fastcall *hexdsp)(__int64, __int64, _QWORD); // rax

  v3 = (_QWORD *)a1;
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  sub_C330((_QWORD *)a1, a2[1]);
  if ( a2[1] )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      v6 = *(unsigned int *)(*a2 + 4 * v5);
      if ( (_DWORD)v6 != -1 )
      {
        v7 = *v3 + 16LL * (int)v6;
        hexdsp = (void (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(a1, v6);
        a1 = 205;
        hexdsp(205, v7, v4);
      }
      v5 = (int)++v4;
    }
    while ( (unsigned __int64)(int)v4 < a2[1] );
  }
  return v3;
}
