__int64 __fastcall sub_1714B0(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v3; // r14
  _QWORD *v5; // r12
  __int64 v7; // r15
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r12
  char v10; // r12
  unsigned int v11; // r12d
  _QWORD *v13; // rcx
  _QWORD *v14; // rsi
  void *v15; // rax
  const void *v16; // rsi
  int v17; // r14d
  int v18; // ebp
  void *v19; // [rsp+8h] [rbp-78h] BYREF
  __int128 v20; // [rsp+10h] [rbp-70h]
  __int64 v21; // [rsp+28h] [rbp-58h] BYREF
  __int128 v22; // [rsp+30h] [rbp-50h]
  unsigned __int64 v23; // [rsp+40h] [rbp-40h]

  v3 = a2 + 2;
  v5 = *(_QWORD **)(a1 + 8);
  v23 = __readfsqword(0x28u);
  v20 = 0;
  *(_DWORD *)(a1 + 344) = 0;
  v7 = v5[27];
  v19 = nullptr;
  if ( v7 )
  {
    v15 = (void *)qalloc_or_throw(16 * v7);
    *((_QWORD *)&v20 + 1) = v7;
    v16 = (const void *)v5[26];
    v19 = v15;
    memcpy(v15, v16, 16 * v7);
    *(_QWORD *)&v20 = v7;
  }
  v8 = v5[71];
  v9 = v5[72];
  v21 = 0;
  v22 = 0;
  if ( v8 + v9 - 1 >= v8 )
  {
    v21 = qvector_reserve(&v21, 0, 1, 16);
    *(__m128i *)(v21 + 16 * v22) = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v9);
    *(_QWORD *)&v22 = v22 + 1;
  }
  sub_312800(&v19, &v21);
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21);
  }
  v10 = sub_312680(&v19, v3);
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(v19);
  }
  if ( !v10 )
    return 0;
  if ( !(unsigned __int8)sub_5FDA0((_QWORD *)(a1 + 272), a2) )
    return 0;
  v11 = sub_312680(v3, a1 + 288);
  if ( !(_BYTE)v11 )
    return 0;
  if ( !a2[3] )
  {
    v17 = sub_5FEE0(a2, 0);
    if ( v17 != (unsigned int)sub_5FEE0(a3, 0) )
    {
      v18 = sub_60180(a2);
      if ( v18 == (unsigned int)sub_60180(a3) )
        goto LABEL_17;
      return 0;
    }
LABEL_18:
    *(_DWORD *)(a1 + 344) = 1;
    return v11;
  }
  v13 = (_QWORD *)a2[2];
  v14 = (_QWORD *)a3[2];
  if ( *v13 == *v14 )
    goto LABEL_18;
  if ( v14[1] + *v14 == v13[1] + *v13 )
  {
LABEL_17:
    *(_DWORD *)(a1 + 344) = 2;
    return v11;
  }
  return 0;
}
