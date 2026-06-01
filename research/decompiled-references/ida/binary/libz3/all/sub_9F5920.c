__int64 __fastcall sub_9F5920(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // r13d
  void *v5; // r15
  int v6; // eax
  void *v7; // rbp
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // r15
  __int64 v13; // rbx
  int v14; // edx
  __int64 i; // rsi
  __int64 v16; // rbp
  __int64 v18; // [rsp+0h] [rbp-58h] BYREF
  __int64 v19; // [rsp+8h] [rbp-50h]
  __int64 v20; // [rsp+10h] [rbp-48h] BYREF
  __int64 v21; // [rsp+18h] [rbp-40h]
  int v22; // [rsp+20h] [rbp-38h]
  int v23; // [rsp+28h] [rbp-30h]
  char v24; // [rsp+30h] [rbp-28h]

  v4 = a2;
  v18 = 0;
  v19 = 0;
  v5 = qword_1C7F2C0;
  v20 = 1;
  v21 = 0;
  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, &v18, a3);
    if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    LODWORD(v18) = *(_DWORD *)a3;
    if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
    {
LABEL_3:
      v6 = *(_DWORD *)(a3 + 16);
      BYTE4(v20) &= ~1u;
      LODWORD(v20) = v6;
      goto LABEL_4;
    }
  }
  sub_182C690(v5, &v20, a3 + 16);
LABEL_4:
  sub_B28AA0(a1, a2 + 840, &v18, 0, 0);
  v7 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v18);
  sub_182CBA0(v7, &v20);
  v10 = *(_QWORD *)(a3 + 32);
  if ( !v10 )
    return a1;
  v11 = *(unsigned int *)(v10 - 4);
  if ( !(_DWORD)v11 )
    return a1;
  v12 = 8 * v11;
  v13 = 0;
  v14 = 0;
  for ( i = 0; ; i = v16 )
  {
    v16 = *(_QWORD *)(v10 + v13);
    if ( i )
      break;
LABEL_8:
    v13 += 8;
    v14 = 1;
    if ( v12 == v13 )
      goto LABEL_13;
LABEL_9:
    v10 = *(_QWORD *)(a3 + 32);
  }
  if ( v16 != i )
  {
    sub_9F5780(v4, i, v14, a1, v8, v9, v18, v19, v20, v21, v22, v23, v24);
    goto LABEL_8;
  }
  v13 += 8;
  ++v14;
  if ( v12 != v13 )
    goto LABEL_9;
LABEL_13:
  if ( v16 )
    sub_9F5780(v4, v16, v14, a1, v8, v9, v18, v19, v20, v21, v22, v23, v24);
  return a1;
}

