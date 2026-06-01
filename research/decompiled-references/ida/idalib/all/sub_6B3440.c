__int64 __fastcall sub_6B3440(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // edi
  int v8; // esi
  unsigned int v9; // esi
  unsigned __int64 v10; // rax
  int i; // ecx
  unsigned int v12; // edx
  unsigned int v13; // r8d
  int j; // ebp
  char v15; // r14
  __int64 v16; // r13
  unsigned __int64 v17; // r15
  __int64 v18; // r9
  __int64 v19; // rsi
  __int64 v21; // rax
  unsigned int v22; // esi
  __int64 v23; // [rsp+0h] [rbp-48h]
  unsigned __int8 v24; // [rsp+Fh] [rbp-39h]

  if ( a2 == -1 )
  {
    v22 = 1024;
    return sub_6B2CF0(a1, v22);
  }
  v3 = a2;
  if ( a2 == 0xFFFFFFFF )
  {
    v22 = 512;
    return sub_6B2CF0(a1, v22);
  }
  v4 = a2;
  v5 = 8;
  v6 = 0;
  v7 = 0;
  do
  {
    while ( !(_BYTE)v4 )
    {
      ++v7;
      v4 >>= 8;
      if ( !--v5 )
        goto LABEL_7;
    }
    v8 = (_BYTE)v4 == 0xFF;
    v4 >>= 8;
    v6 += v8;
    --v5;
  }
  while ( v5 );
LABEL_7:
  v9 = 0;
  if ( v7 < v6 )
  {
    v3 = ~v3;
    v9 = 256;
  }
  v10 = v3;
  for ( i = 0; i != 8; ++i )
  {
    v12 = v9;
    v9 |= 1 << i;
    if ( !(_BYTE)v10 )
      v9 = v12;
    v10 >>= 8;
  }
  v13 = sub_6B2CF0(a1, v9);
  if ( (_BYTE)v13 )
  {
    for ( j = 8; j; --j )
    {
      while ( 1 )
      {
        v15 = v3;
        if ( (_BYTE)v3 )
          break;
        v3 >>= 8;
        if ( !--j )
          return v13;
      }
      v16 = a1[1];
      if ( v16 )
      {
        v17 = v16 + 1;
        v18 = a1[1];
        v19 = *a1;
        --v16;
        if ( a1[2] < v17 )
          goto LABEL_22;
      }
      else
      {
        v19 = *a1;
        v18 = 1;
        v17 = 2;
        if ( (unsigned __int64)a1[2] < 2 )
        {
LABEL_22:
          v24 = v13;
          v23 = v18;
          v21 = qvector_reserve(a1, v19, v17, 1);
          v13 = v24;
          v18 = v23;
          *a1 = v21;
          v19 = v21;
        }
      }
      a1[1] = v17;
      v3 >>= 8;
      *(_BYTE *)(v19 + v16) = v15;
      *(_BYTE *)(*a1 + v18) = 0;
    }
  }
  return v13;
}
