unsigned __int64 __fastcall sub_4F3340(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 *v3; // r13
  __int64 v4; // rsi
  _QWORD *v5; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r14
  int v11; // [rsp+Ch] [rbp-5Ch]
  _QWORD *v13; // [rsp+18h] [rbp-50h]
  __int64 v14; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-40h]

  v3 = a1 + 328;
  v4 = *a1;
  v5 = *(_QWORD **)(*a1 + 1752);
  v15 = __readfsqword(0x28u);
  v11 = 1;
  v13 = v5;
  while ( 1 )
  {
    v14 = *v3;
    v7 = sub_7BEB00(v3, v4, a2, 321);
    v8 = sub_3BDE50(a1, v7);
    if ( v8 >= a3 )
      break;
    do
    {
      v9 = sub_3BDD60(a1, v8);
      sub_7BE850(&v14, *a1, v9, 65);
      sub_7BE850(&v14, *a1, v9, 83);
      v8 = sub_7BEBF0(&v14, *a1, v8, 65);
    }
    while ( v8 < a3 );
    if ( v11 != 14 )
      break;
    ++v3;
    sub_4F23A0(v13);
    v11 = 15;
LABEL_6:
    v4 = *a1;
  }
  ++v11;
  ++v3;
  if ( v11 != 17 )
    goto LABEL_6;
  return v15 - __readfsqword(0x28u);
}
