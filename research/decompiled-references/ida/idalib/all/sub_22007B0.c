__int64 __fastcall sub_22007B0(__int64 *a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  void **v7; // rsi
  void **v8; // rax
  char v9; // r8
  unsigned __int8 v10; // r10
  __int64 v11; // rax
  unsigned __int8 v12; // cl
  __int64 v14; // rax
  unsigned int v15; // [rsp+Ch] [rbp-BCh]
  _QWORD v16[4]; // [rsp+10h] [rbp-B8h] BYREF
  _QWORD v17[4]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v18[4]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v19[11]; // [rsp+70h] [rbp-58h] BYREF

  v7 = (void **)a1[1];
  v8 = v7;
  if ( *v7 == &unk_26F7B20 )
    v8 = (void **)v7[1];
  v9 = *((_BYTE *)v8 + 20);
  v10 = v9 & 7;
  if ( (v9 & 7) == 1 )
    goto LABEL_14;
  v11 = a2[1];
  if ( *(_UNKNOWN **)v11 == &unk_26F7B20 )
    v11 = *(_QWORD *)(v11 + 8);
  v12 = *(_BYTE *)(v11 + 20) & 7;
  if ( v12 == 1 || v10 == 3 )
  {
LABEL_13:
    sub_21FFEF0(a3, a2);
    return 0;
  }
  if ( v12 == 3 )
    goto LABEL_14;
  if ( v12 | v10 )
  {
    if ( v10 )
    {
      if ( v12 )
      {
        sub_995620((__int64)v16, v7);
        sub_995620((__int64)v17, (_QWORD *)(a1[1] + 24));
        sub_995620((__int64)v18, (_QWORD *)a2[1]);
        sub_995620((__int64)v19, (_QWORD *)(a2[1] + 24));
        v15 = sub_2200B80(a3, v16, v17, v18, v19, a4);
        sub_9955A0(v19);
        sub_9955A0(v18);
        sub_9955A0(v17);
        sub_9955A0(v16);
        return v15;
      }
      goto LABEL_13;
    }
    goto LABEL_14;
  }
  if ( ((v9 & 8) != 0) == ((*(_BYTE *)(v11 + 20) & 8) != 0) )
  {
LABEL_14:
    sub_21FFEF0(a3, a1);
    return 0;
  }
  v14 = *(_QWORD *)(a3 + 8);
  if ( *(_UNKNOWN **)v14 == &unk_26F7B20 )
    v14 = *(_QWORD *)(v14 + 8);
  sub_2200650(a3, 0, (*(_BYTE *)(v14 + 20) & 8) != 0, nullptr);
  return 1;
}
