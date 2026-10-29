__int64 __fastcall sub_94A150(int a1, __int64 *a2)
{
  __int64 v2; // rdx
  unsigned int v3; // ebx
  void *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // r14
  int v7; // eax
  void *v8; // r15
  void *v9; // rbx
  void *v11; // r15
  unsigned int v12; // [rsp+4h] [rbp-94h]
  _QWORD v13[2]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-68h] BYREF
  int v15; // [rsp+40h] [rbp-58h] BYREF
  char v16; // [rsp+44h] [rbp-54h]
  __int64 v17; // [rsp+48h] [rbp-50h]
  int v18; // [rsp+50h] [rbp-48h] BYREF
  char v19; // [rsp+54h] [rbp-44h]
  __int64 v20; // [rsp+58h] [rbp-40h]

  v13[0] = 0;
  v13[1] = 0;
  v14[0] = 1;
  v14[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v14);
  v2 = *a2;
  BYTE4(v14[0]) &= ~1u;
  LODWORD(v14[0]) = 1;
  if ( v2 )
  {
    v3 = 1;
    v12 = 0;
    while ( 1 )
    {
      v4 = qword_1C7F2C0;
      if ( v3 >= *(_DWORD *)(v2 - 4) )
        goto LABEL_11;
      v16 &= 0xFCu;
      v5 = 32LL * v3;
      v19 &= 0xFCu;
      v6 = v2 + v5;
      v15 = 0;
      v17 = 0;
      v18 = 1;
      v20 = 0;
      if ( (*(_BYTE *)(v2 + v5 + 4) & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v15, v2 + v5);
      else
        v15 = *(_DWORD *)v6;
      if ( (*(_BYTE *)(v6 + 20) & 1) != 0 )
      {
        sub_182C690(v4, &v18, v6 + 16);
      }
      else
      {
        v7 = *(_DWORD *)(v6 + 16);
        v19 &= ~1u;
        v18 = v7;
      }
      sub_1831690(qword_1C7F2C0, &v15);
      if ( !LODWORD(v13[0]) )
        goto LABEL_14;
      v8 = qword_1C7F2C0;
      if ( v15 )
        break;
LABEL_10:
      ++v3;
      sub_182CBA0(v8, &v15);
      sub_182CBA0(v8, &v18);
      v2 = *a2;
      if ( !*a2 )
        goto LABEL_11;
    }
    if ( (v19 & 1) != 0 || v18 != 1 || (v14[0] & 0x100000000LL) != 0 || LODWORD(v14[0]) != 1 )
    {
      if ( !(unsigned __int8)sub_1848D40(qword_1C7F2C0, &v15, v13) )
        goto LABEL_28;
    }
    else
    {
      if ( (v16 & 1) == 0 && (v13[0] & 0x100000000LL) == 0 )
      {
        if ( SLODWORD(v13[0]) <= v15 )
          goto LABEL_10;
        LODWORD(v13[0]) = v15;
        BYTE4(v13[0]) &= ~1u;
        goto LABEL_17;
      }
      if ( (int)sub_182C7B0(qword_1C7F2C0, &v15, v13) >= 0 )
      {
LABEL_28:
        v8 = qword_1C7F2C0;
        goto LABEL_10;
      }
    }
LABEL_14:
    v11 = qword_1C7F2C0;
    if ( (v16 & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, v13, &v15);
    }
    else
    {
      BYTE4(v13[0]) &= ~1u;
      LODWORD(v13[0]) = v15;
    }
    if ( (v19 & 1) != 0 )
    {
      sub_182C690(v11, v14, &v18);
      v12 = v3;
      v8 = qword_1C7F2C0;
      goto LABEL_10;
    }
LABEL_17:
    BYTE4(v14[0]) &= ~1u;
    v12 = v3;
    v8 = qword_1C7F2C0;
    LODWORD(v14[0]) = v18;
    goto LABEL_10;
  }
  v12 = 0;
LABEL_11:
  v9 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v13);
  sub_182CBA0(v9, v14);
  return v12;
}

