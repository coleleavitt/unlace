__int64 __fastcall sub_174830(__int64 *a1, char *a2, int **a3)
{
  __int64 v5; // rsi
  __int64 *v7; // r14
  __int64 v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  __int64 v14; // rax
  bool v16; // al
  char v17; // al
  bool v18; // [rsp+Fh] [rbp-B9h]
  __int64 v19; // [rsp+18h] [rbp-B0h]
  char v20[16]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v21[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v22; // [rsp+40h] [rbp-88h] BYREF
  __int64 v23; // [rsp+48h] [rbp-80h]
  __int64 v24[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v25; // [rsp+70h] [rbp-58h] BYREF
  __int64 v26; // [rsp+78h] [rbp-50h]
  unsigned __int64 v27; // [rsp+88h] [rbp-40h]

  v5 = a1[2];
  v27 = __readfsqword(0x28u);
  v18 = 0;
  v19 = *(_QWORD *)(*(_QWORD *)(v5 + 64) + 1504LL);
  if ( (unsigned int)(**a3 - 8) <= 1 )
  {
    v16 = sub_11DF20(a1[4]);
    v5 = a1[2];
    v18 = !v16;
  }
  sub_1240C0((__int64)v21, v5, a1[3], 0x801u);
  v7 = (__int64 *)a1[11];
  sub_64100(v21, v7);
  sub_318480(&v22, v7 + 2);
  if ( !(unsigned __int8)sub_64280(v21) || v23 )
  {
    sub_1240C0((__int64)v24, a1[2], a1[3], 1u);
    sub_64040(v21, v24, v10, v11, v12, v13);
    sub_318020(&v22, &v25);
    if ( v25 )
    {
      v26 = 0;
      qfree(v25);
    }
    qfree(v24[0]);
  }
  sub_123480((__int64)v20, (unsigned __int8 *)*a3 + 64);
  sub_11C450(a2, v20);
  if ( v18 )
  {
    sub_126DF0((unsigned __int64)a2, v19, *(_QWORD *)(a1[4] + 24), (*a3)[9]);
    sub_120220(a2, v19, **a3, *(_QWORD *)(a1[4] + 24), (*a3)[17]);
  }
  if ( !(unsigned __int8)sub_64280(v21) || v23 )
  {
    sub_1240C0((__int64)v24, a1[2], a1[3], 1u);
    if ( (unsigned __int8)sub_64180(v21, v24) )
    {
      v8 = v25;
      if ( !v25 )
      {
LABEL_12:
        qfree(v24[0]);
LABEL_13:
        sub_11C450(a2, v20);
        v9 = 0;
        goto LABEL_23;
      }
LABEL_11:
      v26 = 0;
      qfree(v8);
      goto LABEL_12;
    }
    v17 = sub_318830(&v22, &v25);
    v8 = v25;
    if ( v17 )
    {
      if ( !v25 )
        goto LABEL_12;
      goto LABEL_11;
    }
    if ( v25 )
    {
      v26 = 0;
      qfree(v25);
    }
    qfree(v24[0]);
  }
  v14 = a1[12];
  if ( v14 && !(unsigned __int8)sub_156C80(a1[2], *(_QWORD *)(v14 + 8), *(_QWORD *)(v14 + 8) + 16LL) )
    goto LABEL_13;
  v9 = 1;
  (*a3)[1] |= 0x20000u;
LABEL_23:
  sub_11C7E0((__int64)v20);
  if ( v22 )
  {
    v23 = 0;
    qfree(v22);
  }
  qfree(v21[0]);
  return v9;
}
