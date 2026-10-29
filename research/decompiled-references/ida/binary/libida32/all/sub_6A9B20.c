__int64 __fastcall sub_6A9B20(__int64 *a1, __int64 a2, int a3, unsigned __int8 a4)
{
  __int64 v5; // rax
  int v7; // eax
  __int64 v8; // rsi
  int v10; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-20h]

  v5 = *a1;
  v11 = __readfsqword(0x28u);
  v7 = sub_3B90A0(*(_QWORD **)(v5 + 1480), a3);
  v8 = *a1;
  v10 = v7;
  return sub_79B6F0(&v10, v8, a2, a4, 83);
}

