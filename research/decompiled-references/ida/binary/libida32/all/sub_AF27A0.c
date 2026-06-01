__int64 __fastcall sub_AF27A0(__int64 a1, __int64 a2, __int64 a3)
{
  size_t v4; // rax
  size_t v5; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    sub_F83A90(a1);
  v4 = j__strlen("#pragma acc routine");
  sub_9717A0(a2, "#pragma acc routine", v4);
  sub_B8D550(a1, a2, a3);
  v5 = j__strlen("\n");
  return sub_9717A0(a2, "\n", v5);
}

