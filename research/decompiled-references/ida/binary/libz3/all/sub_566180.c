_QWORD *__fastcall sub_566180(__int64 a1, _QWORD *a2, __int64 *a3, int a4)
{
  _QWORD *v4; // r14
  _QWORD *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax

  v4 = nullptr;
  if ( a1 != a2[1] )
    return v4;
  v10 = (_QWORD *)sub_186B270(0x18u);
  v11 = a2[5];
  v12 = *(_QWORD *)(a1 + 24);
  v4 = v10;
  *v10 = &off_1C511B8;
  v10[1] = 0;
  v10[2] = 0;
  v13 = sub_4C4CE0(v12, v11, a3, a4);
  if ( v13 )
    v4[1] = v13;
  v14 = sub_4C4CE0(*(_QWORD *)(a1 + 24), a2[6], a3, a4);
  if ( !v14 )
    return v4;
  v4[2] = v14;
  return v4;
}

