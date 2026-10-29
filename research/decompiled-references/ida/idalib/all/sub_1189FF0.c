__int64 __fastcall sub_1189FF0(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  __int64 (*v4)(); // rax
  unsigned int v5; // r13d
  _BYTE *v9; // rsi
  __int64 v10; // rdx
  void *v11[2]; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+10h] [rbp-B8h] BYREF
  void *v13[2]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v14[16]; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int8 *v15[17]; // [rsp+40h] [rbp-88h] BYREF

  v4 = *(__int64 (**)())(*a4 + 456LL);
  if ( v4 == sub_10D82A0 )
    return 1;
  v5 = ((__int64 (__fastcall *)(_QWORD *, __int64))v4)(a4, a1);
  if ( (_BYTE)v5 )
  {
    return 1;
  }
  else
  {
    sub_FC70B0((__int64)v15, *a3, 0, 599);
    sub_21B5FF0(v11, a1, a2);
    sub_AEC220(v15, (_BYTE *)v11[0], (signed __int64)v11[1]);
    v9 = (_BYTE *)a4[2];
    v10 = (__int64)&v9[a4[3]];
    v13[0] = v14;
    sub_1189220(v13, v9, v10);
    sub_AEC220(v15, (_BYTE *)v13[0], (signed __int64)v13[1]);
    if ( v13[0] != v14 )
      operator delete(v13[0]);
    if ( v11[0] != &v12 )
      operator delete(v11[0]);
    sub_AEA040((__int64)v15);
  }
  return v5;
}
