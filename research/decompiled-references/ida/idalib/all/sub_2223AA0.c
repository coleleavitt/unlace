__int64 __fastcall sub_2223AA0(__int64 a1, char *a2, size_t a3)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  __int32 v5; // r15d
  size_t v8; // rbp
  _BYTE *v9; // rax
  size_t v10; // rax
  char v11; // dl
  __int8 v12; // r10
  __int32 v13; // r11d
  __int32 v14; // r9d
  __int32 v15; // eax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rsi
  __m128i *v19; // rcx
  __m128i *v20; // r8
  char *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  _BYTE *v27; // rax
  size_t v28; // rax
  size_t v29; // rcx
  const char *v30; // r9
  _BYTE *v31; // rax
  size_t v32; // rax
  unsigned __int64 v33; // rdx
  __m128i v34; // xmm3
  __m128i v35; // xmm4
  __m128i v36; // xmm5
  const __m128i *v37; // rdi
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rdx
  __int64 v41; // r9
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  unsigned __int64 v49; // rax
  __int8 v50; // r10
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // rax
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rax
  char v57; // dl
  char v58; // r10
  int v59; // r11d
  char v60; // al
  __int128 v61; // rax
  __int64 v62; // [rsp+0h] [rbp-118h]
  __int8 v63; // [rsp+0h] [rbp-118h]
  const char *v64; // [rsp+8h] [rbp-110h]
  __int32 v65; // [rsp+1Ch] [rbp-FCh]
  __int64 v66; // [rsp+30h] [rbp-E8h]
  __int64 v67; // [rsp+38h] [rbp-E0h]
  __int32 v68; // [rsp+38h] [rbp-E0h]
  __int8 v69; // [rsp+38h] [rbp-E0h]
  __int64 v70; // [rsp+38h] [rbp-E0h]
  unsigned __int64 v71; // [rsp+38h] [rbp-E0h]
  char v72; // [rsp+38h] [rbp-E0h]
  size_t v73; // [rsp+40h] [rbp-D8h]
  __int32 v74; // [rsp+40h] [rbp-D8h]
  __int32 v75; // [rsp+40h] [rbp-D8h]
  __int8 v76; // [rsp+40h] [rbp-D8h]
  int v77; // [rsp+40h] [rbp-D8h]
  __int32 v78; // [rsp+48h] [rbp-D0h]
  __int32 v79; // [rsp+48h] [rbp-D0h]
  __int32 v80; // [rsp+48h] [rbp-D0h]
  __int32 v81; // [rsp+4Ch] [rbp-CCh]
  const char *v82; // [rsp+50h] [rbp-C8h] BYREF
  unsigned __int64 v83; // [rsp+58h] [rbp-C0h]
  _OWORD v84[3]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v85; // [rsp+90h] [rbp-88h]
  __m128i v86; // [rsp+A0h] [rbp-78h] BYREF
  __m128i v87; // [rsp+B0h] [rbp-68h] BYREF
  __m128i v88; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v89; // [rsp+D0h] [rbp-48h]

  *(_QWORD *)a1 = a1 + 16;
  v66 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0x200000000LL;
  v65 = 0;
  if ( a3 )
  {
    v8 = a3;
    while ( 1 )
    {
      if ( *a2 != 123 )
      {
        v9 = memchr(a2, 123, v8);
        if ( v9 )
        {
          v10 = v9 - a2;
          if ( v10 > v8 )
            v10 = v8;
          v3 = v10;
          v8 -= v10;
        }
        else
        {
          v3 = v8;
          v8 = 0;
        }
LABEL_7:
        v64 = a2;
        a2 += v3;
LABEL_8:
        v11 = 1;
        v4 = 0;
        v12 = 0;
        v5 = 0;
        v62 = 0;
        v13 = 2;
        v14 = 0;
        v15 = 1;
        goto LABEL_9;
      }
      v20 = &v86;
      v21 = a2;
      do
      {
        if ( !sub_2223A90((__int64)v20, *v21) )
        {
          v24 = v8 - v22;
          if ( v24 > v8 )
            v24 = v8;
          if ( v24 > 1 )
            goto LABEL_21;
          goto LABEL_31;
        }
        v21 = (char *)(v23 + 1);
      }
      while ( v22 != 1 );
      v24 = v8;
      if ( v8 > 1 )
      {
LABEL_21:
        v3 = v24 >> 1;
        if ( v24 >> 1 >= v8 )
          v3 = v8;
        v25 = v24 & 0xFFFFFFFFFFFFFFFELL;
        if ( v25 > v8 )
        {
          v25 = v8;
          v8 = 0;
        }
        else
        {
          v8 -= v25;
        }
        v64 = a2;
        a2 += v25;
        goto LABEL_8;
      }
LABEL_31:
      v27 = memchr(a2, 125, v8);
      if ( !v27 || (v28 = v27 - a2, v29 = v28, v28 == -1) )
      {
        v8 = 0;
        a2 = nullptr;
        v4 = 0;
        v64 = "Unterminated brace sequence. Escape with {{ for a literal brace.";
        v11 = 1;
        v12 = 0;
        v5 = 0;
        v62 = 0;
        v13 = 2;
        v14 = 0;
        v3 = 64;
        v15 = 1;
        goto LABEL_9;
      }
      v30 = a2 + 1;
      if ( v8 > 1 )
      {
        v73 = v28;
        v31 = memchr(a2 + 1, 123, v8 - 1);
        v30 = a2 + 1;
        v29 = v73;
        if ( v31 )
        {
          v32 = v31 - a2;
          if ( v73 > v32 )
          {
            if ( v32 > v8 )
              v32 = v8;
            v3 = v32;
            v8 -= v32;
            goto LABEL_7;
          }
        }
      }
      v38 = v29 + 1;
      if ( !v29 )
        break;
      if ( v29 > v8 )
        v29 = v8;
      --v29;
      if ( v8 >= v38 )
        goto LABEL_44;
      v38 = v8;
      v8 = 0;
LABEL_45:
      v83 = v29;
      a2 += v38;
      v82 = v30;
      v39 = sub_2246FB0(&v82, "{}", 2, 0);
      v40 = v83;
      v41 = 0;
      if ( v39 < v83 )
      {
        v41 = v83 - v39;
        v40 = v39;
      }
      v86.m128i_i64[0] = (__int64)&v82[v40];
      v86.m128i_i64[1] = v41;
      v67 = v41;
      v42 = sub_2247130(&v86, "{}", 2, -1) + 1;
      *(_QWORD *)&v84[0] = v86.m128i_i64[0];
      if ( v42 > v86.m128i_i64[1] )
        v42 = v86.m128i_u64[1];
      v43 = v86.m128i_i64[1] - v67 + v42;
      if ( v43 > v86.m128i_i64[1] )
        v43 = v86.m128i_u64[1];
      *((_QWORD *)&v84[0] + 1) = v43;
      v44 = sub_2246FB0(v84, asc_22E1692, 6, 0);
      v45 = *((_QWORD *)&v84[0] + 1);
      v46 = 0;
      if ( v44 < *((_QWORD *)&v84[0] + 1) )
      {
        v45 = v44;
        v46 = *((_QWORD *)&v84[0] + 1) - v44;
      }
      *(_QWORD *)&v84[0] += v45;
      *((_QWORD *)&v84[0] + 1) = v46;
      if ( (unsigned __int8)sub_2247880(v84, 0, &v86) || (v14 = v86.m128i_i32[0], v86.m128i_i64[0] != v86.m128i_u32[0]) )
        v14 = -1;
      v47 = *((_QWORD *)&v84[0] + 1);
      if ( !*((_QWORD *)&v84[0] + 1)
        || (v48 = *(_QWORD *)&v84[0], **(_BYTE **)&v84[0] != 44)
        || (++*(_QWORD *)&v84[0], --*((_QWORD *)&v84[0] + 1), v47 == 1) )
      {
        v13 = 2;
        v5 = 0;
        v12 = 32;
        goto LABEL_59;
      }
      if ( v47 == 2 )
      {
        v59 = 2;
        v58 = 32;
      }
      else
      {
        v57 = *(_BYTE *)(v48 + 2);
        v58 = *(_BYTE *)(v48 + 1);
        if ( v57 == 45 )
        {
          v59 = 0;
          goto LABEL_93;
        }
        if ( v57 == 61 )
        {
          v59 = 1;
LABEL_93:
          *(_QWORD *)&v84[0] = v48 + 3;
          *((_QWORD *)&v84[0] + 1) = v47 - 3;
          goto LABEL_87;
        }
        v59 = 2;
        if ( v57 == 43 )
          goto LABEL_93;
        if ( v58 == 45 )
        {
          v59 = 0;
        }
        else if ( v58 == 61 )
        {
          v59 = 1;
        }
        else
        {
          v59 = 2;
          if ( v58 != 43 )
          {
            v58 = 32;
            goto LABEL_87;
          }
        }
        v58 = 32;
        *(_QWORD *)&v84[0] = v48 + 2;
        *((_QWORD *)&v84[0] + 1) = v47 - 2;
      }
LABEL_87:
      v80 = v14;
      v77 = v59;
      v72 = v58;
      v60 = sub_2247880(v84, 0, &v86);
      v12 = v72;
      v13 = v77;
      v14 = v80;
      if ( v60 || v86.m128i_i64[0] != v86.m128i_u32[0] )
      {
        v11 = 0;
        v15 = 0;
        goto LABEL_9;
      }
      v5 = v86.m128i_i32[0];
LABEL_59:
      v63 = v12;
      v74 = v14;
      v68 = v13;
      v49 = sub_2246FB0(v84, asc_22E1692, 6, 0);
      v50 = v63;
      if ( v49 < *((_QWORD *)&v84[0] + 1) )
      {
        *((_QWORD *)&v61 + 1) = *((_QWORD *)&v84[0] + 1) - v49;
        *(_QWORD *)&v61 = *(_QWORD *)&v84[0] + v49;
        v84[0] = v61;
        if ( *((_QWORD *)&v61 + 1) && *(_BYTE *)v61 == 58 )
        {
          v4 = v61 + 1;
          v84[0] = 0u;
          v62 = *((_QWORD *)&v61 + 1) - 1LL;
          goto LABEL_62;
        }
      }
      else
      {
        v84[0] = (unsigned __int64)(*((_QWORD *)&v84[0] + 1) + *(_QWORD *)&v84[0]);
      }
      v62 = 0;
      v4 = 0;
LABEL_62:
      v78 = v74;
      v75 = v68;
      v69 = v50;
      v51 = sub_2246FB0(v84, asc_22E1692, 6, 0);
      v52 = *((_QWORD *)&v84[0] + 1);
      v53 = 0;
      if ( v51 < *((_QWORD *)&v84[0] + 1) )
      {
        v53 = *((_QWORD *)&v84[0] + 1) - v51;
        v52 = v51;
      }
      v86.m128i_i64[0] = *(_QWORD *)&v84[0] + v52;
      v81 = v78;
      v79 = v75;
      v76 = v69;
      v86.m128i_i64[1] = v53;
      v70 = v53;
      v54 = sub_2247130(&v86, asc_22E1692, 6, -1);
      v12 = v76;
      v55 = v54 + 1;
      v13 = v79;
      v14 = v81;
      if ( v55 > v86.m128i_i64[1] )
        v55 = v86.m128i_u64[1];
      v56 = v86.m128i_i64[1] - v70 + v55;
      if ( v56 > v86.m128i_i64[1] )
        v56 = v86.m128i_u64[1];
      v11 = 0;
      if ( !v56 )
      {
        v3 = v83;
        v11 = 1;
        v64 = v82;
      }
      v15 = 0;
LABEL_9:
      v86.m128i_i32[0] = v15;
      v87.m128i_i64[0] = v3;
      v86.m128i_i64[1] = (__int64)v64;
      v87.m128i_i64[1] = __PAIR64__(v5, v14);
      v88.m128i_i32[0] = v13;
      v88.m128i_i8[4] = v12;
      v88.m128i_i64[1] = v4;
      v89 = v62;
      if ( v11 )
      {
        if ( !v15 && v14 == -1 )
          v14 = v65++;
        v16 = *(unsigned int *)(a1 + 8);
        v17 = *(_QWORD *)a1;
        v87.m128i_i32[2] = v14;
        v18 = *(unsigned int *)(a1 + 12);
        v19 = (__m128i *)(v17 + 56 * v16);
        if ( v16 >= v18 )
        {
          v33 = v16 + 1;
          v34 = _mm_load_si128(&v86);
          v35 = _mm_load_si128(&v87);
          v36 = _mm_load_si128(&v88);
          v85 = v89;
          v37 = (const __m128i *)v84;
          v84[0] = v34;
          v84[1] = v35;
          v84[2] = v36;
          if ( v18 < v33 )
          {
            v71 = v17;
            if ( v17 > (unsigned __int64)v84 || v19 <= (__m128i *)v84 )
            {
              sub_2237220(a1, v66, v33, 56);
              v37 = (const __m128i *)v84;
              v19 = (__m128i *)(*(_QWORD *)a1 + 56LL * *(unsigned int *)(a1 + 8));
            }
            else
            {
              sub_2237220(a1, v66, v33, 56);
              v37 = (const __m128i *)((char *)v84 + *(_QWORD *)a1 - v71);
              v19 = (__m128i *)(*(_QWORD *)a1 + 56LL * *(unsigned int *)(a1 + 8));
            }
          }
          *v19 = _mm_loadu_si128(v37);
          v19[1] = _mm_loadu_si128(v37 + 1);
          v19[2] = _mm_loadu_si128(v37 + 2);
          v19[3].m128i_i64[0] = v37[3].m128i_i64[0];
          ++*(_DWORD *)(a1 + 8);
        }
        else
        {
          *v19 = _mm_load_si128(&v86);
          v19[1] = _mm_load_si128(&v87);
          v19[2] = _mm_load_si128(&v88);
          v19[3].m128i_i64[0] = v89;
          ++*(_DWORD *)(a1 + 8);
        }
      }
      if ( !v8 )
        return a1;
    }
    v38 = 1;
LABEL_44:
    v8 -= v38;
    goto LABEL_45;
  }
  return a1;
}
