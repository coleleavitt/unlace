__int64 __fastcall sub_6A9DD0(__int64 *a1, int a2, unsigned int a3)
{
  __int64 v5; // rax
  int v7; // eax
  __int64 v8; // rsi
  char v9; // al
  _QWORD *v10; // rdi
  int v11; // eax
  __int64 v12; // rsi
  int v14; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-30h]

  v5 = *a1;
  v15 = __readfsqword(0x28u);
  v7 = sub_3B90A0(*(_QWORD **)(v5 + 1480), a2);
  v8 = *a1;
  v14 = v7;
  v9 = sub_79B3A0(&v14, v8, 4294967291LL, 65);
  v10 = *(_QWORD **)(*a1 + 1480);
  if ( (v9 & 1) == 0 )
    return sub_3B90A0(v10, a2);
  v11 = sub_3B90A0(v10, a2);
  v12 = *a1;
  v14 = v11;
  return (unsigned int)sub_79B3A0(&v14, v12, a3, 109) - 1;
}

