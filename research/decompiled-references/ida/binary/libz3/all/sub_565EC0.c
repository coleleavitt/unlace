_QWORD *__fastcall sub_565EC0(__int64 a1, _QWORD *a2, __int64 *a3, unsigned int a4)
{
  _QWORD *v8; // rax
  __int64 v9; // rsi
  _QWORD *v10; // rbx
  __int64 v11; // rdi
  _QWORD *v12; // rax
  _QWORD *v13; // rax

  if ( a1 != a2[1] )
    return nullptr;
  v8 = (_QWORD *)sub_186B270(0x18u);
  v9 = a2[5];
  v10 = v8;
  v11 = *(_QWORD *)(a1 + 24);
  *v8 = &off_1C51130;
  v8[1] = 0;
  v8[2] = 0;
  v12 = sub_4C5A50(v11, v9, a3, a4);
  if ( v12 )
    v10[1] = v12;
  v13 = sub_4C5A50(*(_QWORD *)(a1 + 24), a2[6], a3, a4);
  if ( v13 )
    v10[2] = v13;
  return v10;
}

