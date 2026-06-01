__int64 __fastcall sub_438470(unsigned __int8 **a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v9; // r13
  int v10; // ebp
  __int64 v11; // rbx
  unsigned __int8 *v12; // rdi
  unsigned int v13; // eax
  int v14; // r8d
  __int64 v15; // rcx
  int v16; // r9d
  __int64 *v17; // rsi
  int v18; // edi
  __int64 v19; // rdx
  char v20; // al
  __int64 v21; // rax
  char v22; // dl
  __int64 v23; // rax
  unsigned int v24; // ebp
  __int64 *v25; // [rsp+8h] [rbp-50h]
  __int64 *v27; // [rsp+18h] [rbp-40h] BYREF
  _BYTE v28[49]; // [rsp+27h] [rbp-31h] BYREF

  if ( a3 > 2 )
  {
    v9 = a3;
    v10 = 1;
    v25 = (__int64 *)sub_4495F0(a2, (unsigned int)(16 * a3 - 32));
    v11 = sub_4495F0(a2, (unsigned int)(32 * v9 - 64));
    v12 = *a1;
    v27 = v25;
    v13 = strlen((const char *)v12);
    sub_434D30(*a1, v13, v28, nullptr);
    v14 = 2;
    *v25 = *(_QWORD *)(a4 + 8);
    *(_BYTE *)(v11 + 12) = -124;
    *(_BYTE *)(v11 + 14) = 1;
    if ( a3 - 1 > 2 )
    {
      v15 = v11 + 64;
      v16 = 3;
      v17 = v25 + 4;
      v18 = 2;
      do
      {
        v19 = v14++;
        *(v17 - 3) = *(_QWORD *)(a4 + 8 * v19);
        v20 = v28[0];
        *(_BYTE *)(v15 - 34) = 0;
        *(_DWORD *)(v15 - 32) = v10;
        *(_DWORD *)(v15 - 28) = v16;
        *(_DWORD *)(v15 - 48) = -3;
        v16 += 2;
        *(_DWORD *)(v15 - 44) = -3;
        *(_BYTE *)(v15 - 36) = v20;
        *(v17 - 2) = *(_QWORD *)(a4 + 8 * v19);
        *(_BYTE *)(v15 - 20) = 84;
        v21 = 16LL * v10;
        *(_BYTE *)(v15 - 18) = 0;
        v10 = v18;
        *(_DWORD *)(v21 + v11 + 8) = v18;
        v17 += 2;
        *(_DWORD *)(v15 - 8) = v18;
        v15 += 32;
        v18 += 2;
      }
      while ( a3 - 1 > v14 );
    }
    v25[2 * v9 - 5] = *(_QWORD *)(a4 + 8 * v9 - 8);
    v22 = v28[0];
    v23 = 32 * v9 + v11;
    *(_DWORD *)(v23 - 76) = -3;
    *(_BYTE *)(v23 - 66) = 0;
    *(_DWORD *)(v23 - 80) = -3;
    *(_DWORD *)(v11 + 4) = v10;
    *(_BYTE *)(v23 - 68) = v22;
    *(_DWORD *)(16LL * v10 + v11 + 8) = 0;
    v24 = sub_438030(a2, v11, 0, &v27);
    sub_449510(a2, v11);
    sub_449510(a2, v25);
    return v24;
  }
  else
  {
    v7 = sub_47BD00(1);
    sub_48AFD0(a2, v7);
    return 0;
  }
}

