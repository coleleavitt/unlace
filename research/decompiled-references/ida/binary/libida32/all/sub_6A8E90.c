__int64 __fastcall sub_6A8E90(__int64 *a1, int a2, int a3, char a4)
{
  __int64 v5; // rax
  int v7; // eax
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // rsi
  int v11; // edx
  int v12; // ebx
  int v14; // [rsp+0h] [rbp-38h] BYREF
  int v15; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-30h]

  v5 = *a1;
  v16 = __readfsqword(0x28u);
  v7 = sub_3B90A0(*(_QWORD **)(v5 + 1480), a2);
  v8 = *a1;
  v14 = v7;
  v9 = sub_79B3A0(&v14, v8, 4294967291LL, 65);
  v10 = *a1;
  v11 = a3 | v9;
  v12 = v9 & ~a3;
  if ( a4 )
    v12 = v11;
  v15 = v12;
  return sub_79B440(&v14, v10, 4294967291LL, &v15, 4, 65);
}

