void __fastcall sub_183C0A0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r9d
  _DWORD *v4; // r8
  __int64 v5; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 i; // r13
  __int64 v13; // rsi
  _DWORD *v14; // rax
  _DWORD *v15; // r8
  __int64 v16; // rbx
  unsigned int v17[11]; // [rsp+0h] [rbp-2Ch] BYREF

  v3 = *(_DWORD *)(a3 + 136);
  if ( v3 )
  {
    v4 = *(_DWORD **)(a3 + 128);
    v5 = 1LL << *v4;
    if ( (v5 & 0xB7) == 0 )
    {
      if ( (v5 & 0x40) != 0 )
      {
        v14 = *(_DWORD **)(a3 + 128);
        v15 = &v4[36 * (v3 - 1)];
        while ( v14 != v15 )
        {
          v16 = 1LL << v14[36];
          if ( (v16 & 0xB7) != 0 )
            break;
          v14 += 36;
          if ( (v16 & 0x40) == 0 )
            goto LABEL_4;
        }
      }
      else
      {
LABEL_4:
        v17[0] = 0;
        sub_147B3A0(a3, v17);
        v10 = *(_QWORD *)(a3 + 128) + 144LL * v17[0];
        v11 = *(_QWORD *)(v10 + 96);
        if ( v11 )
        {
          for ( i = v11 + 32LL * *(unsigned int *)(v10 + 72); v11 != i; v11 += 32 )
          {
            v13 = *(_QWORD *)(v11 + 16);
            if ( *(_QWORD *)(v13 + 40) )
              sub_17B7670(a1, v13, a2, 0, v8, v9);
          }
        }
      }
    }
  }
}
