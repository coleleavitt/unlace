__int64 __fastcall Z3_algebraic_add(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // r12
  int v6; // edx
  _DWORD *v7; // rax
  __int64 v8; // r13
  int v10; // edx
  _DWORD *v11; // rax
  __int64 v12; // r13
  __int64 v13; // r14
  _DWORD *v14; // rax
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rdi
  _DWORD *v18; // rax
  __int64 v19; // rdi
  void *v20; // rbp
  _DWORD *v21; // rax
  __int64 v22; // r15
  __int64 v23; // rdi
  void *v24; // rbp
  __int64 v25; // [rsp+20h] [rbp-98h] BYREF
  __int64 v26; // [rsp+28h] [rbp-90h] BYREF
  int v27; // [rsp+30h] [rbp-88h] BYREF
  char v28; // [rsp+34h] [rbp-84h]
  __int64 v29; // [rsp+38h] [rbp-80h]
  __int64 v30; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v31[3]; // [rsp+48h] [rbp-70h] BYREF
  __int64 v32; // [rsp+60h] [rbp-58h] BYREF
  __int64 v33; // [rsp+68h] [rbp-50h] BYREF
  int v34; // [rsp+70h] [rbp-48h] BYREF
  char v35; // [rsp+74h] [rbp-44h]
  __int64 v36; // [rsp+78h] [rbp-40h]

  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v5 )
    sub_29EE60();
  *(_DWORD *)(a1 + 1520) = 0;
  v6 = *(unsigned __int16 *)(a2 + 4);
  if ( (unsigned int)(v6 - 3) > 1
    && (!(_WORD)v6 && (v7 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) != nullptr && *v7 == 5 && !v7[1]
     || (unsigned __int8)sub_1666670(a1 + 296, a2))
    && (v10 = *(unsigned __int16 *)(a3 + 4), (unsigned int)(v10 - 3) > 1)
    && (!(_WORD)v10
     && (v11 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL)) != nullptr
     && *v11 == 5
     && (v12 = a1 + 296, !v11[1])
     || (v12 = a1 + 296, (unsigned __int8)sub_1666670(a1 + 296, a3))) )
  {
    if ( !*(_QWORD *)(a1 + 304) )
      sub_16669E0(v12);
    v13 = sub_1666310();
    if ( *(_WORD *)(a2 + 4) || (v14 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr || *v14 != 5 || v14[1] )
    {
      v15 = sub_1666D30(v12, a2);
      if ( *(_WORD *)(a3 + 4) || (v18 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL)) == nullptr || *v18 != 5 || v18[1] )
      {
        v16 = sub_1666D30(v12, a3);
        v32 = v13;
        v33 = 0;
        sub_17B6090(v13, v15, v16, &v33);
        v17 = *(_QWORD *)(a1 + 304);
        if ( !v17 )
        {
          sub_16669E0(v12);
          v17 = *(_QWORD *)(a1 + 304);
        }
        v8 = sub_166B840(v17, v13, &v33, 0);
        sub_17B1E70(v32, &v33);
      }
      else
      {
        BYTE4(v32) &= 0xFCu;
        v35 &= 0xFCu;
        LODWORD(v32) = 0;
        v33 = 0;
        v34 = 1;
        v36 = 0;
        if ( !(unsigned __int8)sub_1666AE0(v12, a3, &v32, &v30) )
        {
          sub_1872CE0("");
          sub_1873130(114, 63);
        }
        v25 = v13;
        v26 = 0;
        sub_17B3860(v13, &v26, &v32);
        v30 = v13;
        v31[0] = 0;
        sub_17B6090(v13, v15, &v26, v31);
        v19 = *(_QWORD *)(a1 + 304);
        if ( !v19 )
        {
          sub_16669E0(v12);
          v19 = *(_QWORD *)(a1 + 304);
        }
        v8 = sub_166B840(v19, v13, v31, 0);
        sub_17B1E70(v30, v31);
        sub_17B1E70(v25, &v26);
        v20 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v32);
        sub_182CBA0(v20, &v34);
      }
    }
    else
    {
      BYTE4(v25) &= 0xFCu;
      v28 &= 0xFCu;
      LODWORD(v25) = 0;
      v26 = 0;
      v27 = 1;
      v29 = 0;
      if ( !(unsigned __int8)sub_1666AE0(v12, a2, &v25, &v32) )
      {
        sub_1872CE0("");
        sub_1873130(114, 63);
      }
      if ( *(_WORD *)(a3 + 4) || (v21 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL)) == nullptr || *v21 != 5 || v21[1] )
      {
        v22 = sub_1666D30(v12, a3);
        v30 = v13;
        v31[0] = 0;
        sub_17B3860(v13, v31, &v25);
        v32 = v13;
        v33 = 0;
        sub_17B6090(v13, v31, v22, &v33);
        v23 = *(_QWORD *)(a1 + 304);
        if ( !v23 )
        {
          sub_16669E0(v12);
          v23 = *(_QWORD *)(a1 + 304);
        }
        v8 = sub_166B840(v23, v13, &v33, 0);
        sub_17B1E70(v32, &v33);
        sub_17B1E70(v30, v31);
      }
      else
      {
        sub_276C20((__int64)&v30, a1, a3);
        sub_27B340(&v32, &v25, &v30);
        v8 = sub_27B900(v12, &v32, 0);
        sub_25A130((char *)&v32);
        sub_25A130((char *)&v30);
      }
      v24 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v25);
      sub_182CBA0(v24, &v27);
    }
    sub_251FD0(a1, v8);
    if ( v5 )
    {
      sub_2BB620(v8);
LABEL_36:
      byte_1C7EBA0 = 1;
    }
  }
  else
  {
    sub_24EA30(a1, 3u, nullptr);
    if ( v5 )
    {
      sub_2BB620(0);
      v8 = 0;
      goto LABEL_36;
    }
    return 0;
  }
  return v8;
}

