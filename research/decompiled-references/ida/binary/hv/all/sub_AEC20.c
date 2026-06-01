unsigned __int64 __fastcall sub_AEC20(__int64 a1)
{
  unsigned __int64 v2; // [rsp+48h] [rbp-10h]

  v2 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 3736) && &ZSTD_trace_compress_end )
    ZSTD_trace_compress_end();
  *(_QWORD *)(a1 + 3736) = 0;
  return __readfsqword(0x28u) ^ v2;
}

