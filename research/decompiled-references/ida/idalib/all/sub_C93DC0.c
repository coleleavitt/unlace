unsigned __int64 __fastcall sub_C93DC0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v13; // rdx
  __int64 v14; // [rsp+18h] [rbp-10h] BYREF

  v6 = *(_QWORD *)(a1 + 16);
  v14 = 0;
  v7 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
  v8 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v8 + 16) - 43 <= 1
    || (v13 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43,
        (unsigned int)v13 <= 1)
    && (v8 = sub_F63050(v8, v7, v13, a4)) != 0 )
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
        v10 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v9 + 16LL) - 43;
        if ( (unsigned int)v10 <= 1 )
          break;
        v11 = sub_F63050(v8, v9, v10, a4);
        v7 = *(_QWORD *)(v11 + 32);
        if ( (*(_BYTE *)(v11 + 18) & 0x10) == 0 )
          return sub_A725A0(a2, v7, &v14, a4, a5);
      }
    }
  }
  return sub_A725A0(a2, v7, &v14, a4, a5);
}
