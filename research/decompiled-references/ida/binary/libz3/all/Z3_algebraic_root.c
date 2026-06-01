__int64 __fastcall Z3_algebraic_root(__int64 a1, __int64 a2, unsigned int a3)
{
  char v6; // r12
  int v7; // edx
  _DWORD *v8; // rax
  __int64 v9; // r15
  __int64 v10; // rbp
  char v11; // r14
  __int64 v12; // rsi
  void *v13; // r14
  __int64 v14; // rax
  bool v15; // zf
  __int64 v16; // rax
  __int64 v17; // rdi
  _DWORD *v19; // rax
  void *v20; // r14
  void *v21; // rbp
  _DWORD *v22; // rax
  __int64 v23; // [rsp+0h] [rbp-98h]
  __int64 v24; // [rsp+0h] [rbp-98h]
  char v25; // [rsp+1Fh] [rbp-79h] BYREF
  __int64 v26; // [rsp+20h] [rbp-78h]
  __int64 v27; // [rsp+28h] [rbp-70h] BYREF
  __int64 v28; // [rsp+30h] [rbp-68h] BYREF
  __int64 v29; // [rsp+38h] [rbp-60h] BYREF
  int v30; // [rsp+40h] [rbp-58h] BYREF
  char v31; // [rsp+44h] [rbp-54h]
  __int64 v32; // [rsp+48h] [rbp-50h]
  int v33; // [rsp+50h] [rbp-48h] BYREF
  char v34; // [rsp+54h] [rbp-44h]
  __int64 v35; // [rsp+58h] [rbp-40h]

  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v6 )
    sub_29EF60();
  *(_DWORD *)(a1 + 1520) = 0;
  v7 = *(unsigned __int16 *)(a2 + 4);
  if ( (unsigned int)(v7 - 3) <= 1 )
    goto LABEL_8;
  if ( (_WORD)v7 || (v8 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr || *v8 != 5 || v8[1] )
  {
    v9 = a1 + 296;
    if ( !(unsigned __int8)sub_1666670(a1 + 296, a2) )
      goto LABEL_8;
    if ( (a3 & 1) != 0 )
      goto LABEL_21;
    if ( *(_WORD *)(a2 + 4) )
      goto LABEL_14;
    v8 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v8 || *v8 != 5 )
      goto LABEL_14;
  }
  else
  {
    v9 = a1 + 296;
    if ( (a3 & 1) != 0 )
      goto LABEL_21;
  }
  if ( !v8[1] )
  {
    v31 &= 0xFCu;
    v34 &= 0xFCu;
    v30 = 0;
    v32 = 0;
    v33 = 1;
    v35 = 0;
    if ( !(unsigned __int8)sub_1666AE0(v9, a2, &v30, &v28) )
    {
      sub_1872CE0("");
      sub_1873130(114, 63);
    }
    if ( v30 < 0 )
    {
      v21 = qword_1C7F2C0;
      goto LABEL_37;
    }
    if ( *(_WORD *)(a2 + 4) )
    {
      v11 = 1;
    }
    else
    {
      v11 = 1;
      v22 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
      if ( v22 && *v22 == 5 && !v22[1] )
      {
        v13 = qword_1C7F2C0;
        goto LABEL_20;
      }
    }
    goto LABEL_15;
  }
LABEL_14:
  v11 = 0;
LABEL_15:
  if ( !*(_QWORD *)(a1 + 304) )
    sub_16669E0(v9);
  v23 = sub_1666310();
  v12 = sub_1666D30(v9, a2);
  if ( !(unsigned __int8)sub_17B1EE0(v23, v12) )
  {
    if ( v11 )
    {
      v13 = qword_1C7F2C0;
LABEL_20:
      sub_182CBA0(v13, &v30);
      sub_182CBA0(v13, &v33);
    }
LABEL_21:
    if ( !*(_QWORD *)(a1 + 304) )
      sub_16669E0(v9);
    v14 = sub_1666310();
    v15 = *(_WORD *)(a2 + 4) == 0;
    v24 = v14;
    v26 = v14;
    v27 = 0;
    if ( v15 && (v19 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) != nullptr && *v19 == 5 && !v19[1] )
    {
      v31 &= 0xFCu;
      v28 = v24;
      v34 &= 0xFCu;
      v29 = 0;
      v30 = 0;
      v32 = 0;
      v33 = 1;
      v35 = 0;
      if ( !(unsigned __int8)sub_1666AE0(v9, a2, &v30, &v25) )
      {
        sub_1872CE0("");
        sub_1873130(114, 63);
      }
      sub_17B3860(v24, &v29, &v30);
      v20 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v30);
      sub_182CBA0(v20, &v33);
      sub_17B6300(v24, &v29, a3, &v27);
      sub_17B1E70(v28, &v29);
    }
    else
    {
      v16 = sub_1666D30(v9, a2);
      sub_17B6300(v24, v16, a3, &v27);
    }
    v17 = *(_QWORD *)(a1 + 304);
    if ( !v17 )
    {
      sub_16669E0(v9);
      v17 = *(_QWORD *)(a1 + 304);
    }
    v10 = sub_166B840(v17, v24, &v27, 0);
    sub_251FD0(a1, v10);
    if ( !v6 )
    {
      sub_17B1E70(v26, &v27);
      return v10;
    }
    sub_2BB620(v10);
    sub_17B1E70(v26, &v27);
LABEL_49:
    byte_1C7EBA0 = 1;
    return v10;
  }
  if ( v11 )
  {
    v21 = qword_1C7F2C0;
LABEL_37:
    sub_182CBA0(v21, &v30);
    sub_182CBA0(v21, &v33);
  }
LABEL_8:
  sub_24EA30(a1, 3u, nullptr);
  if ( v6 )
  {
    sub_2BB620(0);
    v10 = 0;
    goto LABEL_49;
  }
  return 0;
}

