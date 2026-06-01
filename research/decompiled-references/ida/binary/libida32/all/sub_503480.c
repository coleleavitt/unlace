unsigned __int64 __fastcall sub_503480(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // r12
  __int32 v8; // ebp
  __int64 *v9; // rbx
  const __m128i *v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // r14
  unsigned __int64 v14; // rdx
  size_t v15; // rax
  __int64 *v16; // r14
  __int64 v17; // xmm0_8
  unsigned int v18; // r12d
  int v19; // eax
  unsigned __int64 v20; // rcx
  __int64 v21; // rsi
  int v22; // r8d
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __m128i v27; // xmm0
  __int64 v29; // [rsp+0h] [rbp-58h]
  int v30[2]; // [rsp+8h] [rbp-50h]
  int v31; // [rsp+10h] [rbp-48h]
  int v32; // [rsp+14h] [rbp-44h]
  unsigned __int64 v33; // [rsp+18h] [rbp-40h]
  int v34; // [rsp+20h] [rbp-38h]
  int v35; // [rsp+28h] [rbp-30h]
  int v36; // [rsp+30h] [rbp-28h]
  int v37; // [rsp+38h] [rbp-20h]
  int v38; // [rsp+40h] [rbp-18h]
  int v39; // [rsp+48h] [rbp-10h]
  __int64 v40; // [rsp+50h] [rbp-8h]

  v33 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 828) != 65 )
  {
    if ( !under_debugger )
      interr(1785);
LABEL_22:
    BUG();
  }
  v3 = *(_QWORD *)(a1 + 1576);
  if ( !*(_BYTE *)(v3 + 144) )
  {
    if ( !under_debugger )
      interr(1336);
    goto LABEL_22;
  }
  v4 = *(_QWORD *)(v3 + 8);
  v5 = 68 - *(_DWORD *)(v4 + 68);
  if ( v5 >= *(_QWORD *)(v3 + 40) )
    sub_4FC970(a1, a2, a3, v4);
  v6 = v5 << 6;
  v7 = *(_QWORD *)(a1 + 1480) + 1552LL;
  v8 = a2;
  *(_DWORD *)(*(_QWORD *)(v3 + 32) + v6 + 56) = 68;
  v9 = (__int64 *)(*(_QWORD *)(v3 + 32) + v6);
  v10 = (const __m128i *)sub_4EEBF0(v7);
  if ( v10 )
  {
    v29 = v7;
    do
    {
      v10[2].m128i_i32[68 - *(_DWORD *)(a1 + 828)] = v8;
      update_segm(v10);
      v27 = _mm_loadl_epi64(v10);
      v18 = _mm_cvtsi128_si32(v27);
      if ( v18 >= _mm_cvtsi128_si32(_mm_shuffle_epi32(v27, 229))
        || (v11 = v9[1], v12 = *v9, v13 = 17 * v11, v11) && v18 < *(_DWORD *)(v12 + v13 - 13) )
      {
        sub_82BC50("srrange %a..%a dropped%s\n", v29, v30[0], v31, v33, v34, v35, v36, v37, v38, v39, v40);
        v19 = ea2node(v18);
        v20 = v9[6];
        v21 = v9[4];
        v32 = v19;
        v22 = v19;
        v23 = v9[5];
        if ( v20 < v23 + 1 )
        {
          v30[0] = v22;
          v24 = qvector_reserve(v9 + 4, v21, v23 + 1, 4);
          v22 = v30[0];
          v9[4] = v24;
          v21 = v24;
          v23 = v9[5];
        }
        *(_DWORD *)(v21 + 4 * v23) = v22;
        ++v9[5];
      }
      else
      {
        v14 = v11 + 1;
        v15 = 0;
        if ( v9[2] < v14 )
        {
          *(_QWORD *)v30 = v27.m128i_i64[0];
          v25 = qvector_reserve(v9, v12, v14, 17);
          v26 = v9[1];
          v27.m128i_i64[0] = *(_QWORD *)v30;
          *v9 = v25;
          v12 = v25;
          v15 = 17 * v26 - v13;
        }
        v16 = (__int64 *)(v12 + v13);
        *(_QWORD *)v30 = v27.m128i_i64[0];
        memmove((char *)v16 + 17, v16, v15);
        v17 = *(_QWORD *)v30;
        *((_BYTE *)v16 + 12) = 0;
        *v16 = 0;
        *((_DWORD *)v16 + 2) = 0;
        *((_BYTE *)v16 + 16) = 0;
        ++v9[1];
        *((_DWORD *)v16 + 2) = v8;
        *((_BYTE *)v16 + 12) = 3;
        *((_BYTE *)v16 + 16) = 1;
        *v16 = v17;
        v9[3] = *v9 + 17 * v9[1];
      }
      v10 = (const __m128i *)sub_4EE960(v29, v10->m128i_i32[0]);
    }
    while ( v10 );
  }
  return v33 - __readfsqword(0x28u);
}

