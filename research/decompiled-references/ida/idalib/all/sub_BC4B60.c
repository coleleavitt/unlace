unsigned __int64 __fastcall sub_BC4B60(
        _QWORD *a1,
        __int64 a2,
        int a3,
        const void *a4,
        unsigned __int64 a5,
        __int64 a6,
        int a7)
{
  char *v10; // r12
  __int64 v12; // r8
  __int64 v13; // rsi
  const void *v14; // r10
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int16 v20; // ax
  char v22; // al
  __int64 v23; // rax
  __int64 v24; // [rsp+0h] [rbp-48h]
  __int64 v25; // [rsp+0h] [rbp-48h]

  v10 = nullptr;
  if ( a5 )
  {
    v12 = 8 * a5;
    v13 = -1;
    v14 = a4;
    v15 = a1[294];
    if ( a5 <= 0xFFFFFFFFFFFFFFFLL )
      v13 = v12;
    a1[304] += v13;
    v10 = (char *)((v15 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( a1[295] >= (unsigned __int64)&v10[v13] && v15 )
    {
      a1[294] = &v10[v13];
    }
    else
    {
      v25 = v12;
      v23 = sub_986170((__int64)(a1 + 294), v13, v13, 3, v12, a6);
      v14 = a4;
      v12 = v25;
      v10 = (char *)v23;
    }
    if ( v12 )
      memmove(v10, v14, v12);
  }
  v16 = sub_B902D0(64, a1, a2, 0);
  *(_QWORD *)v16 = off_2C02B30;
  if ( a2
    && (v17 = sub_B8C1B0(a2), v18 = *(_QWORD *)(v17 + 8) & 7LL, (*(_QWORD *)(v17 + 8) & 7) != 0)
    && (*(char *)(v17 + 29) >= 0 || (v24 = *(_QWORD *)(v17 + 8) & 7LL, v22 = sub_B8C610(v17), v18 = v24, v22)) )
  {
    v19 = v18;
  }
  else
  {
    v19 = 0;
  }
  *(_QWORD *)(v16 + 8) = v19;
  *(_QWORD *)(v16 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_DWORD *)(v16 + 24) = a3;
  *(_WORD *)(v16 + 28) = 24661;
  v20 = sub_B8C0C0(85);
  *(_BYTE *)(v16 + 32) &= 0xF8u;
  *(_WORD *)(v16 + 30) = v20 & 0x3FFF | *(_WORD *)(v16 + 30) & 0xC000;
  if ( byte_2CD7310[0] )
    sub_B8B8D0(85);
  *(_DWORD *)(v16 + 36) = a5;
  *(_QWORD *)(v16 + 40) = v10;
  *(_QWORD *)(v16 + 48) = a6;
  *(_QWORD *)v16 = &off_2C04798;
  *(_DWORD *)(v16 + 56) = a7;
  return v16;
}
