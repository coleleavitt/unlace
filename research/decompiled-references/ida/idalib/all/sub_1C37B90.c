void __fastcall sub_1C37B90(unsigned __int64 a1, __m128 a2, double a3)
{
  __int64 v3; // r9
  __m128i *v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rax
  void **v10; // r8
  unsigned __int64 v11; // r15
  __int64 v12; // r13
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // r13
  char *v16; // rsi
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // r9
  unsigned int v20; // edx
  __int64 v21; // [rsp+0h] [rbp-A8h] BYREF
  _BYTE *v22; // [rsp+8h] [rbp-A0h]
  __int64 v23; // [rsp+10h] [rbp-98h] BYREF
  void *ptr; // [rsp+18h] [rbp-90h]
  __int64 v25; // [rsp+20h] [rbp-88h]
  _BYTE v26[24]; // [rsp+28h] [rbp-80h] BYREF
  void *v27; // [rsp+40h] [rbp-68h] BYREF
  __int64 v28; // [rsp+48h] [rbp-60h]
  _BYTE v29[88]; // [rsp+50h] [rbp-58h] BYREF

  sub_18C3E40(a1);
  sub_190D5E0(a1, a2);
  sub_17A2E10(a1);
  sub_15F7280(&v21, a1, nullptr, 0, 0, v3);
  v4 = *((__m128i **)v22 + 192);
  sub_B88650((__int64)v4, 1);
  v9 = sub_B7E900((__int64)v4, 1, v5, v6, v7, v8);
  v10 = (void **)v29;
  v11 = v9;
  v27 = v29;
  v28 = 0x400000000LL;
  if ( v9 )
  {
    v12 = 0;
    v13 = *(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v13 )
    {
      while ( (*(_BYTE *)(v13 + 28) & 0x7Fu) - 49 <= 2 )
      {
LABEL_22:
        ++v12;
        v13 = *(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v13 )
          goto LABEL_7;
      }
      while ( 1 )
      {
        v14 = *(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v13 = v14;
        if ( !v14 )
          break;
        if ( (*(_BYTE *)(v14 + 28) & 0x7Fu) - 49 <= 2 )
          goto LABEL_22;
      }
    }
LABEL_7:
    v15 = v12 + 1;
    v16 = v29;
    if ( v15 > 4 )
    {
      sub_2237220(&v27, v29, v15, 8);
      LODWORD(v15) = v28 + v15;
      v16 = (char *)v27 + 8 * (unsigned int)v28;
    }
    *(_QWORD *)v16 = v11;
    v17 = *(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v17 )
    {
      while ( (*(_BYTE *)(v17 + 28) & 0x7Fu) - 49 <= 2 )
      {
LABEL_24:
        v16 += 8;
        *(_QWORD *)v16 = v17;
        v17 = *(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v17 )
          goto LABEL_14;
      }
      while ( 1 )
      {
        v18 = *(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v17 = v18;
        if ( !v18 )
          break;
        if ( (*(_BYTE *)(v18 + 28) & 0x7Fu) - 49 <= 2 )
          goto LABEL_24;
      }
    }
LABEL_14:
    v10 = (void **)v27;
    v19 = (unsigned int)v15;
  }
  else
  {
    LODWORD(v15) = 0;
    v19 = 0;
  }
  LODWORD(v28) = v15;
  v20 = v4[1].m128i_u32[2];
  ptr = v26;
  v23 = 0;
  v25 = 0x200000000LL;
  sub_17CC930(a1, nullptr, v20, v4, v10, v19, (__m128i)a2, a3, 0, 0, (__int64)&v23);
  if ( ptr != v26 )
    free(ptr);
  if ( v27 != v29 )
    free(v27);
  if ( v22 )
    sub_15F2350(&v21, v22);
}
