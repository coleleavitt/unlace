__int64 __fastcall sub_367C90(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  char fixup; // dl
  int v5; // eax
  _QWORD v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v7[3] = __readfsqword(0x28u);
  v3 = *(unsigned int *)(a1 + 8);
  v7[1] = 0xFFFFFFFF00000000LL;
  v7[0] = 0;
  v7[2] = 0;
  fixup = get_fixup(v7, v3);
  v5 = 0;
  if ( fixup )
    v5 = HIDWORD(v7[0]);
  *(_DWORD *)(a2 + 8) = v5;
  return 0;
}

