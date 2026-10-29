__int64 __fastcall sub_798200(__int64 a1)
{
  void *v2; // rbp
  __int64 v3; // rdx
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rax
  char v19[8]; // [rsp+0h] [rbp-78h] BYREF
  __int128 v20; // [rsp+8h] [rbp-70h]
  __int64 v21; // [rsp+18h] [rbp-60h]
  char v22[8]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v23; // [rsp+28h] [rbp-50h]
  __int64 v24; // [rsp+38h] [rbp-40h]
  unsigned __int64 v25; // [rsp+48h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  v2 = qword_2CD4690;
  qmutex_lock(qword_2CD4690);
  v3 = *(_QWORD *)(a1 + 104);
  if ( !v3 || (v4 = *(_DWORD *)(v3 + 136), v4 <= 0) )
  {
    if ( !under_debugger )
      interr(487);
    BUG();
  }
  *(_DWORD *)(v3 + 136) = v4 - 1;
  qmutex_unlock(v2);
  v5 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(a1 + 96) + 1 == v5 )
    goto LABEL_4;
  v13 = *(_QWORD *)(a1 + 24);
  v19[0] = 2;
  v20 = 0;
  v21 = 0;
  if ( (unsigned int)move_idcv(v19, v13 + 32 * v5 - 32) )
    goto LABEL_23;
  v14 = *(int *)(a1 + 96);
  if ( v19[0] != 10 || SDWORD2(v20) < (int)v14 )
    goto LABEL_18;
  if ( !deref_idcv(v19, 2) )
  {
LABEL_23:
    free_idcv(v19);
    return 0;
  }
  v14 = *(int *)(a1 + 96);
LABEL_18:
  v15 = *(_QWORD *)(a1 + 32);
  if ( v14 != v15 )
  {
    v22[0] = 2;
    v23 = 0;
    v24 = 0;
    sub_797A30((__int64 *)(a1 + 24), v14, (unsigned __int64)v22);
    free_idcv(v22);
    v15 = *(_QWORD *)(a1 + 32);
  }
  v16 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v15 + 1) )
  {
    v18 = qvector_reserve(a1 + 24, v16, v15 + 1, 32);
    *(_QWORD *)(a1 + 24) = v18;
    v16 = v18;
    v15 = *(_QWORD *)(a1 + 32);
  }
  v17 = v16 + 32 * v15;
  *(_BYTE *)v17 = 2;
  *(_QWORD *)(v17 + 24) = 0;
  *(_OWORD *)(v17 + 8) = 0;
  ++*(_QWORD *)(a1 + 32);
  move_idcv(v17, v19);
  free_idcv(v19);
LABEL_4:
  v6 = *(_QWORD *)(a1 + 80);
  if ( v6 )
  {
    v7 = *(_QWORD *)(a1 + 72);
    v8 = *(_QWORD *)(a1 + 32);
    do
    {
      if ( *(int *)(v7 + 4 * v6 - 4) < v8 )
        break;
      *(_QWORD *)(a1 + 80) = --v6;
    }
    while ( v6 );
  }
  v9 = *(_QWORD *)(a1 + 56);
  v10 = *(_QWORD *)(a1 + 48) + 24 * v9 - 24;
  *(_DWORD *)(a1 + 100) = *(_DWORD *)(v10 + 16);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(v10 + 12);
  *(_QWORD *)(a1 + 112) = *(int *)(v10 + 8);
  v11 = *(_QWORD *)v10;
  *(_QWORD *)(a1 + 104) = v11;
  if ( v9 )
    *(_QWORD *)(a1 + 56) = v9 - 1;
  if ( v11 )
    v11 += 32;
  *(_QWORD *)(a1 + 128) = v11;
  return 1;
}
