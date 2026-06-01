_QWORD *__fastcall sub_566220(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // r12
  _QWORD *v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax

  v3 = nullptr;
  if ( a1 != a2[1] )
    return v3;
  v8 = (_QWORD *)sub_186B270(0x18u);
  v9 = a2[5];
  v10 = *(_QWORD *)(a1 + 24);
  v3 = v8;
  *v8 = &off_1C511F0;
  v8[1] = 0;
  v8[2] = 0;
  v11 = sub_4C4D50(v10, v9, a3);
  if ( v11 )
    v3[1] = v11;
  v12 = sub_4C4D50(*(_QWORD *)(a1 + 24), a2[6], a3);
  if ( !v12 )
    return v3;
  v3[2] = v12;
  return v3;
}

