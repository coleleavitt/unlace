__int64 __fastcall sub_4E6AA0(__int64 a1, __int64 a2, __int64 a3, unsigned __int32 a4)
{
  unsigned int v4; // ebp
  int v7; // edx
  unsigned __int64 v8; // rax
  int v9; // edx
  __int64 v10; // r15
  __int64 v11; // r13
  _QWORD *v12; // rax
  __int64 v13; // rcx
  char v14; // al
  __int64 v15; // rsi
  char v16; // al
  _QWORD *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // eax
  char v21; // al
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // rbp
  _QWORD *v26; // rax
  __int64 v27; // rbx
  char v28; // dl
  __m128 v29; // xmm0
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rbx
  _QWORD *v34; // rdx
  void *v35; // rax
  __int64 v36; // rdx
  __m128i v37; // xmm0
  unsigned __int64 v39; // [rsp+18h] [rbp-80h] BYREF
  __int64 v40; // [rsp+20h] [rbp-78h] BYREF
  __int64 v41; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __int128 v43; // [rsp+38h] [rbp-60h] BYREF
  char v44; // [rsp+48h] [rbp-50h]
  unsigned __int64 v45; // [rsp+58h] [rbp-40h]

  v4 = a3;
  v45 = __readfsqword(0x28u);
  sub_4E01E0((_QWORD *)a2, a3, a4);
  v7 = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a2 + 48) = v7 + 1;
  v8 = *(_QWORD *)(a2 + 184);
  if ( *(_QWORD *)(a2 + 32) < v8 )
  {
    v9 = 0;
    v10 = -1;
    while ( 1 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(a2 + 176) + 16 * v8 - 16);
      if ( v10 == -1 )
      {
        v12 = *(_QWORD **)(**(_QWORD **)(a2 + 160) + 48 * v11 + 32);
        if ( !v12 )
        {
          if ( !under_debugger )
            interr(2873);
LABEL_50:
          BUG();
        }
        v13 = v12[9];
        if ( v13 == v12[6] + 20LL * v12[7] )
        {
          if ( !under_debugger )
            interr(10434);
          goto LABEL_50;
        }
        LODWORD(v41) = v9;
        v40 = -1;
        v14 = sub_4E51A0(a2, (__int64)&v40, v13);
        v9 = v41;
        if ( *(_DWORD *)(a2 + 72) != -1 )
          goto LABEL_32;
        if ( v14 )
        {
          v8 = *(_QWORD *)(a2 + 184);
          v15 = *(_QWORD *)(a2 + 176) + 16 * v8 - 16;
          if ( *(_QWORD *)v15 != v40 || *(_DWORD *)(v15 + 8) != (_DWORD)v41 )
          {
            if ( !under_debugger )
              interr(3075);
            goto LABEL_50;
          }
          v9 = 0;
          goto LABEL_16;
        }
        v10 = v40;
      }
      LODWORD(v41) = v9;
      v40 = v10;
      v16 = sub_4E4B90(a2, v11, v10, v41);
      if ( *(_DWORD *)(a2 + 72) != -1 )
      {
LABEL_32:
        --*(_DWORD *)(a2 + 48);
        goto LABEL_33;
      }
      if ( v16
        || (v17 = *(_QWORD **)(**(_QWORD **)(a2 + 160)
                             + 48LL * *(_QWORD *)(*(_QWORD *)(a2 + 176) + 16LL * *(_QWORD *)(a2 + 184) - 16)
                             + 32),
            v18 = v17[9] + 20LL,
            v19 = 5LL * v17[7],
            v17[9] = v18,
            v18 == v17[6] + 4 * v19) )
      {
        v10 = sub_4E2970(a2);
        v31 = *(_QWORD *)(a2 + 184);
        if ( !v31 )
        {
LABEL_17:
          v7 = *(_DWORD *)(a2 + 48) - 1;
          v20 = *(_DWORD *)(a2 + 72);
          goto LABEL_18;
        }
        v8 = v31 - 1;
        *(_QWORD *)(a2 + 184) = v8;
      }
      else
      {
        v8 = *(_QWORD *)(a2 + 184);
        v9 = 0;
        v10 = -1;
      }
LABEL_16:
      if ( *(_QWORD *)(a2 + 32) >= v8 )
        goto LABEL_17;
    }
  }
  v20 = *(_DWORD *)(a2 + 72);
  v10 = -1;
LABEL_18:
  *(_DWORD *)(a2 + 48) = v7;
  if ( v20 == -1 )
  {
    if ( *(_QWORD *)(a2 + 32) != *(_QWORD *)(a2 + 184) )
    {
      if ( !under_debugger )
        interr(2874);
      goto LABEL_50;
    }
    v21 = *(_BYTE *)(a2 + 104);
    if ( v21 )
    {
      v36 = *(_QWORD *)(a2 + 80);
      v37 = _mm_loadu_si128((const __m128i *)(a2 + 88));
      *(_BYTE *)(a2 + 104) = 0;
      *(_QWORD *)(a2 + 80) = 0;
      *(_OWORD *)(a2 + 88) = 0;
      *(_QWORD *)a1 = v36;
      *(_BYTE *)(a1 + 24) = v21;
      *(__m128i *)(a1 + 8) = v37;
    }
    else
    {
      v22 = *(_QWORD *)(a2 + 168);
      v39 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v4), _mm_cvtsi32_si128(a4)).m128i_u64[0];
      v23 = sub_4E2610(v22, (unsigned int *)&v39);
      v24 = v23;
      if ( v23 == v22 + 8 || *(_QWORD *)(v23 + 40) != v10 )
      {
        if ( !under_debugger )
          interr(3074);
        goto LABEL_50;
      }
      v25 = **(_QWORD **)(a2 + 160) + 48 * v10;
      v43 = 0;
      v26 = nullptr;
      ptr = nullptr;
      v27 = *(_QWORD *)(v25 + 8);
      if ( v27 )
      {
        v35 = (void *)qalloc_or_throw(16 * v27, (const char *)&v39);
        *((_QWORD *)&v43 + 1) = v27;
        ptr = v35;
        memcpy(v35, *(const void **)v25, 16 * v27);
        *(_QWORD *)&v43 = v27;
        v26 = ptr;
      }
      v44 = *(_BYTE *)(v25 + 24);
      v28 = v44;
      if ( (unsigned __int8)(v44 - 10) <= 3u )
      {
        v32 = *(unsigned int *)(v24 + 48);
        if ( (_DWORD)v32 )
        {
          v33 = 2 * v27;
          v34 = &v26[v33];
          if ( &v26[v33] != v26 )
          {
            if ( ((v33 * 8) & 0x10) == 0 || (*v26 += v32, v26 += 2, v26 != v34) )
            {
              do
              {
                *v26 += v32;
                v26[2] += v32;
                v26 += 4;
              }
              while ( v26 != v34 );
            }
          }
          sub_4DE040((__int64)&ptr);
          v26 = ptr;
          v28 = v44;
        }
      }
      v29 = _mm_loadh_ps((const double *)&v43 + 1);
      *(_QWORD *)a1 = v26;
      *(_BYTE *)(a1 + 24) = v28;
      *(__m128 *)(a1 + 8) = v29;
    }
  }
  else
  {
LABEL_33:
    sub_4DE6A0(a1, a2);
  }
  return a1;
}

