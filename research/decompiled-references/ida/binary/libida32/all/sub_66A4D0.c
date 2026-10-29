__int64 __fastcall sub_66A4D0(__int64 a1, __int64 *a2, __int64 a3, char a4)
{
  __int64 v4; // rdi
  __int64 v6; // rsi
  __int64 result; // rax
  char v9[4104]; // [rsp+0h] [rbp-1028h] BYREF
  unsigned __int64 v10; // [rsp+1008h] [rbp-20h]

  v4 = a1 + 2556;
  v6 = *(_QWORD *)(v4 - 2556);
  v10 = __readfsqword(0x28u);
  if ( sub_79B660(v4, v6, a3, v9, 4096, 83) > 0 )
  {
    result = sub_66A120(a2, v9);
    if ( (_BYTE)result )
      return result;
    if ( a4 )
      sub_375400();
  }
  return 0;
}

