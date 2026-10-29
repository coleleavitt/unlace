/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EA1B4
// Address: 0x00000000000EA1B4

//----- (00000000000EA1B4) ----------------------------------------------------
__int64 __fastcall sub_EA1B4(__int64 result, __int64 a2)
{
  unsigned __int64 v2; // x8
  __int64 v3; // x0
  __int64 v4; // x9

  if ( *(_DWORD *)(a2 + 28) != -1 )
  {
    v2 = *(unsigned int *)(a2 + 24);
    if ( *(_QWORD *)(result + 24) <= v2 )
      return result;
    goto LABEL_3;
  }
  v4 = *(_QWORD *)(result + 24);
  v2 = 0;
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 28) = v4;
  if ( v4 )
  {
LABEL_3:
    v3 = *(_QWORD *)(*(_QWORD *)(result + 16) + 8 * v2);
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
  }
  return result;
}
