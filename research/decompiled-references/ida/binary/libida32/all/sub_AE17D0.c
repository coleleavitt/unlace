__int64 __fastcall sub_AE17D0(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // rax
  unsigned int *v5; // rax
  size_t v6; // rdx
  const char *v7; // rsi
  __int64 v8; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    sub_F83A90(a1);
  sub_971800(a2, "[RootSignature");
  sub_971800(a2, "(");
  v3 = sub_971800(a2, &byte_22CD811);
  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 )
  {
    v5 = *(unsigned int **)(v4 + 16);
    v6 = *v5;
    v7 = (const char *)(v5 + 4);
  }
  else
  {
    v7 = &byte_22CD811;
    v6 = j__strlen(&byte_22CD811);
  }
  v8 = sub_9717A0(v3, v7, v6);
  sub_971800(v8, &byte_22CD811);
  sub_971800(a2, ")");
  return sub_971800(a2, "]");
}

