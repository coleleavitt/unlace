__int64 __fastcall sub_51A800(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // r13d
  unsigned __int64 v6; // rbx
  __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  __int64 *v10; // rbx
  unsigned __int64 *v11; // r12
  __int64 v12; // rax
  char *v13; // r14
  __int64 v14; // rax

  v3 = *(_QWORD *)(a1 + 1768);
  v4 = *(unsigned __int8 *)(v3 + 152);
  if ( !(_BYTE)v4 )
  {
    if ( !under_debugger )
      interr(1336);
    BUG();
  }
  v6 = (int)a2 - *(_DWORD *)(*(_QWORD *)(v3 + 8) + 68LL);
  if ( v6 >= *(_QWORD *)(v3 + 40) )
    sub_5144F0(a1, a2);
  v7 = v6 << 6;
  *(_DWORD *)(*(_QWORD *)(v3 + 32) + v7 + 56) = a2;
  v8 = *(_QWORD *)a3;
  if ( *(_QWORD *)a3 >= *(_QWORD *)(a3 + 8) )
    return 0;
  v10 = (__int64 *)(*(_QWORD *)(v3 + 32) + v7);
  v11 = sub_5168B0((unsigned __int64 **)v10, v8);
  if ( v11 != (unsigned __int64 *)(*v10 + 33 * v10[1]) && (v8 >= *v11 && v8 < v11[1] || *v11 < *(_QWORD *)(a3 + 8)) )
    return 0;
  sub_514A20(*((unsigned int *)v10 + 14), (__int64 *)a3, 183);
  v12 = v10[1];
  v13 = (char *)v11 - *v10;
  if ( v10[2] < (unsigned __int64)(v12 + 1) )
  {
    v14 = qvector_reserve(v10, *v10, v12 + 1, 33);
    *v10 = v14;
    v11 = (unsigned __int64 *)&v13[v14];
    v12 = v10[1];
  }
  memmove((char *)v11 + 33, v11, 33 * v12 - (_QWORD)v13);
  v11[2] = 0;
  *(_OWORD *)v11 = 0;
  *((_BYTE *)v11 + 24) = 0;
  *((_BYTE *)v11 + 32) = 0;
  v10[3] = (__int64)v11;
  ++v10[1];
  *(__m128i *)v11 = _mm_loadu_si128((const __m128i *)a3);
  *(__m128i *)((char *)v11 + 9) = _mm_loadu_si128((const __m128i *)(a3 + 9));
  *(_BYTE *)(v10[3] + 32) = 1;
  return v4;
}
