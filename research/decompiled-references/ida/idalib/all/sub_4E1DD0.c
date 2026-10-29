__int64 __fastcall sub_4E1DD0(__int64 a1, __m128i *a2, unsigned __int64 a3, int a4)
{
  __int64 v6; // rdi
  char v8; // al
  __int64 v9; // rdx
  __int64 result; // rax
  __int32 v11; // eax
  unsigned __int8 v12; // al
  unsigned __int8 v13; // al
  unsigned __int8 v14; // [rsp+Fh] [rbp-219h]
  unsigned __int8 v15; // [rsp+Fh] [rbp-219h]
  unsigned __int8 v16; // [rsp+Fh] [rbp-219h]
  __int64 v17; // [rsp+10h] [rbp-218h] BYREF
  __int64 v18; // [rsp+18h] [rbp-210h] BYREF
  __int128 v19; // [rsp+20h] [rbp-208h] BYREF
  void *v20; // [rsp+30h] [rbp-1F8h]
  __int128 v21; // [rsp+38h] [rbp-1F0h]
  void *ptr; // [rsp+48h] [rbp-1E0h]
  __int128 v23; // [rsp+50h] [rbp-1D8h]
  _OWORD v24[3]; // [rsp+60h] [rbp-1C8h] BYREF
  __int64 v25; // [rsp+90h] [rbp-198h]
  int v26; // [rsp+98h] [rbp-190h]
  __int64 v27; // [rsp+A0h] [rbp-188h]
  char v28; // [rsp+A8h] [rbp-180h]
  __m128i v29; // [rsp+B0h] [rbp-178h] BYREF
  __m128i v30[16]; // [rsp+C0h] [rbp-168h] BYREF
  unsigned __int8 v31[40]; // [rsp+1C0h] [rbp-68h] BYREF
  unsigned __int64 v32; // [rsp+1E8h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 1672);
  v32 = __readfsqword(0x28u);
  v8 = sub_6BB290(v6);
  if ( a4 == 9 && v8 != 1 )
  {
    v19 = 0;
    getinf_buf(26, &v19, 16);
    if ( a3 >= (unsigned __int64)v19 && a3 < *((_QWORD *)&v19 + 1) )
    {
      v19 = 0;
      v17 = 0;
      v20 = nullptr;
      ptr = nullptr;
      v25 = 1;
      v26 = -1;
      v27 = 0;
      v28 = 0;
      v21 = 0;
      v23 = 0;
      v24[0] = 0;
      if ( get_udm_by_tid(&v17, &v19, a3) != -1 )
      {
        v12 = sub_6BEEC0(*(_QWORD *)(a1 + 1672), &v18, &v29, &v19, a3);
        if ( v12 )
        {
          if ( (v18 & 0xF00000) == 0x500000 )
          {
            *a2 = _mm_load_si128(&v29);
            a2[1] = _mm_load_si128(v30);
          }
          else
          {
            v12 = 0;
          }
        }
        v14 = v12;
        clear_tinfo_t(v24);
        v13 = v14;
        if ( ptr )
        {
          *(_QWORD *)&v23 = 0;
          qfree(ptr);
          v13 = v14;
        }
        if ( v20 )
        {
          v15 = v13;
          *(_QWORD *)&v21 = 0;
          qfree(v20);
          v13 = v15;
        }
        v16 = v13;
        clear_tinfo_t(&v17);
        return v16;
      }
      clear_tinfo_t(v24);
      if ( ptr )
      {
        *(_QWORD *)&v23 = 0;
        qfree(ptr);
      }
      if ( v20 )
      {
        *(_QWORD *)&v21 = 0;
        qfree(v20);
      }
      clear_tinfo_t(&v17);
    }
  }
  *(_QWORD *)&v19 = sub_3BDD60(*(_QWORD **)(a1 + 1672), a3);
  v9 = sub_7BE950(&v19, a1, a4, v31, 33, 83);
  result = 0;
  if ( v9 > 0 )
  {
    sub_4E1C10((__int64)a2, v31, v9);
    v11 = a2[1].m128i_i32[2];
    if ( (v11 & 0x10) != 0 )
    {
      a2->m128i_i64[1] = sub_631AD0(a1, 93);
      return 1;
    }
    else
    {
      if ( (v11 & 0x1000) != 0 )
        a2->m128i_i64[1] = a3;
      return 1;
    }
  }
  return result;
}
