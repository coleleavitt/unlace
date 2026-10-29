__int64 __fastcall sub_493D10(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rsi
  _QWORD *v4; // rdx
  _QWORD *v6; // rdi
  int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 result; // rax

  v3 = a1 + 14;
  v4 = a1 + 20;
  v6 = a1 + 11;
  v6[1] = 0;
  v7 = *((_DWORD *)v6 + 38);
  v6[4] = 0;
  v6[10] = 0;
  if ( !(unsigned __int8)serialize_tinfo(v6, v3, v4, a2, 272) )
  {
    if ( !under_debugger )
      interr(2157);
    BUG();
  }
  v8 = 0;
  if ( a1[21] > 1u )
    v8 = a1[20];
  v9 = 0;
  if ( a1[18] > 1u )
    v9 = a1[17];
  LODWORD(v10) = 0;
  if ( a1[15] > 1u )
    v10 = a1[14];
  LODWORD(v11) = 0;
  if ( a1[12] > 1u )
    v11 = a1[11];
  LODWORD(v12) = 0;
  if ( a1[9] > 1u )
    v12 = a1[8];
  result = sub_65C930(0, v7, 1028, v12, v11, v10, v9, v8, (__int64)(a1 + 23));
  if ( (_DWORD)result )
    sub_4929D0();
  return result;
}
