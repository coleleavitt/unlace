bool __fastcall sub_6335B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r14d
  unsigned int v7; // ebx
  char v8; // r15
  __int64 v9; // r12
  __int64 v10; // rax
  _QWORD *v11; // rsi
  __int64 v12; // rbp
  unsigned int v13; // ebx
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v17; // [rsp+10h] [rbp-58h] BYREF
  __int64 v18; // [rsp+18h] [rbp-50h]
  __int64 v19; // [rsp+20h] [rbp-48h]
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v6 = a2;
  v7 = a3;
  v20 = __readfsqword(0x28u);
  v8 = a4;
  v17 = a1;
  if ( a1 )
  {
    a3 = *(_QWORD *)(a1 + 1520);
    v18 = a3;
  }
  else
  {
    v18 = -1;
  }
  v19 = a1 + 640;
  v9 = v7;
  if ( (unsigned int)a2 > 0x63 )
    sub_629970(a1, a2, a3);
  v10 = sub_6317E0(&v17, (__int64)&qword_2B34D20[8 * (unsigned __int64)(unsigned int)a2], 0, a4, a5, a6);
  v11 = &qword_2B34D20[8 * (unsigned __int64)(unsigned int)a2];
  v12 = v10;
  LODWORD(v10) = v10 | v7;
  v13 = v12 & ~v7;
  v14 = ~v12;
  v15 = (unsigned int)v10;
  if ( !v8 )
    v15 = v13;
  sub_632390((__int64)&v17, (__int64)v11, v15, v6, 0);
  return (v9 & v14) == 0;
}
