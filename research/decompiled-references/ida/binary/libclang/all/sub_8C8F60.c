void __fastcall sub_8C8F60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v7; // rbp
  unsigned int v8; // eax
  __int64 v9; // r14
  __int64 v10; // rdi
  int v11; // r15d
  __int64 v12; // rax
  __int64 v13; // rdx
  _QWORD v14[8]; // [rsp+8h] [rbp-40h] BYREF

  v4 = *(unsigned __int8 *)(a1 + 27);
  if ( (v4 & 4) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    if ( (v4 & 1) != 0 )
      v5 = *(_QWORD *)(v5 + 40);
    v14[0] = v5;
    v7 = 1;
    if ( (v5 & 3) == 1 )
      goto LABEL_7;
    v8 = sub_C87220(v14, v4, a3);
    v7 = v8;
    if ( v8 )
    {
      LOBYTE(v4) = *(_BYTE *)(a1 + 27);
LABEL_7:
      v9 = 0;
      while ( 1 )
      {
        if ( (((unsigned __int8)v4 >> 3) & 3) != 0 )
        {
          v10 = *(_QWORD *)(a1 + 16);
          if ( (v4 & 1) != 0 )
            v10 = *(_QWORD *)(v10 + 40);
          v11 = sub_AC2210(
                  (unsigned int)v9,
                  v10,
                  (((unsigned __int8)v4 >> 3) & 3) == 2,
                  a1 + 48,
                  *(unsigned __int16 *)(a1 + 24),
                  *(unsigned int *)(a1 + 36));
          v12 = *(unsigned int *)(a2 + 8);
          v13 = v12 + 1;
          if ( *(unsigned int *)(a2 + 12) >= (unsigned __int64)(v12 + 1) )
          {
LABEL_11:
            ++v9;
            *(_DWORD *)(*(_QWORD *)a2 + 4 * v12) = v11;
            ++*(_DWORD *)(a2 + 8);
            if ( v9 == v7 )
              return;
            goto LABEL_12;
          }
        }
        else
        {
          v11 = *(_DWORD *)(a1 + 4 * v9 + 8LL * *(unsigned __int16 *)(a1 + 24) + 8 + 40);
          v12 = *(unsigned int *)(a2 + 8);
          v13 = v12 + 1;
          if ( *(unsigned int *)(a2 + 12) >= (unsigned __int64)(v12 + 1) )
            goto LABEL_11;
        }
        ++v9;
        sub_25D6060(a2, a2 + 16, v13, 4);
        *(_DWORD *)(*(_QWORD *)a2 + 4LL * (unsigned int)(*(_DWORD *)(a2 + 8))++) = v11;
        if ( v7 == v9 )
          return;
LABEL_12:
        LOBYTE(v4) = *(_BYTE *)(a1 + 27);
      }
    }
  }
}

