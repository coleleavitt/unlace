__int64 __fastcall sub_B0F7C0(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rdi
  int v5; // eax
  int v6; // eax
  __int64 v7; // r12
  __int64 v8; // rcx
  unsigned int v9; // r14d
  __int64 v10; // r13
  __int64 v11; // rax
  unsigned int *v12; // rdx
  bool v13; // zf
  int v14; // eax
  __int64 v16; // rax
  unsigned int *v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  unsigned int **v20; // [rsp+0h] [rbp-78h]
  int v21; // [rsp+Ch] [rbp-6Ch]
  int v22; // [rsp+1Ch] [rbp-5Ch] BYREF
  __int64 v23; // [rsp+20h] [rbp-58h]
  _QWORD v24[10]; // [rsp+28h] [rbp-50h] BYREF

  v4 = a1 + 72;
  v5 = *(_DWORD *)(a2 + 8);
  v23 = v4;
  v24[0] = 0;
  v6 = v5 & 1;
  v24[1] = 0;
  v7 = a2 + (-v6 & 0x28) + 24;
  v8 = *(_QWORD *)(a1 + 704);
  if ( v8 )
    *(_DWORD *)(v8 - 4) = 0;
  v9 = 0;
  v20 = (unsigned int **)(a1 + 704);
  v10 = 40LL * v6;
  if ( a3 )
  {
    if ( (v24[0] & 0x100000000LL) != 0 )
      goto LABEL_22;
LABEL_15:
    if ( (*(_BYTE *)(a2 + v10 + 28) & 1) != 0 )
    {
LABEL_22:
      while ( 1 )
      {
        v19 = sub_182EB00(v4, v24, v7);
        v4 = v23;
        if ( v19 >= 0 )
          break;
LABEL_17:
        v16 = *(_QWORD *)(a2 + 40LL * (*(_DWORD *)(a2 + 8) & 1) + 16);
        if ( !v16 || v9 >= *(_DWORD *)(v16 - 4) )
          break;
        v17 = (unsigned int *)(v16 + 40LL * v9);
        v18 = *v17;
        v13 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + v18) == 1;
        v22 = *v17;
        if ( v13 )
        {
          v21 = v18;
          sub_1839610(v4, v24, v17 + 2);
          v22 = v21 ^ 1;
          sub_B0E5E0(v20, (unsigned int *)&v22);
          v4 = v23;
        }
        ++v9;
        if ( (v24[0] & 0x100000000LL) == 0 )
          goto LABEL_15;
      }
    }
    else if ( SLODWORD(v24[0]) < *(_DWORD *)(a2 + v10 + 24) )
    {
      goto LABEL_17;
    }
  }
  else
  {
    if ( (v24[0] & 0x100000000LL) != 0 )
      goto LABEL_12;
LABEL_5:
    if ( (*(_BYTE *)(a2 + v10 + 28) & 1) != 0 )
    {
LABEL_12:
      while ( 1 )
      {
        v14 = sub_182EB00(v4, v24, v7);
        v4 = v23;
        if ( v14 >= 0 )
          break;
LABEL_7:
        v11 = *(_QWORD *)(a2 + 40LL * (*(_DWORD *)(a2 + 8) & 1) + 16);
        if ( !v11 || v9 >= *(_DWORD *)(v11 - 4) )
          break;
        v12 = (unsigned int *)(v11 + 40LL * v9);
        v13 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + *v12) == 1;
        v22 = *v12;
        if ( v13 )
        {
          sub_1839610(v4, v24, v12 + 2);
          sub_B0E5E0(v20, (unsigned int *)&v22);
          v4 = v23;
        }
        ++v9;
        if ( (v24[0] & 0x100000000LL) == 0 )
          goto LABEL_5;
      }
    }
    else if ( *(_DWORD *)(a2 + v10 + 24) > SLODWORD(v24[0]) )
    {
      goto LABEL_7;
    }
  }
  sub_182EF00(v4, v24);
  return a1 + 704;
}

