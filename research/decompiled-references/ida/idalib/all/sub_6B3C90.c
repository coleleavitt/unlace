__int64 __fastcall sub_6B3C90(_BYTE *a1, __int64 *a2, unsigned __int64 a3, unsigned __int64 a4, __int64 a5)
{
  __int64 v8; // rdi
  int v9; // r13d
  unsigned __int64 v10; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rsi
  __int128 v14; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v15[2]; // [rsp+16h] [rbp-42h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-40h]

  v8 = *a2;
  v16 = __readfsqword(0x28u);
  v9 = a5;
  v14 = 0;
  sub_630CA0(v8, 26, &v14, 0x10u, a5);
  v10 = *(_QWORD *)(a2[3] + 16);
  if ( v10 < a3 && (a3 >= *((_QWORD *)&v14 + 1) || a3 < (unsigned __int64)v14) )
    return 0;
  if ( v10 < a4 && (a4 >= *((_QWORD *)&v14 + 1) || a4 < (unsigned __int64)v14) )
    return 0;
  v12 = sub_3BDD60(a2, a3);
  v13 = *a2;
  *(_QWORD *)&v14 = v12;
  if ( sub_7BE950(&v14, v13, a4, v15, 2, v9 | 0x100u) != 1 )
    return 0;
  *a1 = v15[0];
  return 1;
}
