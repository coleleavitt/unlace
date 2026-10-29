bool __fastcall sub_5CD7B0(__int64 a1, __int64 a2)
{
  char v2; // al
  char v3; // al
  char *v5; // rax
  char *v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v6[1] = (char *)__readfsqword(0x28u);
  v2 = *(_BYTE *)(a2 + 186);
  v6[0] = nullptr;
  v3 = v2 & 0x3F;
  if ( v3 == 61 )
  {
    if ( (unsigned int)get_named_type(*(_QWORD *)(a1 + 240), *(_QWORD *)(a2 + 72), 1, (int)v6, 0, 0, 0, 0, 0)
      && (v5 = sub_54F0B0(*(_QWORD *)(a1 + 240), v6[0], 0, 0), (v6[0] = v5) != nullptr) )
    {
      v3 = *v5 & 0x3F;
    }
    else
    {
      v3 = *(_BYTE *)(a2 + 186) & 0x3F;
    }
  }
  return v3 == 1;
}

