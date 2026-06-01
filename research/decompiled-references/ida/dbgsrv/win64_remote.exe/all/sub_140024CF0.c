/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140024CF0
// Address: 0x0000000140024CF0

//----- (0000000140024CF0) ----------------------------------------------------
__int64 __fastcall sub_140024CF0(__int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx

  v3 = *((int *)a1 + 2);
  if ( (v3 & 0x80000000) != 0LL )
    return sub_1400258A0(a2, ~(_DWORD)v3);
  v4 = *a1;
  if ( v4 && *(_DWORD *)v4 == 289621065 && v3 < *(_QWORD *)(v4 + 32) )
    return *(_QWORD *)(v4 + 24) + 32 * v3;
  else
    return 0;
}
