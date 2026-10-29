/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1BD54
// Address: 0x0001BD54

//----- (0001BD54) --------------------------------------------------------
int __fastcall sub_1BD54(int a1)
{
  sub_6A788((_DWORD *)a1);
  *(_DWORD *)(a1 + 796) = 0;
  *(_DWORD *)(a1 + 800) = 0;
  *(_BYTE *)(a1 + 808) = 0;
  *(_DWORD *)(a1 + 812) = 0;
  *(_BYTE *)(a1 + 820) = 0;
  *(_DWORD *)(a1 + 824) = 0;
  *(_BYTE *)(a1 + 832) = 0;
  *(_BYTE *)(a1 + 836) = 0;
  *(_DWORD *)(a1 + 892) = 0;
  *(_DWORD *)(a1 + 896) = 0;
  *(_DWORD *)a1 = &off_D6130;
  memset((void *)(a1 + 840), 0, 0x30u);
  *(_DWORD *)(a1 + 904) = 0;
  *(_DWORD *)(a1 + 888) = a1 + 892;
  *(_DWORD *)(a1 + 908) = 0;
  *(_DWORD *)(a1 + 900) = a1 + 904;
  *(_DWORD *)(a1 + 916) = 0;
  *(_DWORD *)(a1 + 920) = 0;
  *(_DWORD *)(a1 + 912) = a1 + 916;
  memset((void *)(a1 + 924), 0, 0x29u);
  *(_DWORD *)(a1 + 972) = -1;
  *(_DWORD *)(a1 + 968) = -1;
  *(_DWORD *)(a1 + 992) = 0;
  *(_DWORD *)(a1 + 988) = 0;
  *(_DWORD *)(a1 + 984) = 0;
  *(_DWORD *)(a1 + 980) = 0;
  *(_DWORD *)(a1 + 976) = 0;
  *(_DWORD *)(a1 + 996) = -1;
  *(_DWORD *)(a1 + 1004) = 0;
  *(_DWORD *)(a1 + 1008) = 0;
  *(_DWORD *)(a1 + 1000) = a1 + 1004;
  *(_BYTE *)(a1 + 1022) = 0;
  *(_WORD *)(a1 + 1020) = 0;
  *(_DWORD *)(a1 + 1016) = 0;
  *(_DWORD *)(a1 + 1012) = 0;
  *(_DWORD *)(a1 + 1044) = 0;
  *(_DWORD *)(a1 + 1040) = 0;
  *(_DWORD *)(a1 + 1036) = 0;
  *(_DWORD *)(a1 + 1032) = 0;
  *(_DWORD *)(a1 + 1028) = 0;
  *(_DWORD *)(a1 + 1024) = 0;
  *(_DWORD *)(a1 + 792) = -1;
  *(_DWORD *)(a1 + 1048) = -1;
  sub_66C94(a1, "linux");
  return a1;
}
// D6130: using guessed type _UNKNOWN *off_D6130;
