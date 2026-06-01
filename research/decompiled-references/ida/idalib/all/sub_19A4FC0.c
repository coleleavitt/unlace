unsigned __int64 __fastcall sub_19A4FC0(__int64 a1, __int64 a2, char a3, int a4, __int64 a5, __int64 a6)
{
  _QWORD *v8; // rdi
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int64 v12; // rax
  __int64 v13; // [rsp+8h] [rbp-30h]

  v8 = *(_QWORD **)(a1 + 248);
  v9 = v8[294];
  v8[304] += 48LL;
  v10 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v8[295] >= v10 + 48 && v9 )
  {
    v8[294] = v10 + 48;
  }
  else
  {
    v13 = a5;
    v12 = sub_986170((__int64)(v8 + 294), 48, 48, 3, a5, a6);
    a5 = v13;
    v10 = v12;
  }
  sub_A555B0(v10, a2, a3, a4, a5);
  return v10;
}
