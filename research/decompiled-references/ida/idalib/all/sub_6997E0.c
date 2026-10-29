unsigned __int64 __fastcall sub_6997E0(__int64 *a1, __int64 a2, char a3, __int64 a4)
{
  char v5; // r12
  __int64 v7; // rax
  char v8; // r14
  __int64 v9; // rax
  __int64 v10; // rsi
  size_t v12; // rax
  size_t v13; // rax
  __int64 v14; // rax
  _BYTE v15[3]; // [rsp+Eh] [rbp-3Ah] BYREF
  _BYTE v16[7]; // [rsp+11h] [rbp-37h] BYREF
  unsigned __int64 v17[6]; // [rsp+18h] [rbp-30h] BYREF

  v5 = a3;
  v17[0] = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a4 + 8);
  if ( (_DWORD)v7 )
  {
    v5 = a3 | 3;
    if ( (int)v7 <= 1 )
    {
      v5 = a3 | 2;
      if ( *(_QWORD *)(*(_QWORD *)a4 + 8LL) == -1 )
        v5 = a3 | 1;
    }
  }
  if ( *(_DWORD *)(a4 + 32) != -1 )
    v5 |= 4u;
  v8 = 0;
  if ( *(_QWORD *)(a4 + 24) != -1 )
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
  sub_699680(a1, v5, a4, a2);
  if ( (v5 & 4) != 0 )
  {
    v13 = pack_dw(v15, v16, *(unsigned __int16 *)(a4 + 32)) - (_QWORD)v15;
    if ( v13 )
      sub_698900(a1, v15, v13);
  }
  if ( v8 )
  {
    v12 = pack_dq(v15, v17, *(_QWORD *)(a4 + 24)) - (_QWORD)v15;
    if ( v12 )
      sub_698900(a1, v15, v12);
  }
  return v17[0] - __readfsqword(0x28u);
}
