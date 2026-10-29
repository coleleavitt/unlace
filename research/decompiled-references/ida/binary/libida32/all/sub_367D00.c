__int64 __fastcall sub_367D00(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  char fixup; // dl
  int v5; // eax
  __int64 v7; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]
  __int64 v9; // [rsp+10h] [rbp-18h]
  unsigned __int64 v10; // [rsp+18h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  v3 = *(unsigned int *)(a1 + 8);
  v8 = 0xFFFFFFFF00000000LL;
  v7 = 0;
  v9 = 0;
  fixup = get_fixup(&v7, v3);
  v5 = -1;
  if ( fixup )
    v5 = HIDWORD(v8);
  *(_DWORD *)(a2 + 8) = v5;
  return 0;
}

