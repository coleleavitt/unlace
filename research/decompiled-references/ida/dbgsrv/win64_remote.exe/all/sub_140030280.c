/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140030280
// Address: 0x0000000140030280

//----- (0000000140030280) ----------------------------------------------------
__int64 __fastcall sub_140030280(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  const char *v4; // rdx
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 208) != 1 )
    return 0;
  v2 = *(int *)(*(_QWORD *)(a1 + 176) + 16LL);
  if ( !(_DWORD)v2 )
    return 0;
  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 64LL) + 8 * v2);
  if ( *(_QWORD *)(v3 + 32) )
    v4 = *(const char **)(v3 + 24);
  else
    v4 = Str1;
  result = sub_140032C30(a1, v4);
  if ( !(_DWORD)result )
    return sub_1400303C0((_QWORD *)a1);
  return result;
}
