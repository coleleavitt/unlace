__int64 __fastcall sub_1FB22F0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  bool v5; // zf
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r12
  int v12; // r13d
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // r12
  int v16; // r13d
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // r12
  int v20; // r13d
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // r12
  int v24; // r13d
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v28; // rbp
  __int64 v29; // rax
  __int128 v30; // [rsp+0h] [rbp-48h] BYREF
  __int128 v31; // [rsp+10h] [rbp-38h]

  v4 = *(_QWORD *)a1;
  v30 = 0;
  v5 = *(_BYTE *)(v4 + 157) == 0;
  v31 = 0;
  if ( v5 || (*(_BYTE *)(a2 + 8) & 0x7F) != 0x18 )
    goto LABEL_3;
  if ( !sub_B8D850(a2 - 48) )
  {
    v4 = *(_QWORD *)a1;
LABEL_3:
    v6 = sub_1F97230(v4, *(_QWORD *)(a1 + 8), a2);
    v7 = *(_QWORD *)(a1 + 8);
    v8 = *(_QWORD *)a1;
    *((_QWORD *)&v31 + 1) = v6;
    sub_1FAB1D0(v8, v7, a2, (__int64 *)&v30, v9, v10);
    goto LABEL_4;
  }
  v28 = *(_QWORD *)a1;
  v29 = *(unsigned int *)(*(_QWORD *)a1 + 272LL);
  if ( v29 + 1 > (unsigned __int64)*(unsigned int *)(*(_QWORD *)a1 + 276LL) )
  {
    sub_2237220(v28 + 264, v28 + 280, v29 + 1, 8);
    v29 = *(unsigned int *)(v28 + 272);
  }
  *(_QWORD *)(*(_QWORD *)(v28 + 264) + 8 * v29) = a2 - 48;
  ++*(_DWORD *)(v28 + 272);
LABEL_4:
  v11 = *((_QWORD *)&v31 + 1);
  v12 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
  v13 = *(unsigned int *)(a1 + 184);
  if ( v13 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
  {
    sub_2237220(a1 + 176, a1 + 192, v13 + 1, 4);
    v13 = *(unsigned int *)(a1 + 184);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v13) = v12;
  v14 = *(_QWORD *)(a1 + 24);
  ++*(_DWORD *)(a1 + 184);
  sub_9B9C90(v14, v11);
  v15 = v30;
  v16 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
  v17 = *(unsigned int *)(a1 + 184);
  if ( v17 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
  {
    sub_2237220(a1 + 176, a1 + 192, v17 + 1, 4);
    v17 = *(unsigned int *)(a1 + 184);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v17) = v16;
  v18 = *(_QWORD *)(a1 + 24);
  ++*(_DWORD *)(a1 + 184);
  sub_9B9C90(v18, v15);
  v19 = *((_QWORD *)&v30 + 1);
  v20 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
  v21 = *(unsigned int *)(a1 + 184);
  if ( v21 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
  {
    sub_2237220(a1 + 176, a1 + 192, v21 + 1, 4);
    v21 = *(unsigned int *)(a1 + 184);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v21) = v20;
  v22 = *(_QWORD *)(a1 + 24);
  ++*(_DWORD *)(a1 + 184);
  sub_9B9C90(v22, v19);
  v23 = v31;
  v24 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
  v25 = *(unsigned int *)(a1 + 184);
  if ( v25 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
  {
    sub_2237220(a1 + 176, a1 + 192, v25 + 1, 4);
    v25 = *(unsigned int *)(a1 + 184);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v25) = v24;
  v26 = *(_QWORD *)(a1 + 24);
  ++*(_DWORD *)(a1 + 184);
  return sub_9B9C90(v26, v23);
}
