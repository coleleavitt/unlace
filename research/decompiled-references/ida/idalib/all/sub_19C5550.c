__int64 __fastcall sub_19C5550(
        __m128 *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        double a7,
        __m128 a8)
{
  __int64 *v10; // r15
  __int64 v11; // r14
  __m128 v12; // xmm0
  __int64 v13; // rbx
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  __int64 *v17; // r13
  __int64 v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v22; // rdx
  int v23; // eax
  bool v25; // zf
  char v26; // r13
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 *v29; // [rsp+0h] [rbp-B8h]
  int v31; // [rsp+10h] [rbp-A8h]
  __int64 v33; // [rsp+30h] [rbp-88h] BYREF
  int v34; // [rsp+38h] [rbp-80h]
  _QWORD v35[2]; // [rsp+40h] [rbp-78h] BYREF
  __int128 v36; // [rsp+50h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+60h] [rbp-58h]
  __int128 v38; // [rsp+70h] [rbp-48h]

  v10 = *(__int64 **)(a4 + 56);
  v11 = *v10;
  if ( (*(_BYTE *)(*v10 + 28) & 0x7Fu) - 40 > 6 )
  {
    v22 = *(_QWORD *)(a6 + 8);
    v12 = 0;
    v23 = *(_DWORD *)(a4 + 64);
    v36 = 0;
    *(_OWORD *)ptr = 0;
    v38 = 0;
    v31 = v23;
    v25 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                   + 16LL) == 42;
    v33 = *(_QWORD *)(v11 + 40);
    v26 = v25;
    v34 = a3;
    sub_B85890(v35, v33);
    v27 = sub_19C4FE0(a1, a6, v26, 0, a2, v11, (__m128)0LL, a8, a5, (__int64)&v33);
    v13 = 1;
    v28 = v27 & 0xFFFFFFFFFFFFFFFELL;
    v15 = v28;
    if ( !v28 )
      goto LABEL_9;
    v16 = v28;
    v29 = &v10[v31];
  }
  else
  {
    v12 = 0;
    v34 = a3;
    v36 = 0;
    v13 = 1;
    *(_OWORD *)ptr = 0;
    v38 = 0;
    v33 = 0;
    sub_B85890(v35, 0);
    v14 = sub_190AE60((__int64)a1, (__int64 *)&v36, (__int64)&v33, v11, 0, 0, (__m128i)0LL, a8, 0);
    if ( v14 == 1 )
      goto LABEL_9;
    v10 = *(__int64 **)(a4 + 56);
    v15 = v14 & 0xFFFFFFFFFFFFFFFELL;
    v16 = v14 & 0xFFFFFFFFFFFFFFFELL;
    v29 = &v10[*(unsigned int *)(a4 + 64)];
  }
  v17 = v10 + 1;
  if ( v10 + 1 != v29 )
  {
    while ( 1 )
    {
      v18 = *v17++;
      v19 = *(_QWORD *)(v18 + 40);
      v34 = a3;
      v33 = v19;
      sub_B85890(v35, v19);
      v20 = v18 | (*(_BYTE *)(v18 + 29) >> 5) & 3;
      if ( v17 == v29 )
        break;
      v16 = sub_19C4FE0(a1, v16, 0, 0, (__int64)&v36, v18, v12, a8, v20, (__int64)&v33) & 0xFFFFFFFFFFFFFFFELL;
    }
    v15 = sub_19C4FE0(a1, v16, 0, 0, a2, v18, v12, a8, v20, (__int64)&v33) & 0xFFFFFFFFFFFFFFFELL;
  }
  v13 = v15;
LABEL_9:
  if ( HIDWORD(ptr[1]) )
    free(ptr[0]);
  return v13;
}
