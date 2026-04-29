unsigned __int64 __fastcall sub_DCC0(__int64 a1, __int64 a2, __int64 a3, __m128i si128)
{
  int v4; // edx
  unsigned __int64 v7; // rbx
  int v8; // r14d
  __m128i v9; // xmm5
  unsigned __int64 v10; // rax
  bool v11; // cc
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // r15
  int v15; // r14d
  __int64 v17; // [rsp+8h] [rbp-100h]
  __int64 v18; // [rsp+10h] [rbp-F8h]
  __m128i v19; // [rsp+20h] [rbp-E8h] BYREF
  __int64 *v20; // [rsp+30h] [rbp-D8h]
  __m128i *v21; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v22; // [rsp+48h] [rbp-C0h]
  __int64 *v23; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v24; // [rsp+58h] [rbp-B0h]
  __int64 v25; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+68h] [rbp-A0h]
  __int64 v27; // [rsp+70h] [rbp-98h]
  int v28; // [rsp+78h] [rbp-90h]
  __m128i v29; // [rsp+80h] [rbp-88h] BYREF
  __m128i v30; // [rsp+90h] [rbp-78h] BYREF
  __m128i v31[2]; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v32; // [rsp+C8h] [rbp-40h]

  v4 = *(_DWORD *)(a3 + 76);
  v32 = __readfsqword(0x28u);
  if ( v4 > 0 && (unsigned __int8)get_data_value() )
  {
    get_flags_by_size();
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & (a2 + get_tinfo_size() + 3) & 0xFFFFFFFFFFFFFFFCLL;
    if ( v22 )
    {
      v8 = 0;
      v19 = _mm_unpacklo_epi64(_mm_loadl_epi64(&off_27BF8), (__m128i)(unsigned __int64)sub_F330);
      do
      {
        create_data();
        if ( (unsigned __int8)get_data_value() && v23 != (__int64 *)0xFFFFFFFFLL )
        {
          v30 = 0u;
          v29 = 0;
          if ( v8 )
          {
            if ( (unsigned int)(v8 - 1) > 2 )
            {
              sub_5050((__int64)"golang: unexpected 'npcdata' %d for funcinfo %a\n", v8, *(double *)si128.m128i_i64);
              return v32 - __readfsqword(0x28u);
            }
          }
          else if ( *(_DWORD *)(a1 + 404) > 0x72u )
          {
            v9 = _mm_load_si128(&v19);
            *(__m128i *)((char *)v31 + 8) = 0;
            v31[0].m128i_i64[0] = a3;
            si128 = _mm_load_si128(v31);
            v30 = v9;
            v29 = si128;
          }
          if ( v23 )
          {
            memset(v31, 0, sizeof(v31));
            if ( v30.m128i_i64[0] )
            {
              v20 = v23;
              v21 = &v29;
              ((void (__fastcall *)(__m128i *, __m128i *, __int64))v30.m128i_i64[0])(v31, &v29, 2);
              si128 = _mm_load_si128(&v30);
              v31[1] = si128;
              sub_D990(
                *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & ((unsigned __int64)v20 + *(_QWORD *)(a1 + 512)),
                *(_BYTE *)(a1 + 566),
                (__int64)v31,
                *(double *)si128.m128i_i64);
            }
            else
            {
              sub_D990(
                *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & ((unsigned __int64)v23 + *(_QWORD *)(a1 + 512)),
                *(_BYTE *)(a1 + 566),
                (__int64)v31,
                *(double *)si128.m128i_i64);
            }
            if ( v31[1].m128i_i64[0] )
              ((void (__fastcall *)(__m128i *, __m128i *, __int64))v31[1].m128i_i64[0])(v31, v31, 3);
          }
          set_cmt();
          if ( v30.m128i_i64[0] )
            ((void (__fastcall *)(__m128i *, __m128i *, __int64))v30.m128i_i64[0])(&v29, &v29, 3);
          if ( v23 )
          {
            v17 = *(_QWORD *)(a1 + 512);
            create_data();
            v28 = 9;
            v25 = -1;
            v26 = v17;
            v27 = 0;
            op_offset_ex();
            create_xrefs_from();
          }
        }
        ++v8;
        v7 += 4LL;
      }
      while ( v8 < v22 );
    }
    if ( *(int *)(a3 + 84) > 0 && (unsigned __int8)get_data_value() )
    {
      v10 = (unsigned __int8)v24;
      v11 = *(_DWORD *)(a1 + 404) <= 0x75u;
      v24 = (unsigned __int8)v24;
      if ( v11 )
      {
        v14 = *(unsigned __int8 *)(a1 + 565);
        get_flags_by_size();
        v12 = 0;
        v13 = 0;
        v10 = v24;
        v7 = (v7 + (int)v14 - 1) & *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & -(int)v14;
      }
      else
      {
        v12 = *(_QWORD *)(a1 + 464);
        if ( v12 == -1 )
          return v32 - __readfsqword(0x28u);
        v13 = 0xFFFFFFFFLL;
        v14 = 4;
      }
      if ( v10 )
      {
        v15 = 0;
        v20 = &v25;
        v18 = v12;
        do
        {
          create_data();
          if ( (unsigned __int8)get_data_value() && v23 != (__int64 *)v13 )
          {
            if ( !sub_CD90(
                    a1,
                    v7,
                    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & ((unsigned __int64)v23 + v18),
                    (_QWORD *)a3,
                    v15) )
            {
              sub_5050((__int64)"golang: unexpected 'nfuncdata' %d for funcinfo %a\n", v15, *(double *)si128.m128i_i64);
              return v32 - __readfsqword(0x28u);
            }
            create_data();
            v28 = 9;
            v25 = -1;
            v26 = v18;
            v27 = 0;
            op_offset_ex();
            create_xrefs_from();
          }
          ++v15;
          v7 += v14;
        }
        while ( v15 < v24 );
      }
    }
  }
  return v32 - __readfsqword(0x28u);
}
