__int64 __fastcall sub_1685EB0(__int64 a1, __int64 a2, __int64 a3, __m128 a4)
{
  __int64 *v5; // rsi
  __int64 v6; // r13
  unsigned int v7; // ebx
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbp
  int v14; // eax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 i; // rax
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 vars0[7]; // [rsp+0h] [rbp+0h] BYREF

  vars0[0] = a2;
  v5 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  vars0[1] = a3;
  v6 = *v5;
  v7 = sub_F6CCB0(vars0, a4);
  v8 = sub_F6CE20(vars0);
  if ( !v7 )
    return 1;
  v12 = v8;
  if ( !v8 )
    return 1;
  v14 = *(unsigned __int8 *)(v6 + 16);
  v15 = (unsigned int)(v14 - 47);
  if ( (unsigned int)v15 > 1 )
  {
    if ( (_BYTE)v14 == 53 )
    {
      sub_16841F0(a1, *(_QWORD **)(v6 + 32), (v12 << 32) | v7, 0, v10, v11, (__m128i)a4);
      return 1;
    }
    if ( (unsigned int)(v14 - 35) > 1 )
      return 1;
    for ( i = *(_QWORD *)(v6 + 24); ; i = *(_QWORD *)(v20 + 24) )
    {
      v20 = *(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL);
      v21 = *(unsigned __int8 *)(v20 + 16);
      if ( (unsigned int)(v21 - 35) > 1 )
      {
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 35 > 1 )
          return 1;
        v22 = sub_F63050(v20, v5, v21, v15);
        v20 = v22;
        if ( !v22 )
          return 1;
        v21 = *(unsigned __int8 *)(v22 + 16);
      }
      if ( (_BYTE)v21 == 36 )
        break;
    }
    v16 = (_QWORD *)sub_F62610(v20, (__int64)v5, v21, v15, v10, v11);
    if ( !v16 )
      return 1;
  }
  else
  {
    v16 = sub_F60F10(v6, (__int64)v5, v9, v15, v10, v11);
  }
  sub_16841F0(a1, v16, (v12 << 32) | v7, 0, v17, v18, (__m128i)a4);
  return 1;
}
