__int64 __fastcall sub_6AA000(__int64 *a1, _BYTE *a2, int a3)
{
  unsigned int v3; // r12d
  int v6; // eax
  __int64 v7; // rsi
  unsigned int v8; // r12d
  __int64 result; // rax
  _QWORD *v10; // rbp
  int v11; // eax
  __int64 v12; // rsi
  int v13; // eax
  int v14; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  if ( !a2 )
  {
    if ( !under_debugger )
      interr(2838);
    BUG();
  }
  v3 = (unsigned __int8)*a2;
  v6 = sub_3B90A0(*(_QWORD **)(*a1 + 1480), a3);
  v7 = *a1;
  v14 = v6;
  v8 = sub_79B840(&v14, v7, v3, 115);
  result = 0xFFFFFFFFLL;
  if ( v8 <= 0xFF )
  {
    *a2 = v8;
    v10 = *(_QWORD **)(*a1 + 1480);
    v11 = sub_3B90A0(v10, a3);
    v12 = *a1;
    v14 = v11;
    v13 = sub_79B3A0(&v14, v12, v8, 115);
    return sub_3B9110(v10, v13 - 1);
  }
  return result;
}

