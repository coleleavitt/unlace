unsigned __int64 __fastcall sub_1794F0(__int64 *a1, __int64 a2, unsigned int *a3, __int64 a4, int a5, int a6)
{
  _QWORD *v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rax
  _QWORD *v11; // r13
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // r9d
  char v15; // al
  __int64 v16; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // r15
  __int64 v23; // rbx
  int v24; // eax
  __int64 v25; // rax
  __m128i v26; // xmm0
  __int64 v27; // rax
  __m128i v28; // xmm1
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // [rsp+8h] [rbp-110h]
  __int64 v32[2]; // [rsp+10h] [rbp-108h] BYREF
  __int64 v33; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v34; // [rsp+28h] [rbp-F0h]
  __int64 v35; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v36; // [rsp+48h] [rbp-D0h]
  __int64 v37; // [rsp+50h] [rbp-C8h] BYREF
  __m128i v38; // [rsp+58h] [rbp-C0h] BYREF
  _QWORD v39[5]; // [rsp+70h] [rbp-A8h] BYREF
  int v40; // [rsp+98h] [rbp-80h]
  _QWORD v41[5]; // [rsp+A0h] [rbp-78h] BYREF
  char v42; // [rsp+C8h] [rbp-50h]
  __int64 v43; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v44; // [rsp+D8h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  sub_127A20((__int64)v32, a2, (__int64)a3, 1, a5, a6);
  v8 = (_QWORD *)*a1;
  if ( a1[1] << 6 )
  {
    do
    {
      while ( 1 )
      {
        v11 = v8 + 8;
        if ( (unsigned __int8)sub_64780(v8 + 3, v32) || (unsigned __int8)sub_318470(v8 + 5, &v33) )
          break;
        v8 += 8;
        if ( v11 == (_QWORD *)(*a1 + (a1[1] << 6)) )
          goto LABEL_9;
      }
      v9 = v8[5];
      if ( v9 )
      {
        v8[6] = 0;
        qfree(v9);
      }
      qfree(v8[3]);
      sub_11CDA0((__int64)(v8 + 1));
      memmove(v8, v8 + 8, *a1 + (a1[1] << 6) - (_QWORD)v8 - 64);
      v10 = a1[1] - 1;
      a1[1] = v10;
    }
    while ( v8 != (_QWORD *)(*a1 + (v10 << 6)) );
  }
LABEL_9:
  if ( !(unsigned __int8)sub_32ED70(*a3) )
    goto LABEL_17;
  v15 = *((_BYTE *)a3 + 64);
  if ( !v15 || *((_BYTE *)a3 + 48) != 4 && *((_BYTE *)a3 + 32) != 4 )
    goto LABEL_17;
  if ( v15 == 6 )
  {
    memset(&v39[1], 0, 32);
    v39[0] = &off_4DDDF0;
    v40 = 0;
    sub_11F760(a3, v39);
    if ( v40 <= 3 )
      goto LABEL_17;
  }
  if ( (*((_BYTE *)a3 + 6) & 2) != 0 )
  {
    memset(&v41[1], 0, 32);
    v16 = *(_QWORD *)(a2 + 480);
    v42 = 0;
    v41[0] = &off_4DE018;
    v43 = v16;
    if ( (unsigned int)sub_11E900(a3, (__int64)v41) )
      goto LABEL_17;
  }
  if ( (unsigned __int8)sub_1205A0(a3, *(_QWORD *)(*(_QWORD *)(a2 + 480) + 112LL), 0, v12, v13, v14) )
    goto LABEL_17;
  sub_124680((__int64)&v35, a2, (__int64)a3, 1u);
  if ( (unsigned __int8)sub_64780(v32, &v35) || (unsigned __int8)sub_318470(&v33, &v37) )
  {
    if ( v37 )
    {
      v38.m128i_i64[0] = 0;
      qfree(v37);
    }
    qfree(v35);
LABEL_17:
    if ( v33 )
    {
      v34 = 0;
      qfree(v33);
    }
    goto LABEL_19;
  }
  v19 = a1[1];
  v20 = *a1;
  if ( a1[2] < (unsigned __int64)(v19 + 1) )
  {
    v30 = qvector_reserve((__int64)a1, v20, v19 + 1, 64);
    *a1 = v30;
    v19 = a1[1];
    v20 = v30;
  }
  v21 = v19 << 6;
  v22 = v20 + v21;
  *(_QWORD *)(v22 + 8) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v22 + 32) = 0;
  *(_QWORD *)(v22 + 40) = 0;
  *(_OWORD *)(v22 + 16) = 0;
  *(_OWORD *)(v22 + 48) = 0;
  ++a1[1];
  if ( *a3 == 4 || *a3 == 67 && a3[9] == a3[17] )
  {
    sub_125180(v22 + 8, (unsigned __int8 *)a3 + 32);
  }
  else
  {
    v23 = j__qalloc_or_throw(80, v20, v21, v18);
    *(_QWORD *)(v23 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v23 + 40) = 0;
    *(_QWORD *)(v23 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v23 + 56) = 0;
    *(_QWORD *)(v23 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v23 + 72) = 0;
    *(_OWORD *)(v23 + 8) = 0;
    sub_1253A0(v23, (__int64)a3);
    *(_BYTE *)(v22 + 8) = 4;
    *(_QWORD *)(v22 + 16) = v23;
    v24 = *(_DWORD *)(v23 + 68);
    *(_DWORD *)(v22 + 12) = v24;
    v31 = v24;
    sub_11CDA0(v23 + 64);
    *(_DWORD *)(v23 + 68) = v31;
  }
  v25 = *(_QWORD *)(v22 + 24);
  v26 = _mm_loadu_si128((const __m128i *)(v22 + 48));
  *(_QWORD *)(v22 + 24) = v35;
  v35 = v25;
  v27 = *(_QWORD *)(v22 + 32);
  *(_QWORD *)(v22 + 32) = v36;
  v28 = _mm_loadu_si128(&v38);
  v36 = v27;
  v29 = *(_QWORD *)(v22 + 40);
  *(_QWORD *)(v22 + 40) = v37;
  *(__m128i *)(v22 + 48) = v28;
  v37 = v29;
  v38 = v26;
  sub_64280((__int64 *)(v22 + 24), v32);
  sub_316CB0(v22 + 40, &v33);
  *(_QWORD *)v22 = a3;
  if ( v37 )
  {
    v38.m128i_i64[0] = 0;
    qfree(v37);
  }
  qfree(v35);
  if ( v33 )
  {
    v34 = 0;
    qfree(v33);
  }
LABEL_19:
  qfree(v32[0]);
  return v44 - __readfsqword(0x28u);
}
