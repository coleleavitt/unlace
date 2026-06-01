__int64 __fastcall sub_DC7130(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 i; // rbx
  __int64 v11; // rsi
  unsigned __int8 **v12; // r13
  void *v13[2]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v14; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v15[24]; // [rsp+20h] [rbp-58h] BYREF
  int v16; // [rsp+38h] [rbp-40h]
  __int64 v17; // [rsp+40h] [rbp-38h]
  unsigned int v18; // [rsp+48h] [rbp-30h]

  v5 = *(_QWORD *)(a1 + 400);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 80LL) + 144LL * a3;
  v7 = *(_QWORD *)v6;
  v8 = *(_QWORD *)v6 + 16LL * *(unsigned int *)(v6 + 8);
  if ( v8 == *(_QWORD *)v6 )
  {
LABEL_8:
    sub_E1EE20(v5, a3);
    return 1;
  }
  else
  {
    for ( i = v8 - 16; ; i -= 16 )
    {
      sub_E1EE80(v15);
      if ( !v16 && v18 > 0xF && *(_BYTE *)(v17 + v18 + 30) == 1 )
        break;
      sub_E232A0(v15);
      v5 = *(_QWORD *)(a1 + 400);
      if ( v7 == i )
        goto LABEL_8;
    }
    v11 = *(_QWORD *)sub_CFDF60((__int64)v15);
    if ( (v11 & 2) != 0 )
      BUG();
    v12 = (unsigned __int8 **)sub_E33C80(a1, *(unsigned int *)((v11 & 0xFFFFFFFFFFFFFFFCLL) + 24), 2404, 0);
    sub_B86A00((__int64)v13, (__int64 *)((v11 & 0xFFFFFFFFFFFFFFFCLL) + 40));
    if ( v12 )
      sub_AEC220(v12, (_BYTE *)v13[0], (signed __int64)v13[1]);
    if ( v13[0] != &v14 )
      operator delete(v13[0]);
    sub_E232A0(v15);
    return 0;
  }
}
