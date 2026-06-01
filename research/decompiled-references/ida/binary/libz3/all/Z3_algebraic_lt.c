__int64 __fastcall Z3_algebraic_lt(__int64 a1, __int64 a2, __int64 a3)
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
  unsigned __int8 v19; // al
  void *v20; // rbx
  unsigned int v21; // eax
  unsigned __int8 v22; // [rsp+8h] [rbp-90h]
  unsigned __int8 v23; // [rsp+8h] [rbp-90h]
  unsigned __int8 v24; // [rsp+10h] [rbp-88h]
  unsigned __int8 v25; // [rsp+1Fh] [rbp-79h]
  __int64 v26; // [rsp+20h] [rbp-78h] BYREF
  __int64 v27; // [rsp+28h] [rbp-70h] BYREF
  int v28; // [rsp+30h] [rbp-68h] BYREF
  char v29; // [rsp+34h] [rbp-64h]
  __int64 v30; // [rsp+38h] [rbp-60h]
  __int64 v31; // [rsp+40h] [rbp-58h] BYREF
  __int64 v32; // [rsp+48h] [rbp-50h] BYREF
  int v33; // [rsp+50h] [rbp-48h] BYREF
  char v34; // [rsp+54h] [rbp-44h]
  __int64 v35; // [rsp+58h] [rbp-40h]

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_29EFE0();
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
        BYTE4(v26) &= 0xFCu;
        v29 &= 0xFCu;
        LODWORD(v26) = 0;
        v27 = 0;
        v28 = 1;
        v30 = 0;
        if ( !(unsigned __int8)sub_1666AE0(v10, a2, &v26, &v31) )
        {
          sub_1872CE0("");
          sub_1873130(114, 63);
        }
        if ( *(_WORD *)(a3 + 4) || (v17 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL)) == nullptr || *v17 != 5 || v17[1] )
        {
          v18 = sub_1666D30(v10, a3);
          v31 = v11;
          v32 = 0;
          sub_17B3860(v11, &v32, &v26);
          v22 = sub_17B44F0(v11, &v32, v18);
          sub_17B1E70(v31, &v32);
          v19 = v22;
        }
        else
        {
          sub_276C20((__int64)&v31, a1, a3);
          if ( (v29 & 1) != 0 || v28 != 1 || (v34 & 1) != 0 || v33 != 1 )
          {
            LOBYTE(v21) = sub_1848D40(qword_1C7F2C0, &v26, &v31);
          }
          else if ( (v26 & 0x100000000LL) != 0 || (v31 & 0x100000000LL) != 0 )
          {
            v21 = (unsigned int)sub_182C7B0(qword_1C7F2C0, &v26, &v31) >> 31;
          }
          else
          {
            LOBYTE(v21) = (int)v26 < (int)v31;
          }
          v25 = v21;
          sub_25A130((char *)&v31);
          v19 = v25;
        }
        v20 = qword_1C7F2C0;
        v23 = v19;
        sub_182CBA0(qword_1C7F2C0, &v26);
        sub_182CBA0(v20, &v28);
        result = v23;
LABEL_9:
        if ( !v4 )
          return result;
LABEL_27:
        byte_1C7EBA0 = 1;
        return result;
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
        BYTE4(v31) &= 0xFCu;
        v34 &= 0xFCu;
        LODWORD(v31) = 0;
        v32 = 0;
        v33 = 1;
        v35 = 0;
        if ( !(unsigned __int8)sub_1666AE0(v10, a3, &v31, &v26) )
        {
          sub_1872CE0("");
          sub_1873130(114, 63);
        }
        v26 = v11;
        v27 = 0;
        sub_17B3860(v11, &v27, &v31);
        v24 = sub_17B44F0(v11, v13, &v27);
        sub_17B1E70(v26, &v27);
        v16 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v31);
        sub_182CBA0(v16, &v33);
        result = v24;
        goto LABEL_9;
      }
    }
  }
  v15 = sub_1666D30(v10, a3);
  result = sub_17B44F0(v11, v13, v15);
  if ( v4 )
    goto LABEL_27;
  return result;
}

