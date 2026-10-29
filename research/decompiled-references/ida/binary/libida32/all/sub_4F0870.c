__int64 __fastcall sub_4F0870(_QWORD *a1, __m128i *a2, const char *a3, __int64 a4, int a5)
{
  unsigned int v9; // ebp
  __m128i v10; // xmm0
  __int64 v11; // r15
  __int64 v12; // rdi
  __m128i **v13; // rsi
  __int64 v14; // rdx
  __m128i **v15; // rcx
  __m128i **v16; // rax
  bool v17; // zf
  __int64 v18; // rax
  int v19; // ecx
  unsigned __int32 v20; // edx
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __m128i v25; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v26; // [rsp+1Ch] [rbp-5Ch] BYREF
  __int128 v27; // [rsp+20h] [rbp-58h] BYREF
  int v28; // [rsp+30h] [rbp-48h]
  unsigned __int64 v29; // [rsp+38h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  netnode_check(&v26, a4, 0, 0);
  v9 = netnode_exist(&v26);
  if ( (_BYTE)v9 )
  {
    v10 = _mm_loadu_si128(a2 + 3);
    v11 = a2[4].m128i_i64[0];
    if ( a2[1].m128i_i64[1] )
    {
      v25 = v10;
      sub_4ED600((unsigned int *)a2);
      sub_4EF9B0(a2[2].m128i_i64[1], (unsigned int *)a2);
      v10 = _mm_load_si128(&v25);
    }
    else
    {
      a2->m128i_i64[1] = 0;
      a2->m128i_i16[2] = 0;
      a2[1].m128i_i32[0] = 0;
    }
    v12 = v26;
    a2[4].m128i_i64[0] = v11;
    a2[3] = v10;
    a2->m128i_i32[0] = v12;
    v13 = (__m128i **)a1[28];
    v14 = a1[29];
    v15 = &v13[v14];
    if ( v13 == v15 )
      goto LABEL_17;
    v16 = (__m128i **)a1[28];
    while ( a2 != *v16 )
    {
      if ( v15 == ++v16 )
        goto LABEL_17;
    }
    if ( v16 == v15 )
    {
LABEL_17:
      v22 = v14 + 1;
      if ( a1[30] < v22 )
      {
        v23 = qvector_reserve(a1 + 28, v13, v22, 8);
        v24 = a1[29];
        v12 = v26;
        a1[28] = v23;
        v15 = (__m128i **)(v23 + 8 * v24);
      }
      *v15 = a2;
      ++a1[29];
    }
    v28 = 0;
    v27 = 0;
    if ( netnode_valobj(v12, &v27, 20) <= 0 )
      sub_375320((__int64)"can't find range '%s'", a3);
    if ( !a5 )
      LOWORD(a5) = WORD2(v27);
    v17 = HIWORD(v28) == 0;
    a2->m128i_i16[2] = a5;
    if ( !v17 )
      sub_4F0730((unsigned int *)a2, (__int64)a3, 1);
    v18 = operator new(0xB8u);
    v19 = a2->m128i_u16[2];
    v20 = a2[2].m128i_u32[1];
    *(_QWORD *)v18 = 0;
    *(_DWORD *)(v18 + 32) = v19;
    *(_BYTE *)(v18 + 36) = 0;
    *(_QWORD *)(v18 + 40) = 0;
    *(_QWORD *)(v18 + 64) = 0;
    *(_QWORD *)(v18 + 88) = v18 + 136;
    *(_QWORD *)(v18 + 96) = 1;
    *(_QWORD *)(v18 + 104) = 0;
    *(_QWORD *)(v18 + 112) = 0;
    *(_DWORD *)(v18 + 120) = 1065353216;
    *(_QWORD *)(v18 + 128) = 0;
    *(_QWORD *)(v18 + 136) = 0;
    *(_QWORD *)(v18 + 144) = -1;
    *(_QWORD *)(v18 + 152) = 0;
    *(_QWORD *)(v18 + 176) = v20;
    *(_QWORD *)(v18 + 24) = 0;
    a2[1].m128i_i64[1] = v18;
    *(_OWORD *)(v18 + 8) = 0;
    *(_OWORD *)(v18 + 48) = 0;
    *(_OWORD *)(v18 + 72) = 0;
    *(_OWORD *)(v18 + 160) = 0;
  }
  return v9;
}

