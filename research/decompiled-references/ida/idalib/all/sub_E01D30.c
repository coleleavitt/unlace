__int64 __fastcall sub_E01D30(__int64 a1, __int64 a2, unsigned int a3, char a4, __int64 a5)
{
  __int64 v8; // r12
  unsigned int v9; // r12d
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64); // rdx
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 (__fastcall *v15)(__int64); // rdx
  __int64 v16; // rax
  __int64 *v17; // rdi
  unsigned __int64 v18; // r12
  unsigned __int8 **v19; // rax
  unsigned __int8 **v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rbp
  __int64 v23; // rax
  __int64 v25; // [rsp+10h] [rbp-A8h]
  _DWORD v26[6]; // [rsp+20h] [rbp-98h] BYREF
  int v27; // [rsp+38h] [rbp-80h]
  __int64 v28; // [rsp+40h] [rbp-78h]
  _QWORD v29[13]; // [rsp+50h] [rbp-68h] BYREF

  v8 = *(_QWORD *)(a1 + 176);
  sub_E21760(v8, 48);
  sub_E23260(v26);
  sub_E21790(v8, 48);
  if ( a4 )
  {
    if ( !v27 )
    {
LABEL_3:
      if ( (unsigned __int8)sub_DC90B0(a1, a2, (__int64)v26, 1) )
      {
        v9 = sub_DC9710(a1, a2, (__int64)v26, a3);
        if ( (_BYTE)v9 )
        {
          sub_E23220(v29, v28, v26[0] - a3, v26[0] - a3);
          v25 = *(_QWORD *)(sub_CFDF60((__int64)v29) + 32);
          sub_E232A0(v29);
          v11 = sub_F63270(*(_QWORD *)(*(_QWORD *)v25 + 48LL));
          v12 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 32LL);
          if ( v12 == sub_A01140 )
            v13 = sub_B70A60(v11);
          else
            v13 = v12(v11);
          v14 = sub_F63270(a5);
          v15 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 32LL);
          if ( v15 == sub_A01140 )
            v16 = sub_B70A60(v14);
          else
            v16 = v15(v14);
          if ( v13 == v16 )
          {
            v22 = *(_QWORD *)(a1 + 176);
            sub_E23220(v29, v28, v26[0] - a3, v26[0] - a3);
            v23 = sub_E216C0(v22, 48);
            sub_E23260(v23);
            sub_E232A0(v29);
            goto LABEL_5;
          }
          v17 = (__int64 *)v28;
          if ( v27 != 1 )
          {
            if ( (unsigned int)(v27 - 2) <= 1 )
              v17 = nullptr;
            else
              v17 = *(__int64 **)(v28 + 32);
          }
          v18 = sub_CEF5A0(v17);
          v29[0] = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
          v19 = (unsigned __int8 **)sub_E33D20(a1, v29, 2418, 0);
          v20 = v19;
          if ( v19 )
          {
            sub_AE9DF0(v19, v18, 8u);
            sub_AE9DF0(v20, a5 & 0xFFFFFFFFFFFFFFF0LL, 8u);
          }
        }
      }
      goto LABEL_4;
    }
LABEL_19:
    v9 = 1;
    v21 = sub_E216C0(*(_QWORD *)(a1 + 176), 48);
    sub_E231E0(v21, v26);
    goto LABEL_5;
  }
  if ( (unsigned __int8)sub_DC8930(a1, a2, (__int64)v26, 1) )
  {
    if ( !v27 )
      goto LABEL_3;
    goto LABEL_19;
  }
LABEL_4:
  v9 = 0;
LABEL_5:
  sub_E232A0(v26);
  return v9;
}
