__int64 __fastcall sub_22018C0(__int64 a1, __int64 *a2, unsigned int a3)
{
  void **v5; // rsi
  void **v6; // rax
  int v7; // eax
  __int64 v8; // rdx
  int v9; // edx
  bool v10; // cl
  bool v11; // dl
  unsigned int v12; // r15d
  __int64 *v14; // rax
  unsigned __int8 v15; // al
  __int64 v16; // rdx
  __int64 v17; // rdx
  int v18; // r15d
  int v19; // r15d
  int v20; // r15d
  int v21; // r15d
  __int64 *v22; // rax
  int v23; // r12d
  int v24; // [rsp+18h] [rbp-150h]
  _QWORD v25[4]; // [rsp+30h] [rbp-138h] BYREF
  _QWORD v26[4]; // [rsp+50h] [rbp-118h] BYREF
  _QWORD v27[4]; // [rsp+70h] [rbp-F8h] BYREF
  _QWORD v28[4]; // [rsp+90h] [rbp-D8h] BYREF
  __int64 v29[4]; // [rsp+B0h] [rbp-B8h] BYREF
  __m128i v30[2]; // [rsp+D0h] [rbp-98h] BYREF
  _QWORD v31[4]; // [rsp+F0h] [rbp-78h] BYREF
  __int64 v32[11]; // [rsp+110h] [rbp-58h] BYREF

  v5 = *(void ***)(a1 + 8);
  v6 = v5;
  if ( *v5 == &unk_26F7B20 )
    v6 = (void **)v5[1];
  v7 = *((_BYTE *)v6 + 20) & 7;
  if ( v7 == 1 )
    goto LABEL_10;
  v8 = a2[1];
  if ( *(_UNKNOWN **)v8 == &unk_26F7B20 )
  {
    v9 = *(_BYTE *)(*(_QWORD *)(v8 + 8) + 20LL) & 7;
    if ( v9 == 1 )
      goto LABEL_13;
  }
  else
  {
    v9 = *(_BYTE *)(v8 + 20) & 7;
    if ( v9 == 1 )
      goto LABEL_13;
  }
  v10 = v9 == 0;
  if ( !v9 && v7 == 3 )
    goto LABEL_25;
  v11 = v9 == 3;
  if ( !v7 )
  {
    if ( !v11 )
    {
LABEL_10:
      v12 = 0;
      sub_21FFEF0(a1, (__int64 *)a1);
      return v12;
    }
LABEL_25:
    sub_2200650(a1, 0, 0, nullptr);
    return 0;
  }
  if ( v7 == 3 )
    goto LABEL_10;
  if ( v10 || v11 )
  {
LABEL_13:
    v12 = 0;
    sub_21FFEF0(a1, a2);
    return v12;
  }
  sub_995620((__int64)v25, v5);
  sub_995620((__int64)v26, (_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL));
  sub_995620((__int64)v27, (_QWORD *)a2[1]);
  sub_995620((__int64)v28, (_QWORD *)(a2[1] + 24));
  sub_995620((__int64)v29, v25);
  if ( (_UNKNOWN *)v29[0] == &unk_26F7B20 )
    v12 = sub_22018C0(v29, v27, a3);
  else
    v12 = sub_21FEB40(v29, (__int64)v27, a3);
  v14 = v29;
  if ( (_UNKNOWN *)v29[0] == &unk_26F7B20 )
    v14 = (__int64 *)v29[1];
  v15 = *((_BYTE *)v14 + 20) & 7;
  if ( v15 <= 1u || v15 == 3 )
  {
    sub_C17220(*(__int64 **)(a1 + 8), v29);
    sub_C16C60((_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), 0);
  }
  else
  {
    sub_995620((__int64)v30, v25);
    sub_2011A60(v29, (__int64)v25, v16);
    if ( (_UNKNOWN *)v30[0].m128i_i64[0] == &unk_26F7B20 )
      v24 = sub_2201720(v30, (__int64)v27, (__int64)v29, a3);
    else
      v24 = sub_21FE3E0(v30, (__int64)v27, (__int64)v29, a3);
    sub_2011A60(v29, (__int64)v27, v17);
    sub_995620((__int64)v31, v25);
    v18 = v24 | sub_2201C80(v31, v28, a3) | v12;
    sub_995620((__int64)v32, v26);
    v19 = sub_2201C80(v32, v27, a3) | v18;
    v20 = sub_C16CE0(v31, (__int64)v32, a3) | v19;
    v21 = sub_C16CE0(v30, (__int64)v31, a3) | v20;
    sub_9955A0(v32);
    sub_9955A0(v31);
    sub_995620((__int64)v32, v29);
    v12 = sub_C16CE0(v32, (__int64)v30, a3) | v21;
    sub_C17220(*(__int64 **)(a1 + 8), v32);
    v22 = v32;
    if ( (_UNKNOWN *)v32[0] == &unk_26F7B20 )
      v22 = (__int64 *)v32[1];
    if ( (*((_BYTE *)v22 + 20) & 7u) > 1 )
    {
      v23 = sub_C16D20(v29, (__int64)v32, a3);
      v12 |= v23 | sub_C16CE0(v29, (__int64)v30, a3);
      sub_C17220((__int64 *)(*(_QWORD *)(a1 + 8) + 24LL), v29);
    }
    else
    {
      sub_C16C60((_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), 0);
    }
    sub_9955A0(v32);
    sub_9955A0(v30);
  }
  sub_9955A0(v29);
  sub_9955A0(v28);
  sub_9955A0(v27);
  sub_9955A0(v26);
  sub_9955A0(v25);
  return v12;
}
