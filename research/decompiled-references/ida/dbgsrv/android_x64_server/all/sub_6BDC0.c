/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6BDC0
// Address: 0x000000000006BDC0

//----- (000000000006BDC0) ----------------------------------------------------
unsigned __int64 __fastcall sub_6BDC0(_QWORD *a1, const void *a2, size_t a3)
{
  __int64 v4; // rbx
  char v6; // [rsp+Fh] [rbp-29h] BYREF
  unsigned __int64 v7; // [rsp+10h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  if ( a3 )
  {
    v4 = a1[1];
    v6 = 0;
    sub_5E330((__int64)a1, v4 + a3, &v6);
    memcpy((void *)(*a1 + v4), a2, a3);
  }
  return __readfsqword(0x28u);
}
