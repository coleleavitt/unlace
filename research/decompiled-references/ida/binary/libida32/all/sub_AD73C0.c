__int64 __fastcall sub_AD73C0(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  size_t v3; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    sub_F83A90(a1);
  v2 = j__strlen("__declspec(thread");
  sub_9717A0(a2, "__declspec(thread", v2);
  v3 = j__strlen(")");
  return sub_9717A0(a2, ")", v3);
}

