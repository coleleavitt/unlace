__int64 *__fastcall sub_219CC30(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 **a3,
        __int64 a4,
        unsigned __int32 a5,
        unsigned __int64 **a6,
        std::__detail::_List_node_base *a7)
{
  unsigned __int64 *v8; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  const char *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v30[2]; // [rsp+20h] [rbp-138h] BYREF
  char v31; // [rsp+30h] [rbp-128h]
  __m128i v32[2]; // [rsp+40h] [rbp-118h] BYREF
  __int16 v33; // [rsp+60h] [rbp-F8h]
  __m128i v34[2]; // [rsp+70h] [rbp-E8h] BYREF
  __int16 v35; // [rsp+90h] [rbp-C8h]
  __m128i v36[3]; // [rsp+A0h] [rbp-B8h] BYREF
  __m128i v37; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v38; // [rsp+E0h] [rbp-78h]
  __int16 v39; // [rsp+F0h] [rbp-68h]
  __m128i v40; // [rsp+100h] [rbp-58h] BYREF
  const char *v41; // [rsp+110h] [rbp-48h]
  __int16 v42; // [rsp+120h] [rbp-38h]

  if ( (_DWORD)a4 != 16 )
  {
    v36[0].m128i_i32[0] = a5;
    v37.m128i_i64[0] = (__int64)"load command ";
    v39 = 2307;
    v38 = v36[0].m128i_i64[0];
    v40.m128i_i64[0] = (__int64)&v37;
    v41 = " LC_TWOLEVEL_HINTS has incorrect cmdsize";
    v42 = 770;
    sub_21967F0(a1, v40.m128i_i64, (__int64)a3, a4);
    return a1;
  }
  if ( !*a6 )
  {
    v8 = *a3;
    if ( (unsigned __int64)v8 < sub_215DEC0(a2)
      || (v12 = sub_215DEC0(a2), v11 = (__int64)(v8 + 2), (unsigned __int64)(v8 + 2) > v10 + v12) )
    {
      v40.m128i_i64[0] = (__int64)"Structure read out-of-range";
      v42 = 259;
      sub_21967F0(v37.m128i_i64, v40.m128i_i64, v10, v11);
      v31 |= 1u;
      v30[0] = 0;
      *a1 = v37.m128i_i64[0];
    }
    else
    {
      v13 = *v8;
      v14 = v8[1];
      v15 = *(unsigned int *)(a2 + 8);
      if ( (unsigned int)v15 <= 0x14 )
      {
        v16 = 1398784;
        if ( _bittest64(&v16, v15) )
        {
          v13 = _byteswap_ulong(v13) | ((unsigned __int64)_byteswap_ulong(HIDWORD(v13)) << 32);
          v14 = _byteswap_ulong(v14) | ((unsigned __int64)_byteswap_ulong(HIDWORD(v14)) << 32);
        }
      }
      v17 = (unsigned int)v14;
      v31 &= ~1u;
      v30[1] = v14;
      v18 = HIDWORD(v14);
      v30[0] = v13;
      sub_215DEC0(a2);
      if ( v19 < v17 )
      {
        v34[0].m128i_i32[0] = a5;
        v37.m128i_i64[0] = (__int64)" extends past the end of the file";
        v22 = "offset field of LC_TWOLEVEL_HINTS command ";
        v39 = 259;
        v35 = 265;
      }
      else
      {
        v21 = 4LL * (unsigned int)v18;
        if ( v19 >= v17 + v21 )
        {
          sub_2197C60(v40.m128i_i64, a7, v17, v21, "two level hints");
          if ( v40.m128i_i64[0] )
          {
            *a1 = v40.m128i_i64[0];
          }
          else
          {
            *a6 = *a3;
            *a1 = 0;
          }
          goto LABEL_16;
        }
        v20 = 265;
        v34[0].m128i_i32[0] = a5;
        v39 = 259;
        v35 = 265;
        v37.m128i_i64[0] = (__int64)" extends past the end of the file";
        v22 = "offset field plus nhints times sizeof(struct twolevel_hint) field of LC_TWOLEVEL_HINTS command ";
      }
      v32[0].m128i_i64[0] = (__int64)v22;
      v33 = 259;
      sub_A41580(v36, v32, v34, v20, a5, (__int64)a6);
      sub_A41580(&v40, v36, &v37, v23, v24, v25);
      sub_21967F0(a1, v40.m128i_i64, v26, v27);
    }
LABEL_16:
    sub_219CC10(v30);
    return a1;
  }
  v40.m128i_i64[0] = (__int64)"more than one LC_TWOLEVEL_HINTS command";
  v42 = 259;
  sub_21967F0(a1, v40.m128i_i64, (__int64)a3, a4);
  return a1;
}
