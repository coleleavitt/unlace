__int64 __fastcall sub_97C460(__int64 a1, int *a2)
{
  __int64 v2; // r14
  void *v3; // r13
  int v4; // eax
  int v5; // eax
  void *v6; // rbp
  int v7; // eax
  __int64 v8; // rdx
  void *v9; // r15
  void *v10; // rbp
  int v11; // eax
  void *v12; // rbx
  void *v14; // [rsp+8h] [rbp-80h]
  int v15; // [rsp+10h] [rbp-78h] BYREF
  char v16; // [rsp+14h] [rbp-74h]
  __int64 v17; // [rsp+18h] [rbp-70h]
  int v18; // [rsp+20h] [rbp-68h] BYREF
  char v19; // [rsp+24h] [rbp-64h]
  __int64 v20; // [rsp+28h] [rbp-60h]
  _QWORD v21[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v22[9]; // [rsp+40h] [rbp-48h] BYREF

  v2 = a1 + 768;
  v3 = qword_1C7F2C0;
  if ( (a2[1] & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, v2, a2);
  }
  else
  {
    v4 = *a2;
    *(_BYTE *)(a1 + 772) &= ~1u;
    *(_DWORD *)(a1 + 768) = v4;
  }
  if ( (a2[5] & 1) != 0 )
  {
    sub_182C690(v3, a1 + 784, a2 + 4);
  }
  else
  {
    v5 = a2[4];
    *(_BYTE *)(a1 + 788) &= ~1u;
    *(_DWORD *)(a1 + 784) = v5;
  }
  v21[0] = 0;
  v6 = qword_1C7F2C0;
  v21[1] = 0;
  v22[0] = 1;
  v22[1] = 0;
  if ( (*(_BYTE *)(a1 + 772) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v21, v2);
  else
    LODWORD(v21[0]) = *(_DWORD *)(a1 + 768);
  if ( (*(_BYTE *)(a1 + 788) & 1) != 0 )
  {
    sub_182C690(v6, v22, a1 + 784);
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 784);
    BYTE4(v22[0]) &= ~1u;
    LODWORD(v22[0]) = v7;
  }
  v8 = a1 + 896;
  if ( (v22[0] & 0x100000000LL) != 0
    || LODWORD(v22[0]) != 1
    || (*(_BYTE *)(a1 + 916) & 1) != 0
    || *(_DWORD *)(a1 + 912) != 1 )
  {
    sub_1848FF0(qword_1C7F2C0, v21, v8);
  }
  else
  {
    v14 = qword_1C7F2C0;
    sub_1831650(qword_1C7F2C0, v21, v8);
    sub_182CBA0(v14, v22);
    BYTE4(v22[0]) &= ~1u;
    LODWORD(v22[0]) = 1;
  }
  v16 &= 0xFCu;
  v9 = qword_1C7F2C0;
  v19 &= 0xFCu;
  v15 = 0;
  v17 = 0;
  v18 = 1;
  v20 = 0;
  if ( (v21[0] & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, &v15, v21);
  else
    v15 = v21[0];
  if ( (v22[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v9, &v18, v22);
  }
  else
  {
    v19 &= ~1u;
    v18 = v22[0];
  }
  v10 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v21);
  sub_182CBA0(v10, v22);
  if ( (v16 & 1) != 0 )
  {
    sub_182EA00(*(_QWORD *)(a1 + 824), a1 + 832, &v15);
  }
  else
  {
    v11 = v15;
    *(_BYTE *)(a1 + 836) &= ~1u;
    *(_DWORD *)(a1 + 832) = v11;
  }
  v12 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v15);
  return sub_182CBA0(v12, &v18);
}

