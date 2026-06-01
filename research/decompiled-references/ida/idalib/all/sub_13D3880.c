__int64 __fastcall sub_13D3880(_BYTE *a1, __int64 a2, unsigned __int8 *a3, _BYTE *a4, double a5, double a6)
{
  __int64 v6; // r13
  int v8; // r14d
  __int64 v9; // rsi
  char v10; // al
  unsigned int v11; // eax
  unsigned __int8 *v12; // r12
  unsigned __int8 *v13; // rbp
  unsigned __int8 v14; // al
  __int64 result; // rax
  __int64 v16; // r15
  __int64 v17; // rdx
  char v18; // al
  unsigned __int64 v19; // rax
  unsigned __int8 *v20; // rdx
  __int64 v21; // rbx
  __int16 v22; // dx
  bool v23; // r15
  __int64 v24; // r12
  unsigned int v25; // eax
  __int64 v26; // rsi
  unsigned __int8 *v27; // rdx
  unsigned __int8 v28; // [rsp+0h] [rbp-A8h]
  char v29; // [rsp+0h] [rbp-A8h]
  _BYTE *v31; // [rsp+18h] [rbp-90h]
  _BYTE v32[136]; // [rsp+20h] [rbp-88h] BYREF

  v6 = (__int64)a1;
  v31 = a4;
  if ( !a1[144] )
  {
    if ( !a1[26] )
    {
      sub_13D1530((__int64)v32, (__int64)a1, *((_QWORD *)a1 + 19), 1224);
      a1 = v32;
      sub_AEA040((__int64)v32);
    }
    *(_BYTE *)(v6 + 144) = 1;
  }
  v8 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        LOBYTE(v9) = *a3;
        if ( (*a3 & 0x80u) == 0 )
          break;
        while ( 1 )
        {
          LODWORD(a1) = (_DWORD)a3;
          v16 = (__int64)a3;
          v11 = sub_22188B0(a3, *(_QWORD *)(v6 + 120), a5, a6);
          if ( !v11 )
            break;
LABEL_15:
          v8 = 0;
          a3 = (unsigned __int8 *)(v16 + v11);
          LOBYTE(v9) = *a3;
          if ( (*a3 & 0x80u) == 0 )
            goto LABEL_7;
        }
        if ( (_BYTE)v8 )
          goto LABEL_20;
        v16 = (__int64)a3;
LABEL_19:
        a3 = (unsigned __int8 *)v16;
        if ( *(_BYTE *)(v6 + 26) )
        {
LABEL_20:
          ++a3;
          v8 = 1;
        }
        else
        {
          a3 = (unsigned __int8 *)(v16 + 1);
          sub_13D1530((__int64)v32, v6, v16, 1358);
          a1 = v32;
          v8 = 1;
          sub_AEA040((__int64)v32);
        }
      }
LABEL_7:
      LOBYTE(a1) = (_BYTE)v9 == 10 || (_BYTE)v9 == 0;
      if ( !(_BYTE)a1 )
      {
        if ( (_BYTE)v9 == 13 )
        {
          LOBYTE(v9) = *(a3 - 1);
          v16 = (__int64)a3--;
          goto LABEL_32;
        }
        while ( 1 )
        {
          v10 = a3[1];
          v16 = (__int64)(a3 + 1);
          if ( v10 < 0 )
            break;
          LOBYTE(a4) = v10 == 10 || v10 == 0;
          v8 = (int)a4;
          if ( (_BYTE)a4 )
            goto LABEL_22;
          if ( v10 == 13 )
            goto LABEL_32;
          LOBYTE(v9) = *++a3;
        }
        LODWORD(a1) = (_DWORD)a3 + 1;
        v11 = sub_22188B0(a3 + 1, *(_QWORD *)(v6 + 120), a5, a6);
        if ( !v11 )
          goto LABEL_19;
        goto LABEL_15;
      }
      v16 = (__int64)a3;
      LODWORD(a1) = v8;
      v10 = v9;
LABEL_22:
      if ( !v10 )
      {
        LODWORD(a4) = *(unsigned __int8 *)(v6 + 26);
        v12 = (unsigned __int8 *)(v16 + 1);
        v8 = (int)a1;
        v13 = (unsigned __int8 *)v16;
        goto LABEL_24;
      }
      a3 = (unsigned __int8 *)(v16 - 1);
      LOBYTE(v9) = *(_BYTE *)(v16 - 1);
      v8 = (int)a1;
LABEL_32:
      if ( (byte_2411740[2 * (unsigned __int8)v9] & 5) != 0 )
      {
        while ( 1 )
        {
          v17 = (__int64)(a3 - 1);
          v9 = *(a3 - 1);
          if ( (byte_2411740[2 * v9] & 5) == 0 )
            break;
          --a3;
        }
        v18 = 1;
        if ( (_BYTE)v9 == 92 )
        {
          LODWORD(a4) = *(unsigned __int8 *)(v6 + 26);
          v12 = a3;
          v13 = a3 - 1;
          if ( !(_BYTE)a4 )
            goto LABEL_43;
          goto LABEL_24;
        }
      }
      else
      {
        v17 = (__int64)a3;
        v18 = 0;
        if ( (_BYTE)v9 == 92 )
        {
          LODWORD(a4) = *(unsigned __int8 *)(v6 + 26);
          v12 = (unsigned __int8 *)v16;
          v13 = a3;
          goto LABEL_24;
        }
      }
      if ( (_BYTE)v9 != 47
        || *(_BYTE *)(v17 - 1) != 63
        || *(_BYTE *)(v17 - 2) != 63
        || (*(_BYTE *)(*(_QWORD *)(v6 + 136) + 3LL) & 1) == 0 )
      {
        goto LABEL_49;
      }
      v13 = (unsigned __int8 *)(v17 - 2);
      LODWORD(a4) = *(unsigned __int8 *)(v6 + 26);
      v12 = (unsigned __int8 *)(v17 - 1);
      if ( v18 && !(_BYTE)a4 )
      {
LABEL_43:
        sub_13D1530((__int64)v32, v6, v17, 1021);
        sub_AEA040((__int64)v32);
        LODWORD(a4) = *(unsigned __int8 *)(v6 + 26);
        *(_BYTE *)(v6 + 26) = 1;
        v14 = *v13;
        if ( *v13 == 63 )
          goto LABEL_44;
        goto LABEL_25;
      }
LABEL_24:
      *(_BYTE *)(v6 + 26) = 1;
      v14 = *v13;
      if ( *v13 == 63 )
        goto LABEL_44;
LABEL_25:
      if ( v14 != 92 )
      {
        *(_BYTE *)(v6 + 26) = (_BYTE)a4;
        if ( v14 )
          goto LABEL_49;
LABEL_27:
        a3 = v12;
        if ( v12 == (unsigned __int8 *)(*(_QWORD *)(v6 + 120) + 1LL) )
          goto LABEL_48;
        goto LABEL_28;
      }
LABEL_44:
      v28 = (unsigned __int8)a4;
      v19 = sub_13D1690(v6, v13, a2);
      LODWORD(a4) = v28;
      *(_BYTE *)(v6 + 26) = v28;
      a3 = &v13[HIDWORD(v19)];
      if ( !(_BYTE)v19 )
        break;
      if ( a3 == v12 )
        goto LABEL_49;
      a1 = *(_BYTE **)(v6 + 120);
      v20 = a1 + 1;
      if ( (_BYTE)v19 != 47 )
        goto LABEL_58;
      if ( a3 == v20 )
        goto LABEL_48;
    }
    if ( a3 == v12 )
      goto LABEL_27;
    a1 = *(_BYTE **)(v6 + 120);
    v20 = a1 + 1;
LABEL_58:
    v23 = (_BYTE)v19 == 10 || (_BYTE)v19 == 13;
    if ( a3 != v20 && *a3 == 47 )
    {
      if ( v23 )
        break;
      goto LABEL_61;
    }
    if ( a3 != v13 )
    {
      if ( *v13 == 10 || *v13 == 13 )
      {
        v12 = v13;
      }
      else
      {
        while ( *v12 != 10 && *v12 != 13 )
        {
          if ( ++v12 == a3 )
            goto LABEL_69;
        }
      }
      if ( (byte_2411740[2 * (unsigned __int8)v19] & 7) == 0 )
        goto LABEL_76;
      LOBYTE(v26) = *a3;
      v27 = &v13[HIDWORD(v19)];
      if ( (byte_2411740[2 * *a3] & 7) != 0 )
      {
        do
          v26 = *++v27;
        while ( (byte_2411740[2 * v26] & 7) != 0 );
      }
      if ( (_BYTE)v26 != 47 || v27[1] != 47 )
      {
LABEL_76:
        if ( !v28 )
        {
          v29 = v19;
          sub_13D1530((__int64)v32, v6, (__int64)(v12 - 1), 1228);
          sub_AEA040((__int64)v32);
          LOBYTE(v19) = v29;
        }
      }
    }
LABEL_69:
    if ( v23 )
      break;
    a1 = *(_BYTE **)(v6 + 120);
    if ( a3 == a1 + 1 )
      break;
LABEL_61:
    if ( !(_BYTE)v19 )
    {
LABEL_28:
      a1 = *(_BYTE **)(v6 + 8);
      if ( a1
        && *((_QWORD *)a1 + 95)
        && *(_DWORD *)(v6 + 128) + (_DWORD)a3 - 1 - *(_DWORD *)(v6 + 112) == *((_DWORD *)a1 + 193) )
      {
        sub_145C700(a5, a6);
        *(_QWORD *)(v6 + 152) = *(_QWORD *)(v6 + 120);
        return 0;
      }
    }
  }
LABEL_48:
  v16 = (__int64)(a3 - 1);
LABEL_49:
  v21 = *(_QWORD *)(v6 + 8);
  if ( v21 && !*(_BYTE *)(v6 + 26) )
  {
    v24 = (unsigned int)sub_13D1500(v6, v16, 1);
    v25 = sub_13D1500(v6, *(_QWORD *)(v6 + 152), 1);
    result = sub_1463DC0(v21, a2, (v24 << 32) | v25, a5, a6);
    if ( (_BYTE)result )
    {
LABEL_55:
      *(_QWORD *)(v6 + 152) = v16;
      return result;
    }
    if ( !*(_BYTE *)(v6 + 146) )
      goto LABEL_52;
    return sub_13D3700(v6, (unsigned int *)a2, v16);
  }
  if ( *(_BYTE *)(v6 + 146) )
    return sub_13D3700(v6, (unsigned int *)a2, v16);
LABEL_52:
  result = *(unsigned __int8 *)(v6 + 24);
  if ( !(_BYTE)result && *(_QWORD *)(v6 + 120) != v16 )
  {
    *(_QWORD *)(v6 + 168) = v16++;
    v22 = *(_WORD *)(a2 + 18);
    *v31 = 1;
    *(_WORD *)(a2 + 18) = v22 & 0xFFFC | 1;
    goto LABEL_55;
  }
  *(_QWORD *)(v6 + 152) = v16;
  return 0;
}
