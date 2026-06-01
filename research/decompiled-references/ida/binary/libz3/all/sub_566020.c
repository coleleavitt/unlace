_QWORD *__fastcall sub_566020(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  _QWORD *v5; // r15
  _QWORD *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  _QWORD *v15; // rax
  _QWORD *v16; // rax

  v5 = nullptr;
  if ( a1 == a2[1] )
  {
    v12 = (_QWORD *)sub_186B270(0x18u);
    v13 = a2[5];
    v14 = *(_QWORD *)(a1 + 24);
    v5 = v12;
    *v12 = &off_1C51228;
    v12[1] = 0;
    v12[2] = 0;
    v15 = sub_4C9780(v14, v13, a3, a4, a5);
    if ( v15 )
      v5[1] = v15;
    v16 = sub_4C9780(*(_QWORD *)(a1 + 24), a2[6], a3, a4, a5);
    if ( v16 )
      v5[2] = v16;
  }
  return v5;
}

