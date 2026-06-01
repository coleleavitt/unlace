__int64 __fastcall sub_A246B0(__int64 a1)
{
  __int64 v1; // rbp
  int v2; // edx
  int v3; // eax
  __int64 v4; // r14
  int v5; // ecx
  unsigned __int64 *v6; // r15
  unsigned __int64 v7; // rdx
  unsigned int v8; // r13d
  int v9; // eax
  unsigned int v10; // ecx
  int v11; // eax
  unsigned __int64 v12; // r12
  unsigned int v13; // esi
  char v14; // si
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rsi
  volatile signed __int32 *v18; // rax
  unsigned int v19; // ebx
  unsigned __int8 v21; // al
  unsigned __int64 v22; // r12
  unsigned int v23; // esi
  char v24; // si
  _QWORD *v25; // r12
  __int64 v26; // rcx
  int v27; // eax
  unsigned int v28; // edx
  int v29; // [rsp+4h] [rbp-54h]
  __int64 v30; // [rsp+8h] [rbp-50h]
  __int64 v31; // [rsp+10h] [rbp-48h] BYREF
  volatile signed __int32 *v32; // [rsp+18h] [rbp-40h]

  v1 = operator new(0x220u);
  *(_QWORD *)(v1 + 8) = 0x100000001LL;
  *(_QWORD *)v1 = off_2C02AF8;
  *(_QWORD *)(v1 + 16) = v1 + 32;
  *(_QWORD *)(v1 + 24) = 0x2000000000LL;
  sub_A1FE00(v1 + 16, 1, 1);
  sub_A1FE00(v1 + 16, 16, 4);
  sub_A1FE00(v1 + 16, 0, 10);
  v2 = *(_DWORD *)(a1 + 56);
  v31 = v1 + 16;
  v32 = (volatile signed __int32 *)v1;
  sub_A1FEC0(a1, 2u, v2);
  sub_A1FF30(a1, *(_DWORD *)(v1 + 24), 5);
  v3 = *(_DWORD *)(v1 + 24);
  if ( v3 )
  {
    v4 = 0;
    v30 = 16 * ((unsigned int)(v3 - 1) + 1LL);
    do
    {
      v5 = *(_DWORD *)(a1 + 48);
      v6 = (unsigned __int64 *)(v4 + *(_QWORD *)(v1 + 16));
      v7 = v6[1];
      v8 = v7 & 1;
      v9 = (v6[1] & 1) << v5;
      v10 = v5 + 1;
      v11 = *(_DWORD *)(a1 + 52) | v9;
      *(_DWORD *)(a1 + 52) = v11;
      if ( v10 > 0x1F )
      {
        v25 = *(_QWORD **)(a1 + 24);
        v26 = v25[1];
        if ( (unsigned __int64)(v26 + 4) > v25[2] )
        {
          v29 = v11;
          sub_2236E10(*(_QWORD *)(a1 + 24), v25 + 3, v26 + 4, 1);
          v26 = v25[1];
          v11 = v29;
        }
        *(_DWORD *)(*v25 + v26) = v11;
        v27 = *(_DWORD *)(a1 + 48);
        v28 = 0;
        v25[1] += 4LL;
        if ( v27 )
          v28 = v8 >> (32 - v27);
        *(_DWORD *)(a1 + 52) = v28;
        v7 = v6[1];
        *(_DWORD *)(a1 + 48) = ((_BYTE)v27 + 1) & 0x1F;
      }
      else
      {
        *(_DWORD *)(a1 + 48) = v10;
      }
      if ( (v7 & 1) != 0 )
      {
        v12 = *v6;
        v13 = *v6;
        if ( *v6 == v13 )
        {
          sub_A1FF30(a1, v13, 8);
        }
        else
        {
          if ( v12 > 0x7F )
          {
            do
            {
              v14 = v12;
              v12 >>= 7;
              sub_A1FEC0(a1, v14 & 0x7F | 0x80, 8);
            }
            while ( v12 > 0x7F );
            v13 = v12;
          }
          sub_A1FEC0(a1, v13, 8);
        }
      }
      else
      {
        sub_A1FEC0(a1, (*((_BYTE *)v6 + 8) >> 1) & 7, 3);
        v21 = (*((_BYTE *)v6 + 8) >> 1) & 7;
        if ( !v21 )
          goto LABEL_25;
        if ( v21 > 2u )
        {
          if ( v21 > 5u )
LABEL_25:
            sub_2221C70("Invalid encoding", 1);
        }
        else
        {
          v22 = *v6;
          v23 = *v6;
          if ( *v6 == v23 )
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
      v4 += 16;
    }
    while ( v30 != v4 );
  }
  v15 = *(_QWORD *)(a1 + 72);
  if ( v15 == *(_QWORD *)(a1 + 80) )
  {
    sub_A22DA0(a1 + 64, (char *)v15, &v31);
    v17 = *(_QWORD *)(a1 + 72);
  }
  else
  {
    v16 = v31;
    *(_QWORD *)(v15 + 8) = 0;
    v17 = v15 + 16;
    *(_QWORD *)(v17 - 16) = v16;
    v18 = v32;
    v32 = nullptr;
    *(_QWORD *)(v17 - 8) = v18;
    v31 = 0;
    *(_QWORD *)(a1 + 72) = v17;
  }
  v19 = ((v17 - *(_QWORD *)(a1 + 64)) >> 4) + 3;
  if ( v32 )
    sub_4343A0(v32);
  return v19;
}
