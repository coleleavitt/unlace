/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100024780
// Address: 0x0000000100024780

//----- (0000000100024780) ----------------------------------------------------
__int64 __fastcall sub_100024780(__int64 a1, __int64 a2)
{
  char *v2; // rdi
  _OWORD v4[2]; // [rsp+0h] [rbp-30h] BYREF

  memset(v4, 0, 24);
  if ( *(_QWORD *)(a1 + 16) )
    v2 = *(char **)(a1 + 8);
  else
    v2 = (char *)_s1;
  qgetenv(v2, (__int64)v4);
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)&v4[0];
  *(_OWORD *)(a2 + 16) = *(_OWORD *)((char *)v4 + 8);
  return 0;
}
