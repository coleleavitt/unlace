__int64 __fastcall sub_154EC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  unsigned __int8 *v5; // rdx
  __int128 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v10; // rax
  char v11; // al
  __int64 v12[2]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+10h] [rbp-98h] BYREF
  __int128 v14; // [rsp+18h] [rbp-90h]
  _QWORD v15[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v16; // [rsp+40h] [rbp-68h] BYREF
  __int128 v17; // [rsp+48h] [rbp-60h]
  _QWORD v18[9]; // [rsp+60h] [rbp-48h]

  v3 = 0;
  v18[3] = __readfsqword(0x28u);
  v18[0] = a2;
  v18[1] = a3;
  while ( 1 )
  {
    v5 = (unsigned __int8 *)v18[v3];
    v14 = 0;
    v12[0] = 0;
    v12[1] = 0;
    v13 = 0;
    sub_1269C0(a1, v12, v5, 0x4001u);
    if ( (unsigned __int8)sub_63F80(v12) && !(_QWORD)v14 )
    {
      if ( v13 )
        qfree();
      goto LABEL_13;
    }
    *(_QWORD *)&v6 = a1;
    v15[0] = 0;
    v7 = v18[(int)(v3 ^ 1)];
    v17 = 0;
    v15[1] = 0;
    *((_QWORD *)&v6 + 1) = v15;
    v16 = 0;
    sub_1219A0(v6, v7, 1u, 0xFFFF0000);
    if ( (unsigned __int8)sub_63E80(v12, v15) )
      break;
    v11 = sub_314F20(&v13, &v16);
    v8 = v16;
    if ( v11 )
      goto LABEL_6;
    if ( v16 )
    {
      *(_QWORD *)&v17 = 0;
      qfree();
    }
    qfree();
    if ( v13 )
    {
      *(_QWORD *)&v14 = 0;
      qfree();
    }
LABEL_13:
    qfree();
    v10 = v3 + 1;
    v3 = 1;
    if ( v10 == 2 )
      return 1;
  }
  v8 = v16;
LABEL_6:
  if ( v8 )
  {
    *(_QWORD *)&v17 = 0;
    qfree();
  }
  qfree();
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree();
  }
  qfree();
  return 0;
}
