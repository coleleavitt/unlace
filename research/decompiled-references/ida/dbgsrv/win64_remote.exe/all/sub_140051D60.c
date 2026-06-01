/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140051D60
// Address: 0x0000000140051D60

//----- (0000000140051D60) ----------------------------------------------------
__int64 __fastcall sub_140051D60(__int64 a1)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdx

  sub_140040500(a1);
  *(_QWORD *)a1 = off_140098790;
  *(_QWORD *)(a1 + 752) = -1;
  *(_QWORD *)(a1 + 760) = -1;
  *(_QWORD *)(a1 + 768) = -1;
  *(_DWORD *)(a1 + 776) = -1;
  v2 = *(_QWORD *)(a1 + 392);
  v3 = v2 + 1;
  if ( v2 + 1 < v2 )
    v3 = 0x7FFFFFFFFFFFFFFFLL;
  sub_140002EF0(a1 + 384, v3);
  *(_BYTE *)(v2 + *(_QWORD *)(a1 + 384)) = -52;
  *(_QWORD *)(a1 + 696) = -1;
  *(_QWORD *)(a1 + 728) = 0;
  *(_QWORD *)(a1 + 704) = -1;
  *(_QWORD *)(a1 + 712) = -1;
  *(_QWORD *)(a1 + 736) = 0;
  *(_QWORD *)(a1 + 720) = -1;
  *(_DWORD *)(a1 + 744) = 0;
  *(_DWORD *)(a1 + 748) = 256;
  sub_1400447A0(a1, "win32");
  return a1;
}
// 140098790: using guessed type __int64 (__fastcall *off_140098790[4])();
