_QWORD *__fastcall sub_4ECEF0(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rbx
  int v5; // r8d
  int v6; // r9d
  _QWORD *v7; // r14
  __int64 i; // rax
  __int64 v9; // r13
  __int64 v10; // rdi
  __int64 v11; // rsi
  void *v12; // r13
  int v14; // [rsp+1Ch] [rbp-5Ch] BYREF
  _QWORD v15[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v16[9]; // [rsp+30h] [rbp-48h] BYREF

  LODWORD(v4) = 0;
  v7 = (_QWORD *)sub_552E10(a1[4]);
  for ( i = *(_QWORD *)(a2 + 8); i; i = *(_QWORD *)(a2 + 8) )
  {
    if ( (unsigned int)v4 >= *(_DWORD *)(i - 4) )
      break;
    v9 = (unsigned int)v4;
    v10 = a1[1];
    v15[0] = 0;
    v16[0] = 1;
    v11 = *(_QWORD *)(i + 8LL * (unsigned int)v4);
    v15[1] = 0;
    v16[1] = 0;
    if ( !(unsigned __int8)sub_4ECAE0(v10, v11, (__int64)v15, &v14, v5, v6) )
    {
      sub_1872CE0("");
      sub_1873130(114, 72);
    }
    v4 = (unsigned int)(v4 + 1);
    sub_182A110(a1[4], *v7, v15, (unsigned int)(*(_DWORD *)(a1[15] + 4 * v4) - 1), *(unsigned int *)(a1[15] + 4 * v9));
    v12 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v15);
    sub_182CBA0(v12, v16);
  }
  return v7;
}

