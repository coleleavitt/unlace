_QWORD *__fastcall sub_2202570(_QWORD *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  _QWORD *v6; // rax
  _QWORD *v8; // [rsp+0h] [rbp-C8h]
  _QWORD *v9; // [rsp+8h] [rbp-C0h]
  __int64 v10[4]; // [rsp+10h] [rbp-B8h] BYREF
  _QWORD v11[4]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v12[4]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v13[11]; // [rsp+70h] [rbp-58h] BYREF

  sub_995620((__int64)v12, (_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL));
  sub_C17060((__int64)v13, v12, a3, a4);
  sub_995620((__int64)v10, *(_QWORD **)(a2 + 8));
  sub_C17060((__int64)v11, v10, a3, a4);
  *a1 = &unk_26F7B20;
  v6 = (_QWORD *)operator new[](0x38u);
  *v6 = 2;
  v8 = v6 + 1;
  v9 = v6;
  sub_C16C20((__int64)(v6 + 1), v11);
  sub_C16C20((__int64)(v9 + 4), v13);
  a1[1] = v8;
  if ( (_UNKNOWN *)v11[0] == &unk_26F7B20 )
  {
    sub_A4F010((__int64)v11);
    if ( (_UNKNOWN *)v10[0] != &unk_26F7B20 )
    {
LABEL_3:
      sub_21F9170(v10);
      if ( (_UNKNOWN *)v13[0] != &unk_26F7B20 )
        goto LABEL_4;
LABEL_9:
      sub_A4F010((__int64)v13);
      if ( (_UNKNOWN *)v12[0] != &unk_26F7B20 )
        goto LABEL_5;
LABEL_10:
      sub_A4F010((__int64)v12);
      return a1;
    }
  }
  else
  {
    sub_21F9170(v11);
    if ( (_UNKNOWN *)v10[0] != &unk_26F7B20 )
      goto LABEL_3;
  }
  sub_A4F010((__int64)v10);
  if ( (_UNKNOWN *)v13[0] == &unk_26F7B20 )
    goto LABEL_9;
LABEL_4:
  sub_21F9170(v13);
  if ( (_UNKNOWN *)v12[0] == &unk_26F7B20 )
    goto LABEL_10;
LABEL_5:
  sub_21F9170(v12);
  return a1;
}
