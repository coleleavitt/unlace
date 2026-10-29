__int64 __fastcall sub_C09F10(__int64 a1, __int64 a2)
{
  char **exception; // rbp
  __int64 v3; // rdx
  __int64 v5; // r15
  char v6; // al
  __int64 v7; // rcx
  _DWORD *v8; // rdx
  _DWORD *v9; // rdx
  char v10; // dl
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rbp
  void *v17; // rbp
  char **v19; // rbp
  __int64 v20; // rdx
  char v21; // [rsp+17h] [rbp-E1h]
  unsigned int v22; // [rsp+28h] [rbp-D0h]
  unsigned int v23; // [rsp+2Ch] [rbp-CCh]
  _QWORD v24[3]; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+50h] [rbp-A8h]
  _QWORD v26[3]; // [rsp+58h] [rbp-A0h] BYREF
  _QWORD v27[2]; // [rsp+70h] [rbp-88h] BYREF
  _QWORD v28[2]; // [rsp+80h] [rbp-78h] BYREF
  __int64 v29; // [rsp+90h] [rbp-68h] BYREF
  _QWORD v30[2]; // [rsp+98h] [rbp-60h] BYREF
  _QWORD v31[10]; // [rsp+A8h] [rbp-50h] BYREF

  if ( *(_WORD *)(a2 + 4) )
    goto LABEL_2;
  v5 = a2;
  v6 = 0;
  while ( 1 )
  {
    v7 = *(_QWORD *)(v5 + 16);
    v8 = *(_DWORD **)(v7 + 24);
    if ( !v8 || *v8 || v8[1] != 8 || *(_DWORD *)(v5 + 24) != 1 )
      break;
    v5 = *(_QWORD *)(v5 + 32);
    v6 ^= 1u;
    if ( *(_WORD *)(v5 + 4) )
      goto LABEL_2;
  }
  v9 = *(_DWORD **)(v7 + 24);
  if ( !v9 || *v9 != 5 )
    goto LABEL_2;
  if ( v9[1] != 2 )
  {
    if ( v9[1] == 3 )
    {
      v21 = 0;
      v10 = 1;
      goto LABEL_11;
    }
LABEL_2:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_15E454(&v29, "unsupported atom", v3);
    *exception = (char *)off_1C63670;
    sub_2333C0(exception + 1, &v29);
    sub_233E40((__int64)&v29);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
  }
  v21 = 1;
  v10 = 0;
LABEL_11:
  v22 = 1;
  if ( !v6 )
  {
    v21 = v10;
    v22 = 0;
  }
  v11 = *(_QWORD *)(v5 + 40);
  v27[0] = 0;
  v27[1] = 0;
  v28[0] = 1;
  v28[1] = 0;
  if ( !(unsigned __int8)sub_1666AE0(a1 + 2624, v11, v27, &v29) )
  {
    v19 = (char **)__cxa_allocate_exception(0x28u);
    sub_15E454(&v29, "use simplify tactic with option :arith-lhs true", v20);
    *v19 = (char *)off_1C63670;
    sub_2333C0(v19 + 1, &v29);
    sub_233E40((__int64)&v29);
    __cxa_throw(v19, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
  }
  v30[0] = 0;
  v29 = a1 + 8;
  v30[1] = 0;
  v31[0] = 1;
  v31[1] = 0;
  if ( (v27[0] & 0x100000000LL) != 0 )
  {
    sub_182EA00(a1 + 8, v30, v27);
    if ( (v28[0] & 0x100000000LL) == 0 )
      goto LABEL_16;
LABEL_40:
    sub_182EA00(a1 + 8, v31, v28);
    goto LABEL_17;
  }
  LODWORD(v30[0]) = v27[0];
  if ( (v28[0] & 0x100000000LL) != 0 )
    goto LABEL_40;
LABEL_16:
  BYTE4(v31[0]) &= ~1u;
  LODWORD(v31[0]) = v28[0];
LABEL_17:
  v12 = *(_QWORD *)(v5 + 32);
  v13 = *(_QWORD *)(a1 + 2712);
  v24[0] = 0;
  v24[1] = 0;
  v25 = a1 + 8;
  v26[0] = 0;
  v26[1] = 0;
  v23 = sub_C0D820(v13, v12, v24, v26);
  v14 = a1 + 8;
  if ( (v31[0] & 0x100000000LL) == 0 && LODWORD(v31[0]) == 1 )
  {
    sub_1839230(v14, v26, v30, v30);
    sub_182EF00(a1 + 8, v31);
    BYTE4(v31[0]) &= ~1u;
    LODWORD(v31[0]) = 1;
  }
  else
  {
    sub_184C6D0(v14, v26, v30, v30);
  }
  if ( LODWORD(v30[0]) && ((v24[0] & 0x100000000LL) != 0 || LODWORD(v24[0]) != 1) )
  {
    if ( (v30[0] & 0x100000000LL) != 0 )
      sub_182EA00(a1 + 8, v30, v30);
    else
      BYTE4(v30[0]) &= ~1u;
    sub_1839230(a1 + 8, v31, v24, v31);
    if ( SLODWORD(v24[0]) < 0 )
    {
      sub_1839100(a1 + 8, v30);
      sub_1839100(a1 + 8, v31);
    }
    sub_183B0A0(a1 + 8, v30, v31, a1 + 608);
    if ( (*(_BYTE *)(a1 + 612) & 1) != 0 || *(_DWORD *)(a1 + 608) != 1 )
    {
      sub_183C300(a1 + 8, v30, a1 + 608, v30);
      sub_183C300(a1 + 8, v31, a1 + 608, v31);
    }
  }
  else
  {
    if ( (v30[0] & 0x100000000LL) != 0 )
      sub_182EA00(a1 + 8, v30, v30);
    else
      BYTE4(v30[0]) &= ~1u;
    if ( (v31[0] & 0x100000000LL) != 0 )
      sub_182EA00(a1 + 8, v31, v31);
    else
      BYTE4(v31[0]) &= ~1u;
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *, _QWORD, _QWORD))(**(_QWORD **)(a1 + 2648) + 64LL))(
          *(_QWORD *)(a1 + 2648),
          v23,
          v30,
          (unsigned __int8)((SLODWORD(v24[0]) < 0) ^ v21),
          v22);
  sub_182EF00(v25, v26);
  sub_182EF00(a1 + 8, v24);
  v16 = v29;
  sub_182EF00(v29, v30);
  sub_182EF00(v16, v31);
  v17 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v27);
  sub_182CBA0(v17, v28);
  return v15;
}

