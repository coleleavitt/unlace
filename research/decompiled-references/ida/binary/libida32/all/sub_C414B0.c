__int64 __fastcall sub_C414B0(__int64 *a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r15
  __m128i *v10; // rsi
  __int64 v11; // rax
  unsigned int v12; // ebp
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  int v16; // eax
  _QWORD *v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rsi
  _QWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdi
  unsigned int v34; // eax
  unsigned __int8 **v35; // rax
  unsigned __int64 v37; // [rsp+8h] [rbp-130h]
  void *v38; // [rsp+10h] [rbp-128h] BYREF
  unsigned int v39; // [rsp+18h] [rbp-120h]
  void *v40; // [rsp+20h] [rbp-118h] BYREF
  unsigned int v41; // [rsp+28h] [rbp-110h]
  char v42; // [rsp+2Ch] [rbp-10Ch]
  __m128i v43; // [rsp+30h] [rbp-108h] BYREF
  char v44; // [rsp+40h] [rbp-F8h]
  _QWORD v45[3]; // [rsp+70h] [rbp-C8h] BYREF
  unsigned int v46; // [rsp+88h] [rbp-B0h]
  _QWORD *v47; // [rsp+90h] [rbp-A8h]
  __int64 v48; // [rsp+98h] [rbp-A0h]
  void *ptr; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v50; // [rsp+A8h] [rbp-90h]
  _BYTE v51[136]; // [rsp+B0h] [rbp-88h] BYREF

  v4 = sub_A4E300(*(_QWORD **)(*a1 + 16), *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL));
  v9 = v4;
  if ( v4 && (unsigned int)*(unsigned __int8 *)(v4 + 16) - 2 >= 2 )
    v9 = 0;
  v10 = *(__m128i **)(a3 + 16);
  memset(v45, 0, sizeof(v45));
  ptr = v51;
  v50 = 0x800000000LL;
  v11 = *a1;
  LOBYTE(v46) = v46 | 1;
  v48 = 0;
  v51[65] = 0;
  v43.m128i_i64[0] = v11;
  v43.m128i_i64[1] = (__int64)v45;
  v44 = 0;
  v12 = sub_C38AE0(&v43, v10, v5, v6, v7, v8);
  if ( !(_BYTE)v12 )
    goto LABEL_5;
  if ( (v46 & 1) == 0 )
  {
    if ( (v46 & 2) != 0
      || ((_DWORD)v50 != 1 || (v46 & 4) == 0) && (v46 & 8) != 0 && *((_QWORD **)ptr + (int)((v46 >> 4) - 1)) == v47 )
    {
      v35 = (unsigned __int8 **)sub_E0FF50(*a1, a3, 2466, 0);
      if ( v35 )
        sub_BED5E0(v35, 3);
      LOBYTE(v46) = v46 | 1;
      LODWORD(v50) = 0;
    }
    else
    {
      v14 = (unsigned int)v50;
      v15 = (unsigned int)v50 + 1LL;
      if ( v15 > HIDWORD(v50) )
      {
        sub_22134E0(&ptr, v51, v15, 8);
        v14 = (unsigned int)v50;
      }
      *((_QWORD *)ptr + v14) = 0;
      LOBYTE(v46) = v46 | 8;
      v16 = v50 + 1;
      LODWORD(v50) = v50 + 1;
      v48 = *(_QWORD *)(v9 + 32);
      v17 = *(_QWORD **)(v9 + 40);
      if ( (*(_BYTE *)(v9 + 19) & 2) != 0 )
      {
        if ( *((_DWORD *)v17 + 2) <= 0x40u )
          v17 = (_QWORD *)*v17;
        else
          v17 = *(_QWORD **)*v17;
      }
      v47 = v17;
      v46 = v46 & 0xF | (16 * v16);
    }
  }
  v43.m128i_i8[4] &= ~1u;
  v43.m128i_i32[0] = 0;
  sub_A2BAC0((__int64)&v43.m128i_i64[1], 0, 2);
  v43.m128i_i32[0] = 10;
  sub_A2BFE0(*a2, (__int64)&v43);
  if ( v43.m128i_i32[0] > 1u )
    sub_A2BBA0(v43.m128i_i32);
  v18 = *(_QWORD *)(*a2 + 8) + 56LL * *(unsigned int *)(*a2 + 16);
  sub_BEBB50((__int64)v45, v18);
  v22 = sub_F3D1D0(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
          v18,
          v19,
          v20,
          v21);
  v27 = *(_QWORD *)(sub_B5ABC0(v22, v18, v23, v24, v25, v26) + 8) & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v27 )
  {
LABEL_50:
    sub_A3FFA0(*(_QWORD **)(*a1 + 16));
    BUG();
  }
  if ( (*(_BYTE *)(v27 + 28) & 0x7Fu) - 49 > 2 )
  {
    do
    {
      v28 = *(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v27 = v28;
      if ( !v28 )
        goto LABEL_50;
    }
    while ( (*(_BYTE *)(v28 + 28) & 0x7Fu) - 49 > 2 );
  }
  v37 = v27;
  v29 = sub_A3FFA0(*(_QWORD **)(*a1 + 16));
  v30 = *(_QWORD *)&byte_8[*(_QWORD *)(v37 + 48) & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v30 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v30 | (unsigned __int8)*(_QWORD *)(v37 + 48)) & 7) == (*(_QWORD *)&byte_8[v29 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v29 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v29) & 7) )
  {
    sub_A39D90((__int64)&v38, v9);
    v34 = v39;
    v39 = 0;
    v41 = v34;
    v42 = 1;
    v40 = v38;
    sub_B72A30((__int64)&v43, (__int64 *)&v40);
    sub_A2BFE0(*(_QWORD *)(*a2 + 8) + 56LL * (unsigned int)(*(_DWORD *)(*a2 + 16) + 1), (__int64)&v43);
    if ( v43.m128i_i32[0] > 1u )
      sub_A2BBA0(v43.m128i_i32);
    if ( v41 > 0x40 && v40 )
      operator delete[](v40);
    if ( v39 > 0x40 && v38 )
      operator delete[](v38);
  }
  else
  {
    v31 = *(_QWORD **)(v9 + 40);
    if ( (*(_BYTE *)(v9 + 19) & 2) != 0 )
    {
      if ( *((_DWORD *)v31 + 2) <= 0x40u )
        v31 = (_QWORD *)*v31;
      else
        v31 = *(_QWORD **)*v31;
    }
    v32 = *(_QWORD *)(v9 + 32);
    v33 = *a1;
    v43.m128i_i32[2] = 64;
    v43.m128i_i64[0] = (__int64)v31;
    v43.m128i_i8[12] = 0;
    v12 = sub_BF65F0(v33, a3, (__int64)v45, v32, (__int64)&v43);
    if ( v43.m128i_i32[2] > 0x40u && v43.m128i_i64[0] )
      operator delete[]((void *)v43.m128i_i64[0]);
    if ( !(_BYTE)v12 )
    {
LABEL_5:
      v12 = 0;
      goto LABEL_6;
    }
    sub_BEBB50((__int64)v45, *(_QWORD *)(*a2 + 8) + 56LL * (unsigned int)(*(_DWORD *)(*a2 + 16) + 1));
  }
LABEL_6:
  if ( ptr != v51 )
    free(ptr);
  return v12;
}

