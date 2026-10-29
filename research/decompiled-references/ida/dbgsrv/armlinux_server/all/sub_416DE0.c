/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_416DE0
// Address: 0x0000000000416DE0

//----- (0000000000416DE0) ----------------------------------------------------
__int64 __fastcall sub_416DE0(
        __int64 a1,
        const char *a2,
        __int64 a3,
        __int64 *a4,
        _BYTE *a5,
        char a6,
        char *a7,
        unsigned int a8)
{
  int v9; // w20
  __int64 v11; // [xsp+30h] [xbp-10h] BYREF

  v9 = sub_45C368(a1, a2, a3, a4, a5, a6, a7, a8, &v11);
  if ( v9 > 0 && v11 && !(unsigned __int8)sub_416400(a1, v11, 0) )
  {
    v9 = -2;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, 0);
  }
  return (unsigned int)v9;
}
