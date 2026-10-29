/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A78D0
// Address: 0x00000000000A78D0

//----- (00000000000A78D0) ----------------------------------------------------
__int64 __fastcall sub_A78D0(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // rax
  char v4; // dl

  if ( *(_QWORD *)(a1 + 736) == a2 && *(_DWORD *)(a1 + 768) == a3 )
  {
    v3 = (_QWORD *)(a1 + 736);
    v4 = 0;
LABEL_13:
    *v3 = -1;
    *(_DWORD *)(a1 + 788) &= ~((3 << (2 * v4)) | (15 << (4 * v4 + 16)));
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 616LL))(a1);
  }
  if ( *(_QWORD *)(a1 + 744) == a2 && *(_DWORD *)(a1 + 772) == a3 )
  {
    v3 = (_QWORD *)(a1 + 744);
    v4 = 1;
    goto LABEL_13;
  }
  if ( *(_QWORD *)(a1 + 752) == a2 && *(_DWORD *)(a1 + 776) == a3 )
  {
    v3 = (_QWORD *)(a1 + 752);
    v4 = 2;
    goto LABEL_13;
  }
  if ( *(_QWORD *)(a1 + 760) == a2 && *(_DWORD *)(a1 + 780) == a3 )
  {
    v3 = (_QWORD *)(a1 + 760);
    v4 = 3;
    goto LABEL_13;
  }
  return 0;
}
