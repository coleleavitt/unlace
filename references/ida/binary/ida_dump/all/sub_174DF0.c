__int64 __fastcall sub_174DF0(__int64 *a1, char *a2, int **a3)
{
  __int64 v4; // rsi
  __int64 *v6; // r14
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // r9d
  __int64 v12; // rax
  bool v14; // al
  bool v15; // [rsp+Fh] [rbp-B9h]
  __int64 v16; // [rsp+18h] [rbp-B0h]
  char v17[16]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v18[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v19; // [rsp+40h] [rbp-88h] BYREF
  __int64 v20; // [rsp+48h] [rbp-80h]
  __int64 v21[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v22; // [rsp+70h] [rbp-58h] BYREF
  __int64 v23; // [rsp+78h] [rbp-50h]
  unsigned __int64 v24; // [rsp+88h] [rbp-40h]

  v4 = a1[2];
  v24 = __readfsqword(0x28u);
  v15 = 0;
  v16 = *(_QWORD *)(*(_QWORD *)(v4 + 64) + 1504LL);
  if ( (unsigned int)(**a3 - 8) <= 1 )
  {
    v14 = sub_11E4E0(a1[4]);
    v4 = a1[2];
    v15 = !v14;
  }
  sub_124680((__int64)v18, v4, a1[3], 0x801u);
  v6 = (__int64 *)a1[11];
  sub_64700(v18, v6);
  sub_3180C0(&v19, v6 + 2);
  if ( !(unsigned __int8)sub_64880(v18) || v20 )
  {
    sub_124680((__int64)v21, a1[2], a1[3], 1u);
    sub_64640(v18, v21, v8, v9, v10, v11);
    sub_317C60(&v19, &v22);
    if ( v22 )
    {
      v23 = 0;
      qfree();
    }
    qfree();
  }
  sub_123A40((__int64)v17, (unsigned __int8 *)*a3 + 64);
  sub_11CA10(a2, v17);
  if ( v15 )
  {
    sub_1273B0((unsigned __int64)a2, v16, *(_QWORD *)(a1[4] + 24), (*a3)[9]);
    sub_1207E0(a2, v16, **a3, *(_QWORD *)(a1[4] + 24), (*a3)[17]);
  }
  if ( !(unsigned __int8)sub_64880(v18) || v20 )
  {
    sub_124680((__int64)v21, a1[2], a1[3], 1u);
    if ( (unsigned __int8)sub_64780(v18, v21) )
    {
      if ( !v22 )
      {
LABEL_12:
        qfree();
LABEL_13:
        sub_11CA10(a2, v17);
        v7 = 0;
        goto LABEL_23;
      }
LABEL_11:
      v23 = 0;
      qfree();
      goto LABEL_12;
    }
    if ( (unsigned __int8)sub_318470(&v19, &v22) )
    {
      if ( !v22 )
        goto LABEL_12;
      goto LABEL_11;
    }
    if ( v22 )
    {
      v23 = 0;
      qfree();
    }
    qfree();
  }
  v12 = a1[12];
  if ( v12 && !(unsigned __int8)sub_157240(a1[2], *(_QWORD *)(v12 + 8), *(_QWORD *)(v12 + 8) + 16LL) )
    goto LABEL_13;
  v7 = 1;
  (*a3)[1] |= 0x20000u;
LABEL_23:
  sub_11CDA0((__int64)v17);
  if ( v19 )
  {
    v20 = 0;
    qfree();
  }
  qfree();
  return v7;
}
