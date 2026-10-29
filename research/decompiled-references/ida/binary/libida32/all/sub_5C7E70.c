__int64 __fastcall sub_5C7E70(_QWORD *a1)
{
  _QWORD *v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx

  v2 = (_QWORD *)a1[16];
  v3 = a1[15];
  if ( !v3 )
    v3 = a1[13];
  sub_5C7B30(v3, v2);
  v4 = a1[55];
  v5 = *(_QWORD *)(a1[54] + 8 * v4 - 8);
  if ( v4 )
    a1[55] = v4 - 1;
  a1[16] = v5;
  return 0;
}

