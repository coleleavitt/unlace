unsigned __int64 __fastcall sub_363300(_QWORD *a1, __int64 a2, int a3, int a4, __int64 a5)
{
  int v7; // r12d
  int v8; // eax
  int v9; // r9d
  int v10; // eax
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r13
  const char *v14; // rsi
  __int64 (__fastcall *v15)(_QWORD *, char); // rax
  __int64 v16; // r12
  unsigned __int64 v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rax
  int v20; // r8d
  int v21; // eax
  __int64 v23; // rax
  unsigned __int8 v25; // [rsp+1Bh] [rbp-85h] BYREF
  int v26; // [rsp+1Ch] [rbp-84h] BYREF
  __int64 v27; // [rsp+20h] [rbp-80h] BYREF
  int v28; // [rsp+28h] [rbp-78h]
  void *ptr; // [rsp+30h] [rbp-70h] BYREF
  __int128 v30; // [rsp+38h] [rbp-68h]
  __m128i v31; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v32; // [rsp+68h] [rbp-38h]

  v7 = a4 - a3;
  v32 = __readfsqword(0x28u);
  v8 = nbits(a2);
  v9 = v8 + 14;
  v10 = v8 + 7;
  if ( v10 >= 0 )
    v9 = v10;
  v11 = sub_35C7A0(&v26, &v25, a2, a3, v7, v9 >> 3, *(_QWORD *)a5, *(_QWORD *)(a5 + 8));
  v12 = v11 >> v26;
  if ( (unsigned __int64)v7 <= 0x3F )
    v12 &= ~(-1LL << v7);
  v31.m128i_i64[0] = v12;
  *((_DWORD *)a1 + 36) |= 0x200000u;
  a1[88] = -1;
  v13 = a2 + (*(_QWORD *)a5 >> 3);
  sub_382A40(a1, v13, a3 - (unsigned int)*(_QWORD *)a5);
  ptr = nullptr;
  v30 = 0;
  a1[25] = a2 + (*(_QWORD *)(a5 + 8) >> 3);
  sub_35A790((char **)&ptr);
  v14 = haystack;
  if ( (_QWORD)v30 )
    v14 = (const char *)ptr;
  (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, v14, 32);
  v15 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
  if ( v15 != sub_35CB90 )
  {
    v15(a1, 32);
    goto LABEL_11;
  }
  v16 = a1[4];
  v17 = 2;
  if ( v16 )
  {
    v17 = v16 + 1;
    v18 = a1[3];
    --v16;
    if ( a1[5] >= v17 )
      goto LABEL_10;
LABEL_19:
    v23 = qvector_reserve(a1 + 3, v18, v17, 1);
    a1[3] = v23;
    v18 = v23;
    goto LABEL_10;
  }
  v18 = a1[3];
  if ( a1[5] < 2u )
    goto LABEL_19;
LABEL_10:
  a1[4] = v17;
  *(_BYTE *)(v18 + v16) = 32;
  *(_BYTE *)(a1[3] + v16 + 1) = 0;
LABEL_11:
  v27 = 1;
  v28 = -1;
  v19 = (*(_QWORD *)(a5 + 8) - *(_QWORD *)a5) >> 3;
  v20 = v19;
  if ( (int)v19 > 1 && ((unsigned int)v19 & ((_DWORD)v19 - 1)) != 0 )
  {
    do
      v21 = v20++;
    while ( (v21 & v20) != 0 );
  }
  if ( !(unsigned __int8)sub_360180((__int64)a1, v13, 0, &v31, v20, v25, (int *)&v27, -1) )
  {
    if ( !under_debugger )
      interr(3023);
    BUG();
  }
  sub_35CF70(a1, nullptr, nullptr);
  if ( ptr )
  {
    *(_QWORD *)&v30 = 0;
    qfree(ptr);
  }
  return v32 - __readfsqword(0x28u);
}
