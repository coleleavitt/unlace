void __fastcall sub_1280380(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  const char *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rbp
  _QWORD *v20; // r15
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  bool v28; // cl
  bool v29; // di
  __int64 v30; // [rsp+8h] [rbp-50h]
  int v31[15]; // [rsp+1Ch] [rbp-3Ch] BYREF

  v5 = *(unsigned int *)(a3 + 8);
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(_QWORD *)(v6 + 8);
  if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    sub_2237220(a3, a3 + 16, v5 + 1, 8);
    v5 = *(unsigned int *)(a3 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v5) = "--start-group";
  ++*(_DWORD *)(a3 + 8);
  v8 = sub_21B7BC0(a2, 2415, "auto", 4);
  if ( v9 != 4 )
    goto LABEL_36;
  v10 = 10;
  v11 = "-lmul_none";
  if ( *(_DWORD *)v8 == 1869903201 )
  {
    v27 = sub_10DCD30((__int64)a2, 0x9B3u);
    v8 = sub_127B5B0(v27);
LABEL_36:
    v28 = v9 != 5;
    v29 = v9 != 8;
    if ( v9 != 5 || *(_DWORD *)v8 != 1768044081 || (v10 = 8, v11 = "-lmul_16", *(_BYTE *)(v8 + 4) != 116) )
    {
      if ( v28 || *(_DWORD *)v8 != 1768043059 || (v10 = 8, v11 = "-lmul_32", *(_BYTE *)(v8 + 4) != 116) )
      {
        v10 = 10;
        v11 = "-lmul_none";
        if ( !v29 )
        {
          v11 = "-lmul_none";
          v10 = 2LL * (*(_QWORD *)v8 != 0x7365697265733566LL) + 8;
          if ( *(_QWORD *)v8 == 0x7365697265733566LL )
            v11 = "-lmul_f5";
        }
      }
    }
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD *, const char *, __int64))(*a2 + 16LL))(a2, v11, v10);
  v13 = *(unsigned int *)(a3 + 8);
  if ( v13 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    v30 = v12;
    sub_2237220(a3, a3 + 16, v13 + 1, 8);
    v13 = *(unsigned int *)(a3 + 8);
    v12 = v30;
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v13) = v12;
  v14 = *(unsigned int *)(a3 + 12);
  v15 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v15;
  if ( v15 + 1 > v14 )
  {
    sub_2237220(a3, a3 + 16, v15 + 1, 8);
    v15 = *(unsigned int *)(a3 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v15) = "-lc";
  ++*(_DWORD *)(a3 + 8);
  sub_11BEF20(v6, v7, a3, (__int64)a2);
  v16 = *(unsigned int *)(a3 + 8);
  if ( v16 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    sub_2237220(a3, a3 + 16, v16 + 1, 8);
    v16 = *(unsigned int *)(a3 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v16) = "-lcrt";
  ++*(_DWORD *)(a3 + 8);
  v31[0] = 2866;
  v17 = sub_21B6DA0(a2, v31, 1);
  v18 = a2[1];
  v19 = (_QWORD *)(v18 + 8LL * (unsigned int)v17);
  v20 = (_QWORD *)(v18 + 8 * HIDWORD(v17));
  if ( v19 == v20 )
    goto LABEL_15;
  while ( !*v19 || !(unsigned __int8)sub_21B9810(*v19, 2866) )
  {
    if ( v20 == ++v19 )
      goto LABEL_15;
  }
  if ( v20 == v19 )
  {
LABEL_15:
    v21 = *(unsigned int *)(a3 + 8);
    if ( *(unsigned int *)(a3 + 12) < (unsigned __int64)(v21 + 1) )
    {
      sub_2237220(a3, a3 + 16, v21 + 1, 8);
      v21 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v21) = "-lnosys";
    v22 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = v22;
  }
  else
  {
    do
    {
      v23 = *v19;
      if ( *(_QWORD *)(*v19 + 16LL) )
        v23 = *(_QWORD *)(*v19 + 16LL);
      ++v19;
      *(_BYTE *)(v23 + 44) |= 1u;
      if ( v19 == v20 )
        break;
      while ( !*v19 || !(unsigned __int8)sub_21B9810(*v19, 2866) )
      {
        if ( v20 == ++v19 )
          goto LABEL_25;
      }
    }
    while ( v20 != v19 );
LABEL_25:
    v24 = *(unsigned int *)(a3 + 8);
    if ( *(unsigned int *)(a3 + 12) < (unsigned __int64)(v24 + 1) )
    {
      sub_2237220(a3, a3 + 16, v24 + 1, 8);
      v24 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v24) = "-lsim";
    v25 = *(unsigned int *)(a3 + 12);
    v26 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = v26;
    if ( v26 + 1 > v25 )
    {
      sub_2237220(a3, a3 + 16, v26 + 1, 8);
      v26 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v26) = "--undefined=__crt0_call_exit";
    v22 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = v22;
  }
  if ( v22 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    sub_2237220(a3, a3 + 16, v22 + 1, 8);
    v22 = *(unsigned int *)(a3 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v22) = "--end-group";
  ++*(_DWORD *)(a3 + 8);
  sub_11BEF20(v6, v7, a3, (__int64)a2);
}
