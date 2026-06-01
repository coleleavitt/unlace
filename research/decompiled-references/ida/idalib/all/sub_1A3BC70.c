__int64 __fastcall sub_1A3BC70(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  char ***v5; // rcx
  unsigned __int64 v6; // rdi
  __int64 result; // rax
  __int64 v8; // r12
  char ***v9; // r14
  char ***v10; // r13
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rsi
  char **v14; // rax
  __int64 v15; // rsi
  char **v16; // rax
  char **v17; // rax
  char ***v18; // rbx
  int v19; // ebx
  __int64 v20; // rax
  char v21; // [rsp+Fh] [rbp-59h]
  __int64 v22; // [rsp+18h] [rbp-50h]
  __int64 v23[8]; // [rsp+28h] [rbp-40h] BYREF

  v3 = a2;
  v4 = *(unsigned int *)(a1 + 8);
  v5 = *(char ****)a1;
  v6 = *(_QWORD *)a1 + 88 * v4;
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    v22 = -1;
    v21 = 0;
    if ( (unsigned __int64)v5 <= a2 && v6 > a2 )
    {
      v21 = 1;
      v22 = 0x2E8BA2E8BA2E8BA3LL * ((__int64)(a2 - (_QWORD)v5) >> 3);
    }
    v8 = sub_2237400(a1, a1 + 16, v4 + 1, 88, v23);
    v9 = (char ***)(*(_QWORD *)a1 + 88LL * *(unsigned int *)(a1 + 8));
    if ( *(char ****)a1 != v9 )
    {
      v10 = *(char ****)a1;
      v11 = v8;
      do
      {
        *(_QWORD *)v11 = *v10;
        v17 = v10[1];
        *(_DWORD *)(v11 + 24) = 0;
        *(_QWORD *)(v11 + 8) = v17;
        *(_QWORD *)(v11 + 16) = v11 + 32;
        *(_DWORD *)(v11 + 28) = 1;
        if ( *((_DWORD *)v10 + 6) )
          sub_AEA1F0((char ***)(v11 + 16), v10 + 2);
        v12 = *((_DWORD *)v10 + 10);
        v10 += 11;
        v11 += 88;
        *(_DWORD *)(v11 - 48) = v12;
        *(_DWORD *)(v11 - 44) = *((_DWORD *)v10 - 11);
        *(_DWORD *)(v11 - 40) = *((_DWORD *)v10 - 10);
        *(_QWORD *)(v11 - 36) = *(char ***)((char *)v10 - 36);
        *(_BYTE *)(v11 - 28) = *((_BYTE *)v10 - 28);
        LOBYTE(v12) = *((_BYTE *)v10 - 27);
        *(_QWORD *)(v11 - 16) = 0;
        *(_QWORD *)(v11 - 8) = 0;
        *(_QWORD *)(v11 - 24) = 0;
        *(_BYTE *)(v11 - 27) = v12;
        *(_QWORD *)(v11 - 24) = *(v10 - 3);
        v13 = (__int64)*(v10 - 2);
        *(v10 - 3) = nullptr;
        v14 = *(char ***)(v11 - 16);
        *(_QWORD *)(v11 - 16) = v13;
        v15 = (__int64)*(v10 - 1);
        *(v10 - 2) = v14;
        v16 = *(char ***)(v11 - 8);
        *(_QWORD *)(v11 - 8) = v15;
        *(v10 - 1) = v16;
      }
      while ( v9 != v10 );
      v18 = *(char ****)a1;
      v9 = (char ***)(*(_QWORD *)a1 + 88LL * *(unsigned int *)(a1 + 8));
      if ( *(char ****)a1 != v9 )
      {
        do
        {
          v9 -= 11;
          sub_17A1D90(v9);
        }
        while ( v18 != v9 );
        v9 = *(char ****)a1;
      }
    }
    v19 = v23[0];
    if ( (char ***)(a1 + 16) != v9 )
      free(v9);
    v20 = *(unsigned int *)(a1 + 8);
    *(_QWORD *)a1 = v8;
    *(_DWORD *)(a1 + 12) = v19;
    v6 = v8 + 88 * v20;
    if ( v21 )
      v3 = v8 + 88 * v22;
  }
  result = sub_1A3B6B0(v6, v3);
  ++*(_DWORD *)(a1 + 8);
  return result;
}
