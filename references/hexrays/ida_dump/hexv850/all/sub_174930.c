unsigned __int64 __fastcall sub_174930(__int64 a1, __int64 a2, unsigned int *a3)
{
  _QWORD *v5; // r15
  __int64 v6; // rdi
  __int64 v7; // rax
  _QWORD *v8; // r13
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // r9d
  char v12; // al
  __int64 v13; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rsi
  _QWORD *v17; // r15
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // rax
  __m128i v23; // xmm1
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // [rsp+8h] [rbp-110h]
  __int64 v27[2]; // [rsp+10h] [rbp-108h] BYREF
  __int64 v28; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v29; // [rsp+28h] [rbp-F0h]
  __int64 v30; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v31; // [rsp+48h] [rbp-D0h]
  __int64 v32; // [rsp+50h] [rbp-C8h] BYREF
  __m128i v33; // [rsp+58h] [rbp-C0h] BYREF
  _QWORD v34[5]; // [rsp+70h] [rbp-A8h] BYREF
  int v35; // [rsp+98h] [rbp-80h]
  _QWORD v36[5]; // [rsp+A0h] [rbp-78h] BYREF
  char v37; // [rsp+C8h] [rbp-50h]
  __int64 v38; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v39; // [rsp+D8h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  sub_122E60((__int64)v27, a2, (__int64)a3, 1u);
  v5 = *(_QWORD **)a1;
  if ( *(_QWORD *)(a1 + 8) << 6 )
  {
    do
    {
      while ( 1 )
      {
        v8 = v5 + 8;
        if ( (unsigned __int8)sub_5FD00(v5 + 3, v27) || (unsigned __int8)sub_312BB0(v5 + 5, &v28) )
          break;
        v5 += 8;
        if ( v8 == (_QWORD *)(*(_QWORD *)a1 + (*(_QWORD *)(a1 + 8) << 6)) )
          goto LABEL_9;
      }
      v6 = v5[5];
      if ( v6 )
      {
        v5[6] = 0;
        qfree(v6);
      }
      qfree(v5[3]);
      sub_1181E0((__int64)(v5 + 1));
      memmove(v5, v5 + 8, *(_QWORD *)a1 + (*(_QWORD *)(a1 + 8) << 6) - (_QWORD)v5 - 64LL);
      v7 = *(_QWORD *)(a1 + 8) - 1LL;
      *(_QWORD *)(a1 + 8) = v7;
    }
    while ( v5 != (_QWORD *)(*(_QWORD *)a1 + (v7 << 6)) );
  }
LABEL_9:
  if ( !(unsigned __int8)sub_3292F0(*a3) )
    goto LABEL_17;
  v12 = *((_BYTE *)a3 + 64);
  if ( !v12 || *((_BYTE *)a3 + 48) != 4 && *((_BYTE *)a3 + 32) != 4 )
    goto LABEL_17;
  if ( v12 == 6 )
  {
    memset(&v34[1], 0, 32);
    v34[0] = &off_4B17D0;
    v35 = 0;
    sub_11ABA0(a3, v34);
    if ( v35 <= 3 )
      goto LABEL_17;
  }
  if ( (*((_BYTE *)a3 + 6) & 2) != 0 )
  {
    memset(&v36[1], 0, 32);
    v13 = *(_QWORD *)(a2 + 480);
    v37 = 0;
    v36[0] = &off_4B19F8;
    v38 = v13;
    if ( (unsigned int)sub_119D40(a3, (__int64)v36) )
      goto LABEL_17;
  }
  if ( (unsigned __int8)sub_11B9E0(a3, *(_QWORD *)(*(_QWORD *)(a2 + 480) + 112LL), 0, v9, v10, v11) )
    goto LABEL_17;
  sub_11FAC0((__int64)&v30, a2, (__int64)a3, 1u);
  if ( (unsigned __int8)sub_5FD00(v27, &v30) || (unsigned __int8)sub_312BB0(&v28, &v32) )
  {
    if ( v32 )
    {
      v33.m128i_i64[0] = 0;
      qfree(v32);
    }
    qfree(v30);
LABEL_17:
    if ( v28 )
    {
      v29 = 0;
      qfree(v28);
    }
    goto LABEL_19;
  }
  v15 = *(_QWORD *)(a1 + 8);
  v16 = *(_QWORD **)a1;
  if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v15 + 1) )
  {
    v25 = qvector_reserve(a1, v16, v15 + 1, 64);
    *(_QWORD *)a1 = v25;
    v15 = *(_QWORD *)(a1 + 8);
    v16 = (_QWORD *)v25;
  }
  v17 = &v16[8 * v15];
  v17[1] = 0xFFFFFFFF00000000LL;
  v17[4] = 0;
  v17[5] = 0;
  *((_OWORD *)v17 + 1) = 0;
  *((_OWORD *)v17 + 3) = 0;
  ++*(_QWORD *)(a1 + 8);
  if ( *a3 == 4 || *a3 == 67 && a3[9] == a3[17] )
  {
    sub_1205C0((__int64)(v17 + 1), (unsigned __int8 *)a3 + 32);
  }
  else
  {
    v18 = j__qalloc_or_throw(80);
    *(_QWORD *)(v18 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v18 + 40) = 0;
    *(_QWORD *)(v18 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v18 + 56) = 0;
    *(_QWORD *)(v18 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v18 + 72) = 0;
    *(_OWORD *)(v18 + 8) = 0;
    sub_1207E0(v18, (__int64)a3);
    *((_BYTE *)v17 + 8) = 4;
    v17[2] = v18;
    v19 = *(_DWORD *)(v18 + 68);
    *((_DWORD *)v17 + 3) = v19;
    v26 = v19;
    sub_1181E0(v18 + 64);
    *(_DWORD *)(v18 + 68) = v26;
  }
  v20 = v17[3];
  v21 = _mm_loadu_si128((const __m128i *)v17 + 3);
  v17[3] = v30;
  v30 = v20;
  v22 = v17[4];
  v17[4] = v31;
  v23 = _mm_loadu_si128(&v33);
  v31 = v22;
  v24 = v17[5];
  v17[5] = v32;
  *((__m128i *)v17 + 3) = v23;
  v32 = v24;
  v33 = v21;
  sub_5F800(v17 + 3, v27);
  sub_3113F0(v17 + 5, &v28);
  *v17 = a3;
  if ( v32 )
  {
    v33.m128i_i64[0] = 0;
    qfree(v32);
  }
  qfree(v30);
  if ( v28 )
  {
    v29 = 0;
    qfree(v28);
  }
LABEL_19:
  qfree(v27[0]);
  return v39 - __readfsqword(0x28u);
}
