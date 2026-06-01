__int64 __fastcall sub_C8D580(_QWORD *a1, __int64 a2)
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
  __int64 v14[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a2 + 16);
  v3 = sub_C8D570((__int64)a1);
  v14[0] = 0;
  v13 = v3;
  if ( !(unsigned __int8)sub_C7D320((__int64)a1, v14) )
    return 0;
  v5 = sub_E05440(13);
  v6 = *(_QWORD *)(v2 + 120);
  v9 = (v5 + 7) & 0xFFFFFFF8;
  for ( i = v6 + 8LL * (unsigned int)sub_B52330(v2, (__int64)v14, v7, v8); i != v6; v9 += (sub_E05440(v10) + 7)
                                                                                        & 0xFFFFFFF8 )
  {
    v10 = 13;
    v11 = sub_CC2440(a1[61], *(_QWORD *)(*(_QWORD *)v6 + 48LL));
    v14[0] = a2 | 4;
    if ( BYTE4(v11) )
      v10 = v11;
    if ( !(unsigned __int8)sub_C80C90((__int64)a1, v10, v9, v14) )
      return 0;
    v6 += 8;
  }
  v14[0] = a2 | 4;
  return sub_C837F0(a1, v13, 0, v14);
}

