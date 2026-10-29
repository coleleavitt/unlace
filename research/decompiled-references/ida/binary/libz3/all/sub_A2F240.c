_DWORD *__fastcall sub_A2F240(__int64 a1, int *a2)
{
  int v2; // eax
  void *v3; // r13
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  _DWORD *v7; // rbx
  __int64 v8; // rsi
  int v9; // ecx
  __int64 v10; // rdx
  _DWORD *v11; // r8
  _DWORD *v12; // r15
  int v13; // eax
  void *v14; // r12
  int v16; // eax
  _DWORD *v17; // [rsp+0h] [rbp-78h]
  _DWORD *v18; // [rsp+0h] [rbp-78h]
  int v19; // [rsp+Ch] [rbp-6Ch]
  int v20; // [rsp+Ch] [rbp-6Ch]
  int v21; // [rsp+10h] [rbp-68h]
  _QWORD v22[2]; // [rsp+18h] [rbp-60h] BYREF
  _QWORD v23[10]; // [rsp+28h] [rbp-50h] BYREF

  v2 = *a2;
  v23[2] = 0;
  v21 = v2;
  v3 = qword_1C7F2C0;
  v22[0] = 0;
  v22[1] = 0;
  v23[0] = 1;
  v23[1] = 0;
  if ( (a2[3] & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, v22, a2 + 2);
    if ( (a2[7] & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    LODWORD(v22[0]) = a2[2];
    if ( (a2[7] & 1) == 0 )
    {
LABEL_3:
      v4 = a2[6];
      BYTE4(v23[0]) &= ~1u;
      LODWORD(v23[0]) = v4;
      goto LABEL_4;
    }
  }
  sub_182C690(v3, v23, a2 + 6);
LABEL_4:
  v5 = sub_182DB30(v22);
  v6 = (3 * sub_182DB30(v23) + v5 - v21) ^ (v21 << 8);
  v7 = *(_DWORD **)(a1 + 8);
  v8 = *(unsigned int *)(a1 + 16);
  v9 = ((v6 ^ ((v21 - v6) << 16)) + v6 - v21) ^ ((v21 - v6) << 10);
  v10 = 14LL * (v9 & (unsigned int)(v8 - 1));
  v11 = &v7[v10];
  v12 = &v7[14 * v8];
  if ( v10 != 14 * v8 )
  {
    v7 = (_DWORD *)((char *)v7 + v10 * 4);
    while ( 1 )
    {
      v13 = v7[1];
      if ( v13 != 2 )
        break;
      if ( *v7 == v9 && v7[2] == v21 )
      {
        v19 = v9;
        v17 = v11;
        if ( sub_3ED680((__int64)qword_1C7F2C0, (__int64)(v7 + 4), (__int64)v22) )
          goto LABEL_16;
        v7 += 14;
        v11 = v17;
        v9 = v19;
        if ( v12 == v7 )
        {
LABEL_13:
          v7 = *(_DWORD **)(a1 + 8);
          goto LABEL_14;
        }
      }
      else
      {
LABEL_7:
        v7 += 14;
        if ( v12 == v7 )
          goto LABEL_13;
      }
    }
    if ( !v13 )
      goto LABEL_15;
    goto LABEL_7;
  }
LABEL_14:
  while ( v11 != v7 )
  {
    v16 = v7[1];
    if ( v16 == 2 )
    {
      if ( *v7 == v9 && v7[2] == v21 )
      {
        v20 = v9;
        v18 = v11;
        if ( sub_3ED680((__int64)qword_1C7F2C0, (__int64)(v7 + 4), (__int64)v22) )
          goto LABEL_16;
        v11 = v18;
        v9 = v20;
      }
    }
    else if ( !v16 )
    {
      break;
    }
    v7 += 14;
  }
LABEL_15:
  v7 = nullptr;
LABEL_16:
  v14 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v22);
  sub_182CBA0(v14, v23);
  return v7;
}

