__int64 __fastcall sub_175D570(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // rsi
  unsigned __int16 **v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rbx
  char v10; // [rsp+Fh] [rbp-59h] BYREF
  __int64 v11; // [rsp+10h] [rbp-58h] BYREF
  char v12; // [rsp+18h] [rbp-50h]
  void *ptr; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+28h] [rbp-40h]
  _BYTE v15[56]; // [rsp+30h] [rbp-38h] BYREF

  v2 = a2;
  v3 = *(_QWORD *)(a2 + 48);
  if ( (v3 & 4) != 0 )
  {
    v4 = v3 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v4 )
      v2 = v4;
  }
  v5 = *a1;
  v10 = 0;
  sub_14EE070((__int64)&v11, v5, 0, 1);
  v6 = *(unsigned __int16 ***)(v2 + 16);
  v7 = *(_QWORD *)(v2 + 24) - (_QWORD)v6;
  ptr = v15;
  v14 = 0x400000000LL;
  if ( (unsigned __int8)sub_175C6E0(a1, v6, v7 >> 3, 0, (__int64)&ptr, &v10) )
    v8 = 1;
  else
    v8 = sub_1909BB0(*a1, *(unsigned int *)(v2 + 40), ptr, (unsigned int)v14, *(unsigned int *)(v2 + 44));
  if ( ptr != v15 )
    free(ptr);
  if ( v12 )
    sub_190D5E0(v11);
  return v8;
}
