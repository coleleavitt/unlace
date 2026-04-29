unsigned __int64 __fastcall sub_30E0A0(__int64 a1, const char *a2)
{
  __int64 (*v2)(); // rcx
  __int64 v3; // rbp
  __int64 *v5; // rdi
  __int64 v6; // rax
  __int64 (*v7)(); // rdx
  __int64 (*v8)(); // rax
  __int64 (*v9)(); // rdx
  __m128i v11; // xmm0
  _QWORD v12[2]; // [rsp+0h] [rbp-38h] BYREF
  __int16 v13; // [rsp+10h] [rbp-28h]
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v2 = sub_30DB50;
  v3 = *(_QWORD *)(a1 + 8);
  v14 = __readfsqword(0x28u);
  v5 = *(__int64 **)(v3 + 112);
  v6 = *v5;
  v7 = *(__int64 (**)())(*v5 + 384);
  if ( v7 != sub_30DB50 )
  {
    a2 = (const char *)(a1 + 56);
    if ( ((unsigned __int8 (__fastcall *)(__int64 *, __int64))v7)(v5, a1 + 56) )
    {
      a2 = "runtime.duffcopy";
      sub_30DE90((_QWORD *)(a1 + 24), "runtime.duffcopy", *(_QWORD *)(a1 + 80));
    }
    v5 = *(__int64 **)(v3 + 112);
    v6 = *v5;
  }
  v8 = *(__int64 (**)())(v6 + 392);
  v9 = sub_30DB60;
  if ( v8 != sub_30DB60 )
  {
    a2 = (const char *)(a1 + 120);
    if ( ((unsigned __int8 (__fastcall *)(__int64 *, __int64))v8)(v5, a1 + 120) )
    {
      v11 = _mm_loadu_si128((const __m128i *)(a1 + 136));
      a2 = "runtime.duffzero";
      v5 = (__int64 *)(a1 + 88);
      sub_30DE90((_QWORD *)(a1 + 88), "runtime.duffzero", _mm_add_epi64(v11, _mm_srli_si128(v11, 8)).m128i_i64[0]);
    }
  }
  v13 = 256;
  v12[1] = "RTYPE";
  v12[0] = get_idati(v5, a2, v9, v2);
  create_tinfo(a1 + 152, 61, 61, v12);
  return v14 - __readfsqword(0x28u);
}
