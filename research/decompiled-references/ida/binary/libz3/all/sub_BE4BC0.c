__int64 __fastcall sub_BE4BC0(_QWORD *a1, unsigned int *a2, __int64 a3, _BYTE *a4)
{
  __int64 v4; // rax
  __int64 v6; // rdx
  __int64 v7; // r15
  __int64 v9; // rbx
  unsigned int v10; // r14d
  void *v11; // rdi
  void *v12; // r14
  int v13; // edx
  char v14; // al
  bool v15; // al
  int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  void *v20; // rbx
  char v22; // dl
  char v23; // al
  bool v25; // [rsp+1Fh] [rbp-59h] BYREF
  _QWORD v26[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v27[9]; // [rsp+30h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(*a1 + 8656LL);
  if ( !v4 )
    return 0;
  v6 = *a2;
  if ( (unsigned int)v6 >= *(_DWORD *)(v4 - 4) )
    return 0;
  v7 = *(_QWORD *)(v4 + 8 * v6);
  if ( !v7 )
    return 0;
  *a4 = 0;
  v9 = v7;
  v10 = 0;
  v26[0] = 0;
  v26[1] = 0;
  v27[0] = 1;
  v27[1] = 0;
  do
  {
    while ( 1 )
    {
      v17 = a1[7];
      if ( !v17 || !(unsigned __int8)sub_9972A0(v17, v9, (int *)v26, &v25) )
      {
        v18 = a1[8];
        if ( !v18 || !(unsigned __int8)sub_99E6E0(v18, v9, (int *)v26, &v25) )
        {
          v19 = a1[9];
          if ( !v19 )
            goto LABEL_16;
          if ( !(unsigned __int8)sub_A73A20(v19, v9, (__int64)v26, (__int64)&v25) )
            break;
        }
      }
      if ( !(_BYTE)v10 )
        goto LABEL_10;
      v11 = qword_1C7F2C0;
      if ( (*(_BYTE *)(a3 + 20) & 1) != 0
        || *(_DWORD *)(a3 + 16) != 1
        || (v27[0] & 0x100000000LL) != 0
        || LODWORD(v27[0]) != 1 )
      {
        if ( (unsigned __int8)sub_1848D40(qword_1C7F2C0, a3, v26) )
          goto LABEL_10;
      }
      else
      {
        v22 = *(_BYTE *)(a3 + 4);
        if ( (v22 & 1) == 0 )
        {
          v23 = BYTE4(v26[0]);
          if ( (v26[0] & 0x100000000LL) == 0 )
          {
            if ( *(_DWORD *)a3 < SLODWORD(v26[0]) )
            {
              *(_DWORD *)a3 = v26[0];
              *(_BYTE *)(a3 + 4) = v22 & 0xFE;
              goto LABEL_13;
            }
            goto LABEL_33;
          }
        }
        if ( (int)sub_182C7B0(qword_1C7F2C0, a3, v26) < 0 )
          goto LABEL_10;
      }
      v11 = qword_1C7F2C0;
      if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
        goto LABEL_40;
      v23 = BYTE4(v26[0]);
LABEL_33:
      if ( (v23 & 1) == 0 )
      {
        if ( *(_DWORD *)a3 != LODWORD(v26[0]) )
          goto LABEL_15;
        goto LABEL_35;
      }
LABEL_40:
      if ( (unsigned int)sub_182C7B0(v11, a3, v26) )
        goto LABEL_15;
LABEL_35:
      if ( (*(_BYTE *)(a3 + 20) & 1) != 0 || (v27[0] & 0x100000000LL) != 0 )
      {
        if ( (unsigned int)sub_182C7B0(v11, a3 + 16, v27) )
          goto LABEL_15;
      }
      else if ( *(_DWORD *)(a3 + 16) != LODWORD(v27[0]) )
      {
        goto LABEL_15;
      }
      if ( !v25 )
        goto LABEL_15;
LABEL_10:
      v12 = qword_1C7F2C0;
      if ( (v26[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(qword_1C7F2C0, a3, v26);
        v15 = (v27[0] & 0x100000000LL) == 0;
      }
      else
      {
        v13 = v26[0];
        v14 = BYTE4(v27[0]);
        *(_BYTE *)(a3 + 4) &= ~1u;
        *(_DWORD *)a3 = v13;
        v15 = (v14 & 1) == 0;
      }
      if ( !v15 )
      {
        sub_182C690(v12, a3 + 16, v27);
        goto LABEL_14;
      }
LABEL_13:
      v16 = v27[0];
      *(_BYTE *)(a3 + 20) &= ~1u;
      *(_DWORD *)(a3 + 16) = v16;
LABEL_14:
      *a4 = v25;
LABEL_15:
      v10 = 1;
LABEL_16:
      v9 = *(_QWORD *)(v9 + 16);
      if ( v9 == v7 )
        goto LABEL_23;
    }
    v9 = *(_QWORD *)(v9 + 16);
  }
  while ( v9 != v7 );
LABEL_23:
  v20 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v26);
  sub_182CBA0(v20, v27);
  return v10;
}

