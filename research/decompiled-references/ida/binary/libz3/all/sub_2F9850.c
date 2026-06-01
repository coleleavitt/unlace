void __fastcall sub_2F9850(__int64 a1)
{
  __int64 v1; // rbp
  _DWORD *v3; // rax
  _DWORD *v4; // rdx
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64); // rax
  __int64 v13; // rdi
  _QWORD *v14; // rbp
  __int64 v15; // r13
  __int64 v16; // r15
  __int64 v17; // [rsp+0h] [rbp-98h] BYREF
  __int64 v18; // [rsp+8h] [rbp-90h] BYREF
  __int64 v19; // [rsp+10h] [rbp-88h] BYREF
  __int64 v20; // [rsp+18h] [rbp-80h] BYREF
  __int64 v21; // [rsp+20h] [rbp-78h] BYREF
  __int64 v22; // [rsp+28h] [rbp-70h] BYREF
  __int64 v23; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v24[2]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v25[8]; // [rsp+48h] [rbp-50h] BYREF
  __int64 v26; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v27[8]; // [rsp+58h] [rbp-40h] BYREF

  v1 = a1 + 288;
  v24[1] = a1 + 288;
  sub_17F9A60(v25, "sat");
  if ( !(unsigned __int8)sub_1859630(a1 + 288, "euf", v25, 0)
    && (!*(_BYTE *)(a1 + 744) || !(unsigned __int8)sub_2F94C0(a1)) )
  {
    goto LABEL_3;
  }
  v3 = *(_DWORD **)(a1 + 608);
  if ( v3 )
  {
    v4 = &v3[26 * *(v3 - 1)];
    if ( v4 != v3 )
    {
      while ( *v3 == 2 )
      {
        v3 += 26;
        if ( v4 == v3 )
          goto LABEL_11;
      }
      goto LABEL_3;
    }
  }
LABEL_11:
  if ( (sub_180C5A0(&v17, "maxres"), *(_QWORD *)(a1 + 752) != v17)
    && (sub_180C5A0(&v18, "rc2"), *(_QWORD *)(a1 + 752) != v18)
    && (sub_180C5A0(&v19, "rc2tot"), *(_QWORD *)(a1 + 752) != v19)
    && (sub_180C5A0(&v20, "rc2bin"), *(_QWORD *)(a1 + 752) != v20)
    && (sub_180C5A0(&v21, "maxres-bin"), *(_QWORD *)(a1 + 752) != v21)
    && (sub_180C5A0(&v22, "maxres-bin-delay"), *(_QWORD *)(a1 + 752) != v22)
    && (sub_180C5A0(&v23, "pd-maxres"), *(_QWORD *)(a1 + 752) != v23)
    && (sub_180C5A0(v24, "bcd2"), *(_QWORD *)(a1 + 752) != v24[0])
    && (sub_180C5A0(&v26, "sls"), *(_QWORD *)(a1 + 752) != v26)
    || (sub_180C5A0(&v23, "pareto"),
        v26 = a1 + 288,
        sub_17F9A60(v27, "opt"),
        v5 = v26,
        sub_180C5A0(v24, "lex"),
        v6 = sub_185A820(v5, "priority", v27, v24),
        v7 = v23,
        v8 = v6,
        sub_18572D0(v27),
        v7 == v8)
    || *(_DWORD *)(*(_QWORD *)(a1 + 8) + 712LL) )
  {
LABEL_3:
    sub_18572D0(v25);
    return;
  }
  sub_1862300(v1, "minimize_core_partial", 1);
  sub_1862300(v1, "minimize_core", 1);
  v9 = sub_68D490(*(_QWORD *)(a1 + 8), v1, 1);
  v10 = v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 48);
  sub_2EB700(*(void (****)(void))(a1 + 240));
  v11 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 240) = v10;
  v27[0] = 0;
  v26 = v11;
  v12 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 240LL);
  if ( v12 == sub_2EAF00 )
    v13 = *(_QWORD *)(a1 + 232);
  else
    v13 = v12(a1);
  sub_E5ED50(v13, &v26);
  v14 = (_QWORD *)v27[0];
  v15 = *(_QWORD *)(a1 + 240);
  if ( v27[0] )
  {
    v16 = v27[0] + 8LL * *(unsigned int *)(v27[0] - 4LL);
    if ( v27[0] != v16 )
    {
      do
        sub_E5EBF0(v15, *v14++);
      while ( (_QWORD *)v16 != v14 );
      v15 = *(_QWORD *)(a1 + 240);
    }
  }
  if ( v15 )
    ++*(_DWORD *)(v15 + 48);
  sub_2EB700(*(void (****)(void))(a1 + 232));
  *(_QWORD *)(a1 + 232) = v15;
  sub_2334C0(&v26);
  sub_18572D0(v25);
}

