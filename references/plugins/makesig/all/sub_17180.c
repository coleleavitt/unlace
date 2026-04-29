unsigned __int64 __fastcall sub_17180(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  __int16 v3; // r13
  unsigned __int64 v4; // rbp
  unsigned int v6; // eax
  __int16 v7; // di
  __int64 v8; // rdx
  int v9; // r10d
  int v10; // r12d
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v14; // rsi
  int v15; // ebp
  __int64 v16; // rax
  int v18; // [rsp+8h] [rbp-50h]
  unsigned __int64 v19; // [rsp+18h] [rbp-40h]

  v3 = a3;
  v4 = a2;
  v19 = __readfsqword(0x28u);
  v6 = *(_DWORD *)(a1 + 24);
  v7 = v6 & 7;
  if ( (v6 & 7) != 0 )
  {
    v3 = a3 - (8 - v7);
    *(_BYTE *)(*(_QWORD *)a1 + (v6 >> 3)) |= (a2 & ((1 << (8 - v7)) - 1)) << v7;
    v4 = a2 >> (8 - (unsigned __int8)v7);
  }
  if ( v3 > 0 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    v9 = v3 >> 3;
    if ( !(v3 >> 3) )
      goto LABEL_11;
    v10 = 0;
    do
    {
      v11 = *(_QWORD *)a1;
      if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v8 + 1) )
      {
        v18 = v9;
        v12 = qvector_reserve(a1, v11, v8 + 1, 1);
        v8 = *(_QWORD *)(a1 + 8);
        v9 = v18;
        *(_QWORD *)a1 = v12;
        v11 = v12;
      }
      *(_BYTE *)(v11 + v8) = v4;
      ++v10;
      v4 >>= 8;
      v8 = *(_QWORD *)(a1 + 8) + 1LL;
      *(_QWORD *)(a1 + 8) = v8;
    }
    while ( v9 != v10 );
    v3 = v3 + 8 * (1 - (v3 >> 3)) - 8;
    if ( v3 > 0 )
    {
LABEL_11:
      v14 = *(_QWORD *)a1;
      v15 = ((1 << v3) - 1) & v4;
      if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v8 + 1) )
      {
        v16 = qvector_reserve(a1, v14, v8 + 1, 1);
        v8 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)a1 = v16;
        v14 = v16;
      }
      *(_BYTE *)(v14 + v8) = v15;
      ++*(_QWORD *)(a1 + 8);
    }
  }
  *(_DWORD *)(a1 + 24) += a3;
  return v19 - __readfsqword(0x28u);
}
