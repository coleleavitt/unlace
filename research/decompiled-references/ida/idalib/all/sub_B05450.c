__int64 __fastcall sub_B05450(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // rax
  unsigned int *v5; // rax
  size_t v6; // rdx
  const char *v7; // rsi
  __int64 v8; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    sub_FA77D0(a1);
  sub_995540(a2, "__attribute__((ns_error_domain");
  sub_995540(a2, "(");
  v3 = sub_995540(a2, &byte_22F0C30);
  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 )
  {
    v5 = *(unsigned int **)(v4 + 16);
    v6 = *v5;
    v7 = (const char *)(v5 + 4);
  }
  else
  {
    v7 = &byte_22F0C30;
    v6 = j__strlen(&byte_22F0C30);
  }
  v8 = sub_9954E0(v3, v7, v6);
  sub_995540(v8, &byte_22F0C30);
  sub_995540(a2, ")");
  return sub_995540(a2, "))");
}
