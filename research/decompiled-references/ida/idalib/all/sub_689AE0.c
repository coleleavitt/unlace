__int64 __fastcall sub_689AE0(__int64 a1, __int64 *a2, int a3, char a4)
{
  __int64 v4; // rdi
  __int64 v6; // rsi
  __int64 result; // rax
  char v9[4104]; // [rsp+0h] [rbp-1028h] BYREF
  unsigned __int64 v10; // [rsp+1008h] [rbp-20h]

  v4 = a1 + 2752;
  v6 = *(_QWORD *)(v4 - 2752);
  v10 = __readfsqword(0x28u);
  if ( sub_7BE9F0(v4, v6, a3, v9, 4096, 83) > 0 )
  {
    result = sub_689730(a2, v9);
    if ( (_BYTE)result )
      return result;
    if ( a4 )
      sub_378D50();
  }
  return 0;
}
