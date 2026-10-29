__int64 __fastcall sub_577530(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, __int16 a7)
{
  char v7; // r13
  char v10; // al
  unsigned __int8 v11; // al
  char v12; // al
  int v13; // ecx
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v22; // [rsp+0h] [rbp-48h]
  unsigned int v23; // [rsp+0h] [rbp-48h]
  unsigned int v24; // [rsp+8h] [rbp-40h]
  __int64 v25; // [rsp+8h] [rbp-40h]

  v7 = 0;
  if ( (a7 & 3) != 1 )
  {
    v24 = a3;
    v22 = a4;
    v10 = is_invsign(a2, a4, a3);
    a3 = v24;
    a4 = v22;
    v7 = v10;
  }
  if ( (a7 & 0x400) == 0
    && (*(_QWORD *)(a1 + 1368) || (v25 = a4, v23 = a3, v12 = getinf_flag(2, 2), a3 = v23, a4 = v25, v12)) )
  {
    v11 = is_bnot(a2, a4, a3);
  }
  else
  {
    v11 = 0;
  }
  v13 = 8 * a6 - 1;
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 1672) + 24LL);
  if ( (unsigned __int64)v13 > 0x3F )
  {
    v17 = -1;
    v16 = 0;
    v15 = 0;
  }
  else
  {
    v15 = 1LL << v13;
    v16 = 2 * v15;
    v17 = 2 * v15 - 1;
  }
  v18 = *(_DWORD *)(v14 + 24);
  if ( a6 <= v18 && v18 != 8 )
    a5 &= *(_QWORD *)(v14 + 16);
  if ( (a7 & 4) != 0 )
    v7 ^= v15 != a5 && (a5 & v15) != 0;
  if ( v7 )
  {
    v19 = a5 | -v16;
    if ( (a5 & v15) != 0 )
      a5 = v19;
    v20 = -a5;
  }
  else
  {
    v20 = a5 ^ -(__int64)v11;
  }
  return v17 & v20;
}
