__int64 __fastcall sub_D5A80(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v6; // r14
  __int64 v7; // r13
  _QWORD *v8; // r12
  __int64 v9; // r13
  int v10; // r12d
  __int64 v11; // rcx
  __int64 v12; // rcx
  void *v13; // r14
  size_t v14; // r13
  void *v15; // r15
  int v16; // r9d
  __int16 v17; // r10
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rsi
  _QWORD *v21; // rax
  __m128i v22; // xmm0
  __int64 v23; // rdi
  __int64 v24; // r14
  __int64 v25; // r13
  _QWORD *v26; // r12
  __int64 v27; // r15
  __int64 *v28; // r14
  __int64 v29; // r12
  _QWORD *v30; // rbx
  __int64 i; // r13
  __int64 v32; // rsi
  _QWORD *v33; // rdi
  __int64 v34; // r14
  _QWORD *v35; // r12
  __int64 v36; // rax
  const char *v37; // rsi
  const char *v38; // rdi
  __int64 v39; // rax
  const char *v40; // rsi
  __m128i n; // [rsp+8h] [rbp-C0h] BYREF
  int v42; // [rsp+18h] [rbp-B0h]
  __int16 v43; // [rsp+1Eh] [rbp-AAh]
  __int64 v44; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v45; // [rsp+28h] [rbp-A0h]
  _QWORD *v46; // [rsp+40h] [rbp-88h] BYREF
  __int128 v47; // [rsp+48h] [rbp-80h]
  int v48; // [rsp+78h] [rbp-50h]
  __int16 v49; // [rsp+7Ch] [rbp-4Ch]
  unsigned __int64 v50; // [rsp+88h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  switch ( a3 )
  {
    case 0xFFFFFFFA:
      if ( !*(_BYTE *)(a1 + 56) )
        return 4294967290LL;
      sub_BD8E0(a2, (_QWORD *)(a1 + 64));
      goto LABEL_10;
    case 0xFFFFFFFB:
    case 0xFFFFFFFE:
      return a3;
    case 0xFFFFFFFC:
      sub_C4B80(a2);
      goto LABEL_10;
    case 1u:
      sub_BD8E0((__int64 *)(a1 + 64), a2);
      v9 = *(_QWORD *)(a1 + 16);
      if ( !v9 )
        goto LABEL_37;
      goto LABEL_11;
    default:
      v6 = a2[1];
      v7 = 0;
      if ( v6 )
      {
        do
        {
          v8 = (_QWORD *)(*a2 + (v7 << 6));
          if ( v8[4] )
          {
            v8[5] = 0;
            qfree();
          }
          if ( v8[1] )
          {
            v8[2] = 0;
            qfree();
          }
          ++v7;
        }
        while ( v6 != v7 );
      }
      a2[1] = 0;
LABEL_10:
      v9 = *(_QWORD *)(a1 + 16);
      if ( v9 )
      {
LABEL_11:
        v10 = 0;
        v11 = 0;
        v44 = 0;
        v45 = 0;
        do
        {
          while ( 1 )
          {
            v12 = *(_QWORD *)(a1 + 8) + (v11 << 6);
            if ( (*(_BYTE *)(v12 + 61) & 7) != 0 )
              break;
            v11 = ++v10;
            if ( (unsigned __int64)v10 >= *(_QWORD *)(a1 + 16) )
              goto LABEL_21;
          }
          v13 = nullptr;
          v46 = *(_QWORD **)v12;
          v14 = *(_QWORD *)(v12 + 16);
          if ( v14 )
          {
            n.m128i_i64[0] = v12;
            n.m128i_i64[1] = (__int64)&v44;
            v13 = (void *)qalloc_or_throw();
            memcpy(v13, *(const void **)(n.m128i_i64[0] + 8), v14);
            v12 = n.m128i_i64[0];
          }
          v15 = nullptr;
          n.m128i_i64[0] = *(_QWORD *)(v12 + 40);
          if ( n.m128i_i64[0] )
          {
            n.m128i_i64[1] = v12;
            v15 = (void *)qalloc_or_throw();
            memcpy(v15, *(const void **)(n.m128i_i64[1] + 32), n.m128i_u64[0]);
            v12 = n.m128i_i64[1];
          }
          v16 = *(_DWORD *)(v12 + 56);
          v17 = *(_WORD *)(v12 + 60);
          v18 = v45;
          v19 = v44;
          v48 = v16;
          v49 = v17;
          if ( *((_QWORD *)&v45 + 1) < (unsigned __int64)(v45 + 1) )
          {
            v43 = v17;
            v42 = v16;
            n.m128i_i64[1] = (__int64)&v44;
            v44 = qvector_reserve();
            v19 = v44;
            v17 = v43;
            v18 = v45;
            v16 = v42;
          }
          ++v10;
          v20 = (v18 << 6) + v19;
          v21 = v46;
          v11 = v10;
          *(__m128i *)(v20 + 16) = _mm_unpacklo_epi64((__m128i)v14, (__m128i)v14);
          v22 = _mm_loadl_epi64(&n);
          *(_QWORD *)v20 = v21;
          *(_QWORD *)(v20 + 8) = v13;
          *(_QWORD *)(v20 + 32) = v15;
          *(_QWORD *)&v45 = v45 + 1;
          *(_DWORD *)(v20 + 56) = v16;
          *(_WORD *)(v20 + 60) = v17;
          *(__m128i *)(v20 + 40) = _mm_unpacklo_epi64(v22, v22);
        }
        while ( (unsigned __int64)v10 < *(_QWORD *)(a1 + 16) );
LABEL_21:
        if ( (_QWORD)v45 )
        {
          n.m128i_i64[1] = (__int64)&v44;
          sub_D54E0(a2, a2, &v44);
          v23 = v44;
          if ( !v44 )
            goto LABEL_31;
          v24 = v45;
          if ( (_QWORD)v45 )
          {
            v25 = 0;
            do
            {
              v26 = (_QWORD *)(v23 + (v25 << 6));
              if ( v26[4] )
              {
                v26[5] = 0;
                qfree();
              }
              if ( v26[1] )
              {
                v26[2] = 0;
                qfree();
              }
              ++v25;
              v23 = v44;
            }
            while ( v24 != v25 );
          }
          goto LABEL_30;
        }
        if ( v44 )
        {
LABEL_30:
          *(_QWORD *)&v45 = 0;
          qfree();
        }
      }
      else
      {
LABEL_37:
        v47 = 0;
        v46 = (_QWORD *)qvector_reserve();
        v32 = (__int64)v46;
        *v46 = 0;
        *(_QWORD *)(v32 + 8) = 0;
        *(_QWORD *)(v32 + 32) = 0;
        *(_DWORD *)(v32 + 56) = 0;
        *(_WORD *)(v32 + 60) = 0;
        *(_OWORD *)(v32 + 16) = 0;
        *(_OWORD *)(v32 + 40) = 0;
        *(_QWORD *)&v47 = v47 + 1;
        sub_C17A0(a1, v32);
        sub_D54E0(a2, (__int64 *)&v46, a2);
        v33 = v46;
        if ( v46 )
        {
          v34 = v47;
          if ( (_QWORD)v47 )
          {
            do
            {
              v35 = &v33[8 * v9];
              if ( v35[4] )
              {
                v35[5] = 0;
                qfree();
              }
              if ( v35[1] )
              {
                v35[2] = 0;
                qfree();
              }
              ++v9;
              v33 = v46;
            }
            while ( v34 != v9 );
          }
          *(_QWORD *)&v47 = 0;
          qfree();
        }
      }
LABEL_31:
      *(_BYTE *)(a1 + 56) = 0;
      v27 = *(_QWORD *)(a1 + 96);
      v28 = (__int64 *)(a1 + 88);
      if ( v27 == a2[1] )
      {
        if ( v27 )
        {
          v29 = *(_QWORD *)(a1 + 88);
          v30 = (_QWORD *)*a2;
          for ( i = 0; i != v27; ++i )
          {
            if ( *(_QWORD *)v29 != *v30 )
              goto LABEL_35;
            v36 = *(_QWORD *)(v29 + 16);
            if ( v30[2] )
            {
              v37 = (const char *)v30[1];
              v38 = s1;
              if ( !v36 )
                goto LABEL_51;
            }
            else
            {
              v37 = s1;
              if ( !v36 )
                goto LABEL_52;
            }
            v38 = *(const char **)(v29 + 8);
LABEL_51:
            if ( strcmp(v38, v37) )
              goto LABEL_35;
LABEL_52:
            v39 = *(_QWORD *)(v29 + 40);
            if ( v30[5] )
            {
              v40 = (const char *)v30[4];
              if ( v39 )
                goto LABEL_59;
              if ( strcmp(s1, v40) )
                goto LABEL_35;
            }
            else
            {
              v40 = s1;
              if ( v39 )
              {
LABEL_59:
                if ( strcmp(*(const char **)(v29 + 32), v40) )
                  goto LABEL_35;
              }
            }
            if ( ((v30[7] ^ *(_QWORD *)(v29 + 56)) & 0xFFFFFFFFFFFFLL) != 0 )
              goto LABEL_35;
            v29 += 64;
            v30 += 8;
          }
        }
        return 4294967290LL;
      }
      else
      {
LABEL_35:
        sub_BD8E0(v28, a2);
        return 1;
      }
  }
}

