__int64 __fastcall sub_519690(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // r12d
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rbx
  __int64 *v7; // rbx
  unsigned __int64 *v8; // rax
  __int64 v9; // r9
  int v10; // r10d
  unsigned __int64 v12; // r13
  bool v13; // zf
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // r9
  unsigned __int64 *v17; // r14
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 *v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 *v23; // rax
  __int64 *v24; // r14
  __int64 *v25; // r9
  __int64 v26; // rsi
  unsigned __int64 v27; // rdx
  unsigned __int64 *v28; // rax
  unsigned __int64 *v29; // rax
  __m128i *v30; // r14
  unsigned __int64 *v31; // r9
  unsigned __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rax
  __int8 *v35; // rbp
  __m128i si128; // xmm0
  __int64 v37; // rax
  _BYTE v38[25]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v39; // [rsp+28h] [rbp-30h]

  v3 = *((unsigned __int8 *)a1 + 152);
  v39 = __readfsqword(0x28u);
  if ( !(_BYTE)v3 )
    goto LABEL_41;
  v4 = (int)a2 - *(_DWORD *)(a1[1] + 68);
  if ( v4 >= a1[5] )
    goto LABEL_40;
  v5 = v4 << 6;
  *(_DWORD *)(a1[4] + v5 + 56) = a2;
  v7 = (__int64 *)(a1[4] + v5);
  a1 = v7;
  v8 = sub_5168B0((unsigned __int64 **)v7, a3);
  if ( v8 == (unsigned __int64 *)(*v7 + 33 * v7[1]) )
    return v3;
  a2 = *v8;
  if ( a3 < *v8 )
    return v3;
  v12 = v8[1];
  if ( a3 >= v12 || !v8 || a3 == a2 )
    return v3;
  v13 = *(_BYTE *)(v9 + 152) == 0;
  *(__m128i *)v38 = _mm_loadu_si128((const __m128i *)v8);
  *(__m128i *)&v38[9] = _mm_loadu_si128((const __m128i *)((char *)v8 + 9));
  if ( v13 )
  {
LABEL_41:
    if ( !under_debugger )
      interr(1336);
    BUG();
  }
  v14 = v10 - *(_DWORD *)(*(_QWORD *)(v9 + 8) + 68LL);
  if ( (unsigned __int64)v14 >= *(_QWORD *)(v9 + 40) )
LABEL_40:
    sub_5144F0(a1, a2);
  v15 = (__int64)v14 << 6;
  *(_DWORD *)(*(_QWORD *)(v9 + 32) + v15 + 56) = v10;
  v17 = sub_5168B0((unsigned __int64 **)(*(_QWORD *)(v9 + 32) + v15), a2);
  v18 = *(_QWORD *)v16 + 33LL * *(_QWORD *)(v16 + 8);
  if ( v17 == (unsigned __int64 *)v18
    || a2 < *v17
    || (v19 = v17[1], a2 >= v19)
    || v19 < a3
    && (unsigned __int64 *)v18 != (unsigned __int64 *)((char *)v17 + 33)
    && *(unsigned __int64 *)((char *)v17 + 33) < a3 )
  {
    sub_516950(v16, a2);
  }
  else
  {
    sub_5154D0(*(unsigned int *)(v16 + 56), *v17, v19, a3);
    v17[1] = a3;
    *((_BYTE *)v17 + 32) = 1;
  }
  v20 = sub_5168B0((unsigned __int64 **)v7, a3);
  if ( v20 != (unsigned __int64 *)(*v7 + 33 * v7[1]) )
  {
    v22 = *v20;
    if ( a3 < *v20 || a3 >= v20[1] )
    {
LABEL_25:
      if ( v12 > v22 )
        v12 = v22;
      if ( a3 >= v12 )
LABEL_28:
        sub_387D20(1336, a3, v22, v21);
      goto LABEL_29;
    }
    v23 = (__int64 *)sub_5168B0((unsigned __int64 **)v7, a3);
    v24 = v23;
    if ( v25 == v23 || (v26 = *v23, a3 < *v23) || (v27 = v23[1], a3 >= v27) || a3 == v26 )
    {
      sub_516950((__int64)v7, a3);
    }
    else
    {
      sub_5154D0(*((unsigned int *)v7 + 14), v26, v27, a3);
      v24[1] = a3;
      *((_BYTE *)v24 + 32) = 1;
    }
    v28 = sub_5168B0((unsigned __int64 **)v7, a3);
    if ( v28 != (unsigned __int64 *)(*v7 + 33 * v7[1]) )
    {
      v22 = *v28;
      goto LABEL_25;
    }
  }
LABEL_29:
  v29 = sub_5168B0((unsigned __int64 **)v7, a3);
  v30 = (__m128i *)v29;
  if ( v29 != v31 )
  {
    v32 = *v29;
    if ( a3 >= v32 || v32 < v12 )
      goto LABEL_28;
  }
  v33 = *((unsigned int *)v7 + 14);
  *(_QWORD *)v38 = a3;
  *(_QWORD *)&v38[8] = v12;
  sub_514A20(v33, (__int64 *)v38, 183);
  v34 = v7[1];
  v35 = &v30->m128i_i8[-*v7];
  if ( v7[2] < (unsigned __int64)(v34 + 1) )
  {
    v37 = qvector_reserve(v7, *v7, v34 + 1, 33);
    *v7 = v37;
    v30 = (__m128i *)&v35[v37];
    v34 = v7[1];
  }
  memmove(&v30[2].m128i_i8[1], v30, 33 * v34 - (_QWORD)v35);
  v30[1].m128i_i8[8] = 0;
  *v30 = 0;
  si128 = _mm_load_si128((const __m128i *)v38);
  v30[1].m128i_i64[0] = 0;
  v30[2].m128i_i8[0] = 0;
  v7[3] = (__int64)v30;
  ++v7[1];
  *v30 = si128;
  *(__m128i *)((char *)v30 + 9) = _mm_loadu_si128((const __m128i *)&v38[9]);
  *(_BYTE *)(v7[3] + 32) = 1;
  return v3;
}
