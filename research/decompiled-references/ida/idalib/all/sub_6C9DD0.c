__int64 __fastcall sub_6C9DD0(__int64 *a1, __int64 a2, int a3, char a4)
{
  __int64 v5; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // rsi
  unsigned int v11; // edx
  unsigned int v12; // ebx
  __int64 v13; // rax
  unsigned __int64 v15; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v16[7]; // [rsp+10h] [rbp-38h] BYREF

  v5 = *a1;
  v16[1] = __readfsqword(0x28u);
  v7 = sub_3BDD60(*(_QWORD **)(v5 + 1672), a2);
  v8 = *a1;
  v15 = v7;
  v9 = sub_7BE710(&v15, v8, -5, 65);
  v10 = *a1;
  v11 = v9 | a3;
  v12 = v9 & ~a3;
  v13 = v11;
  if ( !a4 )
    v13 = v12;
  v16[0] = v13;
  return sub_7BE7C0(&v15, v10, -5, v16, 8, 65);
}
