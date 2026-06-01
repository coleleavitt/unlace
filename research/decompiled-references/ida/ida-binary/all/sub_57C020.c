void __fastcall sub_57C020(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  int *v4; // rax
  unsigned int v5; // ecx
  int *v6; // r11
  unsigned int v7; // r9d
  unsigned int v8; // r8d
  unsigned int v9; // ebp
  unsigned int v10; // edx
  unsigned int v11; // r10d
  unsigned int v12; // r12d
  unsigned int v13; // edi
  unsigned int v14; // r8d
  unsigned int v15; // edx
  unsigned int v16; // r9d
  unsigned int v17; // r10d
  unsigned int v18; // r8d
  unsigned int v19; // edx
  unsigned int v20; // ebp
  unsigned int v21; // r12d
  unsigned int v22; // edi
  unsigned int v23; // edx
  __int64 v24; // rdi
  unsigned int v25; // r10d
  bool v26; // cf
  _QWORD v27[7]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *(unsigned int *)(a1 + 24);
  if ( (_DWORD)v3 )
  {
    v4 = *(int **)(a1 + 16);
    v5 = *(_DWORD *)(a2 + 4);
    v6 = &v4[6 * v3];
    while ( 1 )
    {
      v23 = v4[5];
      if ( v23 >= v5 )
        break;
      if ( *(_DWORD *)a2 >= v23 )
        goto LABEL_8;
      v4[5] = *(_DWORD *)a2;
      *((_QWORD *)v4 + 1) = *(_QWORD *)(a2 + 12);
      v15 = v4[4];
      if ( v15 >= v5 )
      {
LABEL_9:
        v16 = *(_DWORD *)(a2 + 8);
        v17 = *v4;
        v18 = v4[1];
        v19 = v16 - v5 + v15;
        v4[4] = v19;
        v20 = *(_DWORD *)(a2 + 20);
        v21 = *(_DWORD *)(a2 + 24);
        v22 = *(_DWORD *)(a2 + 28);
        if ( v20 >= v17 )
        {
          v25 = v18 + *(_DWORD *)(a2 + 32) - v21;
          v26 = v18 < v21;
          v18 = *(_DWORD *)(a2 + 32);
          if ( !v26 )
            v18 = v25;
        }
        else
        {
          v22 = v17 + v22 - v20;
        }
        *v4 = v22;
        v4[1] = v18;
        if ( v19 < v16 )
        {
          v4[4] = -1;
          *(_QWORD *)v4 = -1;
        }
        goto LABEL_13;
      }
LABEL_17:
      if ( *(_DWORD *)a2 >= v15 )
      {
LABEL_13:
        v4 += 6;
        if ( v4 == v6 )
          goto LABEL_19;
      }
      else
      {
        v4[4] = *(_DWORD *)a2;
        v4 += 6;
        *((_QWORD *)v4 - 3) = *(_QWORD *)(a2 + 12);
        if ( v4 == v6 )
          goto LABEL_19;
      }
    }
    if ( v23 != -1 )
    {
      v7 = *(_DWORD *)(a2 + 8);
      v8 = v4[2];
      v9 = v4[3];
      v10 = v7 - v5 + v23;
      v4[5] = v10;
      v11 = *(_DWORD *)(a2 + 20);
      v12 = *(_DWORD *)(a2 + 24);
      v13 = *(_DWORD *)(a2 + 28);
      if ( v11 >= v8 )
      {
        v14 = *(_DWORD *)(a2 + 32);
        if ( v9 >= v12 )
          v14 = v9 + *(_DWORD *)(a2 + 32) - v12;
      }
      else
      {
        v13 = v8 + v13 - v11;
        v14 = v9;
      }
      v4[2] = v13;
      v4[3] = v14;
      if ( v10 < v7 )
      {
        v4[5] = -1;
        *((_QWORD *)v4 + 1) = -1;
      }
    }
LABEL_8:
    v15 = v4[4];
    if ( v15 >= v5 )
      goto LABEL_9;
    goto LABEL_17;
  }
LABEL_19:
  v24 = *(_QWORD *)a1;
  memset(v27, 0, 32);
  *(_QWORD *)a1 = sub_5702D0(v24, a2, (__int64)v27);
  sub_56B570((__int64)v27);
}
