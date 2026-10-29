__int64 __fastcall sub_A55DA0(__int64 a1, unsigned int a2, double a3)
{
  __int64 v3; // r12
  int *v4; // rax
  bool v5; // zf
  unsigned int v6; // edx
  __int64 v7; // r14
  char v8; // r15
  unsigned int v9; // ebp
  void *v10; // rbx
  __int64 v11; // r12
  int *v12; // rax
  __int64 v14; // [rsp+0h] [rbp-58h] BYREF
  __int64 v15; // [rsp+8h] [rbp-50h]
  __int64 v16; // [rsp+10h] [rbp-48h] BYREF
  __int64 v17; // [rsp+18h] [rbp-40h]

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 744) + 8LL * a2);
  if ( v3 && (v4 = sub_9AD4F0(a1, a2), sub_33D280((__int64)v4, v3 + 16)) )
  {
    v5 = *(_BYTE *)(a1 + 960) == 0;
    v14 = 0;
    v15 = 0;
    v16 = 1;
    v17 = 0;
    if ( v5 )
    {
      v6 = sub_9FF520(a1, a2, (__int64)&v14);
      v7 = 0;
      v8 = 1;
      goto LABEL_5;
    }
    v7 = 0;
    v8 = 1;
  }
  else
  {
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8LL * a2);
    if ( !v11 )
      return 1;
    v12 = sub_9AD4F0(a1, a2);
    if ( !sub_33D280(v11 + 16, (__int64)v12) )
      return 1;
    v5 = *(_BYTE *)(a1 + 960) == 0;
    v14 = 0;
    v15 = 0;
    v16 = 1;
    v17 = 0;
    if ( v5 )
    {
      v6 = sub_9FF800(a1, a2, (__int64)&v14);
      v7 = 1;
      v8 = 0;
      if ( v6 != -1 )
        goto LABEL_6;
LABEL_12:
      sub_A22CF0(a1, a2, v8, a3);
      v9 = 0;
      goto LABEL_7;
    }
    v7 = 1;
    v8 = 0;
  }
  v6 = sub_9F3AC0((_QWORD *)a1, a2, v8, (__int64)&v14);
LABEL_5:
  if ( v6 == -1 )
    goto LABEL_12;
LABEL_6:
  sub_A55A00(a1, a2, v6, (int *)&v14, *(_QWORD *)(*(_QWORD *)(a1 + 8 * v7 + 744) + 8LL * a2) + 16LL);
  v9 = 1;
LABEL_7:
  v10 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v14);
  sub_182CBA0(v10, &v16);
  return v9;
}

