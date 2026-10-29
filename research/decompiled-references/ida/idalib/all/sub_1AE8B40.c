__int64 __fastcall sub_1AE8B40(_QWORD **a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rbx
  _QWORD *v5; // r14
  _QWORD *i; // r15
  __int64 v7; // r12
  __int64 v8; // rbp
  __int16 v9; // dx
  __int16 v10; // ax

  v3 = 16 * a3;
  v4 = a2 + v3;
  v5 = (_QWORD *)**a1;
  if ( a2 + v3 == a2 )
    return 1;
  for ( i = &v5[2 * *((unsigned int *)*a1 + 2) - 2]; ; i -= 2 )
  {
    v9 = *(_WORD *)(*i & 0xFFFFFFFFFFFFFFFCLL) & 0x1FF;
    v10 = *(_WORD *)(*(_QWORD *)(v4 - 16) & 0xFFFFFFFFFFFFFFFCLL) & 0x1FF;
    if ( v9 != v10 && (v10 != 44 && v10 != 124 || v9 != 123) )
      break;
    v7 = i[1];
    v8 = *(_QWORD *)(v4 - 8);
    if ( !v7 )
    {
      if ( !v8 )
      {
        if ( v5 == i )
          return 1;
        goto LABEL_7;
      }
LABEL_4:
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
      goto LABEL_5;
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 32LL))(i[1]);
    if ( v8 )
      goto LABEL_4;
LABEL_5:
    if ( v8 != v7 )
      return 0;
    if ( v5 == i )
      return 1;
LABEL_7:
    v4 -= 16;
    if ( v4 == a2 )
      return 1;
  }
  return 0;
}
