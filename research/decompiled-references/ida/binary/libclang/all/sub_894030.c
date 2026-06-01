__int64 __fastcall sub_894030(__int64 a1, unsigned __int64 a2)
{
  bool v2; // bp
  unsigned int v3; // r15d
  __int64 v4; // r14
  __int64 v5; // rax
  unsigned int v6; // ebp
  char v7; // r14
  _BYTE *v8; // rax
  _BYTE *v10; // rax
  __int16 v11; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-D0h]
  __int64 v13[2]; // [rsp+10h] [rbp-C8h] BYREF
  unsigned int v14; // [rsp+20h] [rbp-B8h] BYREF
  char v15; // [rsp+24h] [rbp-B4h]
  _DWORD v16[30]; // [rsp+60h] [rbp-78h] BYREF

  v11 = 0;
  v12 = a2;
  v15 &= ~1u;
  v14 = 0;
  v2 = sub_77C620(a1, a2);
  if ( sub_77C4E0(a1) && *(_DWORD *)sub_77C4E0(a1) )
  {
    v10 = sub_77C4E0(a1);
    sub_6A63E0((__int64)&v14, (__int64)v10);
  }
  else if ( !(unsigned __int8)sub_8312C0(*(_QWORD *)(a1 + 48), (__int64)&v14) )
  {
    goto LABEL_13;
  }
  v3 = *(_DWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 48);
  sub_69F700((__int64)v16, (int *)&v14);
  sub_69F1C0((__int64)v13, a1, 0, 0);
  v5 = sub_798D40(a1);
  v6 = sub_893900(v5, v13[0], v13[1], (__int64)v16, v4, v3, &v11, v2);
  if ( (_BYTE)v6 )
  {
    v7 = v11;
    if ( v16[0] > 1u )
      sub_69F740((__int64)v16);
    if ( !v7 )
    {
      v8 = (_BYTE *)sub_77C090(a1);
      *v8 |= 8u;
      goto LABEL_9;
    }
    goto LABEL_13;
  }
  if ( v16[0] <= 1u )
  {
LABEL_13:
    v6 = 0;
    goto LABEL_9;
  }
  v6 = 0;
  sub_69F740((__int64)v16);
LABEL_9:
  if ( v14 > 1 )
    sub_69F740((__int64)&v14);
  return v6;
}

