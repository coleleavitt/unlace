_QWORD *__fastcall sub_4ED350(__int64 a1, _QWORD *a2, __int64 *a3, unsigned int a4)
{
  unsigned __int32 v6; // r15d
  _QWORD *v7; // rbp
  _QWORD *v8; // r12
  __int64 v9; // rax
  unsigned int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r14
  int v14; // r8d
  int v15; // r9d
  _QWORD *v16; // rax
  __int64 v17; // rdx
  void *v18; // rbx
  __int64 v20; // [rsp+8h] [rbp-70h]
  int v21; // [rsp+1Ch] [rbp-5Ch] BYREF
  _QWORD v22[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v23[9]; // [rsp+30h] [rbp-48h] BYREF

  if ( a1 != a2[1] )
    return nullptr;
  v6 = 0;
  v7 = (_QWORD *)sub_186B270(0x18u);
  v20 = *a3;
  v8 = sub_4EC5D0(a2);
  *v7 = &off_1C4FEC0;
  v9 = v8[2];
  if ( v9 )
  {
    v10 = 0;
    do
    {
      if ( v10 >= *(_DWORD *)(v9 - 4) )
        break;
      v11 = v10++;
      v6 += sub_4ED1A0(a1, *(_QWORD *)(v9 + 8 * v11));
      v9 = v8[2];
    }
    while ( v9 );
  }
  v12 = sub_4EC660(a1, v6);
  v7[1] = v12;
  v13 = v12;
  v22[0] = 0;
  v22[1] = 0;
  v23[0] = 1;
  v23[1] = 0;
  if ( !(unsigned __int8)sub_4ECAE0(a1, v20, (__int64)v22, &v21, v14, v15) )
  {
    sub_1872CE0("");
    sub_1873130(114, 595);
  }
  v16 = (_QWORD *)sub_552E50(v13);
  v17 = v8[15];
  v7[2] = v16;
  sub_182A110(v13, *v16, v22, (unsigned int)(*(_DWORD *)(v17 + 4LL * (a4 + 1)) - 1), *(unsigned int *)(v17 + 4LL * a4));
  v18 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v22);
  sub_182CBA0(v18, v23);
  return v7;
}

