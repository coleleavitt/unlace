__int64 __fastcall sub_C331D0(__int64 a1, __int64 a2)
{
  char v2; // r12
  unsigned int v3; // ebp
  __int64 v4; // rbp
  unsigned int v5; // r15d
  __int64 v6; // rax
  _BYTE *v8; // rax
  int *v9; // rax
  __int16 v10; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v11; // [rsp+8h] [rbp-D0h]
  __int64 v12[2]; // [rsp+10h] [rbp-C8h] BYREF
  unsigned int v13; // [rsp+20h] [rbp-B8h] BYREF
  char v14; // [rsp+24h] [rbp-B4h]
  int v15[30]; // [rsp+60h] [rbp-78h] BYREF

  v10 = 0;
  v11 = a2;
  v14 &= ~1u;
  v2 = sub_B4FBC0(a1);
  v13 = 0;
  if ( sub_B4FB90(a1) && *(_DWORD *)sub_B4FB90(a1) )
  {
    v9 = (int *)sub_B4FB90(a1);
    sub_A30FE0((__int64)&v13, v9);
  }
  else
  {
    v3 = sub_C02A80(*(_QWORD *)(a1 + 48), (__int64)&v13);
    if ( !(_BYTE)v3 )
      goto LABEL_7;
  }
  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(_DWORD *)(a1 + 24);
  sub_A2BB60((__int64)v15, (__int64)&v13);
  sub_A2B560((__int64)v12, a1, 0, 0);
  v6 = sub_B685F0(a1);
  v3 = sub_C32B90(v6, v12[0], (__int64 *)v12[1], v15, v4, v5, &v10, v2);
  if ( !(_BYTE)v3 || (_BYTE)v10 )
  {
    v3 = 0;
    if ( v15[0] > 1u )
    {
      v3 = 0;
      sub_A2BBA0(v15);
    }
  }
  else
  {
    if ( v15[0] > 1u )
      sub_A2BBA0(v15);
    v8 = (_BYTE *)sub_B58190(a1);
    *v8 |= 8u;
  }
LABEL_7:
  if ( v13 > 1 )
    sub_A2BBA0((int *)&v13);
  return v3;
}

