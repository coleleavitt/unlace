__int64 *__fastcall sub_219B080(
        __int64 *a1,
        __int64 a2,
        const __m128i *a3,
        __int64 a4,
        __int32 a5,
        std::__detail::_List_node_base *a6)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int32 v14; // edx
  __m128i v15; // xmm2
  __m128i v16; // xmm3
  unsigned int v17; // eax
  __int64 v18; // r14
  unsigned int v19; // eax
  __int64 v20; // rbp
  unsigned __int64 v21; // rcx
  __int64 v22; // rdi
  unsigned __int64 v23; // rax
  __m128i v24; // xmm1
  __m128i v25; // xmm0
  unsigned __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  char *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int32 v36; // [rsp+8h] [rbp-160h]
  unsigned __int32 v37; // [rsp+Ch] [rbp-15Ch]
  __m128i v38[2]; // [rsp+10h] [rbp-158h] BYREF
  __int16 v39; // [rsp+30h] [rbp-138h]
  __m128i v40[2]; // [rsp+40h] [rbp-128h] BYREF
  __int16 v41; // [rsp+60h] [rbp-108h]
  __m128i v42[3]; // [rsp+70h] [rbp-F8h] BYREF
  __m128i v43[2]; // [rsp+A0h] [rbp-C8h] BYREF
  __int16 v44; // [rsp+C0h] [rbp-A8h]
  __m128i v45; // [rsp+D0h] [rbp-98h] BYREF
  __m128i v46; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v47; // [rsp+F0h] [rbp-78h]
  __m128i v48; // [rsp+100h] [rbp-68h] BYREF
  __m128i v49; // [rsp+110h] [rbp-58h]
  __int64 v50; // [rsp+120h] [rbp-48h]
  char v51; // [rsp+128h] [rbp-40h]

  if ( (_DWORD)a4 == 40 )
  {
    if ( (unsigned __int64)a3 < sub_215DEC0(a2)
      || (v13 = sub_215DEC0(a2), v12 = (__int64)&a3[2].m128i_i64[1], (unsigned __int64)&a3[2].m128i_u64[1] > v11 + v13) )
    {
      v45.m128i_i64[0] = (__int64)"Structure read out-of-range";
      LOWORD(v47) = 259;
      sub_21967F0(v43[0].m128i_i64, v45.m128i_i64, v11, v12);
      v51 |= 1u;
      v48.m128i_i64[0] = 0;
      *a1 = v43[0].m128i_i64[0];
    }
    else
    {
      v14 = a3->m128i_i32[0];
      v15 = _mm_loadu_si128(a3);
      v16 = _mm_loadu_si128(a3 + 1);
      v17 = a3->m128i_i32[0];
      v47 = a3[2].m128i_i64[0];
      v18 = a3[1].m128i_i64[1];
      v36 = _byteswap_ulong(v17);
      v19 = a3->m128i_u32[1];
      v20 = v47;
      v21 = *(unsigned int *)(a2 + 8);
      v45 = v15;
      v46 = v16;
      v37 = _byteswap_ulong(v19);
      if ( (unsigned int)v21 <= 0x14 )
      {
        v22 = 1398784;
        if ( _bittest64(&v22, v21) )
        {
          v18 = sub_2162D00(v18);
          v23 = sub_2162D00(v47);
          v14 = v36;
          v20 = v23;
          v19 = v37;
        }
      }
      v46.m128i_i64[1] = v18;
      v24 = _mm_load_si128(&v46);
      v45.m128i_i64[0] = __PAIR64__(v19, v14);
      v25 = _mm_load_si128(&v45);
      v49 = v24;
      v51 &= ~1u;
      v47 = v20;
      v48 = v25;
      v50 = v20;
      sub_215DEC0(a2);
      if ( v24.m128i_i64[1] > v26 )
      {
        v40[0].m128i_i32[0] = a5;
        v43[0].m128i_i64[0] = (__int64)" extends past the end of the file";
        v30 = "offset field of LC_NOTE command ";
        v44 = 259;
        v41 = 265;
      }
      else
      {
        if ( v26 >= v24.m128i_i64[1] + v20 )
        {
          sub_2197C60(v45.m128i_i64, a6, v24.m128i_u64[1], v20, "LC_NOTE data");
          if ( v45.m128i_i64[0] )
            *a1 = v45.m128i_i64[0];
          else
            *a1 = 0;
          goto LABEL_6;
        }
        v27 = 265;
        v40[0].m128i_i32[0] = a5;
        v44 = 259;
        v41 = 265;
        v43[0].m128i_i64[0] = (__int64)" extends past the end of the file";
        v30 = "size field plus offset field of LC_NOTE command ";
      }
      v38[0].m128i_i64[0] = (__int64)v30;
      v39 = 259;
      sub_A41580(v42, v38, v40, v27, v28, v29);
      sub_A41580(&v45, v42, v43, v31, v32, v33);
      sub_21967F0(a1, v45.m128i_i64, v34, v35);
    }
LABEL_6:
    sub_219B060(v48.m128i_i64);
    return a1;
  }
  v43[0].m128i_i32[0] = a5;
  v45.m128i_i64[0] = (__int64)"load command ";
  LOWORD(v47) = 2307;
  v46.m128i_i64[0] = v43[0].m128i_i64[0];
  v48.m128i_i64[0] = (__int64)&v45;
  v49.m128i_i64[0] = (__int64)" LC_NOTE has incorrect cmdsize";
  LOWORD(v50) = 770;
  sub_21967F0(a1, v48.m128i_i64, (__int64)a3, a4);
  return a1;
}
