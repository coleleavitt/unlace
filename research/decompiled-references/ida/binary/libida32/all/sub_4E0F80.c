unsigned __int64 __fastcall sub_4E0F80(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __m128i *v4; // r15
  __int64 v6; // r13
  unsigned int *v7; // r14
  unsigned __int64 v10; // rdx
  __m128i *v11; // r13
  unsigned __int32 v12; // ecx
  unsigned __int32 v13; // edx
  __int32 *v14; // rax
  _DWORD *v15; // rsi
  __m128i *v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rdx
  _DWORD *v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // r13
  __int64 v24; // rsi
  unsigned __int64 v25; // rcx
  __m128i v26; // xmm0
  unsigned __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // edi
  int v30; // esi
  __int64 v31; // r8
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rdx
  _DWORD *v36; // rdx
  __m128i *v37; // rsi
  unsigned __int64 v38; // rdx
  _QWORD *v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rax
  __m128i v42; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v43; // [rsp+18h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(__m128i **)a2;
  v43 = __readfsqword(0x28u);
  v6 = 4 * v3;
  v7 = (unsigned int *)v4 + v3;
  if ( v4 != (__m128i *)v7 )
  {
    if ( v6 >> 2 )
    {
      _BitScanReverse64(&v10, v6 >> 2);
      sub_4DD3C0(v4, v7, 2LL * (int)v10);
      if ( v6 > 64 )
      {
        v11 = v4 + 4;
        sub_4DCE80(v4->m128i_i8, v4[4].m128i_i8);
        do
        {
          while ( 1 )
          {
            v12 = v11->m128i_i32[0];
            v13 = v11[-1].m128i_u32[3];
            v14 = &v11[-1].m128i_i32[3];
            if ( v11->m128i_i32[0] < v13 )
              break;
            v37 = v11;
            v11 = (__m128i *)((char *)v11 + 4);
            v37->m128i_i32[0] = v12;
            if ( v7 == (unsigned int *)v11 )
              goto LABEL_8;
          }
          do
          {
            v14[1] = v13;
            v15 = v14;
            v13 = *--v14;
          }
          while ( v12 < v13 );
          v11 = (__m128i *)((char *)v11 + 4);
          *v15 = v12;
        }
        while ( v7 != (unsigned int *)v11 );
LABEL_8:
        v16 = *(__m128i **)a2;
        v17 = *(_QWORD *)a2 + 4LL * *(_QWORD *)(a2 + 8);
        if ( *(_QWORD *)a2 == v17 )
        {
          if ( !a1[1] )
            return v43 - __readfsqword(0x28u);
          v23 = 0;
          goto LABEL_37;
        }
        v18 = *(_QWORD *)a2;
        while ( 1 )
        {
          v19 = (_DWORD *)v18;
          v18 += 4;
          if ( v17 == v18 )
            break;
          if ( *(_DWORD *)(v18 - 4) == v19[1] )
          {
            if ( (_DWORD *)v17 == v19 )
            {
              v18 = *(_QWORD *)a2 + 4LL * *(_QWORD *)(a2 + 8);
            }
            else
            {
              v36 = v19 + 2;
              if ( (_DWORD *)v17 != v19 + 2 )
              {
                do
                {
                  if ( *v19 != *v36 )
                  {
                    v19[1] = *v36;
                    ++v19;
                  }
                  ++v36;
                }
                while ( (_DWORD *)v17 != v36 );
                v16 = *(__m128i **)a2;
              }
              v18 = (__int64)(v19 + 1);
            }
            break;
          }
        }
        v20 = a1[1];
        v21 = (v18 - (__int64)v16) >> 2;
        v22 = v21;
        v23 = v21;
        if ( v21 == v20 )
        {
LABEL_38:
          if ( !v23 )
            return v43 - __readfsqword(0x28u);
          goto LABEL_21;
        }
        v42.m128i_i64[0] = 0xFFFFFFFFLL;
        v42.m128i_i64[1] = 0xFFFFFFFFLL;
        if ( v21 >= v20 )
        {
          v24 = *a1;
          v25 = a1[2];
          if ( (unsigned __int64)&v42 >= *a1 && (unsigned __int64)&v42 < v24 + 16 * v25 )
          {
            if ( v25 < v21 )
            {
              v41 = qvector_reserve(a1, v24, v21, 16);
              *a1 = v41;
              v24 = v41;
              v20 = a1[1];
              if ( v20 >= v22 )
              {
                a1[1] = v22;
LABEL_21:
                v28 = 0;
                do
                {
                  v29 = *(_DWORD *)(a3 + 8);
                  v30 = *(unsigned __int16 *)(a3 + 12);
                  v31 = *(unsigned int *)(*(_QWORD *)a2 + 4 * v28);
                  v32 = 0;
                  if ( *(_BYTE *)(a3 + 49) == 5 )
                    v32 = *(_BYTE *)(a3 + 73) == 0;
                  v33 = v28++;
                  v34 = *a1 + 16 * v33;
                  *(_QWORD *)v34 = v31;
                  *(_DWORD *)(v34 + 8) = v29;
                  *(_DWORD *)(v34 + 12) = v30 | (v32 << 16);
                }
                while ( v28 != v23 );
                return v43 - __readfsqword(0x28u);
              }
            }
            else if ( v20 >= v21 )
            {
              goto LABEL_37;
            }
            while ( 1 )
            {
              v38 = v20++;
              v39 = (_QWORD *)(16 * v38 + v24);
              *v39 = 0xFFFFFFFFLL;
              v39[1] = 0xFFFFFFFFLL;
              if ( v22 == v20 )
                break;
              v24 = *a1;
            }
LABEL_20:
            a1[1] = v22;
            goto LABEL_21;
          }
          if ( v25 < v21 )
          {
            v40 = qvector_reserve(a1, v24, v21, 16);
            *a1 = v40;
            v24 = v40;
            v20 = a1[1];
            if ( v20 >= v22 )
              goto LABEL_20;
LABEL_17:
            v26 = _mm_load_si128(&v42);
            while ( 1 )
            {
              v27 = v20++;
              *(__m128i *)(v24 + 16 * v27) = v26;
              if ( v22 == v20 )
                break;
              v24 = *a1;
            }
            goto LABEL_20;
          }
          if ( v20 < v21 )
            goto LABEL_17;
        }
LABEL_37:
        a1[1] = v23;
        goto LABEL_38;
      }
    }
    else
    {
      sub_4DD3C0(v4, v7, -2);
    }
    sub_4DCE80(v4->m128i_i8, (char *)v7);
    goto LABEL_8;
  }
  if ( a1[1] )
    a1[1] = 0;
  return v43 - __readfsqword(0x28u);
}

