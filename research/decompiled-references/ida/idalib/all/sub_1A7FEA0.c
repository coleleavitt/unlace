__int64 __fastcall sub_1A7FEA0(__int64 a1, int a2)
{
  __int64 v4; // rax
  unsigned int v5; // ecx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r14
  int *v9; // r12
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  void *v17; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdx
  char v22; // [rsp+Fh] [rbp-59h] BYREF
  int v23; // [rsp+10h] [rbp-58h] BYREF
  __int64 v24; // [rsp+18h] [rbp-50h]
  void *v25; // [rsp+20h] [rbp-48h]
  __int64 v26; // [rsp+28h] [rbp-40h]
  __int64 v27; // [rsp+30h] [rbp-38h]
  __int64 v28; // [rsp+38h] [rbp-30h]

  v4 = *(_QWORD *)(a1 + 10944);
  v5 = *(_DWORD *)(a1 + 10152);
  if ( !v4 )
  {
    v19 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 104LL) + 632LL;
    if ( v5 )
      v4 = *(_QWORD *)(*(_QWORD *)(a1 + 10144) + 48LL * v5 - 40);
    v4 = sub_13FC510(v19, a2, v4);
    v5 = *(_DWORD *)(a1 + 10152);
    *(_QWORD *)(a1 + 10944) = v4;
  }
  v24 = v4;
  v6 = *(unsigned int *)(a1 + 10156);
  v7 = v5 + 1LL;
  v23 = a2;
  v8 = *(_QWORD *)(a1 + 10144);
  v28 = 0;
  v9 = &v23;
  v25 = nullptr;
  v10 = v8 + 48LL * v5;
  v26 = 0;
  v27 = 0;
  if ( v7 > v6 )
  {
    v20 = a1 + 10144;
    if ( v8 > (unsigned __int64)&v23 || v10 <= (unsigned __int64)&v23 )
    {
      sub_1A7FD60(v20, v7);
      v10 = *(_QWORD *)(a1 + 10144) + 48LL * *(unsigned int *)(a1 + 10152);
    }
    else
    {
      sub_1A7FD60(v20, v7);
      v21 = *(_QWORD *)(a1 + 10144);
      v9 = (int *)((char *)&v23 + v21 - v8);
      v10 = v21 + 48LL * *(unsigned int *)(a1 + 10152);
    }
  }
  *(_DWORD *)v10 = *v9;
  v11 = *((_QWORD *)v9 + 1);
  *(_QWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 24) = 0;
  *(_QWORD *)(v10 + 32) = 0;
  *(_QWORD *)(v10 + 8) = v11;
  *(_QWORD *)(v10 + 16) = *((_QWORD *)v9 + 2);
  v12 = *((_QWORD *)v9 + 3);
  *((_QWORD *)v9 + 2) = 0;
  v13 = *(_QWORD *)(v10 + 24);
  *(_QWORD *)(v10 + 24) = v12;
  v14 = *((_QWORD *)v9 + 4);
  *((_QWORD *)v9 + 3) = v13;
  v15 = *(_QWORD *)(v10 + 32);
  *(_QWORD *)(v10 + 32) = v14;
  LODWORD(v14) = v9[10];
  *((_QWORD *)v9 + 4) = v15;
  *(_DWORD *)(v10 + 40) = v14 != 0;
  v16 = *((_QWORD *)v9 + 2);
  ++v9[10];
  *((_QWORD *)v9 + 3) = v16;
  v17 = v25;
  ++*(_DWORD *)(a1 + 10152);
  if ( v17 )
    operator delete(v17);
  sub_FF1730(a1 + 11128, *(_QWORD *)(a1 + 10944), a2, 1, (__int64)nullsub_1204, (__int64)&v22, (char)nullsub_1205);
  return *(_QWORD *)(a1 + 10944);
}
