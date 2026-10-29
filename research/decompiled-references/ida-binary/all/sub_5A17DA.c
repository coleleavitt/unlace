__int64 __fastcall sub_5A17DA(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // r12
  void (__fastcall *v4)(__int64, __int64, _QWORD, __int64, __int64); // rbx
  __int64 v5; // r14
  __int64 v6; // r13
  unsigned int v7; // eax
  __int64 v8; // rax
  __int64 v10; // rax
  _QWORD v11[2]; // [rsp+10h] [rbp-60h] BYREF
  _BYTE v12[24]; // [rsp+20h] [rbp-50h] BYREF
  __int64 i; // [rsp+38h] [rbp-38h] BYREF
  __int64 v14; // [rsp+40h] [rbp-30h] BYREF
  __int64 v15; // [rsp+48h] [rbp-28h]

  for ( i = sub_5A49E0(*(_QWORD *)(a1 + 136)); ; sub_5A4A50(&i) )
  {
    v14 = sub_5A4A08(*(_QWORD *)(a1 + 136));
    if ( !(unsigned __int8)sub_5A4A2E(&i, &v14) )
      break;
    v1 = (_QWORD *)sub_59837C(*(_QWORD *)(a1 + 32));
    v2 = sub_5A4A70(&i);
    v15 = sub_5933C0(v1, *(_QWORD *)(v2 + 8));
    v3 = *(_QWORD *)(a1 + 32);
    v4 = *(void (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64))(*(_QWORD *)v3 + 64LL);
    v5 = *(_QWORD *)(sub_5A4A70(&i) + 8);
    v6 = *(_QWORD *)sub_5A4A70(&i);
    v7 = sub_5A3080(a1);
    v4(v3, v15, v7, v6, v5);
    sub_5A4100(v12, a1 + 40);
    v8 = sub_5A4A70(&i);
    if ( (unsigned __int8)sub_5A8344(v12, *(_QWORD *)(v8 + 8)) != 1 )
      return 0;
    v10 = sub_5A4A70(&i);
    sub_5A4176(v12, v15, *(_QWORD *)(v10 + 8));
    v11[0] = *(_QWORD *)sub_5A4A70(&i);
    v11[1] = sub_5A4152(v12);
    sub_5A472C(a1 + 80, v11);
  }
  return 1;
}
