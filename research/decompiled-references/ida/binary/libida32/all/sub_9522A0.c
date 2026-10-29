__int64 __fastcall sub_9522A0(__int64 a1)
{
  __int64 v1; // rax
  bool v2; // cf

  v1 = 0;
  if ( &ZSTD_trace_decompress_begin )
    v1 = ZSTD_trace_decompress_begin();
  v2 = *(_DWORD *)(a1 + 30104) == 0;
  *(_QWORD *)(a1 + 95968) = v1;
  *(_QWORD *)(a1 + 29888) = 0;
  *(_QWORD *)(a1 + 29896) = 0;
  *(_QWORD *)(a1 + 29904) = 0;
  *(_QWORD *)(a1 + 29920) = v2 ? 5LL : 1LL;
  *(_QWORD *)(a1 + 29912) = 0;
  *(_QWORD *)(a1 + 26684) = 0x400000001LL;
  *(_DWORD *)(a1 + 10296) = 201326604;
  *(_DWORD *)(a1 + 26692) = 8;
  *(_QWORD *)a1 = a1 + 32;
  *(_QWORD *)(a1 + 8) = a1 + 6192;
  *(_QWORD *)(a1 + 16) = a1 + 4136;
  *(_QWORD *)(a1 + 24) = a1 + 10296;
  *(_DWORD *)(a1 + 30200) = 0;
  *(_QWORD *)(a1 + 29976) = 0;
  *(_QWORD *)(a1 + 29984) = 0;
  *(_QWORD *)(a1 + 29992) = 3;
  *(_QWORD *)(a1 + 30000) = 0;
  *(_DWORD *)(a1 + 30176) = 1;
  return 0;
}

