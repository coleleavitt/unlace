__int64 __fastcall sub_CD9BA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebx
  __int64 v7; // r13
  __int64 v9; // rax
  __int64 v10; // rsi
  int *v11; // rax
  _QWORD v12[8]; // [rsp+8h] [rbp-40h] BYREF

  v5 = *(unsigned __int8 *)(a1 + 1360);
  if ( (_BYTE)v5 )
    return 1;
  v7 = *(_QWORD *)(a2 + 24);
  if ( (*(_BYTE *)(sub_F63240(*(_QWORD *)(*(_QWORD *)(v7 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5) + 74) & 1) == 0 )
  {
    v12[0] = v7 & 0xFFFFFFFFFFFFFFFDLL;
    return (unsigned int)sub_CB5EC0(a1, (__int64)v12, a2);
  }
  v9 = sub_E2FAD0(*(_QWORD *)(a1 + 1272), v7, 0);
  if ( BYTE4(v9) )
  {
    v10 = (unsigned int)v9;
    v12[0] = a2 | 4;
    if ( (unsigned __int8)sub_D06300(a1, (unsigned int)v9, v12) )
    {
      v11 = (int *)sub_B9D030(v7, v10);
      if ( !*v11 )
        return 1;
      if ( (unsigned __int8)sub_CD97D0(a1, v11, a2, *(_QWORD *)(a2 + 8)) )
      {
        v12[0] = a2 | 4;
        return (unsigned int)sub_D00E60(a1, v12);
      }
    }
  }
  return v5;
}
