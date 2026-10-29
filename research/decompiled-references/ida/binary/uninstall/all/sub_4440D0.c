__int64 __fastcall sub_4440D0(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  _BYTE v16[40]; // [rsp+0h] [rbp-28h] BYREF

  sub_4AE1A0(&qword_65A598);
  dword_65A530 = 0;
  sub_444000(qword_65A5A8, a2, v2, v3, v4, v5);
  sub_444000(qword_66BA40, a2, v6, v7, v8, v9);
  while ( 1 )
  {
    v10 = sub_457E20(qword_65A540, v16);
    if ( !v10 )
      break;
    sub_444000(*(_QWORD *)(v10 + 24), (int)v16, v11, v12, v13, v14);
  }
  sub_457CE0(qword_65A540);
  return sub_4AE230(&qword_65A598);
}

