unsigned __int64 __fastcall sub_5DC620(__int64 a1, _QWORD *a2, int a3, unsigned __int64 a4)
{
  __int64 v6; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // r14
  _QWORD *v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r13
  _QWORD *v14; // rdx
  unsigned __int64 v15; // r15
  _QWORD *v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rcx
  _QWORD *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v23; // rax
  unsigned __int64 v24; // [rsp+8h] [rbp-A0h] BYREF
  unsigned __int64 *v25; // [rsp+18h] [rbp-90h] BYREF
  __m128i v26; // [rsp+20h] [rbp-88h] BYREF
  __int64 v27; // [rsp+30h] [rbp-78h]
  __int128 v28; // [rsp+38h] [rbp-70h]
  __int64 v29; // [rsp+48h] [rbp-60h]
  __int128 v30; // [rsp+50h] [rbp-58h]
  unsigned __int64 v31; // [rsp+68h] [rbp-40h]

  v6 = a3;
  v8 = (_QWORD *)a2[2];
  v24 = a4;
  v31 = __readfsqword(0x28u);
  v9 = a2 + 1;
  if ( v8 )
  {
    v10 = a2 + 1;
    do
    {
      while ( 1 )
      {
        v11 = v8[2];
        v12 = v8[3];
        if ( v8[4] < a4 )
          break;
        v10 = v8;
        v8 = (_QWORD *)v8[2];
        if ( !v11 )
          goto LABEL_6;
      }
      v8 = (_QWORD *)v8[3];
    }
    while ( v12 );
LABEL_6:
    if ( v9 != v10 && a4 >= v10[4] )
    {
      v15 = *((int *)v10 + 10);
      if ( v15 < *(int *)(a1 + 96) )
        return v31 - __readfsqword(0x28u);
      goto LABEL_18;
    }
  }
  v27 = 0;
  v28 = 0;
  v13 = *(_QWORD *)(a1 + 80);
  v30 = 0;
  v29 = 0;
  v26 = _mm_unpacklo_epi64((__m128i)a4, (__m128i)a4);
  sub_5DC3A0((__int64 *)(a1 + 72), (__int64)&v26);
  v14 = (_QWORD *)a2[2];
  LODWORD(v15) = v13;
  if ( v14 )
  {
    v16 = v9;
    do
    {
      while ( 1 )
      {
        v17 = v14[2];
        v18 = v14[3];
        if ( v14[4] < v24 )
          break;
        v16 = v14;
        v14 = (_QWORD *)v14[2];
        if ( !v17 )
          goto LABEL_13;
      }
      v14 = (_QWORD *)v14[3];
    }
    while ( v18 );
LABEL_13:
    if ( v9 != v16 && v24 >= v16[4] )
      goto LABEL_16;
  }
  else
  {
    v16 = v9;
  }
  v25 = &v24;
  v16 = sub_5D7C40(a2, v16, &v25);
LABEL_16:
  *((_DWORD *)v16 + 10) = v13;
LABEL_18:
  v19 = (_QWORD *)(*(_QWORD *)(a1 + 72) + (v6 << 6));
  v20 = v19[3];
  v21 = v19[2];
  if ( v19[4] < (unsigned __int64)(v20 + 1) )
  {
    v23 = qvector_reserve(v19 + 2, v21, v20 + 1, 4);
    v19[2] = v23;
    v21 = v23;
    v20 = v19[3];
  }
  *(_DWORD *)(v21 + 4 * v20) = v15;
  ++v19[3];
  return v31 - __readfsqword(0x28u);
}
