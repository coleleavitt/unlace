void __fastcall sub_7BBB20(__int64 a1, __int64 a2, double a3)
{
  unsigned int *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // r13
  unsigned int i; // r12d
  unsigned int v14; // r15d
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // rbx
  __int64 v19; // rbp
  _QWORD v20[8]; // [rsp+0h] [rbp-40h] BYREF

  if ( !*(_BYTE *)(a2 + 12) && *(_DWORD *)(a2 + 16) == -2 )
  {
    sub_7B77C0(a1);
    v5 = (unsigned int *)(a2 + 64);
    v6 = *(unsigned int *)(a2 + 32);
    v7 = a2 + 64 + 4 * v6;
    if ( 4 * v6 )
    {
      v8 = *(_QWORD *)(a1 + 24);
      v9 = *(_QWORD *)(v8 + 3840);
      do
      {
        v10 = *v5++;
        *(_DWORD *)(v9 + 4 * v10) = *(_DWORD *)(v8 + 3848) + 1;
      }
      while ( (unsigned int *)v7 != v5 );
      LODWORD(v6) = *(_DWORD *)(a2 + 32);
    }
    v11 = *(_DWORD *)(a2 + 60) + 1;
    if ( v11 > (unsigned int)v6 )
      v11 = v6;
    if ( v11 )
    {
      v12 = 0;
      for ( i = 0; i < v15; ++i )
      {
        v14 = *(_DWORD *)(a2 + 4LL * i + 64);
        sub_7BB880(a1, a2, v14, a3);
        v20[0] = v12;
        sub_7B5000(a1, a2, v14, v20);
        v12 = v20[0];
        sub_7B3420((_QWORD *)a1, a2, v14, a3);
        v15 = *(_DWORD *)(a2 + 60) + 1;
        if ( v15 > *(_DWORD *)(a2 + 32) )
          v15 = *(_DWORD *)(a2 + 32);
      }
      if ( v12 )
      {
        v16 = *(unsigned int *)(v12 - 4);
        if ( (_DWORD)v16 )
        {
          *(_BYTE *)(a1 + 953) = 1;
          v17 = v12 + 8 * v16;
          v18 = v12;
          v19 = a1 + 944;
          do
          {
            *(_BYTE *)(*(_QWORD *)v18 + 16LL) |= 2u;
            sub_1175CF0(v19);
            v18 += 8;
          }
          while ( v17 != v18 );
        }
        sub_186B220((void *)(v12 - 8));
      }
    }
  }
}

