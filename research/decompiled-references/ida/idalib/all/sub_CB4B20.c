__int64 __fastcall sub_CB4B20(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rax
  int v5; // eax
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  unsigned int v10; // r14d
  __int64 v11; // rax
  __int64 i; // [rsp+0h] [rbp-58h]
  __int64 v13; // [rsp+8h] [rbp-50h]
  _QWORD v14[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a2 + 16);
  v3 = sub_CB4B10(a1);
  v14[0] = 0;
  v13 = v3;
  if ( !(unsigned __int8)sub_D00AF0(a1, v14) )
    return 0;
  v5 = sub_E29180(13);
  v6 = *(_QWORD *)(v2 + 120);
  v9 = (v5 + 7) & 0xFFFFFFF8;
  for ( i = v6 + 8LL * (unsigned int)sub_B76070(v2, (__int64)v14, v7, v8); i != v6; v9 += (sub_E29180(v10) + 7)
                                                                                        & 0xFFFFFFF8 )
  {
    v10 = 13;
    v11 = sub_CE6180(*(_QWORD *)(a1 + 1264), *(_QWORD *)(*(_QWORD *)v6 + 48LL));
    v14[0] = a2 | 4;
    if ( BYTE4(v11) )
      v10 = v11;
    if ( !(unsigned __int8)sub_D88CE0(a1, v10, v9, v14) )
      return 0;
    v6 += 8;
  }
  v14[0] = a2 | 4;
  return sub_CFFC60(a1, v13, 0, v14);
}
