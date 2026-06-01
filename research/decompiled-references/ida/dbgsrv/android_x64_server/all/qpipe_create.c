/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qpipe_create
// Address: 0x00000000000CC690

//----- (00000000000CC690) ----------------------------------------------------
__int64 __fastcall qpipe_create(_DWORD *a1)
{
  int v2[2]; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v3; // [rsp+8h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  if ( pipe(v2) )
    return *(unsigned int *)__errno(v2);
  *a1 = v2[0];
  a1[1] = v2[1];
  return 0;
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
