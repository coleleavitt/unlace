__int64 *__fastcall sub_15BAD10(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdi
  _QWORD *v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax

  v3 = *(_QWORD **)(a1 + 24);
  if ( !v3 )
  {
    sub_15B91E0((__int64 **)a1);
    v3 = *(_QWORD **)(a1 + 24);
  }
  v4 = *(_QWORD **)(**(_QWORD **)a1 + 248LL);
  v7 = sub_B987D0(v3, a2);
  v8 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v8 + 16) - 43 <= 1
    || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 <= 1
    && (v8 = sub_F63050(v8, a2, v5, v6)) != 0 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(v8 + 32);
      if ( (*(_BYTE *)(v8 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v9 = v7 & 0xFFFFFFFFFFFFFFF0LL;
        v8 = *(_QWORD *)v9;
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v9 + 16LL) - 43 <= 1 )
          break;
        v10 = sub_F63050(v8, a2, v5, v6);
        v7 = *(_QWORD *)(v10 + 32);
        if ( (*(_BYTE *)(v10 + 18) & 0x10) == 0 )
          goto LABEL_7;
      }
    }
  }
LABEL_7:
  v11 = sub_C95530((__int64)v4, 0, v7, 1);
  v12 = sub_15BAC80(*(_QWORD *)a1);
  return sub_C0C460(
           v4,
           v11,
           0,
           0,
           0,
           0,
           0,
           v12,
           v12 | (*(_BYTE *)(v12 + 29) >> 5) & 3,
           0,
           0,
           0,
           0,
           *(_QWORD *)(v12 + 48),
           1,
           0,
           0);
}
