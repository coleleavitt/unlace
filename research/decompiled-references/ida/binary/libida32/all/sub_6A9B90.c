__int64 __fastcall sub_6A9B90(__int64 *a1, int a2, unsigned int a3)
{
  __int64 v4; // rax
  int v6; // eax
  __int64 v7; // rsi
  char v8; // dl
  __int64 result; // rax
  int v10; // eax
  __int64 v11; // rsi
  int v12; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-30h]

  v4 = *a1;
  v13 = __readfsqword(0x28u);
  v6 = sub_3B90A0(*(_QWORD **)(v4 + 1480), a2);
  v7 = *a1;
  v12 = v6;
  v8 = sub_79B3A0(&v12, v7, 4294967291LL, 65);
  result = 0xFFFFFFFFLL;
  if ( (v8 & 1) != 0 )
  {
    v10 = sub_3B90A0(*(_QWORD **)(*a1 + 1480), a2);
    v11 = *a1;
    v12 = v10;
    return (unsigned int)sub_79B3A0(&v12, v11, a3, 109) - 1;
  }
  return result;
}

