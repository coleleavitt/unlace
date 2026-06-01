__int64 __fastcall Z3_algebraic_sub(__int64 a1, __int64 a2, __int64 a3)
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
  int v15; // r15d
  int v16; // eax
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rdi
  _DWORD *v20; // rax
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rdi
  void *v24; // rbp
  _DWORD *v25; // rax
  int v26; // r15d
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // rdi
  void *v30; // rbp
  void *v31; // rbp
  int v32; // [rsp+20h] [rbp-B8h] BYREF
  char v33; // [rsp+24h] [rbp-B4h]
  __int64 v34; // [rsp+28h] [rbp-B0h]
  int v35; // [rsp+30h] [rbp-A8h] BYREF
  char v36; // [rsp+34h] [rbp-A4h]
  __int64 v37; // [rsp+38h] [rbp-A0h]
  __int64 v38; // [rsp+40h] [rbp-98h] BYREF
  __int64 v39; // [rsp+48h] [rbp-90h] BYREF
  int v40; // [rsp+50h] [rbp-88h]
  char v41; // [rsp+54h] [rbp-84h]
  __int64 v42; // [rsp+60h] [rbp-78h] BYREF
  __int64 v43; // [rsp+68h] [rbp-70h] BYREF
  int v44; // [rsp+70h] [rbp-68h]
  char v45; // [rsp+74h] [rbp-64h]
  __int64 v46; // [rsp+78h] [rbp-60h]
  __int64 v47; // [rsp+80h] [rbp-58h] BYREF
  __int64 v48; // [rsp+88h] [rbp-50h] BYREF
  __int64 v49; // [rsp+90h] [rbp-48h] BYREF
  __int64 v50; // [rsp+98h] [rbp-40h]

  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v5 )
    sub_29EEA0();
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
      if ( *(_WORD *)(a3 + 4) || (v20 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL)) == nullptr || *v20 != 5 || v20[1] )
      {
        v16 = sub_1666D30(v12, a3);
        v47 = v13;
        v48 = 0;
        sub_17B6100(v13, v15, v16, (unsigned int)&v48, v17, v18);
        v19 = *(_QWORD *)(a1 + 304);
        if ( !v19 )
        {
          sub_16669E0(v12);
          v19 = *(_QWORD *)(a1 + 304);
        }
        v8 = sub_166B840(v19, v13, &v48, 0);
        sub_17B1E70(v47, &v48);
      }
      else
      {
        BYTE4(v47) &= 0xFCu;
        BYTE4(v49) &= 0xFCu;
        LODWORD(v47) = 0;
        v48 = 0;
        LODWORD(v49) = 1;
        v50 = 0;
        if ( !(unsigned __int8)sub_1666AE0(v12, a3, &v47, &v42) )
        {
          sub_1872CE0("");
          sub_1873130(114, 63);
        }
        v38 = v13;
        v39 = 0;
        sub_17B3860(v13, &v39, &v47);
        v42 = v13;
        v43 = 0;
        sub_17B6100(v13, v15, (unsigned int)&v39, (unsigned int)&v43, v21, v22);
        v23 = *(_QWORD *)(a1 + 304);
        if ( !v23 )
        {
          sub_16669E0(v12);
          v23 = *(_QWORD *)(a1 + 304);
        }
        v8 = sub_166B840(v23, v13, &v43, 0);
        sub_17B1E70(v42, &v43);
        sub_17B1E70(v38, &v39);
        v24 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v47);
        sub_182CBA0(v24, &v49);
      }
    }
    else
    {
      v33 &= 0xFCu;
      v36 &= 0xFCu;
      v32 = 0;
      v34 = 0;
      v35 = 1;
      v37 = 0;
      if ( !(unsigned __int8)sub_1666AE0(v12, a2, &v32, &v47) )
      {
        sub_1872CE0("");
        sub_1873130(114, 63);
      }
      if ( *(_WORD *)(a3 + 4) || (v25 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL)) == nullptr || *v25 != 5 || v25[1] )
      {
        v26 = sub_1666D30(v12, a3);
        v42 = v13;
        v43 = 0;
        sub_17B3860(v13, &v43, &v32);
        v47 = v13;
        v48 = 0;
        sub_17B6100(v13, (unsigned int)&v43, v26, (unsigned int)&v48, v27, v28);
        v29 = *(_QWORD *)(a1 + 304);
        if ( !v29 )
        {
          sub_16669E0(v12);
          v29 = *(_QWORD *)(a1 + 304);
        }
        v8 = sub_166B840(v29, v13, &v48, 0);
        sub_17B1E70(v47, &v48);
        sub_17B1E70(v42, &v43);
      }
      else
      {
        sub_276C20((__int64)&v38, a1, a3);
        v47 = 0;
        v48 = 0;
        v50 = 0;
        v49 = 1;
        sub_27B950(qword_1C7F2C0, &v47, &v32);
        v31 = qword_1C7F2C0;
        if ( (v49 & 0x100000000LL) != 0 || (_DWORD)v49 != 1 || (v41 & 1) != 0 || v40 != 1 )
        {
          sub_1852000(qword_1C7F2C0, &v47, &v38);
        }
        else
        {
          sub_1832A70(qword_1C7F2C0, &v47, &v38);
          sub_182CBA0(v31, &v49);
          BYTE4(v49) &= ~1u;
          LODWORD(v49) = 1;
        }
        LODWORD(v42) = 0;
        v46 = 0;
        BYTE4(v42) &= 0xFCu;
        v45 &= 0xFCu;
        v43 = 0;
        v44 = 1;
        sub_27B950(qword_1C7F2C0, &v42, &v47);
        sub_25A130((char *)&v47);
        v8 = sub_27B900(v12, &v42, 0);
        sub_25A130((char *)&v42);
        sub_25A130((char *)&v38);
      }
      v30 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v32);
      sub_182CBA0(v30, &v35);
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

