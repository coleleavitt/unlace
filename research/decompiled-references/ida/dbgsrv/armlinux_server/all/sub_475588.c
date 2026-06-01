/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_475588
// Address: 0x0000000000475588

//----- (0000000000475588) ----------------------------------------------------
size_t __fastcall sub_475588(size_t a1)
{
  size_t v2; // x19
  size_t v3; // x20
  size_t v4; // x0
  size_t v5; // x0
  size_t v6; // x21
  unsigned __int64 v7; // x23
  unsigned __int64 v8; // x24
  size_t result; // x0
  unsigned __int64 v10; // x3
  char *v11; // x0

  v2 = a1 + 872;
  sub_45F050(a1);
  v3 = a1 + 1256;
  v4 = v2;
  *(_QWORD *)a1 = off_51E058;
  do
  {
    *(_DWORD *)v4 = 12;
    *(_QWORD *)(v4 + 8) = -1;
    *(_QWORD *)(v4 + 16) = 0;
    v4 += 24LL;
  }
  while ( v3 != v4 );
  v5 = a1 + 1256;
  v6 = a1 + 1640;
  do
  {
    *(_DWORD *)v5 = 12;
    *(_QWORD *)(v5 + 8) = -1;
    *(_QWORD *)(v5 + 16) = 0;
    v5 += 24LL;
  }
  while ( v6 != v5 );
  v7 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 1640) = -1;
  v8 = v7 + 4;
  if ( v7 < v7 + 4 )
  {
    v10 = v7;
    v11 = *(char **)(a1 + 488);
    if ( v8 > *(_QWORD *)(a1 + 504) )
    {
      v11 = (char *)sub_491288(a1 + 488, *(void **)(a1 + 488), v7 + 4, 1u);
      *(_QWORD *)(a1 + 488) = v11;
      v10 = *(_QWORD *)(a1 + 496);
    }
    memset(&v11[v10], 0, v8 - v10);
    *(_QWORD *)(a1 + 496) = v8;
  }
  else
  {
    *(_QWORD *)(a1 + 496) = 0x7FFFFFFFFFFFFFFFLL;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 488) + v7) = -403701264;
  sub_45E5F8(a1, "linux");
  result = v2;
  *(_QWORD *)(a1 + 864) = -1;
  do
  {
    *(_DWORD *)result = 12;
    *(_QWORD *)(result + 8) = -1;
    *(_QWORD *)(result + 16) = 0;
    result += 24LL;
  }
  while ( result != v3 );
  do
  {
    *(_DWORD *)result = 12;
    *(_QWORD *)(result + 8) = -1;
    *(_QWORD *)(result + 16) = 0;
    result += 24LL;
  }
  while ( v6 != result );
  return result;
}
// 51E058: using guessed type __int64 (__fastcall *off_51E058[4])();
