__int64 __fastcall sub_15EEA90(__int64 a1, __int64 (__fastcall *a2)(__int64, __int64, _WORD *), __int64 a3)
{
  _QWORD *v3; // rbp
  __int64 result; // rax
  _QWORD *v5; // r14
  __int64 v8; // rsi
  _WORD *v9; // rbx
  __int16 v10; // ax
  __int64 *v11; // r15
  __int64 v12; // rsi
  __int64 v13; // [rsp+8h] [rbp-40h]

  v3 = *(_QWORD **)(a1 + 1664);
  result = *(unsigned int *)(a1 + 1672);
  v5 = &v3[result];
  if ( v5 != v3 )
  {
    while ( 1 )
    {
      v9 = (_WORD *)*v3;
      v10 = *(_WORD *)*v3 & 0x1FF;
      if ( v10 == 71 )
        break;
      if ( v10 == 46 )
      {
        v8 = *((_QWORD *)v9 + 3);
LABEL_5:
        result = a2(a3, v8, (_WORD *)*v3);
LABEL_6:
        if ( v5 == ++v3 )
          return result;
      }
      else
      {
        result = (__int64)(v9 + 16);
        v13 = (__int64)&v9[4 * *((unsigned int *)v9 + 7) + 16];
        if ( (_WORD *)v13 == v9 + 16 )
          goto LABEL_6;
        v11 = (__int64 *)(v9 + 16);
        do
        {
          v12 = *v11++;
          result = a2(a3, v12, v9);
        }
        while ( (__int64 *)v13 != v11 );
        if ( v5 == ++v3 )
          return result;
      }
    }
    if ( (*(_QWORD *)v9 & 0x200000LL) != 0 )
      v8 = *(_QWORD *)&v9[8 * ((*(_QWORD *)v9 & 0x80000LL) != 0) + 16];
    else
      v8 = *((_QWORD *)v9 + 2);
    goto LABEL_5;
  }
  return result;
}
