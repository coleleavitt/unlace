__int64 __fastcall sub_3DB180(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // eax
  unsigned int v7; // r13d
  void *i; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // r15
  bool v14; // dl
  char *v15; // rax
  _BYTE *v16; // r10
  _BYTE *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // r12
  __int64 v20; // rbx
  __int64 *v21; // rbp
  __int64 v22; // rdi
  __int64 v24; // r9
  size_t v25; // rbx
  size_t v26; // r11
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // r9
  __int64 *v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v41; // rax
  unsigned __int8 v42; // dl
  _BYTE *v43; // rbp
  char *v44; // rdx
  __int64 v45; // rdx
  __int64 *v46; // rbx
  __int64 v47; // rdi
  __int64 v48; // rdx
  char *v49; // rax
  __int64 v50; // rbx
  size_t v51; // r15
  __m128i v52; // xmm1
  __int64 *v53; // rax
  __m128i v54; // xmm0
  int v55; // [rsp+Ch] [rbp-12Ch]
  __int64 v57; // [rsp+20h] [rbp-118h]
  __int64 v58; // [rsp+20h] [rbp-118h]
  __int64 v59; // [rsp+20h] [rbp-118h]
  size_t v60; // [rsp+28h] [rbp-110h]
  _BYTE *v61; // [rsp+30h] [rbp-108h]
  __int64 v62; // [rsp+38h] [rbp-100h]
  void *src[2]; // [rsp+50h] [rbp-E8h] BYREF
  __int64 *v64; // [rsp+60h] [rbp-D8h] BYREF
  __m128i v65; // [rsp+68h] [rbp-D0h] BYREF
  char *v66; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v67; // [rsp+88h] [rbp-B0h]
  __int64 v68; // [rsp+A0h] [rbp-98h] BYREF
  __int128 v69; // [rsp+A8h] [rbp-90h]
  __int64 v70; // [rsp+C0h] [rbp-78h] BYREF
  __int128 v71; // [rsp+C8h] [rbp-70h]
  void *dest; // [rsp+E0h] [rbp-58h] BYREF
  __int128 v73; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v74; // [rsp+F8h] [rbp-40h]

  v74 = __readfsqword(0x28u);
  v65 = 0;
  v64 = nullptr;
  v66 = nullptr;
  v67 = 0;
  v66 = (char *)qvector_reserve((__int64)&v66, 0, 16, 1);
  *(_QWORD *)&v67 = 16;
  strcpy(v66, "$ mbui.comments");
  sub_FAAD0((__int64 *)&v66);
  netnode_check();
  if ( dest == (void *)-1LL )
  {
    v7 = 1;
  }
  else
  {
    netnode_check();
    v68 = 0;
    v69 = 0;
    if ( netnode_qsupstr() <= 0 )
    {
      v7 = 0;
    }
    else
    {
      v70 = 0;
      v71 = 0;
      LOBYTE(v6) = sub_3D1870(&v70, &v68);
      v7 = v6;
      if ( (_BYTE)v6 )
      {
        *(__m128i *)src = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v70, (__m128i)(unsigned __int64)(v70 + v71));
        v55 = unpack_dd();
        if ( (unsigned int)(v55 - 1) <= 1 )
        {
LABEL_5:
          for ( i = src[1]; ; i = src[1] )
          {
LABEL_6:
            if ( src[0] >= i )
            {
              v52 = _mm_loadu_si128(&v65);
              v53 = *(__int64 **)a1;
              v54 = _mm_loadu_si128((const __m128i *)(a1 + 8));
              *(_QWORD *)a1 = v64;
              *(__m128i *)(a1 + 8) = v52;
              v64 = v53;
              v65 = v54;
              goto LABEL_18;
            }
            v9 = operator new(0x38u);
            v10 = v65.m128i_u64[1];
            *(_QWORD *)v9 = 0;
            *(_QWORD *)(v9 + 24) = -1;
            *(_DWORD *)(v9 + 32) = 0;
            *(_OWORD *)(v9 + 8) = 0;
            *(_BYTE *)(v9 + 48) = 0;
            *(_QWORD *)(v9 + 36) = 0xFFFFFFFF00000000LL;
            v11 = v65.m128i_i64[0];
            if ( v10 < v65.m128i_i64[0] + 1 )
            {
              v57 = v10;
              v12 = qvector_reserve((__int64)&v64, 0, v65.m128i_i64[0] + 1, 8);
              v35 = v65.m128i_i64[1];
              v36 = v64;
              v65.m128i_i64[1] = v57;
              v37 = v65.m128i_i64[0] - 1;
              if ( v65.m128i_i64[0] - 1 >= 0 )
              {
                v38 = v12;
                do
                {
                  v39 = *v36;
                  v38 += 8;
                  ++v36;
                  *(_QWORD *)(v38 - 8) = v39;
                }
                while ( v37-- != 0 );
                v36 = v64;
              }
              v58 = v35;
              qfree((__int64)v36);
              v11 = v65.m128i_i64[0];
              v64 = (__int64 *)v12;
              v65.m128i_i64[1] = v58;
            }
            else
            {
              v12 = (__int64)v64;
            }
            *(_QWORD *)(v12 + 8 * v11) = v9;
            v13 = v64[v65.m128i_i64[0]++];
            v14 = 0;
            v15 = (char *)src[0];
            if ( src[0] < src[1] )
            {
              v14 = *(_BYTE *)src[0] == 1;
              v15 = (char *)src[0] + 1;
            }
            src[0] = v15;
            *(_BYTE *)(v13 + 48) = v14;
            if ( v55 == 2 )
              break;
            v29 = unpack_dq();
            v30 = unpack_dq();
            *(_QWORD *)(v13 + 24) = v30;
            v31 = v30;
            *(_DWORD *)(v13 + 40) = -1;
            v32 = *(unsigned int *)(a4 + 64);
            if ( (int)v32 <= 0 )
              goto LABEL_17;
            v33 = 0;
            while ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a4 + 528) + 8 * v33) + 32LL) != v29 )
            {
              if ( (_DWORD)v32 - 1 == v33 )
                goto LABEL_17;
              if ( v32 == ++v33 )
                sub_3CF000(0.0);
            }
            *(_DWORD *)(v13 + 40) = v33;
            if ( v31 != -1 )
            {
              if ( src[0] < src[1] )
              {
                v42 = *(_BYTE *)src[0]++;
                *(_DWORD *)(v13 + 32) = v42;
                if ( v42 > 0x48u )
                  goto LABEL_17;
              }
              else
              {
                *(_DWORD *)(v13 + 32) = 0;
              }
              v34 = unpack_dd();
              if ( v34 <= 0 )
                goto LABEL_17;
              *(_DWORD *)(v13 + 36) = v34 - 1;
              goto LABEL_14;
            }
            unpack_dd();
            unpack_dd();
            v43 = src[0];
            i = src[1];
            dest = nullptr;
            v73 = 0;
            v44 = (char *)src[0];
            do
            {
              if ( v44 >= src[1] )
                goto LABEL_63;
              ++v44;
            }
            while ( *(v44 - 1) );
            src[0] = v44;
            if ( !v43 )
            {
LABEL_63:
              v45 = v65.m128i_i64[0];
              if ( !v65.m128i_i64[0] )
                goto LABEL_6;
LABEL_64:
              v65.m128i_i64[0] = v45 - 1;
              v46 = (__int64 *)v64[v45 - 1];
              if ( v46 )
              {
                v47 = *v46;
                if ( *v46 )
                {
                  v46[1] = 0;
                  qfree(v47);
                }
                operator delete(v46, 0x38u);
              }
              goto LABEL_68;
            }
            v48 = v44 - v43;
            v49 = nullptr;
            v50 = v48;
            v51 = v48 - 1;
            if ( v48 )
            {
              v49 = (char *)qvector_reserve((__int64)&dest, 0, v48, 1);
              dest = v49;
            }
            *(_QWORD *)&v73 = v50;
            v49[v50 - 1] = 0;
            memmove(dest, v43, v51);
            v45 = v65.m128i_i64[0];
            if ( v65.m128i_i64[0] )
              goto LABEL_64;
LABEL_68:
            if ( !dest )
              goto LABEL_5;
            *(_QWORD *)&v73 = 0;
            qfree((__int64)dest);
          }
          sub_7E950(v13 + 24, (__int64)src, a2);
          if ( *(_QWORD *)(v13 + 24) == -1 || *(int *)(v13 + 32) > 72 )
            goto LABEL_17;
LABEL_14:
          v16 = src[0];
          v17 = src[0];
          while ( v17 < src[1] )
          {
            if ( !*v17++ )
            {
              src[0] = v17;
              if ( v16 )
              {
                v24 = *(_QWORD *)(v13 + 8);
                v25 = v17 - v16 - 1;
                v26 = v25;
                if ( v24 )
                {
                  --v24;
                  v26 = v25 + v24;
                }
                v27 = *(_QWORD *)v13;
                v28 = v26 + 1;
                if ( *(_QWORD *)(v13 + 16) < v26 + 1 )
                {
                  v62 = v24;
                  v61 = v16;
                  v60 = v26;
                  v59 = v26 + 1;
                  v41 = qvector_reserve(v13, v27, v28, 1);
                  v24 = v62;
                  v16 = v61;
                  *(_QWORD *)v13 = v41;
                  v27 = v41;
                  v26 = v60;
                  v28 = v59;
                }
                *(_QWORD *)(v13 + 8) = v28;
                *(_BYTE *)(v27 + v26) = 0;
                memmove((void *)(v24 + *(_QWORD *)v13), v16, v25);
                if ( *(_QWORD *)(v13 + 8) > 1u )
                  goto LABEL_5;
              }
              break;
            }
          }
        }
      }
LABEL_17:
      v7 = 0;
LABEL_18:
      if ( v70 )
      {
        *(_QWORD *)&v71 = 0;
        qfree(v70);
      }
    }
    if ( v68 )
    {
      *(_QWORD *)&v69 = 0;
      qfree(v68);
    }
  }
  if ( v66 )
  {
    *(_QWORD *)&v67 = 0;
    qfree((__int64)v66);
  }
  v18 = (__int64)v64;
  if ( v64 )
  {
    v19 = v65.m128i_i64[0];
    if ( v65.m128i_i64[0] )
    {
      v20 = 0;
      do
      {
        v21 = *(__int64 **)(v18 + 8 * v20);
        if ( v21 )
        {
          v22 = *v21;
          if ( *v21 )
          {
            v21[1] = 0;
            qfree(v22);
          }
          operator delete(v21, 0x38u);
          v18 = (__int64)v64;
        }
        ++v20;
      }
      while ( v19 != v20 );
    }
    v65.m128i_i64[0] = 0;
    qfree(v18);
  }
  return v7;
}
