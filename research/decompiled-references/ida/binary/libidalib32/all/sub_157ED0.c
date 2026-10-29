_QWORD *__fastcall sub_157ED0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *result; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx

  v2 = a2;
  result = (_QWORD *)operator new(0x20u);
  v4 = *(_QWORD *)(a1 + 16);
  if ( a2 )
    v2 = a2 - 104;
  v5 = *(_QWORD *)(a1 + 24);
  *result = off_2345F8;
  result[1] = v2;
  result[2] = v4;
  result[3] = v5;
  return result;
}

