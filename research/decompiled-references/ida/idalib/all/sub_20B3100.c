void __fastcall sub_20B3100(__int64 a1, __int64 *a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // r11
  __int64 v8; // rdi
  _QWORD *v9; // r12
  __int64 v10; // rbp
  _QWORD *v11; // rsi
  __int64 v12; // rax

  v6 = a3;
  v8 = (__int64)a2 - a1;
  v9 = (_QWORD *)(a1 + v8);
  v10 = v8 >> 3;
  if ( a2 && (unsigned int)*(unsigned __int8 *)*a2 - 1 <= 1 )
  {
    if ( a3 )
    {
      v11 = (_QWORD *)*v9;
      if ( !*v9 )
      {
        *v9 = a3;
        goto LABEL_10;
      }
      goto LABEL_5;
    }
    v12 = sub_2058290(*(_QWORD **)(*(_QWORD *)(*a2 + 128) + 8LL), (__int64)a2, *a2, a4, a5, a6);
    v6 = sub_20AFB20(v12);
  }
  v11 = *(_QWORD **)(a1 + 8 * v10);
  if ( v11 )
  {
LABEL_5:
    sub_20A0850((__int64)v9, v11);
    *(_QWORD *)(a1 + 8 * v10) = v6;
    if ( !v6 )
      return;
LABEL_10:
    sub_20B2EE0((__int64)v9, v6, a1 & 0xFFFFFFFFFFFFFFFCLL | 2);
    return;
  }
  *(_QWORD *)(a1 + 8 * v10) = v6;
  if ( v6 )
    goto LABEL_10;
}
