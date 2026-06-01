__int64 __fastcall sub_9F7840(__int64 a1, __int64 a2, __int64 a3)
{
  void *v4; // r15
  int v5; // eax
  void *v6; // r15
  int v7; // eax
  void *v8; // r15
  int v9; // eax
  void *v10; // r12
  void *v11; // r12
  void *v12; // rbx
  _QWORD v14[2]; // [rsp+0h] [rbp-98h] BYREF
  _QWORD v15[2]; // [rsp+10h] [rbp-88h] BYREF
  _QWORD v16[2]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v17[2]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v19[9]; // [rsp+50h] [rbp-48h] BYREF

  v14[0] = 0;
  v14[1] = 0;
  v4 = qword_1C7F2C0;
  v15[0] = 1;
  v15[1] = 0;
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, v14, a2);
    if ( (*(_BYTE *)(a2 + 20) & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    LODWORD(v14[0]) = *(_DWORD *)a2;
    if ( (*(_BYTE *)(a2 + 20) & 1) == 0 )
    {
LABEL_3:
      v5 = *(_DWORD *)(a2 + 16);
      BYTE4(v15[0]) &= ~1u;
      LODWORD(v15[0]) = v5;
      goto LABEL_4;
    }
  }
  sub_182C690(v4, v15, a2 + 16);
LABEL_4:
  v16[0] = 0;
  v6 = qword_1C7F2C0;
  v16[1] = 0;
  v17[0] = 1;
  v17[1] = 0;
  if ( (*(_BYTE *)(a2 + 36) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v16, a2 + 32);
  else
    LODWORD(v16[0]) = *(_DWORD *)(a2 + 32);
  if ( (*(_BYTE *)(a2 + 52) & 1) != 0 )
  {
    sub_182C690(v6, v17, a2 + 48);
  }
  else
  {
    v7 = *(_DWORD *)(a2 + 48);
    BYTE4(v17[0]) &= ~1u;
    LODWORD(v17[0]) = v7;
  }
  v18[0] = 0;
  v8 = qword_1C7F2C0;
  v18[1] = 0;
  v19[0] = 1;
  v19[1] = 0;
  if ( (*(_BYTE *)(a2 + 68) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v18, a2 + 64);
  else
    LODWORD(v18[0]) = *(_DWORD *)(a2 + 64);
  if ( (*(_BYTE *)(a2 + 84) & 1) != 0 )
  {
    sub_182C690(v8, v19, a2 + 80);
  }
  else
  {
    v9 = *(_DWORD *)(a2 + 80);
    BYTE4(v19[0]) &= ~1u;
    LODWORD(v19[0]) = v9;
  }
  sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v14, a3, (__int64)v14);
  sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v16, a3 + 32, (__int64)v16);
  sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v18, a3 + 64, (__int64)v18);
  sub_8A6550(a1, (__int64)v14);
  v10 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v18);
  sub_182CBA0(v10, v19);
  v11 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v16);
  sub_182CBA0(v11, v17);
  v12 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v14);
  sub_182CBA0(v12, v15);
  return a1;
}

