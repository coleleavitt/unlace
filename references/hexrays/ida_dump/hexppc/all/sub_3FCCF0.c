unsigned __int64 __fastcall sub_3FCCF0(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  unsigned __int64 v4; // r15
  __int64 v5; // rdx
  int v6; // eax
  int v7; // ecx
  _DWORD *v8; // rdx
  __m128i v9; // xmm1
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rax
  __int64 j; // r15
  _DWORD *v14; // rbp
  __int64 i; // rbp
  __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  __int64 v18; // r15
  _DWORD *v19; // rbp
  __int64 v20; // rax
  _QWORD v21[2]; // [rsp+10h] [rbp-78h] BYREF
  int v22; // [rsp+20h] [rbp-68h]
  _DWORD v23[4]; // [rsp+30h] [rbp-58h] BYREF
  int v24; // [rsp+40h] [rbp-48h]
  unsigned __int64 v25; // [rsp+48h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v2 = qalloc_or_throw(24);
  *(_QWORD *)v2 = 0;
  v3 = (_QWORD *)v2;
  *(_OWORD *)(v2 + 8) = 0;
  v21[1] = 0;
  v22 = 0xFFFF;
  v4 = *(_QWORD *)(v2 + 8);
  v21[0] = 0;
  if ( v4 > 2 )
  {
    for ( i = 2; i != v4; ++i )
    {
      v16 = 3 * i;
      cleanup_argloc(*v3 + 8 * v16);
    }
    v3[1] = 2;
  }
  else if ( v4 != 2 )
  {
    v11 = *(_QWORD *)v2;
    v12 = *(_QWORD *)(v2 + 16);
    if ( (unsigned __int64)v21 < v11 || (unsigned __int64)v21 >= v11 + 24 * v12 )
    {
      if ( v12 > 1 || (v20 = qvector_reserve(v3, v11, 2, 24), v4 = v3[1], *v3 = v20, v11 = v20, v4 <= 1) )
      {
        for ( j = -(int)v4 & 0x18; ; j = 24 )
        {
          v14 = (_DWORD *)(j + v11);
          *v14 = 0;
          copy_argloc(v14, v21);
          v14[4] = v22;
          if ( j )
            break;
          v11 = *v3;
        }
      }
      v3[1] = 2;
    }
    else
    {
      v23[0] = 0;
      copy_argloc(v23, v21);
      v24 = v22;
      if ( v3[2] <= 1u )
        *v3 = qvector_reserve(v3, *v3, 2, 24);
      v17 = v3[1];
      v18 = 24 * v17;
      if ( v17 <= 1 )
      {
        while ( 1 )
        {
          v19 = (_DWORD *)(v18 + *v3);
          *v19 = 0;
          copy_argloc(v19, v23);
          v19[4] = v24;
          if ( v18 )
            break;
          v18 = 24;
        }
      }
      v3[1] = 2;
      cleanup_argloc(v23);
    }
  }
  cleanup_argloc(v21);
  v5 = *v3;
  v6 = *(_DWORD *)(a1 + 4) / 2;
  *(_DWORD *)(v5 + 8) = *a2;
  *(_WORD *)(v5 + 18) = v6;
  *(_DWORD *)v5 = 3;
  *(_WORD *)(v5 + 16) = 0;
  v7 = a2[1];
  v8 = (_DWORD *)*v3;
  v9 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 4) / 2);
  v8[6] = 3;
  v8[8] = v7;
  v8[10] = _mm_cvtsi128_si32(_mm_shufflelo_epi16(v9, 0));
  if ( v3 )
  {
    *(_DWORD *)(a1 + 56) = 2;
    *(_QWORD *)(a1 + 64) = v3;
  }
  return v25 - __readfsqword(0x28u);
}
