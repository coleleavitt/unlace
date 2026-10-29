__int64 __fastcall sub_AD78A0(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  size_t v3; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    sub_F83A90(a1);
  v2 = j__strlen("__attribute__((swift_bridged_typedef");
  sub_9717A0(a2, "__attribute__((swift_bridged_typedef", v2);
  v3 = j__strlen("))");
  return sub_9717A0(a2, "))", v3);
}

