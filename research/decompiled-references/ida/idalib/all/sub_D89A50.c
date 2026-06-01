__int64 __fastcall sub_D89A50(__int64 a1, unsigned int a2, char a3, __int64 a4, _QWORD *a5)
{
  unsigned int v5; // r12d
  __int64 v7; // rbp
  __int64 v10; // r15
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 (__fastcall *v14)(__int64); // rdx
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 (__fastcall *v17)(__int64); // rdx
  __int64 v18; // rax
  __int64 *v19; // rdi
  unsigned __int64 v20; // rbp
  unsigned __int8 **v21; // rax
  unsigned __int8 **v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v26; // [rsp+10h] [rbp-A8h]
  _DWORD v27[6]; // [rsp+20h] [rbp-98h] BYREF
  int v28; // [rsp+38h] [rbp-80h]
  __int64 v29; // [rsp+40h] [rbp-78h]
  _QWORD v30[13]; // [rsp+50h] [rbp-68h] BYREF

  v5 = 1;
  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    v7 = *(_QWORD *)(a1 + 560);
    v10 = *(_QWORD *)(a1 + 1232);
    *(_QWORD *)(a1 + 1240) = *a5;
    v11 = a1 + 384;
    sub_E21760(v7, 48);
    sub_E23260(v27);
    sub_E21790(v7, 48);
    if ( a3 || (unsigned __int8)sub_DC8930(v11, v10, v27, 1) )
    {
      if ( v28 )
      {
        v5 = 1;
        v12 = sub_E216C0(*(_QWORD *)(a1 + 560), 48);
        sub_E231E0(v12, v27);
        goto LABEL_9;
      }
      if ( (unsigned __int8)sub_DC90B0(v11, v10, v27, 1) )
      {
        v5 = sub_DC9710(v11, v10, v27, a2);
        if ( (_BYTE)v5 )
        {
          sub_E23220(v30, v29, v27[0] - a2, v27[0] - a2);
          v26 = *(_QWORD *)(sub_CFDF60((__int64)v30) + 32);
          sub_E232A0(v30);
          v13 = sub_F63270(*(_QWORD *)(*(_QWORD *)v26 + 48LL));
          v14 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL);
          if ( v14 == sub_A01140 )
            v15 = sub_B70A60(v13);
          else
            v15 = v14(v13);
          v16 = sub_F63270(a4);
          v17 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 32LL);
          if ( v17 == sub_A01140 )
            v18 = sub_B70A60(v16);
          else
            v18 = v17(v16);
          if ( v15 == v18 )
          {
            v23 = *(_QWORD *)(a1 + 560);
            sub_E23220(v30, v29, v27[0] - a2, v27[0] - a2);
            v24 = sub_E216C0(v23, 48);
            sub_E23260(v24);
            sub_E232A0(v30);
            goto LABEL_9;
          }
          v19 = (__int64 *)v29;
          if ( v28 != 1 )
          {
            if ( (unsigned int)(v28 - 2) <= 1 )
              v19 = nullptr;
            else
              v19 = *(__int64 **)(v29 + 32);
          }
          v20 = sub_CEF5A0(v19);
          v30[0] = sub_E1EEA0(*(_QWORD *)(a1 + 784), v10);
          v21 = (unsigned __int8 **)sub_E33D20(v11, v30, 2418, 0);
          v22 = v21;
          if ( v21 )
          {
            sub_AE9DF0(v21, v20, 8u);
            sub_AE9DF0(v22, a4 & 0xFFFFFFFFFFFFFFF0LL, 8u);
          }
        }
      }
    }
    v5 = 0;
LABEL_9:
    sub_E232A0(v27);
  }
  return v5;
}
