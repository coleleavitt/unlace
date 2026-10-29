__int64 __fastcall sub_110EEC0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rbp
  __int64 (*v4)(); // rax
  unsigned int v5; // r12d
  __int64 v6; // rax
  __int64 (*v7)(); // rax
  int v8; // r14d
  __int64 v9; // r15
  __int64 (*v10)(); // rax
  __int64 v11; // r13
  __int64 (*v12)(); // rax
  __int64 (*v14)(); // rax
  void *v15; // [rsp+0h] [rbp-A8h] BYREF
  signed __int64 v16; // [rsp+8h] [rbp-A0h]
  _BYTE v17[16]; // [rsp+10h] [rbp-98h] BYREF
  unsigned __int8 *v18[17]; // [rsp+20h] [rbp-88h] BYREF

  v2 = 1;
  v3 = a1[9];
  v4 = *(__int64 (**)())(*a1 + 160);
  if ( v4 != sub_10B43D0 )
    v2 = ((unsigned __int8 (__fastcall *)(__int64 *, __int64, __int64 (*)(), __int64))v4)(a1, a2, sub_10B43D0, 1);
  v5 = sub_2193B10(v3, 876, 1191, v2);
  v6 = *a1;
  if ( !(_BYTE)v5 )
  {
    v14 = *(__int64 (**)())(v6 + 176);
    if ( v14 != sub_10B43F0 && ((unsigned __int8 (__fastcall *)(__int64 *))v14)(a1) )
      goto LABEL_5;
LABEL_15:
    v8 = 495;
    goto LABEL_6;
  }
  v7 = *(__int64 (**)())(v6 + 168);
  if ( v7 != sub_10B43E0 && !((unsigned __int8 (__fastcall *)(__int64 *))v7)(a1) )
    goto LABEL_15;
LABEL_5:
  v8 = 605;
LABEL_6:
  v9 = sub_10B8FF0(a1[9], 0x4A7u);
  if ( v9 )
  {
    v10 = *(__int64 (**)())(*a1 + 176);
    if ( v10 == sub_10B43F0 || !((unsigned __int8 (__fastcall *)(__int64 *))v10)(a1) )
    {
      sub_FA3370((__int64)v18, *(_QWORD *)a1[1], 0, v8);
      sub_21922B0(&v15, v9, a1[9]);
      sub_AC84E0(v18, v15, v16);
      sub_AC84E0(v18, (_BYTE *)a1[2], a1[3]);
      if ( v15 != v17 )
        operator delete(v15);
      sub_AC6300((__int64)v18);
    }
  }
  v11 = sub_10B8FF0(a1[9], 0x36Cu);
  if ( v11 )
  {
    v12 = *(__int64 (**)())(*a1 + 168);
    if ( v12 != sub_10B43E0 && !((unsigned __int8 (__fastcall *)(__int64 *))v12)(a1) )
    {
      sub_FA3370((__int64)v18, *(_QWORD *)a1[1], 0, v8);
      sub_21922B0(&v15, v11, a1[9]);
      sub_AC84E0(v18, v15, v16);
      sub_AC84E0(v18, (_BYTE *)a1[2], a1[3]);
      if ( v15 != v17 )
        operator delete(v15);
      sub_AC6300((__int64)v18);
    }
  }
  return v5;
}

