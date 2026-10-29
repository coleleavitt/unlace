__int64 __fastcall sub_A22F90(__int64 a1, __int64 *a2)
{
  __int64 v3; // r15
  int v4; // eax
  __int64 v5; // r14
  int v6; // ecx
  unsigned __int64 *v7; // r12
  unsigned __int64 v8; // rdx
  unsigned int v9; // r9d
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned __int64 v13; // rbp
  unsigned int v14; // esi
  char v15; // si
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  unsigned __int8 v21; // al
  unsigned __int64 v22; // rbp
  unsigned int v23; // esi
  char v24; // si
  _QWORD *v25; // rbp
  __int64 v26; // rcx
  int v27; // eax
  unsigned int v28; // edx
  unsigned int v29; // [rsp+0h] [rbp-48h]
  int v30; // [rsp+4h] [rbp-44h]
  __int64 v31; // [rsp+8h] [rbp-40h]

  v3 = *a2;
  sub_A1FEC0(a1, 2u, *(_DWORD *)(a1 + 56));
  sub_A1FF30(a1, *(_DWORD *)(v3 + 8), 5);
  v4 = *(_DWORD *)(v3 + 8);
  if ( v4 )
  {
    v5 = 0;
    v31 = 16 * ((unsigned int)(v4 - 1) + 1LL);
    do
    {
      v6 = *(_DWORD *)(a1 + 48);
      v7 = (unsigned __int64 *)(v5 + *(_QWORD *)v3);
      v8 = v7[1];
      v9 = v8 & 1;
      v10 = (v7[1] & 1) << v6;
      v11 = v6 + 1;
      v12 = *(_DWORD *)(a1 + 52) | v10;
      *(_DWORD *)(a1 + 52) = v12;
      if ( v11 > 0x1F )
      {
        v25 = *(_QWORD **)(a1 + 24);
        v26 = v25[1];
        if ( (unsigned __int64)(v26 + 4) > v25[2] )
        {
          v30 = v12;
          v29 = v8 & 1;
          sub_2236E10(*(_QWORD *)(a1 + 24), v25 + 3, v26 + 4, 1);
          v26 = v25[1];
          v12 = v30;
          v9 = v29;
        }
        *(_DWORD *)(*v25 + v26) = v12;
        v27 = *(_DWORD *)(a1 + 48);
        v28 = 0;
        v25[1] += 4LL;
        if ( v27 )
          v28 = v9 >> (32 - v27);
        *(_DWORD *)(a1 + 52) = v28;
        v8 = v7[1];
        *(_DWORD *)(a1 + 48) = ((_BYTE)v27 + 1) & 0x1F;
      }
      else
      {
        *(_DWORD *)(a1 + 48) = v11;
      }
      if ( (v8 & 1) != 0 )
      {
        v13 = *v7;
        v14 = *v7;
        if ( *v7 == v14 )
        {
          sub_A1FF30(a1, v14, 8);
        }
        else
        {
          if ( v13 > 0x7F )
          {
            do
            {
              v15 = v13;
              v13 >>= 7;
              sub_A1FEC0(a1, v15 & 0x7F | 0x80, 8);
            }
            while ( v13 > 0x7F );
            v14 = v13;
          }
          sub_A1FEC0(a1, v14, 8);
        }
      }
      else
      {
        sub_A1FEC0(a1, (*((_BYTE *)v7 + 8) >> 1) & 7, 3);
        v21 = (*((_BYTE *)v7 + 8) >> 1) & 7;
        if ( !v21 )
          goto LABEL_23;
        if ( v21 > 2u )
        {
          if ( v21 > 5u )
LABEL_23:
            sub_2221C70("Invalid encoding", 1);
        }
        else
        {
          v22 = *v7;
          v23 = *v7;
          if ( *v7 == v23 )
          {
            sub_A1FF30(a1, v23, 5);
          }
          else
          {
            if ( v22 > 0xF )
            {
              do
              {
                v24 = v22;
                v22 >>= 4;
                sub_A1FEC0(a1, v24 & 0xF | 0x10, 5);
              }
              while ( v22 > 0xF );
              v23 = v22;
            }
            sub_A1FEC0(a1, v23, 5);
          }
        }
      }
      v5 += 16;
    }
    while ( v31 != v5 );
  }
  v16 = *(_QWORD *)(a1 + 72);
  if ( v16 == *(_QWORD *)(a1 + 80) )
  {
    sub_A22DA0(a1 + 64, (char *)v16, a2);
    v18 = *(_QWORD *)(a1 + 72);
  }
  else
  {
    v17 = *a2;
    *(_QWORD *)(v16 + 8) = 0;
    v18 = v16 + 16;
    *(_QWORD *)(v18 - 16) = v17;
    v19 = a2[1];
    a2[1] = 0;
    *(_QWORD *)(v18 - 8) = v19;
    *a2 = 0;
    *(_QWORD *)(a1 + 72) = v18;
  }
  return (unsigned int)((v18 - *(_QWORD *)(a1 + 64)) >> 4) + 3;
}
