__int64 __fastcall sub_447FE0(__int64 a1, __int64 a2)
{
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rax
  __int64 v5; // rbp
  unsigned __int8 v6; // al
  __int64 v7; // rax
  void *v8; // rbx
  unsigned __int8 v10; // [rsp+Fh] [rbp-89h]
  unsigned int v11; // [rsp+1Ch] [rbp-7Ch] BYREF
  _BYTE v12[32]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v14[9]; // [rsp+50h] [rbp-48h] BYREF

  sub_16744A0(v12, a1);
  v4 = *(_QWORD *)(a2 + 32);
  v13[0] = 0;
  v13[1] = 0;
  v14[0] = 1;
  v14[1] = 0;
  if ( v4 && (v11 = *(_DWORD *)(v4 - 4)) != 0 )
  {
    v5 = 0;
    while ( 1 )
    {
      v7 = *(_QWORD *)(a2 + 8)
         + 24LL * (unsigned int)(*(_DWORD *)(v4 + 8 * v5) + *(_DWORD *)(a2 + 20) * *(_DWORD *)(v4 + 8 * v5 + 4));
      if ( *(_DWORD *)(v7 + 16) != *(_DWORD *)(a2 + 24) )
      {
        sub_1872CE0("");
        sub_1873130(114, 157);
      }
      v6 = sub_1673B50((unsigned int)v12, *(_QWORD *)v7, (unsigned int)v13, (unsigned int)&v11, v2, v3);
      if ( v6 )
        break;
      if ( (unsigned int)++v5 >= v11 )
        goto LABEL_10;
      v4 = *(_QWORD *)(a2 + 32);
    }
  }
  else
  {
LABEL_10:
    v6 = 0;
  }
  v10 = v6;
  v8 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v13);
  sub_182CBA0(v8, v14);
  return v10;
}

