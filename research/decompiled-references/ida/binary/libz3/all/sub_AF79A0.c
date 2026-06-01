__int64 __fastcall sub_AF79A0(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
  __int64 v7; // rax
  void *v8; // rbp
  __int64 v9; // rdx
  unsigned int *v10; // rax
  unsigned int v11; // r12d
  unsigned int *v12; // rdx
  unsigned int v13; // r15d
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v21; // ecx
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rcx
  unsigned int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rsi
  int v28; // [rsp+Ch] [rbp-4Ch]
  int v29; // [rsp+Ch] [rbp-4Ch]
  _QWORD v30[8]; // [rsp+18h] [rbp-40h] BYREF

  sub_AF7690((_QWORD *)a1, a3);
  sub_AF7690((_QWORD *)a1, a4);
  v7 = sub_186B270(0x10u);
  *(_DWORD *)(v7 + 8) = a2;
  v8 = (void *)v7;
  *(_QWORD *)v7 = 0x100000002LL;
  v30[0] = v7 + 8;
  v9 = (unsigned int)sub_AF1F90(a1 + 64, a3, a4, 0, v30);
  v10 = (unsigned int *)(*(_QWORD *)(a1 + 104) + 32 * v9);
  if ( *((_BYTE *)v10 + 24) )
    goto LABEL_2;
  v21 = *(_DWORD *)(a1 + 192);
  v22 = *(_QWORD *)(a1 + 88);
  *((_BYTE *)v10 + 24) = 1;
  v23 = *v10;
  v10[3] = v21;
  *(_DWORD *)(a1 + 192) = v21 + 1;
  v24 = v10[1];
  *(_DWORD *)(a1 + 196) = v9;
  if ( *(_DWORD *)(v22 + 4 * v24) - *(_DWORD *)(v22 + 4 * v23) <= (int)v10[2] )
  {
    v13 = 1;
  }
  else
  {
    v28 = v9;
    v25 = sub_AFB440(a1 + 64, (unsigned int)v9, v9);
    LODWORD(v9) = v28;
    v13 = v25;
  }
  v26 = *(_QWORD *)(a1 + 200);
  if ( !v26 || (v27 = *(unsigned int *)(v26 - 4), (_DWORD)v27 == *(_DWORD *)(v26 - 8)) )
  {
    v29 = v9;
    sub_313C10((unsigned int **)(a1 + 200));
    v26 = *(_QWORD *)(a1 + 200);
    LODWORD(v9) = v29;
    v27 = *(unsigned int *)(v26 - 4);
  }
  *(_DWORD *)(v26 + 4 * v27) = v9;
  ++*(_DWORD *)(v26 - 4);
  if ( (_BYTE)v13 )
  {
LABEL_2:
    v11 = sub_AF1F90(a1 + 64, a4, a3, 0, v30);
    v12 = (unsigned int *)(*(_QWORD *)(a1 + 104) + 32LL * v11);
    v13 = *((unsigned __int8 *)v12 + 24);
    if ( !(_BYTE)v13 )
    {
      v14 = *(_DWORD *)(a1 + 192);
      v15 = *(_QWORD *)(a1 + 88);
      *((_BYTE *)v12 + 24) = 1;
      v16 = *v12;
      v12[3] = v14;
      *(_DWORD *)(a1 + 192) = v14 + 1;
      v17 = v12[1];
      *(_DWORD *)(a1 + 196) = v11;
      if ( *(_DWORD *)(v15 + 4 * v17) - *(_DWORD *)(v15 + 4 * v16) <= (int)v12[2] )
        v13 = 1;
      else
        v13 = sub_AFB440(a1 + 64, v11, v12);
      v18 = *(_QWORD *)(a1 + 200);
      if ( !v18 || (v19 = *(unsigned int *)(v18 - 4), (_DWORD)v19 == *(_DWORD *)(v18 - 8)) )
      {
        sub_313C10((unsigned int **)(a1 + 200));
        v18 = *(_QWORD *)(a1 + 200);
        v19 = *(unsigned int *)(v18 - 4);
      }
      *(_DWORD *)(v18 + 4 * v19) = v11;
      ++*(_DWORD *)(v18 - 4);
    }
  }
  sub_186B220(v8);
  return v13;
}

