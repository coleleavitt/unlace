__int64 __fastcall sub_174DF0(__int64 *a1, char *a2, unsigned int **a3)
{
  __int64 v5; // rsi
  __int64 *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r9d
  __int64 v16; // rax
  bool v18; // al
  char v19; // al
  bool v20; // [rsp+Fh] [rbp-B9h]
  __int64 v21; // [rsp+18h] [rbp-B0h]
  char v22[16]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v23[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v24; // [rsp+40h] [rbp-88h] BYREF
  __int64 v25; // [rsp+48h] [rbp-80h]
  __int64 v26[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v27; // [rsp+70h] [rbp-58h] BYREF
  __int64 v28; // [rsp+78h] [rbp-50h]
  unsigned __int64 v29; // [rsp+88h] [rbp-40h]

  v5 = a1[2];
  v29 = __readfsqword(0x28u);
  v20 = 0;
  v21 = *(_QWORD *)(*(_QWORD *)(v5 + 64) + 1504LL);
  if ( **a3 - 8 <= 1 )
  {
    v18 = sub_11E4E0(a1[4]);
    v5 = a1[2];
    v20 = !v18;
  }
  sub_124680((__int64)v23, v5, a1[3], 0x801u);
  v7 = (__int64 *)a1[11];
  sub_64700(v23, v7);
  sub_3180C0(&v24, v7 + 2);
  if ( !(unsigned __int8)sub_64880(v23) || v25 )
  {
    sub_124680((__int64)v26, a1[2], a1[3], 1u);
    sub_64640(v23, v26, v12, v13, v14, v15);
    sub_317C60(&v24, &v27);
    if ( v27 )
    {
      v28 = 0;
      qfree(v27);
    }
    qfree(v26[0]);
  }
  sub_123A40((__int64)v22, (unsigned __int8 *)*a3 + 64, v8, v9);
  sub_11CA10(a2, v22);
  if ( v20 )
  {
    sub_1273B0((unsigned __int64)a2, v21, *(_QWORD *)(a1[4] + 24), (*a3)[9]);
    sub_1207E0(a2, v21, **a3, *(_QWORD *)(a1[4] + 24), (*a3)[17]);
  }
  if ( !(unsigned __int8)sub_64880(v23) || v25 )
  {
    sub_124680((__int64)v26, a1[2], a1[3], 1u);
    if ( (unsigned __int8)sub_64780(v23, v26) )
    {
      v10 = v27;
      if ( !v27 )
      {
LABEL_12:
        qfree(v26[0]);
LABEL_13:
        sub_11CA10(a2, v22);
        v11 = 0;
        goto LABEL_23;
      }
LABEL_11:
      v28 = 0;
      qfree(v10);
      goto LABEL_12;
    }
    v19 = sub_318470(&v24, &v27);
    v10 = v27;
    if ( v19 )
    {
      if ( !v27 )
        goto LABEL_12;
      goto LABEL_11;
    }
    if ( v27 )
    {
      v28 = 0;
      qfree(v27);
    }
    qfree(v26[0]);
  }
  v16 = a1[12];
  if ( v16 && !(unsigned __int8)sub_157240(a1[2], *(_QWORD *)(v16 + 8), *(_QWORD *)(v16 + 8) + 16LL) )
    goto LABEL_13;
  v11 = 1;
  (*a3)[1] |= 0x20000u;
LABEL_23:
  sub_11CDA0((__int64)v22);
  if ( v24 )
  {
    v25 = 0;
    qfree(v24);
  }
  qfree(v23[0]);
  return v11;
}
