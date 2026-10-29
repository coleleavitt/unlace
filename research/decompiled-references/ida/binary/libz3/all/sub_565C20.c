_QWORD *__fastcall sub_565C20(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned int *a6,
        unsigned int a7,
        unsigned int *a8)
{
  _QWORD *v12; // rax
  __int64 v13; // rdi
  _QWORD *v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rsi
  _QWORD *v17; // rax
  _QWORD *v18; // rax

  if ( a1 != a2[1] || a1 != a3[1] )
    return nullptr;
  v12 = (_QWORD *)sub_186B270(0x18u);
  v13 = *(_QWORD *)(a1 + 24);
  v14 = v12;
  v15 = a3[6];
  v16 = a2[6];
  *v12 = &off_1C510B8;
  v12[1] = 0;
  v12[2] = 0;
  v17 = sub_4C9510(v13, v16, v15, a4, a5, a6, a7, a8);
  if ( v17 )
    v14[1] = v17;
  v18 = sub_4C9510(*(_QWORD *)(a1 + 24), a2[5], a3[5], a4, a5, a6, a7, a8);
  if ( v18 )
    v14[2] = v18;
  return v14;
}

