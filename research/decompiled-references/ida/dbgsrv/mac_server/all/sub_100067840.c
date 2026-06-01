/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100067840
// Address: 0x0000000100067840

//----- (0000000100067840) ----------------------------------------------------
__int64 __fastcall sub_100067840(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax

  if ( *(_QWORD *)(a1 + 736) == a2 && *(_DWORD *)(a1 + 768) == a3 )
  {
    v3 = 0;
LABEL_10:
    *(_QWORD *)(a1 + 8 * v3 + 736) = -1;
    *(_DWORD *)(a1 + 788) &= ~((3 << (2 * v3)) | (983040 << (4 * v3)));
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 616LL))(a1);
  }
  if ( *(_QWORD *)(a1 + 744) == a2 )
  {
    v3 = 1;
    if ( *(_DWORD *)(a1 + 772) == a3 )
      goto LABEL_10;
  }
  if ( *(_QWORD *)(a1 + 752) == a2 )
  {
    v3 = 2;
    if ( *(_DWORD *)(a1 + 776) == a3 )
      goto LABEL_10;
  }
  if ( *(_QWORD *)(a1 + 760) == a2 )
  {
    v3 = 3;
    if ( *(_DWORD *)(a1 + 780) == a3 )
      goto LABEL_10;
  }
  return 0;
}
