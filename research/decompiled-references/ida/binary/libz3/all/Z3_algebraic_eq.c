__int64 __fastcall Z3_algebraic_eq(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // r12
  int v5; // edx
  _DWORD *v6; // rax
  __int64 result; // rax
  int v8; // edx
  _DWORD *v9; // rax
  __int64 v10; // r13
  __int64 v11; // r14
  _DWORD *v12; // rax
  __int64 v13; // r15
  _DWORD *v14; // rax
  __int64 v15; // rax
  void *v16; // rbx
  _DWORD *v17; // rax
  __int64 v18; // r13
  bool v19; // al
  void *v20; // rbx
  void *v21; // r14
  bool v22; // al
  char v23; // [rsp+8h] [rbp-90h]
  bool v24; // [rsp+8h] [rbp-90h]
  unsigned __int8 v25; // [rsp+10h] [rbp-88h]
  bool v26; // [rsp+1Fh] [rbp-79h]
  __int64 v27; // [rsp+20h] [rbp-78h] BYREF
  __int64 v28; // [rsp+28h] [rbp-70h] BYREF
  int v29; // [rsp+30h] [rbp-68h] BYREF
  char v30; // [rsp+34h] [rbp-64h]
  __int64 v31; // [rsp+38h] [rbp-60h]
  __int64 v32; // [rsp+40h] [rbp-58h] BYREF
  __int64 v33; // [rsp+48h] [rbp-50h] BYREF
  int v34; // [rsp+50h] [rbp-48h] BYREF
  char v35; // [rsp+54h] [rbp-44h]
  __int64 v36; // [rsp+58h] [rbp-40h]

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_29F0E0();
  *(_DWORD *)(a1 + 1520) = 0;
  v5 = *(unsigned __int16 *)(a2 + 4);
  if ( (unsigned int)(v5 - 3) <= 1
    || ((_WORD)v5 || (v6 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr || *v6 != 5 || v6[1])
    && !(unsigned __int8)sub_1666670(a1 + 296, a2)
    || (v8 = *(unsigned __int16 *)(a3 + 4), (unsigned int)(v8 - 3) <= 1)
    || ((_WORD)v8 || (v9 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL)) == nullptr || *v9 != 5 || (v10 = a1 + 296, v9[1]))
    && (v10 = a1 + 296, !(unsigned __int8)sub_1666670(a1 + 296, a3)) )
  {
    sub_24EA30(a1, 3u, nullptr);
    result = 0;
    goto LABEL_9;
  }
  if ( !*(_QWORD *)(a1 + 304) )
    sub_16669E0(v10);
  v11 = sub_1666310();
  if ( !*(_WORD *)(a2 + 4) )
  {
    v12 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v12 )
    {
      if ( *v12 == 5 && !v12[1] )
      {
        BYTE4(v27) &= 0xFCu;
        v30 &= 0xFCu;
        LODWORD(v27) = 0;
        v28 = 0;
        v29 = 1;
        v31 = 0;
        if ( !(unsigned __int8)sub_1666AE0(v10, a2, &v27, &v32) )
        {
          sub_1872CE0("");
          sub_1873130(114, 63);
        }
        if ( *(_WORD *)(a3 + 4) || (v17 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL)) == nullptr || *v17 != 5 || v17[1] )
        {
          v18 = sub_1666D30(v10, a3);
          v32 = v11;
          v33 = 0;
          sub_17B3860(v11, &v33, &v27);
          v23 = sub_17B44D0(v11, &v33, v18);
          sub_17B1E70(v32, &v33);
          v19 = v23;
LABEL_38:
          v20 = qword_1C7F2C0;
          v24 = v19;
          sub_182CBA0(qword_1C7F2C0, &v27);
          sub_182CBA0(v20, &v29);
          result = v24;
          goto LABEL_9;
        }
        sub_276C20((__int64)&v32, a1, a3);
        v21 = qword_1C7F2C0;
        if ( (v27 & 0x100000000LL) != 0 || (v32 & 0x100000000LL) != 0 )
        {
          if ( !(unsigned int)sub_182C7B0(qword_1C7F2C0, &v27, &v32) )
            goto LABEL_45;
        }
        else if ( (_DWORD)v27 == (_DWORD)v32 )
        {
LABEL_45:
          if ( (v30 & 1) != 0 || (v35 & 1) != 0 )
            v22 = (unsigned int)sub_182C7B0(v21, &v29, &v34) == 0;
          else
            v22 = v29 == v34;
          goto LABEL_48;
        }
        v22 = 0;
LABEL_48:
        v26 = v22;
        sub_25A130((char *)&v32);
        v19 = v26;
        goto LABEL_38;
      }
    }
  }
  v13 = sub_1666D30(v10, a2);
  if ( !*(_WORD *)(a3 + 4) )
  {
    v14 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
    if ( v14 )
    {
      if ( *v14 == 5 && !v14[1] )
      {
        BYTE4(v32) &= 0xFCu;
        v35 &= 0xFCu;
        LODWORD(v32) = 0;
        v33 = 0;
        v34 = 1;
        v36 = 0;
        if ( !(unsigned __int8)sub_1666AE0(v10, a3, &v32, &v27) )
        {
          sub_1872CE0("");
          sub_1873130(114, 63);
        }
        v27 = v11;
        v28 = 0;
        sub_17B3860(v11, &v28, &v32);
        v25 = sub_17B44D0(v11, v13, &v28);
        sub_17B1E70(v27, &v28);
        v16 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v32);
        sub_182CBA0(v16, &v34);
        result = v25;
LABEL_9:
        if ( !v4 )
          return result;
LABEL_27:
        byte_1C7EBA0 = 1;
        return result;
      }
    }
  }
  v15 = sub_1666D30(v10, a3);
  result = sub_17B44D0(v11, v13, v15);
  if ( v4 )
    goto LABEL_27;
  return result;
}

