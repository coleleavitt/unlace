_QWORD *__fastcall sub_5662D0(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned int a4, unsigned int *a5, unsigned int *a6)
{
  _QWORD *v8; // r15
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdi
  char *v17; // rax
  char *v18; // rax

  if ( a1 != a2[1] )
    return nullptr;
  v8 = nullptr;
  if ( a1 == a3[1] )
  {
    v13 = (_QWORD *)sub_186B270(0x18u);
    v14 = a3[5];
    v8 = v13;
    v15 = a2[5];
    v16 = *(_QWORD *)(a1 + 24);
    *v13 = &off_1C51250;
    v13[1] = 0;
    v13[2] = 0;
    v17 = sub_4C67E0(v16, v15, v14, a4, a5, a6);
    if ( v17 )
      v8[1] = v17;
    v18 = sub_4C67E0(*(_QWORD *)(a1 + 24), a2[6], a3[6], a4, a5, a6);
    if ( v18 )
      v8[2] = v18;
  }
  return v8;
}

