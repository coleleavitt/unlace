__int64 __fastcall sub_4816A0(__int64 *a1, int a2, int a3, __int64 a4)
{
  _QWORD *v5; // rdx
  _QWORD *v7; // rsi
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 result; // rax

  v5 = a1 + 12;
  v7 = a1 + 6;
  v9 = a1 + 3;
  v9[1] = 0;
  v9[4] = 0;
  v9[10] = 0;
  if ( !(unsigned __int8)serialize_tinfo(v9, v7, v5, a4, 272) )
  {
    if ( !under_debugger )
      interr(2157);
    BUG();
  }
  v10 = 0;
  if ( (unsigned __int64)a1[13] > 1 )
    v10 = a1[12];
  v11 = 0;
  if ( (unsigned __int64)a1[10] > 1 )
    v11 = a1[9];
  LODWORD(v12) = 0;
  if ( (unsigned __int64)a1[7] > 1 )
    v12 = a1[6];
  LODWORD(v13) = 0;
  if ( (unsigned __int64)a1[4] > 1 )
    v13 = a1[3];
  LODWORD(v14) = 0;
  if ( (unsigned __int64)a1[1] > 1 )
    v14 = *a1;
  result = sub_63F060(a2, a3, 1028, v14, v13, v12, v11, v10, (__int64)(a1 + 15));
  if ( (_DWORD)result )
    sub_47DED0();
  return result;
}

