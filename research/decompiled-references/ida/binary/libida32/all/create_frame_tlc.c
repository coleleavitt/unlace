__int64 __fastcall create_frame_tlc(_BYTE *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  size_t v5; // r13
  bool v6; // zf
  void *v8; // rax
  const void *v9; // rsi

  v4 = operator new(0xA8u);
  *(_QWORD *)(v4 + 8) = 0;
  *(_QWORD *)(v4 + 32) = 0;
  *(_DWORD *)(v4 + 56) = 1;
  *(_QWORD *)(v4 + 64) = 0;
  *(_QWORD *)(v4 + 88) = 0;
  *(_WORD *)(v4 + 112) = 3;
  *(_OWORD *)(v4 + 16) = 0;
  *(_OWORD *)(v4 + 40) = 0;
  *(_OWORD *)(v4 + 72) = 0;
  *(_OWORD *)(v4 + 96) = 0;
  *(_QWORD *)(v4 + 120) = a3;
  v5 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)v4 = &off_2B04690;
  *(_QWORD *)(v4 + 128) = 0;
  *(_QWORD *)(v4 + 136) = 0;
  *(_OWORD *)(v4 + 144) = 0;
  if ( v5 )
  {
    v8 = (void *)qalloc_or_throw(v5, (const char *)a2);
    *(_QWORD *)(v4 + 136) = v8;
    v9 = *(const void **)a2;
    *(_QWORD *)(v4 + 152) = v5;
    memcpy(v8, v9, v5);
    *(_QWORD *)(v4 + 144) = v5;
  }
  v6 = *a1 == 0;
  *(_BYTE *)(v4 + 160) = 1;
  if ( v6 && (unsigned __int8)sub_53D190(v4 + 128) )
  {
    *(_BYTE *)(v4 + 58) = 1;
    return v4;
  }
  else
  {
    copy_tinfo_t(v4 + 128);
    return v4;
  }
}

