unsigned __int64 __fastcall sub_3EB200(_QWORD *a1, unsigned __int64 *a2)
{
  __int64 v4; // rsi
  unsigned int v5; // eax
  unsigned int v6; // r12d
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rsi
  __int64 v15; // r14
  unsigned __int64 v16; // r15
  __int64 v17; // rdx
  char v18; // al
  __int64 v19; // rbx
  int v20; // eax
  const char *v21; // rax
  const char *v22; // r12
  size_t v23; // rax
  const char *v24; // rax
  const char *v25; // r12
  size_t v26; // rax
  unsigned __int64 v27; // rsi
  __int64 v28; // rax
  char v29; // cl
  __int64 v30; // r15
  _QWORD *v31; // rbx
  void *v32; // rdi
  void *v33; // rdi
  __int64 v34; // rcx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int64 v39; // [rsp+8h] [rbp-D0h]
  unsigned __int64 v40; // [rsp+8h] [rbp-D0h]
  unsigned __int64 v41; // [rsp+8h] [rbp-D0h]
  unsigned __int64 v42; // [rsp+8h] [rbp-D0h]
  _BYTE v43[4]; // [rsp+1Ch] [rbp-BCh] BYREF
  __m128i v44; // [rsp+20h] [rbp-B8h] BYREF
  void *v45; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v46; // [rsp+38h] [rbp-A0h]
  _QWORD v47[2]; // [rsp+50h] [rbp-88h] BYREF
  __int128 v48; // [rsp+60h] [rbp-78h]
  __int64 v49; // [rsp+70h] [rbp-68h]
  __int128 v50; // [rsp+78h] [rbp-60h]
  __int64 v51; // [rsp+88h] [rbp-50h]
  unsigned __int64 v52; // [rsp+98h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  netnode_check(v43, "$ dbgmemregs", 0, 0);
  if ( (unsigned __int8)sub_79B370(*a1, v43) )
  {
    v4 = *a1;
    v45 = nullptr;
    v46 = 0;
    if ( sub_79BAE0(v43, v4, &v45, 1, 0, 82) > 0 )
    {
      v44 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v45, (__m128i)(unsigned __int64)((unsigned __int64)v45 + v46));
      v5 = unpack_dd(&v44);
      v6 = v5;
      if ( (int)v5 > 0 )
      {
        v7 = *a2;
        v8 = a2[1];
        v9 = v5;
        v10 = *a2;
        if ( v5 != v8 )
        {
          v51 = 0;
          v47[0] = 0;
          v47[1] = 0;
          v49 = 0;
          v48 = 0;
          v50 = 0;
          if ( v5 < v8 )
          {
            v30 = v5;
            while ( 1 )
            {
              v31 = (_QWORD *)(v7 + (v30 << 6));
              v32 = (void *)v31[4];
              if ( v32 )
              {
                v31[5] = 0;
                v39 = v9;
                qfree(v32);
                v9 = v39;
              }
              v33 = (void *)v31[1];
              if ( v33 )
              {
                v31[2] = 0;
                v40 = v9;
                qfree(v33);
                v9 = v40;
              }
              if ( ++v30 >= v8 )
                break;
              v7 = *a2;
            }
            a2[1] = v9;
            v10 = *a2;
          }
          else
          {
            v11 = a2[2];
            if ( (unsigned __int64)v47 < v7 || (unsigned __int64)v47 >= v7 + (v11 << 6) )
            {
              if ( v11 < v9 )
              {
                v41 = v9;
                v37 = qvector_reserve(a2, v7, v9, 64);
                v8 = a2[1];
                v9 = v41;
                *a2 = v37;
                v10 = v37;
              }
              if ( v8 < v9 )
              {
                v34 = v47[0];
                do
                {
                  v35 = v8++;
                  v36 = v10 + (v35 << 6);
                  *(_QWORD *)v36 = v34;
                  *(_QWORD *)(v36 + 8) = 0;
                  *(_QWORD *)(v36 + 32) = 0;
                  *(_DWORD *)(v36 + 56) = 0;
                  *(_WORD *)(v36 + 60) = 0;
                  *(_OWORD *)(v36 + 16) = 0;
                  *(_OWORD *)(v36 + 40) = 0;
                  v10 = *a2;
                }
                while ( v9 != v8 );
              }
              a2[1] = v9;
            }
            else
            {
              if ( v11 < v9 )
              {
                v42 = v9;
                v38 = qvector_reserve(a2, v7, v9, 64);
                v8 = a2[1];
                v9 = v42;
                *a2 = v38;
                v10 = v38;
              }
              if ( v8 >= v9 )
              {
                v14 = *a2;
              }
              else
              {
                do
                {
                  v12 = v8++;
                  v13 = v10 + (v12 << 6);
                  *(_QWORD *)v13 = 0;
                  *(_QWORD *)(v13 + 8) = 0;
                  *(_QWORD *)(v13 + 32) = 0;
                  *(_DWORD *)(v13 + 56) = 0;
                  *(_WORD *)(v13 + 60) = 0;
                  *(_OWORD *)(v13 + 16) = 0;
                  *(_OWORD *)(v13 + 40) = 0;
                  v10 = *a2;
                  v14 = *a2;
                }
                while ( v9 != v8 );
              }
              a2[1] = v9;
              v10 = v14;
            }
          }
        }
        v15 = 0;
        v16 = (unsigned __int64)(v6 - 1) << 6;
        while ( 1 )
        {
          v19 = v15 + v10;
          v20 = unpack_dd(&v44);
          *(_DWORD *)v19 = v20;
          *(_DWORD *)(v19 + 4) = unpack_dd(&v44) + v20;
          *(_DWORD *)(v19 + 56) = unpack_dd(&v44);
          v21 = (const char *)unpack_ds(&v44, v44.m128i_i64[1], 1);
          v22 = v21;
          if ( v21 )
          {
            v23 = strlen(v21);
            *(_QWORD *)(v19 + 8) = v22;
            *(__m128i *)(v19 + 16) = _mm_unpacklo_epi64((__m128i)(v23 + 1), (__m128i)(v23 + 1));
          }
          v24 = (const char *)unpack_ds(&v44, v44.m128i_i64[1], 1);
          v25 = v24;
          if ( v24 )
          {
            v26 = strlen(v24);
            *(_QWORD *)(v19 + 32) = v25;
            *(__m128i *)(v19 + 40) = _mm_unpacklo_epi64((__m128i)(v26 + 1), (__m128i)(v26 + 1));
          }
          v27 = v44.m128i_u64[1];
          v28 = v44.m128i_i64[0];
          if ( v44.m128i_i64[0] >= (unsigned __int64)v44.m128i_i64[1] )
          {
            *(_BYTE *)(v19 + 61) = 0;
            v17 = v28;
            v18 = 0;
          }
          else
          {
            v29 = *(_BYTE *)v44.m128i_i64[0];
            v17 = ++v44.m128i_i64[0];
            *(_BYTE *)(v19 + 61) = v29;
            if ( v28 + 1 >= v27 )
            {
              v18 = 0;
            }
            else
            {
              v17 = v28 + 2;
              v18 = *(_BYTE *)(v28 + 1);
            }
          }
          v44.m128i_i64[0] = v17;
          *(_BYTE *)(v19 + 60) = v18;
          if ( v16 == v15 )
            break;
          v10 = *a2;
          v15 += 64;
        }
      }
    }
    if ( v45 )
    {
      *(_QWORD *)&v46 = 0;
      qfree(v45);
    }
  }
  return v52 - __readfsqword(0x28u);
}

