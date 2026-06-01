__int64 __fastcall sub_209F620(_QWORD *a1, __int64 a2)
{
  unsigned __int8 v2; // al
  __int64 result; // rax
  _QWORD *v4; // rsi

  v2 = *(_BYTE *)(a2 - 16);
  if ( (v2 & 2) != 0 )
  {
    *a1 = **(_QWORD **)(a2 - 32);
    a1[1] = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 8LL);
    a1[2] = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 16LL);
    result = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 24LL);
  }
  else
  {
    v4 = (_QWORD *)(a2 - 8LL * ((v2 >> 2) & 0xF));
    *a1 = *(v4 - 2);
    a1[1] = *(v4 - 1);
    a1[2] = *v4;
    result = v4[1];
  }
  a1[3] = result;
  return result;
}
