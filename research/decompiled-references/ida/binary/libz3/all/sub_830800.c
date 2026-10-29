__int64 __fastcall sub_830800(_QWORD *a1, __int64 a2, __int64 a3)
{
  _BYTE *v5; // rax
  int v6; // r9d
  unsigned __int8 v7; // bl
  char *v8; // r14
  char *v9; // r15
  _DWORD *v10; // rax
  char *v11; // rax
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rdi
  __m128i v16; // kr00_16
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rbx
  unsigned int v20; // eax
  bool v21; // zf
  unsigned int v22; // r12d
  void *v23; // r15
  char *v24; // rbx
  char *v25; // r13
  void *v26; // rbp
  char *v27; // rsi
  __m128i v29; // [rsp+0h] [rbp-68h] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  int v31[2]; // [rsp+18h] [rbp-50h]
  void *v32; // [rsp+20h] [rbp-48h]

  v5 = (_BYTE *)sub_186B270(0x180u);
  v5[20] &= 0xFCu;
  v5[36] &= 0xFCu;
  v5[68] &= 0xFCu;
  v5[84] &= 0xFCu;
  v5[116] &= 0xFCu;
  v5[132] &= 0xFCu;
  v5[164] &= 0xFCu;
  v5[180] &= 0xFCu;
  v5[212] &= 0xFCu;
  *(_QWORD *)v5 = 0;
  *((_QWORD *)v5 + 3) = 0;
  *((_QWORD *)v5 + 5) = 0;
  *((_QWORD *)v5 + 6) = 0;
  *((_QWORD *)v5 + 9) = 0;
  *((_QWORD *)v5 + 11) = 0;
  *((_QWORD *)v5 + 12) = 0;
  *((_QWORD *)v5 + 15) = 0;
  *((_QWORD *)v5 + 17) = 0;
  *((_QWORD *)v5 + 18) = 0;
  *((_QWORD *)v5 + 21) = 0;
  *((_QWORD *)v5 + 23) = 0;
  *((_QWORD *)v5 + 24) = 0;
  *((_QWORD *)v5 + 27) = 0;
  v5[228] &= 0xFCu;
  v5[260] &= 0xFCu;
  v5[276] &= 0xFCu;
  v5[308] &= 0xFCu;
  v5[324] &= 0xFCu;
  v5[356] &= 0xFCu;
  v5[372] &= 0xFCu;
  *((_QWORD *)v5 + 29) = 0;
  *((_QWORD *)v5 + 30) = 0;
  *((_QWORD *)v5 + 33) = 0;
  *((_QWORD *)v5 + 35) = 0;
  *((_QWORD *)v5 + 36) = 0;
  *((_QWORD *)v5 + 39) = 0;
  *((_QWORD *)v5 + 41) = 0;
  *((_QWORD *)v5 + 42) = 0;
  *((_QWORD *)v5 + 45) = 0;
  *((_QWORD *)v5 + 47) = 0;
  *((_DWORD *)v5 + 4) = 0;
  *((_DWORD *)v5 + 16) = 0;
  *((_DWORD *)v5 + 28) = 0;
  *((_DWORD *)v5 + 40) = 0;
  *((_DWORD *)v5 + 52) = 0;
  *((_DWORD *)v5 + 64) = 0;
  *((_DWORD *)v5 + 76) = 0;
  *((_DWORD *)v5 + 88) = 0;
  *((_DWORD *)v5 + 8) = 1;
  *((_DWORD *)v5 + 20) = 1;
  *((_DWORD *)v5 + 32) = 1;
  *((_DWORD *)v5 + 44) = 1;
  *((_DWORD *)v5 + 56) = 1;
  *((_DWORD *)v5 + 68) = 1;
  *((_DWORD *)v5 + 80) = 1;
  *((_DWORD *)v5 + 92) = 1;
  ptr = v5;
  *(_QWORD *)v31 = 8;
  LODWORD(v32) = 0;
  sub_830100(a1, a2, (unsigned int *)&ptr, (__int64)&qword_1C7F280);
  v7 = (*(_BYTE *)(a3 + 20) & 1) == 0;
  if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
    v7 = *(_DWORD *)(a3 + 16) == 1;
  v8 = (char *)ptr;
  v9 = (char *)ptr + 48 * (unsigned int)v31[0];
  if ( ptr != v9 )
  {
    while ( *((_DWORD *)v8 + 1) != 2 )
    {
      v8 += 48;
      if ( v9 == v8 )
        goto LABEL_18;
    }
    while ( v9 != v8 )
    {
      v10 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(a1[11] + 8LL * *((unsigned int *)v8 + 2))) + 24);
      if ( !v10 || *v10 != 5 || v10[1] != 1 || (v8[36] & 1) != 0 )
      {
        v11 = v8 + 48;
        v7 = 0;
        if ( v9 != v8 + 48 )
          goto LABEL_13;
        break;
      }
      v7 &= *((_DWORD *)v8 + 8) == 1;
      v11 = v8 + 48;
      if ( v9 == v8 + 48 )
        break;
LABEL_13:
      while ( 1 )
      {
        v8 = v11;
        if ( *((_DWORD *)v11 + 1) == 2 )
          break;
        v11 += 48;
        if ( v9 == v11 )
          goto LABEL_18;
      }
    }
  }
LABEL_18:
  sub_82C4A0(&v29, (__int64)a1, (__int64 *)&ptr, (unsigned __int64 *)&qword_1C7F2A0, v7, v6);
  v15 = a1[105];
  v16 = v29;
  v17 = a1[9];
  if ( !v15 )
  {
    sub_16669E0(a1 + 104);
    v15 = a1[105];
  }
  v18 = sub_166A700(v15, a3, v7, v12, v13, v14);
  v19 = v18;
  if ( v18 )
  {
    ++*(_DWORD *)(v18 + 8);
    v20 = sub_7E58D0((__int64)a1, v16.m128i_i64[0], v18);
    v21 = (*(_DWORD *)(v19 + 8))-- == 1;
    v22 = v20;
    if ( v21 )
      sub_15D7BC0(v17, v19);
  }
  else
  {
    v22 = sub_7E58D0((__int64)a1, v16.m128i_i64[0], 0);
  }
  if ( v16.m128i_i64[0] )
  {
    v21 = (*(_DWORD *)(v16.m128i_i64[0] + 8))-- == 1;
    if ( v21 )
      sub_15D7BC0(v16.m128i_i64[1], v16.m128i_i64[0]);
  }
  v23 = ptr;
  if ( ptr )
  {
    if ( v31[0] )
    {
      v24 = (char *)ptr;
      v25 = (char *)ptr + 48 * (unsigned int)v31[0];
      do
      {
        v26 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v24 + 16);
        v27 = v24 + 32;
        v24 += 48;
        sub_182CBA0(v26, v27);
      }
      while ( v24 != v25 );
    }
    sub_186B220(v23);
  }
  return v22;
}

