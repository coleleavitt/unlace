void __fastcall sub_12853A0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rbx
  _QWORD *v8; // r12
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rbx
  size_t v12; // rax
  __m128i *v13; // rax
  size_t v14; // rdx
  size_t v15; // r15
  size_t v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  _OWORD *v21; // rdi
  void *v22; // rdi
  __m128i *v23; // rax
  size_t v24; // rcx
  size_t v25; // r15
  size_t v26; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  _OWORD *v31; // rdi
  size_t v32; // [rsp+8h] [rbp-100h]
  size_t v33; // [rsp+8h] [rbp-100h]
  __int64 v34; // [rsp+8h] [rbp-100h]
  __int64 v35; // [rsp+8h] [rbp-100h]
  __int64 v36; // [rsp+10h] [rbp-F8h] BYREF
  size_t v37; // [rsp+18h] [rbp-F0h]
  _QWORD v38[2]; // [rsp+20h] [rbp-E8h] BYREF
  _QWORD v39[2]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v40; // [rsp+40h] [rbp-C8h] BYREF
  void *v41; // [rsp+50h] [rbp-B8h] BYREF
  size_t v42; // [rsp+58h] [rbp-B0h]
  __m128i v43; // [rsp+60h] [rbp-A8h] BYREF
  void *v44[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v45; // [rsp+80h] [rbp-88h] BYREF
  void *v46; // [rsp+90h] [rbp-78h] BYREF
  size_t v47; // [rsp+98h] [rbp-70h]
  __m128i v48; // [rsp+A0h] [rbp-68h] BYREF
  void *v49; // [rsp+B0h] [rbp-58h] BYREF
  size_t v50; // [rsp+B8h] [rbp-50h]
  _OWORD v51[4]; // [rsp+C0h] [rbp-48h] BYREF

  v4 = *(unsigned int *)(a3 + 8);
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    sub_2237220(a3, a3 + 16, v4 + 1, 8);
    v4 = *(unsigned int *)(a3 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v4) = "-nostdsysteminc";
  ++*(_DWORD *)(a3 + 8);
  LODWORD(v49) = 2483;
  v5 = sub_21B6DA0(a2, &v49, 1);
  v6 = a2[1];
  v7 = (_QWORD *)(v6 + 8LL * (unsigned int)v5);
  v8 = (_QWORD *)(v6 + 8 * HIDWORD(v5));
  if ( v7 != v8 )
  {
    while ( !*v7 || !(unsigned __int8)sub_21B9810(*v7, 2483) )
    {
      if ( v8 == ++v7 )
        return;
    }
    if ( v8 != v7 )
    {
      do
      {
        v9 = *v7;
        v10 = *(_QWORD *)(*v7 + 16LL);
        if ( !v10 )
          v10 = *v7;
        ++v7;
        *(_BYTE *)(v10 + 44) |= 1u;
        if ( v7 == v8 )
          break;
        while ( !*v7 || !(unsigned __int8)sub_21B9810(*v7, 2483) )
        {
          if ( v8 == ++v7 )
            goto LABEL_15;
        }
      }
      while ( v8 != v7 );
LABEL_15:
      v11 = **(_QWORD **)(v9 + 48);
      v36 = v11;
      if ( v11 )
      {
        v12 = strlen((const char *)v11);
        v37 = v12;
        if ( v12 > 6 && *(_DWORD *)v11 == 879784813 && *(_WORD *)(v11 + 4) == 12339 && *(_BYTE *)(v11 + 6) == 105 )
        {
          v38[0] = v11 + 7;
          v38[1] = v12 - 7;
          sub_2246780(v39, v38);
          v13 = (__m128i *)sub_99BDC0(v39, 0, 0, "-D__MSP430i", 0xBu);
          v41 = &v43;
          if ( (__m128i *)v13->m128i_i64[0] == &v13[1] )
          {
            v43 = _mm_loadu_si128(v13 + 1);
          }
          else
          {
            v41 = (void *)v13->m128i_i64[0];
            v43.m128i_i64[0] = v13[1].m128i_i64[0];
          }
          v14 = v13->m128i_u64[1];
          v13[1].m128i_i8[0] = 0;
          v42 = v14;
          v13->m128i_i64[0] = (__int64)v13[1].m128i_i64;
          v13->m128i_i64[1] = 0;
          v15 = v42;
          if ( v42 != 0x7FFFFFFFFFFFFFFFLL && v42 != 9223372036854775806LL )
          {
            v16 = v42 + 2;
            if ( v41 == &v43 )
              v17 = 15;
            else
              v17 = v43.m128i_i64[0];
            if ( v16 > v17 )
            {
              v33 = v42 + 2;
              sub_998B30((__int64)&v41, v42, 0, "__", 2u);
              v16 = v33;
            }
            else
            {
              *(_WORD *)((char *)v41 + v42) = 24415;
            }
            v42 = v16;
            *((_BYTE *)v41 + v15 + 2) = 0;
            v49 = v51;
            if ( v41 == &v43 )
            {
              v51[0] = _mm_load_si128(&v43);
            }
            else
            {
              v49 = v41;
              *(_QWORD *)&v51[0] = v43.m128i_i64[0];
            }
            v43.m128i_i8[0] = 0;
            v41 = &v43;
            v18 = *a2;
            v50 = v42;
            v42 = 0;
            v19 = (*(__int64 (__fastcall **)(__int64 *))(v18 + 16))(a2);
            v20 = *(unsigned int *)(a3 + 8);
            if ( v20 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
            {
              v34 = v19;
              sub_2237220(a3, a3 + 16, v20 + 1, 8);
              v20 = *(unsigned int *)(a3 + 8);
              v19 = v34;
            }
            *(_QWORD *)(*(_QWORD *)a3 + 8 * v20) = v19;
            v21 = v49;
            ++*(_DWORD *)(a3 + 8);
            if ( v21 != v51 )
              operator delete(v21);
            if ( v41 != &v43 )
              operator delete(v41);
            v22 = (void *)v39[0];
            if ( (__int64 *)v39[0] == &v40 )
              return;
LABEL_56:
            operator delete(v22);
            return;
          }
LABEL_65:
          std::__throw_length_error("basic_string::append");
        }
      }
      else
      {
        v37 = 0;
      }
      sub_2246780(v44, &v36);
      v23 = (__m128i *)sub_99BDC0(v44, 0, 0, "-D__", 4u);
      v46 = &v48;
      if ( (__m128i *)v23->m128i_i64[0] == &v23[1] )
      {
        v48 = _mm_loadu_si128(v23 + 1);
      }
      else
      {
        v46 = (void *)v23->m128i_i64[0];
        v48.m128i_i64[0] = v23[1].m128i_i64[0];
      }
      v24 = v23->m128i_u64[1];
      v23[1].m128i_i8[0] = 0;
      v47 = v24;
      v23->m128i_i64[0] = (__int64)v23[1].m128i_i64;
      v23->m128i_i64[1] = 0;
      v25 = v47;
      if ( v47 == 0x7FFFFFFFFFFFFFFFLL || v47 == 9223372036854775806LL )
        goto LABEL_65;
      v26 = v47 + 2;
      if ( v46 == &v48 )
        v27 = 15;
      else
        v27 = v48.m128i_i64[0];
      if ( v26 > v27 )
      {
        v32 = v47 + 2;
        sub_998B30((__int64)&v46, v47, 0, "__", 2u);
        v26 = v32;
      }
      else
      {
        *(_WORD *)((char *)v46 + v47) = 24415;
      }
      v47 = v26;
      *((_BYTE *)v46 + v25 + 2) = 0;
      v49 = v51;
      if ( v46 == &v48 )
      {
        v51[0] = _mm_load_si128(&v48);
      }
      else
      {
        v49 = v46;
        *(_QWORD *)&v51[0] = v48.m128i_i64[0];
      }
      v48.m128i_i8[0] = 0;
      v46 = &v48;
      v28 = *a2;
      v50 = v47;
      v47 = 0;
      v29 = (*(__int64 (__fastcall **)(__int64 *))(v28 + 16))(a2);
      v30 = *(unsigned int *)(a3 + 8);
      if ( v30 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        v35 = v29;
        sub_2237220(a3, a3 + 16, v30 + 1, 8);
        v30 = *(unsigned int *)(a3 + 8);
        v29 = v35;
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v30) = v29;
      v31 = v49;
      ++*(_DWORD *)(a3 + 8);
      if ( v31 != v51 )
        operator delete(v31);
      if ( v46 != &v48 )
        operator delete(v46);
      v22 = v44[0];
      if ( v44[0] != &v45 )
        goto LABEL_56;
    }
  }
}
