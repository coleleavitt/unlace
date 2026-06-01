__int64 __fastcall sub_B77620(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdx
  unsigned __int64 v3; // r13
  __int64 v4; // rbx
  __int64 v5; // rax
  char v6; // dl
  __int64 v7; // r12
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // r13
  unsigned int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // ebx
  _QWORD v17[7]; // [rsp+0h] [rbp-38h] BYREF

  v1 = sub_B77450(a1);
  if ( !v1 )
    return 0;
  v3 = v1;
  v4 = v2;
  v5 = sub_B8C330(a1);
  v6 = *(_BYTE *)(v3 + 16);
  v7 = *(_QWORD *)(v5 + 2312);
  if ( v6 == 26 )
  {
    v8 = ((*(_BYTE *)(v3 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
  }
  else
  {
    v9 = 16;
    if ( v6 == 25 )
      goto LABEL_5;
    v8 = 15;
  }
  v9 = 8 * ((v8 + 8 * (unsigned int)*(unsigned __int16 *)(v3 + 22)) >> 3) + 8;
LABEL_5:
  v10 = v9 + v4;
  v11 = sub_F6C520(*(_QWORD *)(v3 + 24));
  v17[0] = *(_QWORD *)(v3 + 24);
  v17[1] = v11 * ((v10 != 0) + (v10 - (unsigned __int64)(v10 != 0)) / v11);
  v12 = (unsigned int)sub_F6CE20(v17);
  v13 = sub_F6CCB0(v17);
  v14 = *(unsigned int *)(a1 + 24);
  v15 = v13;
  if ( (_DWORD)v12 == 0 || v13 == 0 || !(_DWORD)v14 || !(unsigned __int8)sub_10246C0(v7, (unsigned int)v12, v14) )
    return 0;
  return (v12 << 32) | v15;
}
