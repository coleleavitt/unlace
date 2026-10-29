__int64 __fastcall sub_4CA730(__int64 a1, __m128i *a2, unsigned int a3, unsigned int a4)
{
  __int64 v6; // rdi
  char v8; // al
  __int64 v9; // rdx
  __int64 result; // rax
  __int32 v11; // eax
  unsigned __int8 v12; // al
  unsigned __int8 v13; // al
  unsigned __int8 v14; // [rsp+Fh] [rbp-179h]
  unsigned __int8 v15; // [rsp+Fh] [rbp-179h]
  unsigned __int8 v16; // [rsp+Fh] [rbp-179h]
  __int64 v17; // [rsp+10h] [rbp-178h] BYREF
  __int64 v18; // [rsp+18h] [rbp-170h] BYREF
  __int128 v19; // [rsp+20h] [rbp-168h] BYREF
  void *v20; // [rsp+30h] [rbp-158h]
  __int128 v21; // [rsp+38h] [rbp-150h]
  void *ptr; // [rsp+48h] [rbp-140h]
  __int128 v23; // [rsp+50h] [rbp-138h]
  _OWORD v24[2]; // [rsp+60h] [rbp-128h] BYREF
  __int64 v25; // [rsp+80h] [rbp-108h]
  int v26; // [rsp+88h] [rbp-100h]
  __int64 v27; // [rsp+90h] [rbp-F8h]
  char v28; // [rsp+98h] [rbp-F0h]
  __m128i v29[9]; // [rsp+A0h] [rbp-E8h] BYREF
  unsigned __int8 v30[24]; // [rsp+130h] [rbp-58h] BYREF
  unsigned __int64 v31; // [rsp+148h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 1480);
  v31 = __readfsqword(0x28u);
  v8 = sub_69A8C0(v6);
  if ( a4 == 9 && v8 != 1 )
  {
    *(_QWORD *)&v19 = 0;
    getinf_buf(26, &v19, 8);
    if ( a3 >= (unsigned int)v19 && a3 < DWORD1(v19) )
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
        v12 = sub_69E400(*(_QWORD *)(a1 + 1480), &v18, v29, &v19, a3);
        if ( v12 )
        {
          if ( (v18 & 0xF00000) == 0x500000 )
            *a2 = _mm_load_si128(v29);
          else
            v12 = 0;
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
  LODWORD(v19) = sub_3B90A0(*(_QWORD **)(a1 + 1480), a3);
  v9 = sub_79B5C0(&v19, a1, a4, v30, 18, 83);
  result = 0;
  if ( v9 > 0 )
  {
    sub_4CA5F0((__int64)a2, v30, v9);
    v11 = a2->m128i_i32[3];
    if ( (v11 & 0x10) != 0 )
    {
      a2->m128i_i32[1] = sub_614FB0(a1, 93);
      return 1;
    }
    else
    {
      if ( (v11 & 0x1000) != 0 )
        a2->m128i_i32[1] = a3;
      return 1;
    }
  }
  return result;
}

