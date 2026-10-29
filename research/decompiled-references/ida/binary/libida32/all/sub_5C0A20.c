unsigned __int64 __fastcall sub_5C0A20(__int64 a1, _QWORD *a2, int a3, unsigned int a4)
{
  __int64 v6; // rbx
  __int64 v8; // rax
  _DWORD *v9; // r15
  _QWORD *v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r12
  __int64 v14; // rdx
  unsigned __int64 v15; // r14
  _DWORD *v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rcx
  _QWORD *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v23; // rax
  unsigned int v24; // [rsp+Ch] [rbp-8Ch] BYREF
  unsigned int *v25; // [rsp+18h] [rbp-80h] BYREF
  _QWORD v26[2]; // [rsp+20h] [rbp-78h] BYREF
  __int128 v27; // [rsp+30h] [rbp-68h]
  __int64 v28; // [rsp+40h] [rbp-58h]
  __int128 v29; // [rsp+48h] [rbp-50h]
  unsigned __int64 v30; // [rsp+58h] [rbp-40h]

  v6 = a3;
  v8 = a2[2];
  v24 = a4;
  v30 = __readfsqword(0x28u);
  v9 = a2 + 1;
  if ( v8 )
  {
    v10 = a2 + 1;
    do
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)(v8 + 16);
        v12 = *(_QWORD *)(v8 + 24);
        if ( *(_DWORD *)(v8 + 32) < a4 )
          break;
        v10 = (_QWORD *)v8;
        v8 = *(_QWORD *)(v8 + 16);
        if ( !v11 )
          goto LABEL_6;
      }
      v8 = *(_QWORD *)(v8 + 24);
    }
    while ( v12 );
LABEL_6:
    if ( v9 != (_DWORD *)v10 && a4 >= *((_DWORD *)v10 + 8) )
    {
      v15 = *((int *)v10 + 9);
      if ( v15 < *(int *)(a1 + 88) )
        return v30 - __readfsqword(0x28u);
      goto LABEL_18;
    }
  }
  v13 = *(_QWORD *)(a1 + 72);
  v27 = 0;
  v29 = 0;
  v26[1] = 0;
  v28 = 0;
  v26[0] = _mm_shuffle_epi32(_mm_cvtsi32_si128(a4), 224).m128i_u64[0];
  sub_5C0790((__int64 *)(a1 + 64), (const char *)v26);
  v14 = a2[2];
  LODWORD(v15) = v13;
  if ( v14 )
  {
    v16 = v9;
    do
    {
      while ( 1 )
      {
        v17 = *(_QWORD *)(v14 + 16);
        v18 = *(_QWORD *)(v14 + 24);
        if ( *(_DWORD *)(v14 + 32) < v24 )
          break;
        v16 = (_DWORD *)v14;
        v14 = *(_QWORD *)(v14 + 16);
        if ( !v17 )
          goto LABEL_13;
      }
      v14 = *(_QWORD *)(v14 + 24);
    }
    while ( v18 );
LABEL_13:
    if ( v9 != v16 && v24 >= v16[8] )
      goto LABEL_16;
  }
  else
  {
    v16 = v9;
  }
  v25 = &v24;
  v16 = sub_5BC450(a2, (__int64)v16, &v25);
LABEL_16:
  v16[9] = v13;
LABEL_18:
  v19 = (_QWORD *)(*(_QWORD *)(a1 + 64) + 56 * v6);
  v20 = v19[2];
  v21 = v19[1];
  if ( v19[3] < (unsigned __int64)(v20 + 1) )
  {
    v23 = qvector_reserve(v19 + 1, v21, v20 + 1, 4);
    v19[1] = v23;
    v21 = v23;
    v20 = v19[2];
  }
  *(_DWORD *)(v21 + 4 * v20) = v15;
  ++v19[2];
  return v30 - __readfsqword(0x28u);
}

