__int64 __fastcall sub_AE0BA0(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    sub_F83A90(a1);
  sub_971800(a2, "__attribute__((interrupt");
  sub_971800(a2, "(");
  v2 = j__strlen(&byte_22CD811);
  v3 = sub_9717A0(a2, &byte_22CD811, v2);
  v4 = sub_2257BD0(v3, *(unsigned int *)(a1 + 40));
  sub_971800(v4, &byte_22CD811);
  sub_971800(a2, ")");
  return sub_971800(a2, "))");
}

