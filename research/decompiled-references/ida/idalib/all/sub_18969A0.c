__int64 __fastcall sub_18969A0(__int64 *a1, __int64 a2, unsigned int *a3, unsigned int a4, __int64 *a5)
{
  unsigned int v5; // r14d
  __int64 v6; // r15
  __int64 v7; // r13
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned __int64 v19; // r8
  unsigned int v20; // eax
  __int64 v23; // [rsp+8h] [rbp-E0h]
  __int64 v24; // [rsp+8h] [rbp-E0h]
  _BYTE v26[200]; // [rsp+20h] [rbp-C8h] BYREF

  v5 = 0;
  v6 = *a5;
  v7 = *a5 + 8LL * *((unsigned int *)a5 + 2);
  if ( v7 != *a5 )
  {
    do
    {
      v9 = *(_QWORD *)(*(_QWORD *)v6 + 40LL) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(*(_QWORD *)v6 + 40LL) & 7) != 0 )
        v9 = 0;
      v10 = sub_1A86640(a1, v9, *a3, 0);
      v13 = v10;
      if ( v10 )
      {
        v14 = *(_QWORD *)(v10 + 40);
        v15 = 0;
        v16 = v14 & 0xFFFFFFFFFFFFFFF8LL;
        v17 = v14 & 7;
        if ( !(_DWORD)v17 )
          v15 = v16;
        if ( a2 == v15 )
        {
          v24 = v13;
          sub_168B9F0((__int64)v26, a1, *a3, 0x12FDu, 0);
          sub_15F7200(v26);
          sub_168B9F0((__int64)v26, a1, a4, 0x71u, 0);
          v5 = 1;
          sub_15F7200(v26);
          v13 = v24;
        }
        v18 = *(_QWORD *)(v13 + 104);
        if ( !v18 )
        {
          v23 = v13;
          sub_A79820((__int64 *)(*(_QWORD *)(v13 + 96) + 88LL), *(_QWORD *)(v13 + 96), v17, v11, 0, v12);
          v13 = v23;
          v18 = *(_QWORD *)(v23 + 104);
        }
        v19 = v18 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v19 )
        {
          v20 = sub_18969A0(a1, a2, a3, *(unsigned int *)(v13 + 24), v19 + 8);
          if ( (_BYTE)v20 )
            v5 = v20;
        }
      }
      v6 += 8;
    }
    while ( v7 != v6 );
  }
  return v5;
}
