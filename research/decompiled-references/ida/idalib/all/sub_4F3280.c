unsigned __int64 __fastcall sub_4F3280(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  unsigned __int64 v9; // rax
  __int64 v10; // rsi
  _QWORD *v11; // rbx
  unsigned __int64 v12; // r13
  _QWORD *v13; // r14
  unsigned __int64 v14; // r12
  _QWORD *v15; // rdi
  _QWORD *v16; // [rsp+8h] [rbp-40h]

  v16 = *(_QWORD **)(*a1 + 1752LL);
  if ( !a5 )
  {
    v9 = sub_3BDD60(a1, a2);
    v10 = a3;
    v11 = a1 + 328;
    v12 = v9;
    v13 = a1 + 344;
    v14 = sub_3BDD60(a1, v10);
    do
    {
      sub_7BEDC0(v11, *a1, v12, v14, a4, 83);
      v15 = v11++;
      sub_7BED70(v15, *a1, v12, v14, a4, 65);
    }
    while ( v11 != v13 );
  }
  return sub_4F23A0(v16);
}
