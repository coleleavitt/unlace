__int64 __fastcall sub_B048E0(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    sub_FA77D0(a1);
  sub_995540(a2, "__attribute__((interrupt");
  sub_995540(a2, "(");
  v2 = j__strlen(&byte_22F0C30);
  v3 = sub_9954E0(a2, &byte_22F0C30, v2);
  v4 = sub_227B910(v3, *(unsigned int *)(a1 + 40));
  sub_995540(v4, &byte_22F0C30);
  sub_995540(a2, ")");
  return sub_995540(a2, "))");
}
