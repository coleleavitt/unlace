__int64 __fastcall sub_1849E30(unsigned __int64 *a1, unsigned __int64 a2, __m128 a3)
{
  unsigned __int16 v5; // ax
  unsigned int v6; // ebp
  __int64 v8; // r13
  _QWORD *v9; // rbx
  _WORD *v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r14
  unsigned __int64 v14; // r13
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  __int64 *v17; // rsi
  __int64 v18; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v19[184]; // [rsp+10h] [rbp-B8h] BYREF

  v5 = *(_WORD *)a2 & 0x1FF;
  if ( v5 <= 0x75u )
  {
    if ( v5 == 4 )
      return (unsigned int)sub_184A430(a1, a2);
  }
  else if ( v5 <= 0x77u )
  {
    return (unsigned int)sub_184A430(a1, a2);
  }
  if ( v5 > 0x46u )
  {
    if ( v5 == 98 )
    {
      v17 = (__int64 *)(*a1 + 8);
      sub_168B9F0((__int64)v19, v17, *(_DWORD *)(a2 + 4), 0x12B8u, 0);
      v18 = sub_EEC8C0(a2, (__int64)v17, *(double *)a3.m128_u64);
      v6 = *(unsigned __int8 *)(sub_1587DB0((__int64)v19, &v18) + 120);
      sub_15F7200(v19);
      return v6;
    }
    if ( v5 <= 0x62u )
    {
      if ( v5 == 71 )
        return (unsigned int)sub_1849AD0(a1, a1 + 1, a2, a3);
      return (unsigned int)sub_184A430(a1, a2);
    }
    if ( v5 <= 0x81u )
      return (unsigned int)sub_184A430(a1, a2);
    if ( v5 <= 0x100u )
      return 0;
    goto LABEL_33;
  }
  if ( v5 >= 0x34u )
    return (unsigned int)sub_184A430(a1, a2);
  if ( v5 <= 0x10u )
  {
    if ( v5 >= 3u )
      return (unsigned int)sub_184A430(a1, a2);
    if ( v5 )
      return 0;
LABEL_33:
    BUG();
  }
  if ( v5 <= 0x32u )
  {
    if ( v5 >= 0x12u )
      return (unsigned int)sub_184A430(a1, a2);
    v8 = a2 + 24 + 8LL * *(unsigned __int16 *)(a2 + 4) - 8;
    if ( a2 + 24 != v8 )
    {
      v9 = (_QWORD *)(a2 + 24);
      v6 = 0;
      do
      {
        v10 = (_WORD *)*v9;
        if ( (*(_WORD *)*v9 & 0x1FF) == 0x1A )
          v10 = *((_WORD **)v10 + 2);
        ++v9;
        v6 |= sub_1849E30(a1, v10);
      }
      while ( (_QWORD *)v8 != v9 );
      return v6;
    }
    return 0;
  }
  v11 = sub_C95130(a2);
  v13 = v12;
  if ( v11 == v12 )
    return 0;
  v14 = v11;
  v6 = 0;
  while ( sub_C94FB0(a2, (_QWORD *)v14) )
  {
    v15 = *(_QWORD *)v14;
    v14 += 16LL;
    v16 = sub_B73640(v15 & 0xFFFFFFFFFFFFFFF8LL);
    v6 |= sub_1849E30(a1, v16);
    if ( v13 == v14 )
      return v6;
  }
  sub_168B9F0((__int64)v19, (__int64 *)(*a1 + 8), *(_DWORD *)(v14 + 8), 0xFF8u, 0);
  v6 = v19[120];
  sub_15F7200(v19);
  return v6;
}
