char *__fastcall ZSTD_estimateDStreamSize(char *a1)
{
  char *v1; // rbx
  __int64 v2; // rbp
  __int64 v3; // rax

  v1 = a1;
  v2 = ZSTD_decodingBufferSize_min(a1, -1);
  v3 = ZSTD_estimateDCtxSize();
  if ( a1 > (char *)&loc_20000 )
    v1 = (char *)&loc_20000;
  return &v1[v2 + v3];
}

