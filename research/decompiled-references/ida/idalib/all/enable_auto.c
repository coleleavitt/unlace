__int64 __fastcall enable_auto(char a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = sub_3FB5F0();
  if ( (_BYTE)result )
  {
    v2 = *(_QWORD *)(**(_QWORD **)(qword_2CCB598 + 1672) + 1536LL);
    result = *(unsigned __int8 *)(v2 + 125);
    *(_BYTE *)(v2 + 125) = a1;
  }
  return result;
}
