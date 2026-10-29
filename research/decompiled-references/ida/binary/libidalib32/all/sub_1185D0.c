unsigned __int64 __fastcall sub_1185D0(const char *a1)
{
  __int64 v1; // rsi
  const char *v2; // rdx
  __int64 extlang; // rax
  __int64 v5; // rbp
  unsigned __int8 (__fastcall *v6)(const char *, _QWORD, __int64 *); // rax
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  __int128 v8; // [rsp+8h] [rbp-30h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v7 = 0;
  v8 = 0;
  if ( !(unsigned __int8)qfileexist() )
  {
    v1 = v7;
    if ( *((_QWORD *)&v8 + 1) <= 0x15u )
    {
      v7 = qvector_reserve();
      v1 = v7;
    }
    *(_QWORD *)&v8 = 22;
    *(__m128i *)v1 = _mm_load_si128((const __m128i *)&xmmword_1D24E0);
    *(_QWORD *)(v1 + 13) = 0x747369786520746FLL;
    *(_BYTE *)(v7 + 21) = 0;
    goto LABEL_5;
  }
  sub_1175B0(1, a1);
  get_file_ext();
  extlang = find_extlang();
  v5 = extlang;
  if ( extlang )
  {
    v6 = *(unsigned __int8 (__fastcall **)(const char *, _QWORD, __int64 *))(extlang + 48);
    if ( v6 && (*(_BYTE *)(v5 + 8) & 1) == 0 )
    {
      if ( v6(a1, 0, &v7) )
        goto LABEL_15;
      goto LABEL_17;
    }
    if ( !(unsigned __int8)compile_idc_file() )
    {
LABEL_17:
      --*(_DWORD *)(v5 + 12);
      goto LABEL_5;
    }
  }
  else if ( !(unsigned __int8)compile_idc_file() )
  {
    goto LABEL_5;
  }
  if ( (unsigned __int8)call_idc_func() )
  {
    if ( !v5 )
      goto LABEL_8;
LABEL_15:
    --*(_DWORD *)(v5 + 12);
    goto LABEL_8;
  }
  if ( v5 )
    goto LABEL_17;
LABEL_5:
  v2 = s1;
  if ( (_QWORD)v8 )
    v2 = (const char *)v7;
  sub_92120((__int64)"%s: %s", a1, v2);
LABEL_8:
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree();
  }
  return v9 - __readfsqword(0x28u);
}

