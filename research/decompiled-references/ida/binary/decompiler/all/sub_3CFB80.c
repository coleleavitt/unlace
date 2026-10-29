__int64 __fastcall sub_3CFB80(__int64 a1)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // r8
  unsigned __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // r15
  bool v9; // dl
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // eax
  _BYTE *v13; // r10
  _BYTE *v14; // rax
  _QWORD *v15; // rdi
  __int64 v16; // r13
  __int64 v17; // rbp
  _QWORD *v18; // r12
  __int64 v20; // rax
  __int64 v21; // r9
  size_t v22; // r8
  size_t v23; // r11
  __int64 v24; // rsi
  size_t v25; // rdx
  __m128i v26; // rax
  __m128i v27; // xmm0
  _QWORD *v28; // rdx
  __m128i v29; // xmm1
  const void *v30; // r15
  __int64 v31; // rax
  _QWORD *v32; // r13
  unsigned __int8 v33; // dl
  __int64 v34; // r10
  __int64 *v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v40; // rax
  bool v41; // zf
  __int64 v42; // rax
  __int64 v43; // r13
  size_t v44; // r9
  char *v45; // rax
  int v46; // [rsp+Ch] [rbp-124h]
  __int64 v47; // [rsp+10h] [rbp-120h]
  size_t v48; // [rsp+10h] [rbp-120h]
  size_t v49; // [rsp+10h] [rbp-120h]
  __int64 v50; // [rsp+18h] [rbp-118h]
  __int64 v51; // [rsp+18h] [rbp-118h]
  size_t v52; // [rsp+18h] [rbp-118h]
  _BYTE *v53; // [rsp+20h] [rbp-110h]
  size_t v54; // [rsp+28h] [rbp-108h]
  __int64 v55; // [rsp+30h] [rbp-100h]
  __m128i src; // [rsp+48h] [rbp-E8h]
  _QWORD *v57; // [rsp+58h] [rbp-D8h]
  __m128i v58; // [rsp+60h] [rbp-D0h] BYREF
  __int64 v59[4]; // [rsp+78h] [rbp-B8h] BYREF
  __int64 v60; // [rsp+98h] [rbp-98h] BYREF
  __int128 v61; // [rsp+A0h] [rbp-90h]
  unsigned __int64 v62; // [rsp+B8h] [rbp-78h] BYREF
  __int128 v63; // [rsp+C0h] [rbp-70h]
  void *dest; // [rsp+D8h] [rbp-58h]
  __int128 v65; // [rsp+E0h] [rbp-50h]
  unsigned __int64 v66; // [rsp+F0h] [rbp-40h]

  v66 = __readfsqword(0x28u);
  v58 = 0;
  v57 = 0;
  sub_80DE0((__int64)v59, "$ mbui.comments");
  sub_F3E30(v59);
  netnode_check();
  if ( dest == (void *)-1LL )
  {
    v3 = 1;
    goto LABEL_22;
  }
  netnode_check();
  v60 = 0;
  v61 = 0;
  if ( netnode_qsupstr() > 0 )
  {
    v62 = 0;
    v63 = 0;
    LOBYTE(v2) = sub_3C72E0((__int64 *)&v62, &v60);
    v3 = v2;
    if ( (_BYTE)v2 )
    {
      src = _mm_unpacklo_epi64((__m128i)v62, (__m128i)(v62 + (unsigned __int64)v63));
      v46 = unpack_dd();
      if ( (unsigned int)(v46 - 1) <= 1 )
      {
        if ( src.m128i_i64[0] >= (unsigned __int64)src.m128i_i64[1] )
        {
LABEL_44:
          v27 = _mm_loadu_si128((const __m128i *)(a1 + 8));
          v28 = v57;
          v29 = _mm_loadu_si128(&v58);
          v57 = *(_QWORD **)a1;
          *(_QWORD *)a1 = v28;
          *(__m128i *)(a1 + 8) = v29;
          v58 = v27;
LABEL_18:
          if ( v62 )
          {
            *(_QWORD *)&v63 = 0;
            qfree();
          }
          goto LABEL_20;
        }
        while ( 1 )
        {
          v4 = operator new(0x38u);
          v5 = v58.m128i_u64[1];
          *(_QWORD *)v4 = 0;
          *(_OWORD *)(v4 + 8) = 0;
          *(_OWORD *)(v4 + 24) = -1;
          *(_QWORD *)(v4 + 40) = -4294967223LL;
          v6 = v58.m128i_i64[0];
          *(_BYTE *)(v4 + 48) = 0;
          if ( v5 < v6 + 1 )
          {
            v50 = v5;
            v47 = v4;
            v7 = qvector_reserve();
            v34 = v58.m128i_i64[1];
            v35 = v57;
            v36 = v58.m128i_i64[0] - 1;
            v58.m128i_i64[1] = v50;
            if ( v58.m128i_i64[0] - 1 >= 0 )
            {
              v37 = v7;
              do
              {
                v38 = *v35;
                v37 += 8;
                ++v35;
                *(_QWORD *)(v37 - 8) = v38;
              }
              while ( v36-- != 0 );
            }
            v51 = v34;
            qfree();
            v6 = v58.m128i_i64[0];
            v57 = (_QWORD *)v7;
            v4 = v47;
            v58.m128i_i64[1] = v51;
          }
          else
          {
            v7 = (__int64)v57;
          }
          *(_QWORD *)(v7 + 8 * v6) = v4;
          v8 = v57[v58.m128i_i64[0]++];
          v9 = 0;
          v10 = src.m128i_i64[0];
          if ( src.m128i_i64[0] < (unsigned __int64)src.m128i_i64[1] )
          {
            v9 = *(_BYTE *)src.m128i_i64[0] == 1;
            v10 = src.m128i_i64[0] + 1;
          }
          *(_BYTE *)(v8 + 48) = v9;
          src.m128i_i64[0] = v10;
          *(_QWORD *)(v8 + 24) = unpack_dq();
          v11 = unpack_dq();
          *(_QWORD *)(v8 + 32) = v11;
          if ( v11 != -1 )
            break;
          if ( v46 != 1 )
            goto LABEL_17;
          unpack_dd();
          unpack_dd();
          v30 = (const void *)src.m128i_i64[0];
          dest = 0;
          v65 = 0;
          v26 = src;
          do
          {
            if ( v26.m128i_i64[0] >= (unsigned __int64)src.m128i_i64[1] )
              goto LABEL_49;
            ++v26.m128i_i64[0];
          }
          while ( *(_BYTE *)(v26.m128i_i64[0] - 1) );
          src.m128i_i64[0] = v26.m128i_i64[0];
          if ( !v30 )
          {
LABEL_49:
            v31 = v58.m128i_i64[0];
            if ( !v58.m128i_i64[0] )
              goto LABEL_43;
LABEL_50:
            v58.m128i_i64[0] = v31 - 1;
            v32 = (_QWORD *)v57[v31 - 1];
            if ( v32 )
            {
              if ( *v32 )
              {
                v32[1] = 0;
                qfree();
              }
              operator delete(v32, 0x38u);
            }
            goto LABEL_54;
          }
          v42 = v26.m128i_i64[0] - (_QWORD)v30;
          v41 = v42 == 0;
          v43 = v42;
          v44 = v42 - 1;
          v45 = 0;
          if ( !v41 )
          {
            v49 = v44;
            v45 = (char *)qvector_reserve();
            dest = v45;
            v44 = v49;
          }
          *(_QWORD *)&v65 = v43;
          v45[v43 - 1] = 0;
          memmove(dest, v30, v44);
          v31 = v58.m128i_i64[0];
          if ( v58.m128i_i64[0] )
            goto LABEL_50;
LABEL_54:
          if ( dest )
          {
            *(_QWORD *)&v65 = 0;
            qfree();
            v26.m128i_i64[1] = src.m128i_i64[1];
          }
          else
          {
LABEL_42:
            v26.m128i_i64[1] = src.m128i_i64[1];
          }
LABEL_43:
          if ( src.m128i_i64[0] >= (unsigned __int64)v26.m128i_i64[1] )
            goto LABEL_44;
        }
        if ( src.m128i_i64[0] >= (unsigned __int64)src.m128i_i64[1] )
        {
          *(_DWORD *)(v8 + 40) = 0;
          goto LABEL_13;
        }
        v33 = *(_BYTE *)src.m128i_i64[0]++;
        *(_DWORD *)(v8 + 40) = v33;
        if ( v33 <= 0x48u )
        {
LABEL_13:
          v12 = unpack_dd();
          *(_DWORD *)(v8 + 44) = v12;
          if ( v12 > 0 )
          {
            v13 = (_BYTE *)src.m128i_i64[0];
            v14 = (_BYTE *)src.m128i_i64[0];
            while ( (unsigned __int64)v14 < src.m128i_i64[1] )
            {
              if ( !*v14++ )
              {
                src.m128i_i64[0] = (__int64)v14;
                if ( !v13 )
                  break;
                v20 = v14 - v13;
                v21 = *(_QWORD *)(v8 + 8);
                v22 = v20 - 1;
                v23 = v20 - 1;
                if ( v21 )
                {
                  --v21;
                  v23 = v22 + v21;
                }
                v24 = *(_QWORD *)v8;
                v25 = v23 + 1;
                if ( *(_QWORD *)(v8 + 16) < v23 + 1 )
                {
                  v55 = v21;
                  v54 = v20 - 1;
                  v53 = v13;
                  v52 = v23;
                  v48 = v23 + 1;
                  v40 = qvector_reserve();
                  v21 = v55;
                  v22 = v54;
                  *(_QWORD *)v8 = v40;
                  v24 = v40;
                  v13 = v53;
                  v23 = v52;
                  v25 = v48;
                }
                *(_QWORD *)(v8 + 8) = v25;
                *(_BYTE *)(v24 + v23) = 0;
                memmove((void *)(v21 + *(_QWORD *)v8), v13, v22);
                if ( *(_QWORD *)(v8 + 8) <= 1u )
                  break;
                goto LABEL_42;
              }
            }
          }
        }
      }
    }
LABEL_17:
    v3 = 0;
    goto LABEL_18;
  }
  v3 = 0;
LABEL_20:
  if ( v60 )
  {
    *(_QWORD *)&v61 = 0;
    qfree();
  }
LABEL_22:
  if ( v59[0] )
  {
    v59[1] = 0;
    qfree();
  }
  v15 = v57;
  if ( v57 )
  {
    v16 = v58.m128i_i64[0];
    if ( v58.m128i_i64[0] )
    {
      v17 = 0;
      do
      {
        v18 = (_QWORD *)v15[v17];
        if ( v18 )
        {
          if ( *v18 )
          {
            v18[1] = 0;
            qfree();
          }
          operator delete(v18, 0x38u);
          v15 = v57;
        }
        ++v17;
      }
      while ( v16 != v17 );
    }
    v58.m128i_i64[0] = 0;
    qfree();
  }
  return v3;
}
