/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400542D0
// Address: 0x00000001400542D0

//----- (00000001400542D0) ----------------------------------------------------
__int64 sub_1400542D0(char *a1, ...)
{
  FILE *v1; // rdi
  unsigned int v3; // ebx
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, a1);
  v1 = Stream;
  if ( !Stream )
    v1 = _acrt_iob_func(1u);
  v3 = sub_14005B130((__int64)v1, a1, (__int64)va);
  fflush(v1);
  return v3;
}
