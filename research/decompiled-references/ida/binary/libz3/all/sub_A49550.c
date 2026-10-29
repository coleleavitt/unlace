__int64 __fastcall sub_A49550(_QWORD *a1, unsigned int a2, char a3)
{
  int v4; // ebx
  __int64 v5; // rsi
  unsigned int *v6; // r14
  unsigned int v7; // ebx
  unsigned int *v8; // rbp
  unsigned int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rax
  void *v14; // rbx
  __int64 v16; // rdx
  void *v17; // rdi
  int v18; // eax
  int v19; // eax
  int v20; // r12d
  int v21; // eax
  __int64 v22; // rax
  unsigned int *v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // [rsp+14h] [rbp-84h]
  int v27; // [rsp+24h] [rbp-74h]
  int v28; // [rsp+24h] [rbp-74h]
  __int64 v29; // [rsp+28h] [rbp-70h]
  void *v30; // [rsp+38h] [rbp-60h]
  __int64 v31; // [rsp+38h] [rbp-60h]
  _QWORD v32[2]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v33[9]; // [rsp+50h] [rbp-48h] BYREF

  v4 = *(_DWORD *)(a1[74] + 4LL * a2);
  v5 = a1[73] + 16LL * a2;
  v32[0] = 0;
  v33[0] = 1;
  v6 = *(unsigned int **)v5;
  v7 = v4 & 0xFFFFFFF;
  v32[1] = 0;
  v33[1] = 0;
  if ( !v6 || (v8 = &v6[2 * *(v6 - 1)], v6 == v8) )
  {
    if ( *(_DWORD *)(v5 + 8) != 1 )
      goto LABEL_11;
    v22 = 0x1FFFFFFFELL;
    goto LABEL_24;
  }
  v25 = -1;
  v9 = 0;
  do
  {
    while ( 1 )
    {
      v13 = *v6;
      if ( (_DWORD)v13 != -1 )
        break;
LABEL_6:
      v6 += 2;
      ++v9;
      if ( v8 == v6 )
        goto LABEL_10;
    }
    if ( v7 != (_DWORD)v13 )
    {
      v10 = a1[71];
      v11 = v10 + 24 * v13;
      v12 = *(unsigned int *)(v11 + 12);
      if ( (_DWORD)v12 == -1 || ((*(_BYTE *)(a1[74] + 4 * v12 + 3) >> 4) & 3) != 1 )
        goto LABEL_6;
      v27 = *(_DWORD *)(v10 + 24LL * v7 + 8);
      v16 = *(_QWORD *)v11 + 40LL * v6[1];
      v17 = qword_1C7F2C0;
      if ( (*(_BYTE *)(v16 + 4) & 1) != 0 )
      {
        v31 = *(_QWORD *)v11 + 40LL * v6[1];
        sub_182C690(qword_1C7F2C0, v32, v16);
        v16 = v31;
        if ( (*(_BYTE *)(v31 + 20) & 1) == 0 )
          goto LABEL_14;
      }
      else
      {
        v18 = *(_DWORD *)v16;
        BYTE4(v32[0]) &= ~1u;
        LODWORD(v32[0]) = v18;
        if ( (*(_BYTE *)(v16 + 20) & 1) == 0 )
        {
LABEL_14:
          v19 = *(_DWORD *)(v16 + 16);
          BYTE4(v33[0]) &= ~1u;
          LODWORD(v33[0]) = v19;
LABEL_15:
          sub_1831620(qword_1C7F2C0, v32);
          sub_A08160((__int64)a1, *v6, (__int64)v32, v7, a3);
          v29 = a1[3];
          v30 = qword_1C7F2C0;
          v20 = *(_DWORD *)(v11 + 8) + v27;
          v28 = sub_182CA60(qword_1C7F2C0, v32);
          v21 = sub_182CA60(v30, v33);
          sub_18290D0(v29, (unsigned int)(v20 * (v21 + v28)));
          goto LABEL_6;
        }
      }
      sub_182C690(v17, v33, v16 + 16);
      goto LABEL_15;
    }
    v6 += 2;
    v25 = v9++;
  }
  while ( v8 != v6 );
LABEL_10:
  if ( *(_DWORD *)(v5 + 8) != 1 )
    goto LABEL_11;
  v6 = *(unsigned int **)v5;
  if ( v25 )
  {
    v22 = 2LL * v25;
LABEL_24:
    v23 = &v6[v22];
    v24 = a1[71];
    *(_QWORD *)v6 = *(_QWORD *)v23;
    *(_DWORD *)(*(_QWORD *)(v24 + 24LL * *v23) + 40LL * v23[1] + 36) = 0;
    *(_DWORD *)(v5 + 12) = -1;
    *(v6 - 1) = 1;
    goto LABEL_11;
  }
  *(_DWORD *)(v5 + 12) = -1;
  if ( v6 )
    *(v6 - 1) = 1;
LABEL_11:
  v14 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v32);
  return sub_182CBA0(v14, v33);
}

