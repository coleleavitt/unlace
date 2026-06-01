void __fastcall sub_E4A190(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 *v8; // rbx
  unsigned __int64 *v9; // r14
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  _QWORD *v15; // rdi
  __int64 v16; // rdx
  char *v17; // rbx
  __int64 v18; // r13
  size_t v19; // rax
  char *v20; // rbp
  char *v21; // rdi
  void *v22; // [rsp+8h] [rbp-B0h] BYREF
  void *v23[2]; // [rsp+10h] [rbp-A8h] BYREF
  void *v24; // [rsp+20h] [rbp-98h]
  __int64 v25; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-80h]
  int v27; // [rsp+40h] [rbp-78h]
  unsigned __int64 v28; // [rsp+50h] [rbp-68h] BYREF
  __m128 v29; // [rsp+58h] [rbp-60h]
  void *v30; // [rsp+68h] [rbp-50h]

  sub_E374F0(a1, a2);
  v6 = *(_QWORD *)(a2 + 104);
  v24 = nullptr;
  *(_OWORD *)v23 = 0;
  if ( v6 )
  {
    v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v7 )
      goto LABEL_17;
    goto LABEL_3;
  }
  v12 = *(_QWORD *)(a2 + 96);
  v13 = *(_QWORD *)(v12 + 88);
  v14 = v13 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v13 & 1) == 0 && (v13 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
  {
    if ( (v13 & 2) == 0 )
      goto LABEL_13;
    v14 = sub_6C1EC0((_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFCLL), *(_QWORD *)(a2 + 96), v13, v3, v4, v5)
        & 0xFFFFFFFFFFFFFFFELL;
    *(_QWORD *)(v12 + 88) = v14 | 1;
  }
  v28 = v14;
  sub_B57E30(&v28);
  v7 = *(_QWORD *)(a2 + 104) & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v7 )
  {
    if ( *(_QWORD *)(a2 + 104) )
      goto LABEL_17;
    v12 = *(_QWORD *)(a2 + 96);
    v13 = *(_QWORD *)(v12 + 88);
    v14 = v13 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v13 & 1) != 0 )
    {
LABEL_16:
      v28 = v14;
      sub_B57E30(&v28);
      if ( (*(_QWORD *)(a2 + 104) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        goto LABEL_17;
      v8 = *(unsigned __int64 **)((*(_QWORD *)(a2 + 104) & 0xFFFFFFFFFFFFFFF8LL) + 8);
      v9 = nullptr;
      goto LABEL_4;
    }
LABEL_13:
    v15 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v13 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v16 = v13 & 2;
      if ( !(_DWORD)v16 )
        goto LABEL_17;
      v14 = sub_6C1EC0(v15, v12, v16, v3, v4, v5) & 0xFFFFFFFFFFFFFFFELL;
      *(_QWORD *)(v12 + 88) = v14 | 1;
    }
    goto LABEL_16;
  }
LABEL_3:
  v8 = *(unsigned __int64 **)(v7 + 8);
  v9 = &v8[*(unsigned int *)(v7 + 16)];
LABEL_4:
  while ( v9 != v8 )
  {
    sub_E43670((__int64)&v25, a1, *v8);
    v10 = v25;
    v25 = 0;
    LOWORD(v28) = 7;
    v29.m128_u64[0] = v10;
    v11 = v26;
    v26 = 0;
    v29.m128_u64[1] = v11;
    LODWORD(v11) = v27;
    v27 = 0;
    LODWORD(v30) = v11;
    if ( v23[1] == v24 )
    {
      sub_E3A210((__int64)v23, (char *)v23[1], (__int64)&v28);
    }
    else
    {
      sub_2205840(v23[1], &v28);
      v23[1] = (char *)v23[1] + 40;
    }
    ++v8;
    sub_2207560(&v28);
    sub_E395A0(&v25);
  }
LABEL_17:
  v17 = (char *)v23[0];
  if ( v23[1] != v23[0] )
  {
    v22 = v23[1];
    v18 = a1 + 1048;
    LOWORD(v28) = 8;
    v30 = v24;
    v24 = nullptr;
    v29 = _mm_loadh_ps((const double *)&v22);
    *(_OWORD *)v23 = 0;
    v19 = j__strlen("protocols");
    sub_2206E30(v18, "protocols", v19);
    sub_2208D80(v18, &v28);
    sub_2205EB0(v18);
    sub_2207560(&v28);
    v20 = (char *)v23[1];
    v17 = (char *)v23[0];
    if ( v23[1] != v23[0] )
    {
      do
      {
        v21 = v17;
        v17 += 40;
        sub_2207560(v21);
      }
      while ( v20 != v17 );
      v17 = (char *)v23[0];
    }
  }
  if ( v17 )
    operator delete(v17);
}

