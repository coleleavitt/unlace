__int64 __fastcall Z3_algebraic_div(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // r13
  int v7; // edx
  _DWORD *v8; // rax
  __int64 v9; // r14
  int v11; // edx
  _DWORD *v12; // rax
  __int64 v13; // r14
  char v14; // r15
  __int64 v15; // rsi
  void *v16; // r15
  __int64 v17; // r15
  _DWORD *v18; // rax
  int v19; // ebp
  _DWORD *v20; // rax
  int v21; // eax
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // rdi
  void *v25; // rbp
  _DWORD *v26; // rax
  int v27; // ebp
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rdi
  void *v31; // rbp
  int v32; // r8d
  int v33; // r9d
  __int64 v34; // rdi
  void *v35; // rbp
  _DWORD *v36; // rax
  void *v37; // [rsp+8h] [rbp-B0h]
  __int64 v38; // [rsp+20h] [rbp-98h] BYREF
  __int64 v39; // [rsp+28h] [rbp-90h] BYREF
  int v40; // [rsp+30h] [rbp-88h] BYREF
  char v41; // [rsp+34h] [rbp-84h]
  __int64 v42; // [rsp+38h] [rbp-80h]
  __int64 v43; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v44[3]; // [rsp+48h] [rbp-70h] BYREF
  __int64 v45; // [rsp+60h] [rbp-58h] BYREF
  __int64 v46; // [rsp+68h] [rbp-50h] BYREF
  int v47; // [rsp+70h] [rbp-48h] BYREF
  char v48; // [rsp+74h] [rbp-44h]
  __int64 v49; // [rsp+78h] [rbp-40h]

  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v6 )
    sub_29EF20();
  *(_DWORD *)(a1 + 1520) = 0;
  v7 = *(unsigned __int16 *)(a2 + 4);
  if ( (unsigned int)(v7 - 3) <= 1 )
    goto LABEL_8;
  if ( ((_WORD)v7 || (v8 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr || *v8 != 5 || v8[1])
    && !(unsigned __int8)sub_1666670(a1 + 296, a2) )
  {
    goto LABEL_8;
  }
  v11 = *(unsigned __int16 *)(a3 + 4);
  if ( (unsigned int)(v11 - 3) <= 1 )
    goto LABEL_8;
  if ( (_WORD)v11
    || (v12 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL)) == nullptr
    || *v12 != 5
    || (v13 = a1 + 296, v12[1]) )
  {
    v13 = a1 + 296;
    if ( !(unsigned __int8)sub_1666670(a1 + 296, a3) )
      goto LABEL_8;
    if ( *(_WORD *)(a3 + 4) )
      goto LABEL_18;
    v12 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
    if ( !v12 || *v12 != 5 )
      goto LABEL_18;
  }
  if ( v12[1] )
  {
LABEL_18:
    v14 = 0;
  }
  else
  {
    BYTE4(v45) &= 0xFCu;
    v48 &= 0xFCu;
    LODWORD(v45) = 0;
    v46 = 0;
    v47 = 1;
    v49 = 0;
    if ( !(unsigned __int8)sub_1666AE0(v13, a3, &v45, &v43) )
    {
      sub_1872CE0("");
      sub_1873130(114, 63);
    }
    if ( !(_DWORD)v45 )
    {
      v25 = qword_1C7F2C0;
      goto LABEL_40;
    }
    if ( *(_WORD *)(a3 + 4) )
    {
      v14 = 1;
    }
    else
    {
      v14 = 1;
      v36 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
      if ( v36 && *v36 == 5 && !v36[1] )
      {
        v16 = qword_1C7F2C0;
        goto LABEL_24;
      }
    }
  }
  if ( !*(_QWORD *)(a1 + 304) )
    sub_16669E0(v13);
  v37 = (void *)sub_1666310();
  v15 = sub_1666D30(v13, a3);
  if ( (unsigned __int8)sub_17B1E90(v37, v15) )
  {
    if ( v14 )
    {
      v25 = qword_1C7F2C0;
LABEL_40:
      sub_182CBA0(v25, &v45);
      sub_182CBA0(v25, &v47);
    }
LABEL_8:
    sub_24EA30(a1, 3u, nullptr);
    if ( !v6 )
      return 0;
    sub_2BB620(0);
    v9 = 0;
LABEL_45:
    byte_1C7EBA0 = 1;
    return v9;
  }
  if ( !v14 )
    goto LABEL_25;
  v16 = qword_1C7F2C0;
LABEL_24:
  sub_182CBA0(v16, &v45);
  sub_182CBA0(v16, &v47);
LABEL_25:
  if ( !*(_QWORD *)(a1 + 304) )
    sub_16669E0(v13);
  v17 = sub_1666310();
  if ( *(_WORD *)(a2 + 4) || (v18 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr || *v18 != 5 || v18[1] )
  {
    v19 = sub_1666D30(v13, a2);
    if ( *(_WORD *)(a3 + 4) || (v20 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL)) == nullptr || *v20 != 5 || v20[1] )
    {
      v21 = sub_1666D30(v13, a3);
      v45 = v17;
      v46 = 0;
      sub_17B5D80(v17, v19, v21, (unsigned int)&v46, v22, v23);
      v24 = *(_QWORD *)(a1 + 304);
      if ( !v24 )
      {
        sub_16669E0(v13);
        v24 = *(_QWORD *)(a1 + 304);
      }
      v9 = sub_166B840(v24, v17, &v46, 0);
      sub_17B1E70(v45, &v46);
    }
    else
    {
      BYTE4(v45) &= 0xFCu;
      v48 &= 0xFCu;
      LODWORD(v45) = 0;
      v46 = 0;
      v47 = 1;
      v49 = 0;
      if ( !(unsigned __int8)sub_1666AE0(v13, a3, &v45, &v43) )
      {
        sub_1872CE0("");
        sub_1873130(114, 63);
      }
      v38 = v17;
      v39 = 0;
      sub_17B3860(v17, &v39, &v45);
      v43 = v17;
      v44[0] = 0;
      sub_17B5D80(v17, v19, (unsigned int)&v39, (unsigned int)v44, v32, v33);
      v34 = *(_QWORD *)(a1 + 304);
      if ( !v34 )
      {
        sub_16669E0(v13);
        v34 = *(_QWORD *)(a1 + 304);
      }
      v9 = sub_166B840(v34, v17, v44, 0);
      sub_17B1E70(v43, v44);
      sub_17B1E70(v38, &v39);
      v35 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v45);
      sub_182CBA0(v35, &v47);
    }
  }
  else
  {
    BYTE4(v38) &= 0xFCu;
    v41 &= 0xFCu;
    LODWORD(v38) = 0;
    v39 = 0;
    v40 = 1;
    v42 = 0;
    if ( !(unsigned __int8)sub_1666AE0(v13, a2, &v38, &v45) )
    {
      sub_1872CE0("");
      sub_1873130(114, 63);
    }
    if ( *(_WORD *)(a3 + 4) || (v26 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL)) == nullptr || *v26 != 5 || v26[1] )
    {
      v27 = sub_1666D30(v13, a3);
      v43 = v17;
      v44[0] = 0;
      sub_17B3860(v17, v44, &v38);
      v45 = v17;
      v46 = 0;
      sub_17B5D80(v17, (unsigned int)v44, v27, (unsigned int)&v46, v28, v29);
      v30 = *(_QWORD *)(a1 + 304);
      if ( !v30 )
      {
        sub_16669E0(v13);
        v30 = *(_QWORD *)(a1 + 304);
      }
      v9 = sub_166B840(v30, v17, &v46, 0);
      sub_17B1E70(v45, &v46);
      sub_17B1E70(v43, v44);
    }
    else
    {
      sub_276C20((__int64)&v43, a1, a3);
      sub_27B620(&v45, &v38, &v43);
      v9 = sub_27B900(v13, &v45, 0);
      sub_25A130((char *)&v45);
      sub_25A130((char *)&v43);
    }
    v31 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v38);
    sub_182CBA0(v31, &v40);
  }
  sub_251FD0(a1, v9);
  if ( v6 )
  {
    sub_2BB620(v9);
    goto LABEL_45;
  }
  return v9;
}

