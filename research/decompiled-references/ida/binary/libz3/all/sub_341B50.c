__int64 __fastcall sub_341B50(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _QWORD v7[8]; // [rsp+18h] [rbp-40h] BYREF

  sub_E1F060();
  *(_QWORD *)a1 = &off_1C64788;
  *(_QWORD *)(a1 + 72) = off_1C64940;
  sub_2527E0(a1 + 120, a3);
  v7[0] = 0;
  sub_8E4C30(a1 + 880, a2, a1 + 120, v7);
  sub_18572D0(v7);
  *(_QWORD *)(a1 + 888) = a2;
  *(_QWORD *)(a1 + 896) = a4;
  *(_QWORD *)(a1 + 944) = 0;
  *(_QWORD *)(a1 + 952) = a2;
  *(_QWORD *)(a1 + 960) = 0;
  *(_BYTE *)(a1 + 968) = 0;
  *(_WORD *)(a1 + 992) = 1;
  *(_OWORD *)(a1 + 912) = 0;
  *(_OWORD *)(a1 + 928) = 0;
  *(_OWORD *)(a1 + 976) = 0;
  sub_E5E9C0(a1, a3);
  result = sub_15B6B30(a1 + 120, a3);
  if ( *(_DWORD *)(a1 + 700) == 1 )
    *(_DWORD *)(a1 + 596) = 0;
  *(_BYTE *)(a1 + 376) = 1;
  *(_DWORD *)(a1 + 660) = 1;
  return result;
}

