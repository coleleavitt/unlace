__int64 __fastcall Z3_algebraic_mul(__int64 a1, __int64 a2, __int64 a3)
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
  void *v25; // rbp
  int v26; // [rsp+20h] [rbp-B8h] BYREF
  char v27; // [rsp+24h] [rbp-B4h]
  __int64 v28; // [rsp+28h] [rbp-B0h]
  int v29; // [rsp+30h] [rbp-A8h] BYREF
  char v30; // [rsp+34h] [rbp-A4h]
  __int64 v31; // [rsp+38h] [rbp-A0h]
  __int64 v32; // [rsp+40h] [rbp-98h] BYREF
  __int64 v33; // [rsp+48h] [rbp-90h] BYREF
  int v34; // [rsp+50h] [rbp-88h]
  char v35; // [rsp+54h] [rbp-84h]
  __int64 v36; // [rsp+60h] [rbp-78h] BYREF
  __int64 v37; // [rsp+68h] [rbp-70h] BYREF
  int v38; // [rsp+70h] [rbp-68h]
  char v39; // [rsp+74h] [rbp-64h]
  __int64 v40; // [rsp+78h] [rbp-60h]
  __int64 v41; // [rsp+80h] [rbp-58h] BYREF
  __int64 v42; // [rsp+88h] [rbp-50h] BYREF
  __int64 v43; // [rsp+90h] [rbp-48h] BYREF
  __int64 v44; // [rsp+98h] [rbp-40h]

  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v5 )
    sub_29EEE0();
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
        v41 = v13;
        v42 = 0;
        sub_17B5D70(v13, v15, v16, &v42);
        v17 = *(_QWORD *)(a1 + 304);
        if ( !v17 )
        {
          sub_16669E0(v12);
          v17 = *(_QWORD *)(a1 + 304);
        }
        v8 = sub_166B840(v17, v13, &v42, 0);
        sub_17B1E70(v41, &v42);
      }
      else
      {
        BYTE4(v41) &= 0xFCu;
        BYTE4(v43) &= 0xFCu;
        LODWORD(v41) = 0;
        v42 = 0;
        LODWORD(v43) = 1;
        v44 = 0;
        if ( !(unsigned __int8)sub_1666AE0(v12, a3, &v41, &v36) )
        {
          sub_1872CE0("");
          sub_1873130(114, 63);
        }
        v32 = v13;
        v33 = 0;
        sub_17B3860(v13, &v33, &v41);
        v36 = v13;
        v37 = 0;
        sub_17B5D70(v13, v15, &v33, &v37);
        v19 = *(_QWORD *)(a1 + 304);
        if ( !v19 )
        {
          sub_16669E0(v12);
          v19 = *(_QWORD *)(a1 + 304);
        }
        v8 = sub_166B840(v19, v13, &v37, 0);
        sub_17B1E70(v36, &v37);
        sub_17B1E70(v32, &v33);
        v20 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v41);
        sub_182CBA0(v20, &v43);
      }
    }
    else
    {
      v27 &= 0xFCu;
      v30 &= 0xFCu;
      v26 = 0;
      v28 = 0;
      v29 = 1;
      v31 = 0;
      if ( !(unsigned __int8)sub_1666AE0(v12, a2, &v26, &v41) )
      {
        sub_1872CE0("");
        sub_1873130(114, 63);
      }
      if ( *(_WORD *)(a3 + 4) || (v21 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL)) == nullptr || *v21 != 5 || v21[1] )
      {
        v22 = sub_1666D30(v12, a3);
        v36 = v13;
        v37 = 0;
        sub_17B3860(v13, &v37, &v26);
        v41 = v13;
        v42 = 0;
        sub_17B5D70(v13, &v37, v22, &v42);
        v23 = *(_QWORD *)(a1 + 304);
        if ( !v23 )
        {
          sub_16669E0(v12);
          v23 = *(_QWORD *)(a1 + 304);
        }
        v8 = sub_166B840(v23, v13, &v42, 0);
        sub_17B1E70(v41, &v42);
        sub_17B1E70(v36, &v37);
      }
      else
      {
        sub_276C20((__int64)&v32, a1, a3);
        v41 = 0;
        v42 = 0;
        v44 = 0;
        v43 = 1;
        sub_27B950(qword_1C7F2C0, &v41, &v26);
        v25 = qword_1C7F2C0;
        if ( (v43 & 0x100000000LL) != 0 || (_DWORD)v43 != 1 || (v35 & 1) != 0 || v34 != 1 )
        {
          sub_1848FF0(qword_1C7F2C0, &v41, &v32);
        }
        else
        {
          sub_1831650(qword_1C7F2C0, &v41, &v32);
          sub_182CBA0(v25, &v43);
          BYTE4(v43) &= ~1u;
          LODWORD(v43) = 1;
        }
        LODWORD(v36) = 0;
        v40 = 0;
        BYTE4(v36) &= 0xFCu;
        v39 &= 0xFCu;
        v37 = 0;
        v38 = 1;
        sub_27B950(qword_1C7F2C0, &v36, &v41);
        sub_25A130((char *)&v41);
        v8 = sub_27B900(v12, &v36, 0);
        sub_25A130((char *)&v36);
        sub_25A130((char *)&v32);
      }
      v24 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v26);
      sub_182CBA0(v24, &v29);
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

