__int64 __fastcall sub_920250(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r15
  __int64 v3; // rbp
  _QWORD *v4; // r14
  __int64 v5; // rsi
  void *v6; // r12
  int v7; // edx
  void *v8; // r12
  int v9; // eax
  __int64 v10; // r14
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  void *v15; // r14
  void *v16; // r12
  void *v17; // [rsp+0h] [rbp-B8h]
  void *v18; // [rsp+0h] [rbp-B8h]
  __int64 v19; // [rsp+0h] [rbp-B8h]
  __int64 v20; // [rsp+0h] [rbp-B8h]
  __int64 v21; // [rsp+0h] [rbp-B8h]
  __int64 v22; // [rsp+8h] [rbp-B0h]
  __int64 v23; // [rsp+18h] [rbp-A0h]
  __int64 v24; // [rsp+18h] [rbp-A0h]
  __int64 v25; // [rsp+18h] [rbp-A0h]
  void *v26; // [rsp+28h] [rbp-90h]
  void *v27; // [rsp+28h] [rbp-90h]
  char v28; // [rsp+3Fh] [rbp-79h] BYREF
  __int64 v29; // [rsp+40h] [rbp-78h] BYREF
  __int64 v30; // [rsp+48h] [rbp-70h]
  __int64 v31; // [rsp+50h] [rbp-68h] BYREF
  __int64 v32; // [rsp+58h] [rbp-60h]
  _QWORD v33[2]; // [rsp+60h] [rbp-58h] BYREF
  _QWORD v34[9]; // [rsp+70h] [rbp-48h] BYREF

  result = *(_QWORD *)(a1 + 32);
  if ( result )
  {
    result = *(unsigned int *)(result - 4);
    if ( (int)result > 0 )
    {
      v2 = 8 * result;
      v3 = 0;
      v22 = result;
      while ( 1 )
      {
        while ( 1 )
        {
          result = *(_QWORD *)(a1 + 400);
          if ( !result || *(_DWORD *)(result - 4) <= (int)v3 )
            return result;
          v4 = *(_QWORD **)(*(_QWORD *)(a1 + 32) + 8 * v3);
          v5 = *v4;
          v29 = 0;
          v30 = 0;
          v31 = 1;
          v32 = 0;
          if ( (unsigned __int8)sub_1666AE0(a1 + 208, v5, &v29, &v28) )
          {
            if ( !(_DWORD)v29 )
              break;
          }
          v18 = qword_1C7F2C0;
          ++v3;
          sub_182CBA0(qword_1C7F2C0, &v29);
          result = sub_182CBA0(v18, &v31);
          if ( v22 == v3 )
            return result;
        }
        v17 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v29);
        sub_182CBA0(v17, &v31);
        result = *(_QWORD *)(a1 + 400) + (v3 << 6);
        if ( *(_DWORD *)result || *(_DWORD *)(result + 32) )
          break;
LABEL_28:
        if ( v22 == ++v3 )
          return result;
      }
      v29 = 0;
      v30 = 0;
      v31 = 1;
      v6 = qword_1C7F2C0;
      v32 = 0;
      if ( (*(_BYTE *)(result + 4) & 1) != 0 )
      {
        v21 = result;
        sub_182C690(qword_1C7F2C0, &v29, result);
        result = v21;
      }
      else
      {
        LODWORD(v29) = *(_DWORD *)result;
      }
      if ( (*(_BYTE *)(result + 20) & 1) != 0 )
      {
        v20 = result;
        sub_182C690(v6, &v31, result + 16);
        result = v20;
      }
      else
      {
        v7 = *(_DWORD *)(result + 16);
        BYTE4(v31) &= ~1u;
        LODWORD(v31) = v7;
      }
      v33[0] = 0;
      v33[1] = 0;
      v34[0] = 1;
      v8 = qword_1C7F2C0;
      v34[1] = 0;
      if ( (*(_BYTE *)(result + 36) & 1) != 0 )
      {
        v19 = result;
        sub_182C690(qword_1C7F2C0, v33, result + 32);
        result = v19;
      }
      else
      {
        LODWORD(v33[0]) = *(_DWORD *)(result + 32);
      }
      if ( (*(_BYTE *)(result + 52) & 1) != 0 )
      {
        sub_182C690(v8, v34, result + 48);
      }
      else
      {
        v9 = *(_DWORD *)(result + 48);
        BYTE4(v34[0]) &= ~1u;
        LODWORD(v34[0]) = v9;
      }
      v10 = sub_15D1F10(*v4);
      v11 = 0;
      while ( 1 )
      {
        while ( v10 != sub_15D1F10(**(_QWORD **)(*(_QWORD *)(a1 + 32) + v11)) )
        {
LABEL_19:
          v11 += 8;
          if ( v2 == v11 )
            goto LABEL_27;
        }
        v12 = *(_QWORD *)(a1 + 400) + 8 * v11;
        if ( (*(_BYTE *)(v12 + 20) & 1) != 0
          || *(_DWORD *)(v12 + 16) != 1
          || (v31 & 0x100000000LL) != 0
          || (_DWORD)v31 != 1 )
        {
          v23 = *(_QWORD *)(a1 + 400) + 8 * v11;
          sub_1852000(qword_1C7F2C0, v23, &v29);
          v13 = v23;
        }
        else
        {
          v24 = *(_QWORD *)(a1 + 400) + 8 * v11;
          v26 = qword_1C7F2C0;
          sub_1832A70(qword_1C7F2C0, v12, &v29);
          sub_182CBA0(v26, v24 + 16);
          v13 = v24;
          *(_BYTE *)(v24 + 20) &= ~1u;
          *(_DWORD *)(v24 + 16) = 1;
        }
        v14 = v13 + 32;
        if ( (*(_BYTE *)(v13 + 52) & 1) == 0
          && *(_DWORD *)(v13 + 48) == 1
          && (v34[0] & 0x100000000LL) == 0
          && LODWORD(v34[0]) == 1 )
        {
          v25 = v13;
          v27 = qword_1C7F2C0;
          sub_1832A70(qword_1C7F2C0, v14, v33);
          sub_182CBA0(v27, v25 + 48);
          *(_BYTE *)(v25 + 52) &= ~1u;
          *(_DWORD *)(v25 + 48) = 1;
          goto LABEL_19;
        }
        sub_1852000(qword_1C7F2C0, v14, v33);
        v11 += 8;
        if ( v2 == v11 )
        {
LABEL_27:
          v15 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v33);
          sub_182CBA0(v15, v34);
          v16 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v29);
          result = sub_182CBA0(v16, &v31);
          goto LABEL_28;
        }
      }
    }
  }
  return result;
}

