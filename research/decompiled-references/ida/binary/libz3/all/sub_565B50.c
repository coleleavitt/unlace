_QWORD *__fastcall sub_565B50(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned int a4, unsigned int *a5, unsigned int *a6)
{
  _QWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // r13
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax

  if ( a1 != a2[1] || a1 != a3[1] )
    return nullptr;
  v11 = (_QWORD *)sub_186B270(0x18u);
  v12 = a3[6];
  v13 = v11;
  v14 = a2[6];
  v15 = *(_QWORD *)(a1 + 24);
  *v11 = &off_1C51090;
  v11[1] = 0;
  v11[2] = 0;
  v16 = sub_4C5B40(v15, v14, v12, a4, a5, a6);
  if ( v16 )
    v13[1] = v16;
  v17 = sub_4C5B40(*(_QWORD *)(a1 + 24), a2[5], a3[5], a4, a5, a6);
  if ( v17 )
    v13[2] = v17;
  return v13;
}

