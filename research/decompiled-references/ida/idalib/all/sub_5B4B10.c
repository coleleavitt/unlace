__int64 __fastcall sub_5B4B10(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // r13
  __int64 v5; // rsi
  _QWORD *v6; // r12
  int v7; // eax
  __int64 v8; // r15
  __int64 v9; // rbp
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v17; // [rsp+10h] [rbp-58h]
  __int64 v18; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-40h]

  v3 = 0;
  v4 = 0;
  v5 = *a1;
  v19 = __readfsqword(0x28u);
  v6 = a1 + 307;
  v7 = sub_7BE710(a1 + 307, v5, -1, 65);
  v8 = v7;
  v17 = v7;
  if ( !v7 )
    return sub_7BE850(v6, *a1, -1, 65);
  do
  {
    v9 = sub_7BE710(v6, *a1, ++v4, 73);
    v10 = sub_7BE710(v6, *a1, v9, 65);
    v11 = sub_3BDE50(a1, v10 - 1);
    v12 = *a1;
    if ( v11 >= a2 && v11 < a3 )
    {
      sub_7BE850(v6, v12, v4, 73);
      sub_7BE850(v6, *a1, v9, 65);
      sub_7BE850(v6, *a1, v9, 83);
      sub_7BE850(v6, *a1, v9, 70);
      --v17;
    }
    else
    {
      ++v3;
      v18 = v9;
      sub_7BE7C0(v6, v12, v3, &v18, 8, 73);
    }
  }
  while ( v8 != v4 );
  while ( v3 < v4 )
    sub_7BE850(v6, *a1, ++v3, 73);
  if ( !v17 )
    return sub_7BE850(v6, *a1, -1, 65);
  v13 = *a1;
  v18 = v17;
  sub_7BE7C0(v6, v13, -1, &v18, 8, 65);
  return v19 - __readfsqword(0x28u);
}
