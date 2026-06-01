__int64 __fastcall sub_38F950(__int64 a1)
{
  __int64 v2; // rsi
  __int64 *v3; // rdi
  __int64 v4; // r15
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdi
  void *v8; // rdi
  _QWORD *v9; // rdi
  _QWORD *v10; // rdi
  __int64 v11; // rbx
  char v12; // al
  _OWORD *v13; // rax
  __int64 result; // rax
  _QWORD v15[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = a1 + 24;
  v3 = *(__int64 **)(a1 + 40);
  v4 = *v3;
  sub_64C770(v3 + 4, v2);
  v5 = *(_QWORD **)(a1 + 40);
  if ( v5 )
  {
    v6 = v5[482];
    if ( v6 )
      sub_186B220((void *)(v6 - 8));
    v7 = v5[481];
    if ( v7 )
      sub_186B220((void *)(v7 - 8));
    v8 = (void *)v5[478];
    if ( v8 )
      sub_186B220(v8);
    v9 = (_QWORD *)v5[400];
    if ( v9 != v5 + 402 )
      operator delete(v9, v5[402] + 1LL);
    v10 = (_QWORD *)v5[396];
    if ( v10 != v5 + 398 )
      operator delete(v10, v5[398] + 1LL);
    sub_64D370(v5 + 4);
    sub_186B220(v5);
  }
  v11 = sub_186B270(0xF18u);
  v12 = *(_BYTE *)(a1 + 12);
  *(_QWORD *)v11 = v4;
  *(_BYTE *)(v11 + 8) = v12;
  sub_3932D0(v11 + 16);
  v15[0] = 0;
  sub_64C8D0(v11 + 32, v4, v11 + 16, v11 + 3064, v15);
  sub_18572D0(v15);
  v15[0] = 0;
  sub_2527E0(v11 + 3064, (__int64)v15);
  sub_18572D0(v15);
  v13 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(v11 + 3824) = v13;
  *(_QWORD *)(v11 + 3832) = 8;
  *(_DWORD *)(v11 + 3840) = 0;
  *v13 = 0;
  v13[1] = 0;
  v13[2] = 0;
  v13[3] = 0;
  *(_OWORD *)(v11 + 3848) = 0;
  result = sub_64C4C0(v11 + 32, a1 + 16);
  *(_QWORD *)(a1 + 40) = v11;
  return result;
}

