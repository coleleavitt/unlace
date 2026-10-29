__int64 __fastcall sub_394430(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 *v5; // rbp
  __int64 v6; // r13
  void *v7; // r15
  __int64 v8; // r13
  __int64 result; // rax
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // rax
  _QWORD *v14; // rcx
  void *v15; // r14
  unsigned int v16; // eax
  __int64 v17; // r13
  __int64 v18; // r13
  unsigned int v19; // eax
  _QWORD *v20; // rax
  _QWORD *v21; // rdi
  _QWORD *v22; // rdi
  __int64 v23; // [rsp+8h] [rbp-60h]
  _QWORD *v24; // [rsp+18h] [rbp-50h]
  _QWORD *v25; // [rsp+18h] [rbp-50h]
  char v26[8]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v27[8]; // [rsp+28h] [rbp-40h] BYREF

  sub_DFBCB0(a2);
  v2 = *(_QWORD *)(a2 + 296);
  v3 = sub_15E3510(v2, a1 + 32, 0, 0, *(_QWORD *)(a1 + 40), 0);
  v4 = v3;
  if ( v3 )
    ++*(_DWORD *)(v3 + 8);
  sub_E06850(a2, v3 + 16, v3);
  v5 = *(__int64 **)(a1 + 48);
  v6 = v5[4];
  sub_DFBCB0(v6);
  v7 = (void *)v5[10];
  v8 = *(_QWORD *)(v6 + 296);
  if ( !v7 )
  {
    v13 = sub_186B270(0xBD8u);
    v14 = (_QWORD *)*v5;
    v7 = (void *)v13;
    if ( !*v5 )
    {
      v23 = sub_186B270(0x2F8u);
      v27[0] = 0;
      sub_2527E0(v23, (__int64)v27);
      v20 = (_QWORD *)*v5;
      if ( v23 != *v5 )
      {
        if ( v20 )
        {
          v21 = (_QWORD *)v20[17];
          if ( v21 != v20 + 19 )
          {
            v24 = (_QWORD *)*v5;
            operator delete(v21, v20[19] + 1LL);
            v20 = v24;
          }
          v22 = (_QWORD *)v20[13];
          if ( v22 != v20 + 15 )
          {
            v25 = v20;
            operator delete(v22, v20[15] + 1LL);
            v20 = v25;
          }
          sub_186B220(v20);
        }
        *v5 = v23;
      }
      sub_18572D0(v27);
      v14 = (_QWORD *)*v5;
    }
    sub_64C8D0(v7, v8, v5 + 5, v14, v5 + 1);
    v15 = (void *)v5[10];
    if ( v7 != v15 )
    {
      if ( v15 )
      {
        sub_64D370(v5[10]);
        sub_186B220(v15);
      }
      v5[10] = (__int64)v7;
    }
  }
  if ( !v5[9] )
  {
    sub_180C5A0(v26, "datalog_relation");
    v11 = v8 + 560;
    if ( (unsigned __int8)sub_15D1480(v8 + 560, v26) && (v16 = sub_15D1320(v8 + 560, v26), sub_15D2690(v8, v16)) )
    {
      v17 = v5[4];
      sub_DFBCB0(v17);
      v18 = *(_QWORD *)(v17 + 296);
      v19 = sub_15DA4C0(v11, v26);
      v5[9] = sub_15D2690(v18, v19);
    }
    else
    {
      v12 = sub_186B270(0xA0u);
      sub_1624E10(v12);
      v5[9] = v12;
      sub_180C5A0(v27, "datalog_relation");
      sub_15DA890(v8, v27, v12);
    }
    v7 = (void *)v5[10];
  }
  result = sub_64B4A0(v7, v4);
  if ( v4 )
  {
    if ( (*(_DWORD *)(v4 + 8))-- == 1 )
      return sub_15D7BC0(v2, v4);
  }
  return result;
}

