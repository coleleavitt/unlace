__int64 __fastcall sub_89AA40(__int64 a1, __int64 a2, __int64 a3)
{
  void *v5; // rdi
  int v6; // eax
  int v7; // eax
  void *v8; // rbp
  int v9; // eax
  void *v10; // rbp
  void *v12; // [rsp+8h] [rbp-70h]
  _QWORD v13[2]; // [rsp+10h] [rbp-68h] BYREF
  _QWORD v14[2]; // [rsp+20h] [rbp-58h] BYREF
  int v15; // [rsp+30h] [rbp-48h]

  v13[0] = 0;
  v13[1] = 0;
  v5 = qword_1C7F2C0;
  v14[0] = 1;
  v14[1] = 0;
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
  {
    v12 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, v13, a2);
    v5 = v12;
    if ( (*(_BYTE *)(a2 + 20) & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    LODWORD(v13[0]) = *(_DWORD *)a2;
    if ( (*(_BYTE *)(a2 + 20) & 1) == 0 )
    {
LABEL_3:
      v6 = *(_DWORD *)(a2 + 16);
      BYTE4(v14[0]) &= ~1u;
      LODWORD(v14[0]) = v6;
      goto LABEL_4;
    }
  }
  sub_182C690(v5, v14, a2 + 16);
LABEL_4:
  v15 = *(_DWORD *)(a2 + 32);
  sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v13, a3, (__int64)v13);
  v7 = *(_DWORD *)(a3 + 32);
  v8 = qword_1C7F2C0;
  *(_DWORD *)a1 = 0;
  v15 += v7;
  *(_BYTE *)(a1 + 4) &= 0xFCu;
  *(_BYTE *)(a1 + 20) &= 0xFCu;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  if ( (v13[0] & 0x100000000LL) != 0 )
    sub_182C690(v8, a1, v13);
  else
    *(_DWORD *)a1 = v13[0];
  if ( (v14[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v8, a1 + 16, v14);
  }
  else
  {
    v9 = v14[0];
    *(_BYTE *)(a1 + 20) &= ~1u;
    *(_DWORD *)(a1 + 16) = v9;
  }
  v10 = qword_1C7F2C0;
  *(_DWORD *)(a1 + 32) = v15;
  sub_182CBA0(v10, v13);
  sub_182CBA0(v10, v14);
  return a1;
}

