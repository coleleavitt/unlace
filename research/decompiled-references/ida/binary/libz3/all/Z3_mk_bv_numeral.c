__int64 __fastcall Z3_mk_bv_numeral(__int64 a1, unsigned int a2, unsigned __int8 *a3)
{
  char v4; // al
  __int64 v5; // r14
  void *v6; // rdi
  __int64 v7; // rax
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // rbx
  void *v13; // rbp
  void *v15; // rbp
  void *v16; // [rsp+8h] [rbp-A0h]
  void *v17; // [rsp+8h] [rbp-A0h]
  void *v18; // [rsp+8h] [rbp-A0h]
  char v20; // [rsp+2Fh] [rbp-79h]
  _QWORD v21[2]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-68h] BYREF
  int v23; // [rsp+50h] [rbp-58h] BYREF
  char v24; // [rsp+54h] [rbp-54h]
  int v25; // [rsp+60h] [rbp-48h] BYREF
  char v26; // [rsp+64h] [rbp-44h]

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v20 = v4;
  if ( v4 )
    sub_297860(a1, a2, a3);
  v21[0] = 0;
  v21[1] = 0;
  *(_DWORD *)(a1 + 1520) = 0;
  v22[0] = 1;
  v22[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v22);
  BYTE4(v22[0]) &= ~1u;
  LODWORD(v22[0]) = 1;
  if ( a2 )
  {
    v5 = 0;
    do
    {
      while ( !a3[v5] )
      {
        if ( a2 == ++v5 )
          goto LABEL_13;
      }
      sub_17F6290(&v23, (unsigned int)v5);
      v6 = qword_1C7F2C0;
      if ( !v23 )
      {
        if ( (v21[0] & 0x100000000LL) != 0 )
        {
          v17 = qword_1C7F2C0;
          sub_182C690(qword_1C7F2C0, v21, v21);
          v6 = v17;
        }
        else
        {
          BYTE4(v21[0]) &= ~1u;
        }
        if ( (v22[0] & 0x100000000LL) != 0 )
          sub_182C690(v6, v22, v22);
        else
          BYTE4(v22[0]) &= ~1u;
        goto LABEL_12;
      }
      if ( LODWORD(v21[0]) )
      {
        if ( (v22[0] & 0x100000000LL) != 0 || LODWORD(v22[0]) != 1 || (v26 & 1) != 0 || v25 != 1 )
        {
          sub_1851D20(qword_1C7F2C0, v21, &v23, v21);
        }
        else
        {
          sub_1831A80(qword_1C7F2C0, v21, &v23, v21);
          sub_182CBA0(v6, v22);
          BYTE4(v22[0]) &= ~1u;
          LODWORD(v22[0]) = 1;
        }
        goto LABEL_12;
      }
      if ( (v24 & 1) != 0 )
      {
        v18 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, v21, &v23);
        v6 = v18;
        if ( (v26 & 1) != 0 )
        {
LABEL_29:
          sub_182C690(v6, v22, &v25);
          goto LABEL_12;
        }
      }
      else
      {
        BYTE4(v21[0]) &= ~1u;
        LODWORD(v21[0]) = v23;
        if ( (v26 & 1) != 0 )
          goto LABEL_29;
      }
      BYTE4(v22[0]) &= ~1u;
      LODWORD(v22[0]) = v25;
LABEL_12:
      ++v5;
      v16 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v23);
      sub_182CBA0(v16, &v25);
    }
    while ( a2 != v5 );
  }
LABEL_13:
  v7 = sub_1674700(a1 + 312, a2);
  v11 = sub_252180(a1, (__int64)v21, v7, v8, v9, v10);
  v12 = v11;
  if ( v20 )
  {
    sub_2BB620(v11);
    v15 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v21);
    sub_182CBA0(v15, v22);
    byte_1C7EBA0 = 1;
  }
  else
  {
    v13 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v21);
    sub_182CBA0(v13, v22);
  }
  return v12;
}

