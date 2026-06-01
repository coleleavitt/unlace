__int64 __fastcall sub_C52050(__int64 a1, __int64 *a2, __int64 *a3, __int64 a4)
{
  int *v6; // r14
  char v8; // al
  void *v9; // r15
  char v10; // al
  int v11; // eax
  void *v12; // rdi
  void *v13; // r15
  void *v14; // rbx
  void *v15; // [rsp+8h] [rbp-90h]
  __int64 v17; // [rsp+20h] [rbp-78h] BYREF
  __int64 v18; // [rsp+28h] [rbp-70h]
  int v19; // [rsp+30h] [rbp-68h] BYREF
  char v20; // [rsp+34h] [rbp-64h]
  __int64 v21; // [rsp+38h] [rbp-60h]
  __int64 v22; // [rsp+40h] [rbp-58h] BYREF
  __int64 v23; // [rsp+48h] [rbp-50h]
  __int64 v24; // [rsp+50h] [rbp-48h] BYREF
  __int64 v25; // [rsp+58h] [rbp-40h]

  v6 = (int *)(a1 + 224);
  if ( (*(_BYTE *)(a1 + 244) & 1) != 0
    || *(_DWORD *)(a1 + 240) != 1
    || (v10 = *(_BYTE *)(a4 + 20), (v10 & 1) != 0)
    || *(_DWORD *)(a4 + 16) != 1 )
  {
    if ( !(unsigned __int8)sub_1848D40(qword_1C7F2C0, v6, a4) )
      return 1;
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 228) & 1) == 0 && (*(_BYTE *)(a4 + 4) & 1) == 0 )
    {
      if ( *(_DWORD *)(a1 + 224) < *(_DWORD *)a4 )
      {
        v22 = 0;
        v9 = qword_1C7F2C0;
        v23 = 0;
        v24 = 1;
        v25 = 0;
        goto LABEL_8;
      }
      return 1;
    }
    if ( (int)sub_182C7B0(qword_1C7F2C0, v6, a4) >= 0 )
      return 1;
  }
  v8 = *(_BYTE *)(a4 + 4);
  v22 = 0;
  v23 = 0;
  v24 = 1;
  v9 = qword_1C7F2C0;
  v25 = 0;
  if ( (v8 & 1) == 0 )
  {
    v10 = *(_BYTE *)(a4 + 20);
LABEL_8:
    LODWORD(v22) = *(_DWORD *)a4;
    goto LABEL_9;
  }
  sub_182C690(qword_1C7F2C0, &v22, a4);
  v10 = *(_BYTE *)(a4 + 20);
LABEL_9:
  if ( (v10 & 1) != 0 )
  {
    sub_182C690(v9, &v24, a4 + 16);
  }
  else
  {
    v11 = *(_DWORD *)(a4 + 16);
    BYTE4(v24) &= ~1u;
    LODWORD(v24) = v11;
  }
  v15 = qword_1C7F2C0;
  if ( (_DWORD)v22
    && ((*(_BYTE *)(a1 + 228) & 1) != 0
     || *(_DWORD *)(a1 + 224) != 1
     || (*(_BYTE *)(a1 + 244) & 1) != 0
     || *(_DWORD *)(a1 + 240) != 1) )
  {
    sub_1831650(qword_1C7F2C0, &v22, a1 + 240);
    sub_1831650(v15, &v24, v6);
    if ( (int)v24 < 0 )
    {
      sub_1831620(v15, &v22);
      sub_1831620(v15, &v24);
    }
    v17 = 0;
    v18 = 0;
    sub_1832C70(v15, &v22, &v24, &v17);
    if ( (v17 & 0x100000000LL) == 0 && (_DWORD)v17 == 1 )
    {
      sub_182CBA0(v15, &v17);
    }
    else
    {
      sub_1833EB0(v15, &v22, &v17, &v22);
      sub_1833EB0(v15, &v24, &v17, &v24);
      sub_182CBA0(v15, &v17);
    }
  }
  else
  {
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v22, (int *)&v22);
  }
  BYTE4(v17) &= 0xFCu;
  v12 = qword_1C7F2C0;
  v20 &= 0xFCu;
  LODWORD(v17) = 0;
  v18 = 0;
  v19 = 1;
  v21 = 0;
  if ( (v22 & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, &v17, &v22);
  else
    LODWORD(v17) = v22;
  if ( (v24 & 0x100000000LL) != 0 )
  {
    sub_182C690(v12, &v19, &v24);
  }
  else
  {
    v20 &= ~1u;
    v19 = v24;
  }
  v13 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v22);
  sub_182CBA0(v13, &v24);
  if ( (v20 & 1) == 0
    && v19 == 1
    && sub_C517B0((__int64 *)a1, a2, (__int64)&v17)
    && sub_C517B0((__int64 *)a1, a3, (__int64)&v17) )
  {
    sub_27B950((__int64)qword_1C7F2C0, a4, v6);
    sub_25A130((char *)&v17);
    return 1;
  }
  v14 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v17);
  sub_182CBA0(v14, &v19);
  return 0;
}

