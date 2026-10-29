__int64 __fastcall sub_A08A40(_QWORD *a1, unsigned int a2, char a3)
{
  int v4; // eax
  __int64 v5; // rsi
  unsigned int *v6; // r14
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rbp
  void *v10; // rdi
  __int64 v11; // r15
  int v12; // eax
  int v13; // eax
  int v14; // r15d
  int v15; // ebp
  int v16; // eax
  __int64 v17; // rax
  void *v18; // rbx
  __int64 v20; // rax
  unsigned int *v21; // rax
  __int64 v22; // rcx
  unsigned int *v23; // [rsp+8h] [rbp-90h]
  unsigned int v24; // [rsp+14h] [rbp-84h]
  int v25; // [rsp+18h] [rbp-80h]
  void *v26; // [rsp+18h] [rbp-80h]
  __int64 v27; // [rsp+20h] [rbp-78h]
  unsigned int v28; // [rsp+30h] [rbp-68h]
  _QWORD v30[2]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v31[9]; // [rsp+50h] [rbp-48h] BYREF

  v4 = *(_DWORD *)(a1[74] + 4LL * a2);
  v5 = a1[73] + 16LL * a2;
  v30[0] = 0;
  v31[0] = 1;
  v6 = *(unsigned int **)v5;
  v24 = v4 & 0xFFFFFFF;
  v30[1] = 0;
  v31[1] = 0;
  if ( !v6 || (v23 = &v6[2 * *(v6 - 1)], v6 == v23) )
  {
    if ( *(_DWORD *)(v5 + 8) != 1 )
      goto LABEL_15;
    v20 = 0x1FFFFFFFELL;
    goto LABEL_24;
  }
  v28 = -1;
  v7 = 0;
  do
  {
    while ( 1 )
    {
      v17 = *v6;
      if ( (_DWORD)v17 != -1 )
        break;
LABEL_10:
      v6 += 2;
      ++v7;
      if ( v23 == v6 )
        goto LABEL_14;
    }
    if ( v24 != (_DWORD)v17 )
    {
      v8 = a1[71];
      v9 = v8 + 24 * v17;
      if ( *(_DWORD *)(v9 + 12) != -1 )
      {
        v10 = qword_1C7F2C0;
        v25 = *(_DWORD *)(v8 + 24LL * v24 + 8);
        v11 = *(_QWORD *)v9 + 40LL * v6[1];
        if ( (*(_BYTE *)(v11 + 4) & 1) != 0 )
        {
          sub_182C690(qword_1C7F2C0, v30, *(_QWORD *)v9 + 40LL * v6[1]);
        }
        else
        {
          v12 = *(_DWORD *)v11;
          BYTE4(v30[0]) &= ~1u;
          LODWORD(v30[0]) = v12;
        }
        if ( (*(_BYTE *)(v11 + 20) & 1) != 0 )
        {
          sub_182C690(v10, v31, v11 + 16);
        }
        else
        {
          v13 = *(_DWORD *)(v11 + 16);
          BYTE4(v31[0]) &= ~1u;
          LODWORD(v31[0]) = v13;
        }
        sub_1831620(qword_1C7F2C0, v30);
        sub_A08160((__int64)a1, *v6, (__int64)v30, v24, a3);
        v27 = a1[3];
        v14 = *(_DWORD *)(v9 + 8) + v25;
        v26 = qword_1C7F2C0;
        v15 = sub_182CA60(qword_1C7F2C0, v30);
        v16 = sub_182CA60(v26, v31);
        sub_18290D0(v27, (unsigned int)(v14 * (v15 + v16)));
      }
      goto LABEL_10;
    }
    v28 = v7;
    v6 += 2;
    ++v7;
  }
  while ( v23 != v6 );
LABEL_14:
  if ( *(_DWORD *)(v5 + 8) != 1 )
    goto LABEL_15;
  v6 = *(unsigned int **)v5;
  if ( v28 )
  {
    v20 = 2LL * v28;
LABEL_24:
    v21 = &v6[v20];
    v22 = a1[71];
    *(_QWORD *)v6 = *(_QWORD *)v21;
    *(_DWORD *)(*(_QWORD *)(v22 + 24LL * *v21) + 40LL * v21[1] + 36) = 0;
    *(_DWORD *)(v5 + 12) = -1;
    *(v6 - 1) = 1;
    goto LABEL_15;
  }
  *(_DWORD *)(v5 + 12) = -1;
  if ( v6 )
    *(v6 - 1) = 1;
LABEL_15:
  v18 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v30);
  return sub_182CBA0(v18, v31);
}

