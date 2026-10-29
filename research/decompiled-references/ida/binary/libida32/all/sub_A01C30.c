void __fastcall sub_A01C30(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // r12
  unsigned __int64 v7; // r12
  int v8; // eax
  char *v9; // rsi
  __int64 v10; // rax
  int v11; // edx
  char *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rdi
  int v22; // [rsp+4h] [rbp-34h] BYREF
  _QWORD v23[6]; // [rsp+8h] [rbp-30h] BYREF

  sub_9FC180(a1, 1u, *(_DWORD *)(a1 + 56));
  sub_9FC1F0(a1, a2, 8);
  sub_9FC1F0(a1, a3, 4);
  if ( *(_DWORD *)(a1 + 48) )
  {
    v21 = *(_QWORD **)(a1 + 24);
    LODWORD(v23[0]) = *(_DWORD *)(a1 + 52);
    sub_9FC110(v21, v23, (_BYTE *)v23 + 4);
    *(_QWORD *)(a1 + 48) = 0;
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
  v7 = sub_9FB9F0(a1) + v6;
  v8 = *(_DWORD *)(a1 + 56);
  v23[0] = v7 >> 2;
  v22 = v8;
  sub_9FC180(a1, 0, 32);
  *(_DWORD *)(a1 + 56) = a3;
  v9 = *(char **)(a1 + 112);
  if ( v9 == *(char **)(a1 + 120) )
  {
    sub_9FD520(a1 + 104, v9, &v22, v23);
    v12 = *(char **)(a1 + 112);
    v13 = *((_QWORD *)v12 - 3);
  }
  else
  {
    v10 = v23[0];
    v11 = v22;
    v12 = v9 + 40;
    *(_OWORD *)(v12 - 24) = 0;
    *((_DWORD *)v12 - 10) = v11;
    v13 = 0;
    *((_QWORD *)v12 - 4) = v10;
    *((_QWORD *)v12 - 1) = 0;
    *(_QWORD *)(a1 + 112) = v12;
  }
  *((_QWORD *)v12 - 3) = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = v13;
  v14 = *((_QWORD *)v12 - 2);
  *((_QWORD *)v12 - 2) = *(_QWORD *)(a1 + 72);
  v15 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 72) = v14;
  v16 = *((_QWORD *)v12 - 1);
  *((_QWORD *)v12 - 1) = v15;
  v17 = *(_QWORD *)(a1 + 136);
  v18 = *(_QWORD *)(a1 + 128);
  *(_QWORD *)(a1 + 80) = v16;
  if ( v18 != v17 )
  {
    if ( a2 == *(_DWORD *)(v17 - 32) )
    {
      v20 = v17 - 32;
      if ( v20 )
        sub_A01910((__int64 **)(a1 + 64), (char **)(v20 + 8));
    }
    else if ( a2 == *(_DWORD *)v18 )
    {
LABEL_11:
      sub_A01910((__int64 **)(a1 + 64), (char **)(v18 + 8));
    }
    else
    {
      v19 = v18 + 32;
      while ( 1 )
      {
        v18 = v19;
        if ( v17 == v19 )
          break;
        v19 += 32;
        if ( a2 == *(_DWORD *)(v19 - 32) )
          goto LABEL_11;
      }
    }
  }
}

