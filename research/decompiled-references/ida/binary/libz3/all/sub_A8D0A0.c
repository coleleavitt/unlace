__int64 __fastcall sub_A8D0A0(__int64 a1, __int64 a2)
{
  void *v3; // r13
  int v4; // eax
  int v5; // ebx
  int v6; // ecx
  __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // rbx
  unsigned int v10; // edx
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // r13
  int v14; // eax
  void *v15; // rdi
  int v16; // eax
  bool v17; // al
  int v18; // eax
  bool v19; // al
  void *v20; // rbp
  int v22; // eax
  bool v23; // al
  int v24; // [rsp+10h] [rbp-78h]
  int v25; // [rsp+10h] [rbp-78h]
  int v26; // [rsp+1Ch] [rbp-6Ch]
  _QWORD v27[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v28[11]; // [rsp+30h] [rbp-58h] BYREF

  v27[0] = 0;
  v27[1] = 0;
  v3 = qword_1C7F2C0;
  v28[0] = 1;
  v28[1] = 0;
  v28[2] = 0;
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, v27, a2);
    if ( (*(_BYTE *)(a2 + 20) & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    LODWORD(v27[0]) = *(_DWORD *)a2;
    if ( (*(_BYTE *)(a2 + 20) & 1) == 0 )
    {
LABEL_3:
      v4 = *(_DWORD *)(a2 + 16);
      BYTE4(v28[0]) &= ~1u;
      LODWORD(v28[0]) = v4;
      goto LABEL_4;
    }
  }
  sub_182C690(v3, v28, a2 + 16);
LABEL_4:
  v5 = sub_182DB30(v27);
  v6 = 3 * sub_182DB30(v28);
  v7 = *(unsigned int *)(a1 + 8);
  v8 = v5 + v6;
  v9 = *(_QWORD *)a1;
  v10 = v7 - 1;
  v7 *= 48;
  v11 = *(_QWORD *)a1 + v7;
  v12 = 48LL * (v8 & v10);
  v13 = *(_QWORD *)a1 + v12;
  if ( v12 != v7 )
  {
    v9 = *(_QWORD *)a1 + v12;
    do
    {
      v14 = *(_DWORD *)(v9 + 4);
      if ( v14 == 2 )
      {
        if ( *(_DWORD *)v9 == v8 )
        {
          v15 = qword_1C7F2C0;
          if ( (*(_BYTE *)(v9 + 12) & 1) != 0 || (v27[0] & 0x100000000LL) != 0 )
          {
            v26 = v8;
            v16 = sub_182C7B0(qword_1C7F2C0, v9 + 8, v27);
            v8 = v26;
            v17 = v16 == 0;
          }
          else
          {
            v17 = *(_DWORD *)(v9 + 8) == LODWORD(v27[0]);
          }
          if ( v17 )
          {
            if ( (*(_BYTE *)(v9 + 28) & 1) != 0 || (v28[0] & 0x100000000LL) != 0 )
            {
              v24 = v8;
              v18 = sub_182C7B0(v15, v9 + 24, v28);
              v8 = v24;
              v19 = v18 == 0;
            }
            else
            {
              v19 = *(_DWORD *)(v9 + 24) == LODWORD(v28[0]);
            }
            if ( v19 )
              goto LABEL_20;
          }
        }
      }
      else if ( !v14 )
      {
        goto LABEL_19;
      }
      v9 += 48;
    }
    while ( v11 != v9 );
    v9 = *(_QWORD *)a1;
  }
  for ( ; v13 != v9; v9 += 48 )
  {
    v22 = *(_DWORD *)(v9 + 4);
    if ( v22 == 2 )
    {
      if ( *(_DWORD *)v9 == v8 )
      {
        v25 = v8;
        v23 = sub_3ED680((__int64)qword_1C7F2C0, v9 + 8, (__int64)v27);
        v8 = v25;
        if ( v23 )
          goto LABEL_20;
      }
    }
    else if ( !v22 )
    {
      break;
    }
  }
LABEL_19:
  v9 = 0;
LABEL_20:
  v20 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v27);
  sub_182CBA0(v20, v28);
  return v9;
}

