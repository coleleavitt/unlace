void __fastcall sub_1722CF0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const __m128i *a4,
        unsigned int a5,
        char a6,
        __m128i a7,
        double a8)
{
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // r14
  const __m128i *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  char **v23; // rdi
  __int64 v24; // rbp
  __m128i v25; // xmm0
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rdx
  const __m128i *v33; // [rsp+10h] [rbp-118h]
  int v34; // [rsp+18h] [rbp-110h]
  int v35; // [rsp+1Ch] [rbp-10Ch]
  __m128i v37; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v38; // [rsp+40h] [rbp-E8h] BYREF
  void *v39[2]; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v40[2]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v41; // [rsp+70h] [rbp-B8h]
  __int64 v42; // [rsp+78h] [rbp-B0h]
  _QWORD *v43; // [rsp+80h] [rbp-A8h]
  __int64 v44; // [rsp+88h] [rbp-A0h]
  _QWORD v45[10]; // [rsp+90h] [rbp-98h] BYREF
  __int64 v46; // [rsp+E0h] [rbp-48h] BYREF

  v33 = (const __m128i *)a2;
  v11 = sub_B76070(a3, a2, a3, (__int64)a4);
  v34 = v11;
  if ( a5 == v11 )
    goto LABEL_22;
  v15 = 1;
  v35 = v11 - 1;
  while ( 1 )
  {
    v24 = *(_QWORD *)(*(_QWORD *)(a3 + 120) + 8LL * a5);
    if ( sub_B74820(v24) && !a6 )
      break;
    if ( !v15 )
    {
      sub_15A3210((__int64)a4, 15, (char *)&byte_22F0C30);
LABEL_4:
      LOBYTE(v40[0]) = 0;
      v16 = v33;
      sub_171B530(&v37, v33, v24, 0, 0, v14, (__int64)v39[0], (__int64)v39[1], v40[0]);
      if ( sub_B74820(v24) )
      {
        sub_17134B0(v39, v24, *(__int64 **)(a1 + 88), *(_QWORD *)(a1 + 56), a7, a8);
        v16 = (const __m128i *)v39[0];
        sub_9EE560(&v37, (_BYTE *)v39[0], (size_t)v39[1]);
        if ( v39[0] != v40 )
          operator delete(v39[0]);
      }
      if ( sub_B748A0(a3, (__int64)v16, v17, v18) && v35 == a5 )
        sub_9EE7C0(&v37, ", ...");
      v23 = (char **)a4->m128i_i64[0];
      v39[0] = &v37;
      LOWORD(v41) = 260;
      a2 = (__int64)sub_15A4EB0(v23, (const void ***)v39, v19, v20, v21, v22);
      sub_15A3090((__int64)a4, a2);
      if ( (__int64 *)v37.m128i_i64[0] != &v38 )
        operator delete((void *)v37.m128i_i64[0]);
      a6 = 0;
      v15 = 0;
      goto LABEL_11;
    }
    if ( !*(_DWORD *)(v24 + 100) )
      goto LABEL_4;
LABEL_11:
    if ( v34 == ++a5 )
      goto LABEL_22;
  }
  v25 = _mm_loadu_si128(a4);
  v40[0] = 0;
  v40[1] = 0;
  v43 = v45;
  v44 = 0x400000000LL;
  v45[8] = &v46;
  *(__m128i *)v39 = v25;
  v41 = 0;
  v42 = 0;
  v45[9] = 0x200000000LL;
  if ( !v15 )
    sub_15A3210((__int64)v39, 15, (char *)&byte_22F0C30);
  sub_1722CF0(a1, v33, a3, v39, a5, 1);
  a2 = sub_15A5CA0((__int64)v39, (__int64)v33, v26, v27, v28, v29);
  sub_15A3030((__int64)a4, a2);
  sub_1704B40(v39);
LABEL_22:
  v30 = *(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v30 + 16) == 26
    || (v31 = *(_QWORD *)(*(_QWORD *)(v30 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v31 + 16) == 26)
    && (v30 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, v31, v12)) != 0 )
  {
    if ( *(char *)(v30 + 19) < 0 )
    {
      if ( !*(_WORD *)(v30 + 22) )
        sub_15A3090((__int64)a4, (__int64)"...");
      sub_1722B20((_QWORD *)a1, a3, (__int64)a4, v12, v13, v14);
    }
  }
}
