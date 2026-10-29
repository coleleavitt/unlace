__int64 __fastcall sub_E40460(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // r15
  __int64 v6; // r14
  size_t v7; // rax
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  size_t v11; // rax
  _QWORD v12[2]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v13; // [rsp+10h] [rbp-88h] BYREF
  __int64 v14; // [rsp+18h] [rbp-80h]
  int v15; // [rsp+20h] [rbp-78h]
  __int16 v16; // [rsp+30h] [rbp-68h] BYREF
  __int64 v17; // [rsp+38h] [rbp-60h]
  __int64 v18; // [rsp+40h] [rbp-58h]
  int v19; // [rsp+48h] [rbp-50h]

  v5 = sub_C70080(a2, *(_QWORD **)(a1 + 1232), a3, a4, a5);
  v6 = *(_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  sub_E3FD20((__int64)&v13, a1, v6, 1);
  v16 = 7;
  v17 = v13;
  v13 = 0;
  v18 = v14;
  v14 = 0;
  v19 = v15;
  v15 = 0;
  v7 = j__strlen("typeArg");
  sub_2206E30(a1 + 1048, "typeArg", v7);
  sub_2208D80(a1 + 1048, &v16);
  sub_2205EB0(a1 + 1048);
  sub_2207560(&v16);
  result = sub_E395A0(&v13);
  if ( v5 != v6 )
  {
    sub_E3FD20((__int64)&v13, a1, v5, 1);
    v16 = 7;
    v9 = v13;
    v13 = 0;
    v17 = v9;
    v10 = v14;
    v14 = 0;
    v18 = v10;
    LODWORD(v10) = v15;
    v15 = 0;
    v19 = v10;
    v11 = j__strlen("adjustedTypeArg");
    v12[0] = &v16;
    v12[1] = a1 + 1048;
    sub_E34890(a1 + 1048, (__int64)"adjustedTypeArg", v11, (__int64)sub_E34840, v12);
    sub_2207560(&v16);
    return sub_E395A0(&v13);
  }
  return result;
}

