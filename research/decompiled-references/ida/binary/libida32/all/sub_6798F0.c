unsigned __int64 __fastcall sub_6798F0(__int64 *a1, int a2, char a3, __int64 a4)
{
  char v5; // r12
  __int64 v7; // rax
  char v8; // r14
  __int64 v9; // rax
  __int64 v10; // rsi
  size_t v12; // rax
  size_t v13; // rax
  __int64 v14; // rax
  _BYTE v15[3]; // [rsp+3h] [rbp-35h] BYREF
  _BYTE v16[2]; // [rsp+6h] [rbp-32h] BYREF
  unsigned __int64 v17[6]; // [rsp+8h] [rbp-30h] BYREF

  v5 = a3;
  v17[0] = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a4 + 8);
  if ( (_DWORD)v7 )
  {
    v5 = a3 | 3;
    if ( (int)v7 <= 1 )
    {
      v5 = a3 | 2;
      if ( *(_DWORD *)(*(_QWORD *)a4 + 4LL) == -1 )
        v5 = a3 | 1;
    }
  }
  if ( *(_DWORD *)(a4 + 28) != -1 )
    v5 |= 4u;
  v8 = 0;
  if ( *(_DWORD *)(a4 + 24) != -1 )
  {
    v5 |= 8u;
    v8 = 8;
  }
  v9 = a1[1];
  v10 = *a1;
  if ( a1[2] < (unsigned __int64)(v9 + 1) )
  {
    v14 = qvector_reserve(a1, v10, v9 + 1, 1);
    *a1 = v14;
    v10 = v14;
    v9 = a1[1];
  }
  *(_BYTE *)(v10 + v9) = v5;
  ++a1[1];
  sub_679790(a1, v5, a4, a2);
  if ( (v5 & 4) != 0 )
  {
    v13 = pack_dw(v15, v16, *(unsigned __int16 *)(a4 + 28)) - (_QWORD)v15;
    if ( v13 )
      sub_678AB0(a1, v15, v13);
  }
  if ( v8 )
  {
    v12 = pack_dd(v15, v17, *(unsigned int *)(a4 + 24)) - (_QWORD)v15;
    if ( v12 )
      sub_678AB0(a1, v15, v12);
  }
  return v17[0] - __readfsqword(0x28u);
}

