_QWORD *__fastcall sub_565D10(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  __int64 v6; // rbp
  _QWORD *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rcx
  _QWORD *v10; // r14
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v14; // rax

  if ( a1 != a2[1] || a1 != a3[1] )
    return nullptr;
  v6 = a4;
  if ( a4 )
  {
    if ( a1 == *(_QWORD *)(a4 + 8) )
    {
      v7 = (_QWORD *)sub_186B270(0x18u);
      v8 = *(_QWORD *)(a1 + 24);
      v9 = *(_QWORD *)(v6 + 48);
      v10 = v7;
      *v7 = &off_1C510E0;
      v7[1] = 0;
      v7[2] = 0;
      goto LABEL_6;
    }
    return nullptr;
  }
  v14 = (_QWORD *)sub_186B270(0x18u);
  v8 = *(_QWORD *)(a1 + 24);
  v9 = 0;
  v10 = v14;
  *v14 = &off_1C510E0;
  v14[1] = 0;
  v14[2] = 0;
LABEL_6:
  v11 = sub_4C4B50(v8, a2[6], a3[6], v9);
  if ( v11 )
    v10[1] = v11;
  if ( v6 )
    v6 = *(_QWORD *)(v6 + 40);
  v12 = sub_4C4B50(*(_QWORD *)(a1 + 24), a2[5], a3[5], v6);
  if ( v12 )
  {
    v10[2] = v12;
    return v10;
  }
  return v10;
}

