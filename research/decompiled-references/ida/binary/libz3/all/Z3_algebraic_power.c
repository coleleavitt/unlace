__int64 __fastcall Z3_algebraic_power(__int64 a1, __int64 a2, unsigned int a3)
{
  char v5; // bp
  int v6; // edx
  _DWORD *v7; // rax
  __int64 v8; // r12
  __int64 v10; // rax
  bool v11; // zf
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rdi
  _DWORD *v15; // rax
  __int64 v16; // [rsp+0h] [rbp-98h]
  void *v17; // [rsp+8h] [rbp-90h]
  char v18; // [rsp+1Fh] [rbp-79h] BYREF
  __int64 v19; // [rsp+20h] [rbp-78h]
  __int64 v20; // [rsp+28h] [rbp-70h] BYREF
  __int64 v21; // [rsp+30h] [rbp-68h]
  __int64 v22; // [rsp+38h] [rbp-60h] BYREF
  int v23; // [rsp+40h] [rbp-58h] BYREF
  char v24; // [rsp+44h] [rbp-54h]
  __int64 v25; // [rsp+48h] [rbp-50h]
  int v26; // [rsp+50h] [rbp-48h] BYREF
  char v27; // [rsp+54h] [rbp-44h]
  __int64 v28; // [rsp+58h] [rbp-40h]

  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v5 )
    sub_29EFA0();
  *(_DWORD *)(a1 + 1520) = 0;
  v6 = *(unsigned __int16 *)(a2 + 4);
  if ( (unsigned int)(v6 - 3) > 1 )
  {
    if ( !(_WORD)v6 )
    {
      v7 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
      if ( v7 )
      {
        if ( *v7 == 5 && !v7[1] )
        {
          v16 = a1 + 296;
          goto LABEL_12;
        }
      }
    }
    v16 = a1 + 296;
    if ( (unsigned __int8)sub_1666670(a1 + 296, a2) )
    {
LABEL_12:
      if ( !*(_QWORD *)(a1 + 304) )
        sub_16669E0(v16);
      v10 = sub_1666310();
      v11 = *(_WORD *)(a2 + 4) == 0;
      v19 = v10;
      v12 = v10;
      v20 = 0;
      if ( v11 && (v15 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) != nullptr && *v15 == 5 && !v15[1] )
      {
        v24 &= 0xFCu;
        v27 &= 0xFCu;
        v21 = v12;
        v22 = 0;
        v23 = 0;
        v25 = 0;
        v26 = 1;
        v28 = 0;
        if ( !(unsigned __int8)sub_1666AE0(v16, a2, &v23, &v18) )
        {
          sub_1872CE0("");
          sub_1873130(114, 63);
        }
        sub_17B3860(v12, &v22, &v23);
        v17 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v23);
        sub_182CBA0(v17, &v26);
        sub_17B6080(v12, &v22, a3, &v20);
        sub_17B1E70(v21, &v22);
      }
      else
      {
        v13 = sub_1666D30(v16, a2);
        sub_17B6080(v12, v13, a3, &v20);
      }
      v14 = *(_QWORD *)(a1 + 304);
      if ( !v14 )
      {
        sub_16669E0(v16);
        v14 = *(_QWORD *)(a1 + 304);
      }
      v8 = sub_166B840(v14, v12, &v20, 0);
      sub_251FD0(a1, v8);
      if ( !v5 )
      {
        sub_17B1E70(v19, &v20);
        return v8;
      }
      sub_2BB620(v8);
      sub_17B1E70(v19, &v20);
LABEL_26:
      byte_1C7EBA0 = 1;
      return v8;
    }
  }
  sub_24EA30(a1, 3u, nullptr);
  v8 = 0;
  if ( v5 )
  {
    sub_2BB620(0);
    v8 = 0;
    goto LABEL_26;
  }
  return v8;
}

