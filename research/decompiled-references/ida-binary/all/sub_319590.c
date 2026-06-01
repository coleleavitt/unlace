unsigned __int64 __fastcall sub_319590(
        const char *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __m128 si128; // xmm0
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __m128 v13; // xmm4
  __m128 v14; // xmm5
  __int64 v15; // rsi
  const char *v16; // rdx
  const char *v17; // rsi
  __int64 file_ext; // rax
  __int64 extlang; // rax
  __int64 v21; // rbp
  unsigned __int8 (__fastcall *v22)(const char *, _QWORD, __int64 *); // rax
  __int64 v23; // [rsp+0h] [rbp-38h] BYREF
  __int128 v24; // [rsp+8h] [rbp-30h]
  unsigned __int64 v25; // [rsp+18h] [rbp-20h]

  si128 = 0;
  v25 = __readfsqword(0x28u);
  v23 = 0;
  v24 = 0;
  if ( !(unsigned __int8)qfileexist(a1) )
  {
    v15 = v23;
    if ( *((_QWORD *)&v24 + 1) <= 0x15u )
    {
      v23 = qvector_reserve(&v23, v23, 22, 1);
      v15 = v23;
    }
    si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DCFD0);
    *(_QWORD *)&v24 = 22;
    *(__m128 *)v15 = si128;
    *(_QWORD *)(v15 + 13) = 0x747369786520746FLL;
    *(_BYTE *)(v23 + 21) = 0;
    goto LABEL_5;
  }
  sub_3185D0(1, a1);
  file_ext = get_file_ext(a1);
  extlang = find_extlang(file_ext, 0);
  v21 = extlang;
  if ( extlang )
  {
    v22 = *(unsigned __int8 (__fastcall **)(const char *, _QWORD, __int64 *))(extlang + 48);
    if ( v22 && (*(_BYTE *)(v21 + 8) & 1) == 0 )
    {
      v17 = nullptr;
      if ( v22(a1, 0, &v23) )
        goto LABEL_15;
      goto LABEL_17;
    }
    if ( !(unsigned __int8)compile_idc_file(a1, &v23, 3) )
    {
LABEL_17:
      --*(_DWORD *)(v21 + 12);
      goto LABEL_5;
    }
  }
  else if ( !(unsigned __int8)compile_idc_file(a1, &v23, 3) )
  {
    goto LABEL_5;
  }
  v17 = "main";
  if ( (unsigned __int8)call_idc_func(0, "main", 0, 0, &v23, 0) )
  {
    if ( !v21 )
      goto LABEL_8;
LABEL_15:
    --*(_DWORD *)(v21 + 12);
    goto LABEL_8;
  }
  if ( v21 )
    goto LABEL_17;
LABEL_5:
  v16 = &s1;
  if ( (_QWORD)v24 )
    v16 = (const char *)v23;
  v17 = a1;
  sub_169630((int)"%s: %s", (__int64)a1, (__int64)v16, v10, v11, v12, si128, a3, a4, a5, v13, v14, a8, a9, v23);
LABEL_8:
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23, v17);
  }
  return v25 - __readfsqword(0x28u);
}
