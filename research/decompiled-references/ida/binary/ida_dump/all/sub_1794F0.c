unsigned __int64 __fastcall sub_1794F0(__int64 a1, __int64 a2, unsigned int *a3)
{
  _QWORD *v4; // r15
  __int64 v5; // rax
  _QWORD *v6; // r13
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r9d
  char v10; // al
  __int64 v11; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rsi
  _QWORD *v15; // r15
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // rax
  __m128i v21; // xmm1
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // [rsp+8h] [rbp-110h]
  __int64 v25[2]; // [rsp+10h] [rbp-108h] BYREF
  __int64 v26; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v27; // [rsp+28h] [rbp-F0h]
  __int64 v28; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v29; // [rsp+48h] [rbp-D0h]
  __int64 v30; // [rsp+50h] [rbp-C8h] BYREF
  __m128i v31; // [rsp+58h] [rbp-C0h] BYREF
  _QWORD v32[5]; // [rsp+70h] [rbp-A8h] BYREF
  int v33; // [rsp+98h] [rbp-80h]
  _QWORD v34[5]; // [rsp+A0h] [rbp-78h] BYREF
  char v35; // [rsp+C8h] [rbp-50h]
  __int64 v36; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v37; // [rsp+D8h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  sub_127A20((__int64)v25, a2, (__int64)a3, 1);
  v4 = *(_QWORD **)a1;
  if ( *(_QWORD *)(a1 + 8) << 6 )
  {
    do
    {
      while ( 1 )
      {
        v6 = v4 + 8;
        if ( (unsigned __int8)sub_64780(v4 + 3, v25) || (unsigned __int8)sub_318470(v4 + 5, &v26) )
          break;
        v4 += 8;
        if ( v6 == (_QWORD *)(*(_QWORD *)a1 + (*(_QWORD *)(a1 + 8) << 6)) )
          goto LABEL_9;
      }
      if ( v4[5] )
      {
        v4[6] = 0;
        qfree();
      }
      qfree();
      sub_11CDA0((__int64)(v4 + 1));
      memmove(v4, v4 + 8, *(_QWORD *)a1 + (*(_QWORD *)(a1 + 8) << 6) - (_QWORD)v4 - 64LL);
      v5 = *(_QWORD *)(a1 + 8) - 1LL;
      *(_QWORD *)(a1 + 8) = v5;
    }
    while ( v4 != (_QWORD *)(*(_QWORD *)a1 + (v5 << 6)) );
  }
LABEL_9:
  if ( !(unsigned __int8)sub_32ED70(*a3) )
    goto LABEL_17;
  v10 = *((_BYTE *)a3 + 64);
  if ( !v10 || *((_BYTE *)a3 + 48) != 4 && *((_BYTE *)a3 + 32) != 4 )
    goto LABEL_17;
  if ( v10 == 6 )
  {
    memset(&v32[1], 0, 32);
    v32[0] = off_4DDDF0;
    v33 = 0;
    sub_11F760(a3, v32);
    if ( v33 <= 3 )
      goto LABEL_17;
  }
  if ( (*((_BYTE *)a3 + 6) & 2) != 0 )
  {
    memset(&v34[1], 0, 32);
    v11 = *(_QWORD *)(a2 + 480);
    v35 = 0;
    v34[0] = off_4DE018;
    v36 = v11;
    if ( (unsigned int)sub_11E900(a3, (__int64)v34) )
      goto LABEL_17;
  }
  if ( (unsigned __int8)sub_1205A0(a3, *(_QWORD *)(*(_QWORD *)(a2 + 480) + 112LL), 0, v7, v8, v9) )
    goto LABEL_17;
  sub_124680((__int64)&v28, a2, (__int64)a3, 1u);
  if ( (unsigned __int8)sub_64780(v25, &v28) || (unsigned __int8)sub_318470(&v26, &v30) )
  {
    if ( v30 )
    {
      v31.m128i_i64[0] = 0;
      qfree();
    }
    qfree();
LABEL_17:
    if ( v26 )
    {
      v27 = 0;
      qfree();
    }
    goto LABEL_19;
  }
  v13 = *(_QWORD *)(a1 + 8);
  v14 = *(_QWORD **)a1;
  if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v13 + 1) )
  {
    v23 = qvector_reserve();
    *(_QWORD *)a1 = v23;
    v13 = *(_QWORD *)(a1 + 8);
    v14 = (_QWORD *)v23;
  }
  v15 = &v14[8 * v13];
  v15[1] = 0xFFFFFFFF00000000LL;
  v15[4] = 0;
  v15[5] = 0;
  *((_OWORD *)v15 + 1) = 0;
  *((_OWORD *)v15 + 3) = 0;
  ++*(_QWORD *)(a1 + 8);
  if ( *a3 == 4 || *a3 == 67 && a3[9] == a3[17] )
  {
    sub_125180((__int64)(v15 + 1), (unsigned __int8 *)a3 + 32);
  }
  else
  {
    v16 = j__qalloc_or_throw();
    *(_QWORD *)(v16 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v16 + 40) = 0;
    *(_QWORD *)(v16 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v16 + 56) = 0;
    *(_QWORD *)(v16 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v16 + 72) = 0;
    *(_OWORD *)(v16 + 8) = 0;
    sub_1253A0(v16, (__int64)a3);
    *((_BYTE *)v15 + 8) = 4;
    v15[2] = v16;
    v17 = *(_DWORD *)(v16 + 68);
    *((_DWORD *)v15 + 3) = v17;
    v24 = v17;
    sub_11CDA0(v16 + 64);
    *(_DWORD *)(v16 + 68) = v24;
  }
  v18 = v15[3];
  v19 = _mm_loadu_si128((const __m128i *)v15 + 3);
  v15[3] = v28;
  v28 = v18;
  v20 = v15[4];
  v15[4] = v29;
  v21 = _mm_loadu_si128(&v31);
  v29 = v20;
  v22 = v15[5];
  v15[5] = v30;
  *((__m128i *)v15 + 3) = v21;
  v30 = v22;
  v31 = v19;
  sub_64280(v15 + 3, v25);
  sub_316CB0(v15 + 5, &v26);
  *v15 = a3;
  if ( v30 )
  {
    v31.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
  if ( v26 )
  {
    v27 = 0;
    qfree();
  }
LABEL_19:
  qfree();
  return v37 - __readfsqword(0x28u);
}
