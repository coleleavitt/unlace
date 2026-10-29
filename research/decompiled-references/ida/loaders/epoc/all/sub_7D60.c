__int64 __fastcall sub_7D60(__int64 a1)
{
  __int64 i; // rax
  int v2; // ebp
  char v4[16]; // [rsp+0h] [rbp-38h] BYREF
  char v5[8]; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  for ( i = 0; i != 6; ++i )
  {
    v5[i] = *(_BYTE *)(a1 + 2 * i);
    v4[i] = *(_BYTE *)(a1 + 2 * i + 1);
  }
  v2 = (unsigned __int16)sub_7C80(0, v5, 6);
  return v2 | ((unsigned int)sub_7C80(0, v4, 6) << 16);
}

