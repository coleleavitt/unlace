__int64 __fastcall sub_76A240(__int64 a1, __int64 a2, char *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 idc_filename; // rbp
  __int64 v11; // rax
  __m128i v12; // xmm0
  char *file_ext; // rdi
  __int64 extlang; // rax
  __int64 v16; // r12
  unsigned __int8 (__fastcall *v17)(__int64, _QWORD, void **); // rax
  void *v18; // rdi
  __int64 v19; // rax
  __m128i v20; // xmm0
  __int64 v21; // rax
  __m128i si128; // xmm0
  void *ptr; // [rsp+10h] [rbp-1068h] BYREF
  __m128i v25; // [rsp+18h] [rbp-1060h] BYREF
  _BYTE v26[4104]; // [rsp+30h] [rbp-1048h] BYREF
  unsigned __int64 v27; // [rsp+1038h] [rbp-40h]

  idc_filename = a2;
  v27 = __readfsqword(0x28u);
  if ( (unsigned __int8)qfileexist(a2, a2)
    || !(unsigned __int8)qisabspath(a2) && (idc_filename = get_idc_filename(v26, 4096, a2)) != 0 )
  {
    file_ext = (char *)get_file_ext(idc_filename);
    if ( !file_ext )
      file_ext = (char *)"idc";
    extlang = find_extlang(file_ext);
    v16 = extlang;
    if ( !extlang )
    {
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      v21 = qvector_reserve(a1, 0, 23, 1);
      si128 = _mm_load_si128((const __m128i *)&xmmword_2384330);
      *(_QWORD *)a1 = v21;
      *(_QWORD *)(a1 + 8) = 23;
      *(__m128i *)v21 = si128;
      *(_QWORD *)(v21 + 14) = 0x6E6F69736E657478LL;
      *(_BYTE *)(*(_QWORD *)a1 + 22LL) = 0;
      return a1;
    }
    v17 = *(unsigned __int8 (__fastcall **)(__int64, _QWORD, void **))(extlang + 48);
    if ( v17 )
    {
      ptr = nullptr;
      v25 = 0;
      if ( v17(idc_filename, 0, &ptr) )
      {
        if ( !a3 )
        {
          if ( (*(_BYTE *)(v16 + 8) & 1) == 0 )
          {
LABEL_13:
            v18 = ptr;
            *(_QWORD *)a1 = 0;
            *(_OWORD *)(a1 + 8) = 0;
            if ( v18 )
            {
              v25.m128i_i64[0] = 0;
              qfree(v18);
            }
            goto LABEL_16;
          }
          a3 = "main";
        }
        if ( (*(unsigned __int8 (__fastcall **)(__int64, char *, __int64, __int64, void **))(v16 + 56))(
               a4,
               a3,
               a5,
               a6,
               &ptr) )
        {
          goto LABEL_13;
        }
      }
      *(_QWORD *)a1 = ptr;
      *(__m128i *)(a1 + 8) = _mm_loadu_si128(&v25);
    }
    else
    {
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      v19 = qvector_reserve(a1, 0, 22, 1);
      v20 = _mm_load_si128((const __m128i *)&xmmword_2384340);
      *(_QWORD *)a1 = v19;
      *(_QWORD *)(a1 + 8) = 22;
      *(__m128i *)v19 = v20;
      *(_QWORD *)(v19 + 13) = 0x7470697263732065LL;
      *(_BYTE *)(*(_QWORD *)a1 + 21LL) = 0;
    }
LABEL_16:
    --*(_DWORD *)(v16 + 12);
    return a1;
  }
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v11 = qvector_reserve(a1, 0, 22, 1);
  v12 = _mm_load_si128((const __m128i *)&xmmword_2384320);
  *(_QWORD *)a1 = v11;
  *(_QWORD *)(a1 + 8) = 22;
  *(__m128i *)v11 = v12;
  *(_QWORD *)(v11 + 13) = 0x656C696620657461LL;
  *(_BYTE *)(*(_QWORD *)a1 + 21LL) = 0;
  return a1;
}

