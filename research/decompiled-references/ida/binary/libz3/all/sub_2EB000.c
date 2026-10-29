void __fastcall sub_2EB000(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // r13
  _BYTE v10[8]; // [rsp+8h] [rbp-40h] BYREF
  __int64 v11; // [rsp+10h] [rbp-38h]
  _BYTE v12[48]; // [rsp+18h] [rbp-30h] BYREF

  v2 = a1 + 288;
  sub_1863170(a1 + 288, a2);
  v4 = *(_QWORD *)(a1 + 232);
  if ( v4 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 88LL))(v4, v2);
  v5 = *(_QWORD *)(a1 + 240);
  if ( v5 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 88LL))(v5, v2);
  sub_330200(a1 + 296, v2);
  v6 = *(_QWORD *)(a1 + 416);
  v7 = v6 + 24LL * *(unsigned int *)(a1 + 424);
  if ( v6 != v7 )
  {
    while ( *(_DWORD *)(v6 + 4) != 2 )
    {
      v6 += 24;
      if ( v7 == v6 )
        goto LABEL_13;
    }
    while ( v7 != v6 )
    {
      sub_300690(*(_QWORD *)(v6 + 16), v2);
      v8 = v6 + 24;
      if ( v7 == v6 + 24 )
        break;
      while ( 1 )
      {
        v6 = v8;
        if ( *(_DWORD *)(v8 + 4) == 2 )
          break;
        v8 += 24;
        if ( v7 == v8 )
          goto LABEL_13;
      }
    }
  }
LABEL_13:
  v11 = a2;
  sub_17F9A60(v12, "opt");
  *(_BYTE *)(a1 + 744) = sub_1859630(a2, "enable_sat", v12, 1);
  *(_BYTE *)(a1 + 745) = sub_1859630(v11, "enable_sls", v12, 0);
  v9 = v11;
  sub_180C5A0(v10, "maxres");
  *(_QWORD *)(a1 + 752) = sub_185A820(v9, "maxsat_engine", v12, v10);
  *(_BYTE *)(a1 + 747) = sub_1859630(v11, "pp.neat", v12, 1);
  *(_BYTE *)(a1 + 748) = sub_1859630(v11, "pp.wcnf", v12, 0);
  *(_BYTE *)(a1 + 749) = sub_1859630(v11, "incremental", v12, 0);
  sub_18572D0(v12);
}

