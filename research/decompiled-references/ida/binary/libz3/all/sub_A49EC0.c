__int64 __fastcall sub_A49EC0(__int64 a1, unsigned int a2, double a3)
{
  __int64 v3; // r12
  __int64 v4; // rax
  bool v5; // zf
  unsigned int v6; // edx
  __int64 v7; // r15
  char v8; // r8
  unsigned int v9; // ebp
  void *v10; // rbx
  __int64 v11; // r12
  __int64 v12; // rax
  char v14; // r8
  unsigned int v15; // eax
  char v16; // [rsp+Ch] [rbp-5Ch]
  __int64 v17; // [rsp+10h] [rbp-58h] BYREF
  __int64 v18; // [rsp+18h] [rbp-50h]
  __int64 v19; // [rsp+20h] [rbp-48h] BYREF
  __int64 v20; // [rsp+28h] [rbp-40h]

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 8LL * a2);
  if ( v3 && (v4 = sub_999800(a1, a2), sub_3ED700((__int64)qword_1C7F2C0, v4, v3 + 16)) )
  {
    v17 = 0;
    v5 = *(_BYTE *)(a1 + 832) == 0;
    v18 = 0;
    v19 = 1;
    v20 = 0;
    if ( v5 )
    {
      v6 = sub_9F2600(a1, a2, (__int64)&v17);
      v7 = 0;
      v8 = 1;
      goto LABEL_5;
    }
    v7 = 0;
    v14 = 1;
  }
  else
  {
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 624) + 8LL * a2);
    if ( !v11 )
      return 1;
    v12 = sub_999800(a1, a2);
    if ( !sub_3ED700((__int64)qword_1C7F2C0, v11 + 16, v12) )
      return 1;
    v17 = 0;
    v5 = *(_BYTE *)(a1 + 832) == 0;
    v18 = 0;
    v19 = 1;
    v20 = 0;
    if ( v5 )
    {
      v6 = sub_9F2900(a1, a2, (__int64)&v17);
      v7 = 1;
      v8 = 0;
      if ( v6 != -1 )
        goto LABEL_6;
LABEL_12:
      sub_A289A0(a1, a2, v8, a3);
      v9 = 0;
      goto LABEL_7;
    }
    v7 = 1;
    v14 = 0;
  }
  v16 = v14;
  v15 = sub_9BC500((_QWORD *)a1, a2, v14, (__int64)&v17);
  v8 = v16;
  v6 = v15;
LABEL_5:
  if ( v6 == -1 )
    goto LABEL_12;
LABEL_6:
  sub_A49B40(a1, a2, v6, (int *)&v17, *(_QWORD *)(*(_QWORD *)(a1 + 8 * v7 + 616) + 8LL * a2) + 16LL);
  v9 = 1;
LABEL_7:
  v10 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v17);
  sub_182CBA0(v10, &v19);
  return v9;
}

