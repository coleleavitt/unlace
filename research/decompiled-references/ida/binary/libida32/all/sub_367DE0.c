__int64 __fastcall sub_367DE0(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  char fixup; // dl
  int v5; // eax
  _QWORD v7[2]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v8; // [rsp+10h] [rbp-18h]
  unsigned __int64 v9; // [rsp+18h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  v3 = *(unsigned int *)(a1 + 8);
  v7[1] = 0xFFFFFFFF00000000LL;
  v7[0] = 0;
  v8 = 0;
  fixup = get_fixup(v7, v3);
  v5 = HIDWORD(v8);
  if ( !fixup )
    v5 = 0;
  *(_DWORD *)(a2 + 8) = v5;
  return 0;
}

