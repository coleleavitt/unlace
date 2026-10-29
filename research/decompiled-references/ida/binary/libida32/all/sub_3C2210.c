unsigned __int64 __fastcall sub_3C2210(__int64 a1)
{
  __int64 v3; // rdi
  __m128i v4; // xmm0
  char v5[4104]; // [rsp+0h] [rbp-1038h] BYREF
  unsigned __int64 v6; // [rsp+1008h] [rbp-30h]

  v6 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 1528) )
  {
    get_root_filename(v5);
    sub_4EFFD0(a1 + 1288, v5, "$ sourcefiles", 16);
    v3 = *(_QWORD *)(a1 + 1328);
    v4 = _mm_loadl_epi64((const __m128i *)off_2AFCFF8);
    *(_QWORD *)(a1 + 1352) = sub_3B3650;
    *(__m128i *)(a1 + 1336) = _mm_unpacklo_epi64(v4, (__m128i)(unsigned __int64)sub_3B38A0);
    sub_4F0B10(v3, a1 + 1288, v5, "$ sourcefiles", 16);
    *(_BYTE *)(a1 + 1528) = 1;
  }
  return v6 - __readfsqword(0x28u);
}

