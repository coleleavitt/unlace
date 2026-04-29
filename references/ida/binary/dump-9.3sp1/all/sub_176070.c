__int64 __fastcall sub_176070(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  _QWORD *v4; // r14
  _QWORD *v6; // r12
  __int64 v8; // r15
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r12
  char v11; // r12
  unsigned int v12; // r12d
  _QWORD *v14; // rcx
  _QWORD *v15; // rsi
  void *v16; // rax
  const void *v17; // rsi
  int v18; // r14d
  int v19; // ebp
  __int64 v20; // [rsp+8h] [rbp-78h] BYREF
  __int128 v21; // [rsp+10h] [rbp-70h]
  __int64 v22; // [rsp+28h] [rbp-58h] BYREF
  __int128 v23; // [rsp+30h] [rbp-50h]
  unsigned __int64 v24; // [rsp+40h] [rbp-40h]

  v4 = a2 + 2;
  v6 = *(_QWORD **)(a1 + 8);
  v24 = __readfsqword(0x28u);
  v21 = 0;
  *(_DWORD *)(a1 + 344) = 0;
  v8 = v6[27];
  v20 = 0;
  if ( v8 )
  {
    v16 = (void *)qalloc_or_throw(16 * v8, (__int64)a2, 16 * v8, a4);
    *((_QWORD *)&v21 + 1) = v8;
    v17 = (const void *)v6[26];
    v20 = (__int64)v16;
    memcpy(v16, v17, 16 * v8);
    *(_QWORD *)&v21 = v8;
  }
  v9 = v6[71];
  v10 = v6[72];
  v22 = 0;
  v23 = 0;
  if ( v9 + v10 - 1 >= v9 )
  {
    v22 = qvector_reserve((__int64)&v22, 0, 1, 16);
    *(__m128i *)(v22 + 16 * v23) = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v10);
    *(_QWORD *)&v23 = v23 + 1;
  }
  sub_3180C0(&v20, &v22);
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22);
  }
  v11 = sub_317F40(&v20, v4);
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20);
  }
  if ( !v11 )
    return 0;
  if ( !(unsigned __int8)sub_64820((_QWORD *)(a1 + 272), a2) )
    return 0;
  v12 = sub_317F40(v4, a1 + 288);
  if ( !(_BYTE)v12 )
    return 0;
  if ( !a2[3] )
  {
    v18 = sub_64960(a2, 0);
    if ( v18 != (unsigned int)sub_64960(a3, 0) )
    {
      v19 = sub_64C00(a2);
      if ( v19 == (unsigned int)sub_64C00(a3) )
        goto LABEL_17;
      return 0;
    }
LABEL_18:
    *(_DWORD *)(a1 + 344) = 1;
    return v12;
  }
  v14 = (_QWORD *)a2[2];
  v15 = (_QWORD *)a3[2];
  if ( *v14 == *v15 )
    goto LABEL_18;
  if ( v15[1] + *v15 == v14[1] + *v14 )
  {
LABEL_17:
    *(_DWORD *)(a1 + 344) = 2;
    return v12;
  }
  return 0;
}
