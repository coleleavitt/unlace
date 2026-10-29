__int64 __fastcall sub_9AF010(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  void *v4; // r15
  int v5; // eax
  void *v6; // rbx
  int v8; // edx
  bool v9; // al
  __int64 v10; // rcx
  __int64 v11; // rcx
  void *v12; // [rsp+8h] [rbp-60h]
  __int64 v13; // [rsp+10h] [rbp-58h] BYREF
  __int64 v14; // [rsp+18h] [rbp-50h]
  __int64 v15; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+28h] [rbp-40h]

  v3 = a3;
  v4 = qword_1C7F2C0;
  if ( (*(_BYTE *)(a2 + 4) & 1) == 0 )
  {
    if ( *(_DWORD *)a2 == 1 )
    {
      if ( (*(_BYTE *)(a2 + 20) & 1) == 0 )
      {
        v10 = a1;
        if ( *(_DWORD *)(a2 + 16) == 1 )
          return sub_2FC4A0((__int64)qword_1C7F2C0, a1, a3, v10);
      }
    }
    else if ( *(_DWORD *)a2 == -1 && (*(_BYTE *)(a2 + 20) & 1) == 0 )
    {
      v11 = a1;
      if ( *(_DWORD *)(a2 + 16) == 1 )
        return sub_89ABF0((__int64)qword_1C7F2C0, a1, a3, v11);
    }
  }
  if ( (*(_BYTE *)(a3 + 4) & 1) == 0 )
  {
    v8 = *(_DWORD *)a3;
    v9 = (*(_BYTE *)(v3 + 20) & 1) == 0;
    if ( v8 != 1 )
    {
      if ( v8 == -1 && (*(_BYTE *)(v3 + 20) & 1) == 0 && *(_DWORD *)(v3 + 16) == 1 )
      {
        v11 = a1;
        a3 = a2;
        return sub_89ABF0((__int64)qword_1C7F2C0, a1, a3, v11);
      }
LABEL_13:
      BYTE4(v13) &= 0xFCu;
      v14 = 0;
      v15 = 1;
      v16 = 0;
      LODWORD(v13) = v8;
      if ( v9 )
        goto LABEL_6;
      goto LABEL_14;
    }
    if ( (*(_BYTE *)(v3 + 20) & 1) != 0 || *(_DWORD *)(v3 + 16) != 1 )
      goto LABEL_13;
    v10 = a1;
    a3 = a2;
    return sub_2FC4A0((__int64)qword_1C7F2C0, a1, a3, v10);
  }
  v13 = 0;
  v14 = 0;
  v15 = 1;
  v16 = 0;
  sub_182C690(qword_1C7F2C0, &v13, a3);
  if ( (*(_BYTE *)(v3 + 20) & 1) == 0 )
  {
LABEL_6:
    v5 = *(_DWORD *)(v3 + 16);
    BYTE4(v15) &= ~1u;
    LODWORD(v15) = v5;
    goto LABEL_7;
  }
LABEL_14:
  sub_182C690(v4, &v15, v3 + 16);
LABEL_7:
  if ( (v15 & 0x100000000LL) != 0 || (_DWORD)v15 != 1 || (*(_BYTE *)(a2 + 20) & 1) != 0 || *(_DWORD *)(a2 + 16) != 1 )
  {
    sub_1848FF0(qword_1C7F2C0, &v13, a2);
  }
  else
  {
    v12 = qword_1C7F2C0;
    sub_1831650(qword_1C7F2C0, &v13, a2);
    sub_182CBA0(v12, &v15);
    BYTE4(v15) &= ~1u;
    LODWORD(v15) = 1;
  }
  sub_2FC4A0((__int64)qword_1C7F2C0, a1, (__int64)&v13, a1);
  v6 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v13);
  return sub_182CBA0(v6, &v15);
}

