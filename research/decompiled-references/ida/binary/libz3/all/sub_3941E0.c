__int64 __fastcall sub_3941E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // r13
  void *v7; // rbp
  __int64 v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // r8
  void *v12; // r14
  bool v13; // zf
  __int64 v14; // r15
  __int64 v15; // rbp
  unsigned int v16; // eax
  __int64 v17; // r13
  __int64 v18; // r13
  unsigned int v19; // eax
  __int64 v20; // r14
  _QWORD *v21; // rax
  _QWORD *v22; // r8
  _QWORD *v23; // rdi
  _QWORD *v24; // rdi
  _QWORD *v25; // [rsp+0h] [rbp-58h]
  _QWORD *v26; // [rsp+0h] [rbp-58h]
  _QWORD *v27; // [rsp+0h] [rbp-58h]
  _QWORD *v28; // [rsp+0h] [rbp-58h]
  _QWORD *v29; // [rsp+8h] [rbp-50h]
  char v30[8]; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v31[8]; // [rsp+18h] [rbp-40h] BYREF

  v4 = *(__int64 **)(a1 + 56);
  v5 = v4[4];
  sub_DFBCB0(v5);
  v6 = *(_QWORD *)(v5 + 296);
  v7 = (void *)v4[10];
  if ( v7 )
    goto LABEL_25;
  v9 = sub_186B270(0xBD8u);
  v10 = (_QWORD *)*v4;
  v11 = v4 + 1;
  v7 = (void *)v9;
  if ( !*v4 )
  {
    v31[0] = 0;
    v20 = sub_186B270(0x2F8u);
    sub_2527E0(v20, (__int64)v31);
    v21 = (_QWORD *)*v4;
    v22 = v4 + 1;
    if ( v20 != *v4 )
    {
      if ( v21 )
      {
        v23 = (_QWORD *)v21[17];
        if ( v23 != v21 + 19 )
        {
          v25 = (_QWORD *)*v4;
          operator delete(v23, v21[19] + 1LL);
          v22 = v4 + 1;
          v21 = v25;
        }
        v24 = (_QWORD *)v21[13];
        if ( v24 != v21 + 15 )
        {
          v29 = v22;
          v26 = v21;
          operator delete(v24, v21[15] + 1LL);
          v22 = v29;
          v21 = v26;
        }
        v27 = v22;
        sub_186B220(v21);
        v22 = v27;
      }
      *v4 = v20;
    }
    v28 = v22;
    sub_18572D0(v31);
    v10 = (_QWORD *)*v4;
    v11 = v28;
  }
  sub_64C8D0(v7, v6, v4 + 5, v10, v11);
  v12 = (void *)v4[10];
  if ( v7 == v12 )
  {
LABEL_25:
    if ( v4[9] )
      return sub_64C4A0(v7, a3);
    goto LABEL_9;
  }
  if ( v12 )
  {
    sub_64D370(v4[10]);
    sub_186B220(v12);
  }
  v13 = v4[9] == 0;
  v4[10] = (__int64)v7;
  if ( v13 )
  {
LABEL_9:
    v14 = v6 + 560;
    sub_180C5A0(v30, "datalog_relation");
    if ( (unsigned __int8)sub_15D1480(v6 + 560, v30) && (v16 = sub_15D1320(v6 + 560, v30), sub_15D2690(v6, v16)) )
    {
      v17 = v4[4];
      sub_DFBCB0(v17);
      v18 = *(_QWORD *)(v17 + 296);
      v19 = sub_15DA4C0(v14, v30);
      v4[9] = sub_15D2690(v18, v19);
    }
    else
    {
      v15 = sub_186B270(0xA0u);
      sub_1624E10(v15);
      v4[9] = v15;
      sub_180C5A0(v31, "datalog_relation");
      sub_15DA890(v6, v31, v15);
    }
    v7 = (void *)v4[10];
  }
  return sub_64C4A0(v7, a3);
}

