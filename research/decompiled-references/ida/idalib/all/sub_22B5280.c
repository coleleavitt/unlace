__int64 __fastcall sub_22B5280(void *a1, size_t a2)
{
  size_t v2; // rax
  size_t v3; // rax
  size_t v4; // rax
  size_t v5; // rax
  size_t v6; // rbx
  void *v7; // r13
  unsigned int v8; // r12d
  size_t v9; // rax
  size_t v11; // rax
  char *v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  void *s1; // [rsp+0h] [rbp+0h] BYREF
  size_t n; // [rsp+8h] [rbp+8h]
  void *vars10; // [rsp+10h] [rbp+10h] BYREF
  size_t vars18; // [rsp+18h] [rbp+18h]
  int vars24; // [rsp+24h] [rbp+24h]

  s1 = a1;
  n = a2;
  v2 = j__strlen("mips");
  if ( sub_9C7D00((__int64)&s1, "mips", v2) )
  {
    v3 = j__strlen("r6el");
    if ( sub_9EC680(&s1, "r6el", v3) )
      return 40;
    v4 = j__strlen("r6");
    if ( sub_9EC680(&s1, "r6", v4) )
      return 40;
  }
  v5 = j__strlen("powerpcspe");
  v6 = n;
  v7 = s1;
  if ( n == v5 )
  {
    v8 = 41;
    if ( !n || !memcmp(s1, "powerpcspe", n) )
      return v8;
    if ( v6 != j__strlen("arm64e") )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( v6 == j__strlen("arm64e") )
  {
    v8 = 35;
    if ( !v6 )
      return v8;
LABEL_8:
    v8 = 35;
    if ( !memcmp(v7, "arm64e", v6) )
      return v8;
LABEL_9:
    if ( v6 == j__strlen("arm64ec") )
      goto LABEL_10;
    goto LABEL_11;
  }
  if ( v6 == j__strlen("arm64ec") )
  {
    v8 = 36;
    if ( !v6 )
      return v8;
LABEL_10:
    v8 = 36;
    if ( !memcmp(v7, "arm64ec", v6) )
      return v8;
  }
LABEL_11:
  v9 = j__strlen("spirv");
  if ( sub_9C7D00((__int64)&s1, "spirv", v9) )
  {
    vars18 = v6;
    vars10 = v7;
    vars24 = 0;
    if ( sub_9EC680(&vars10, "v1.0", 4u) )
      return 42;
    if ( sub_9EC680(&vars10, "v1.1", 4u) )
      return 43;
    if ( sub_9EC680(&vars10, "v1.2", 4u) )
      return 44;
    if ( sub_9EC680(&vars10, "v1.3", 4u) )
      return 45;
    if ( sub_9EC680(&vars10, "v1.4", 4u) )
      return 46;
    if ( sub_9EC680(&vars10, "v1.5", 4u) )
      return 47;
    if ( sub_9EC680(&vars10, "v1.6", 4u) )
      return 48;
    return 0;
  }
  v11 = j__strlen("dxil");
  if ( sub_9C7D00((__int64)&s1, "dxil", v11) )
  {
    vars18 = v6;
    vars10 = v7;
    vars24 = 0;
    if ( sub_9EC680(&vars10, "v1.0", 4u) )
      return 49;
    if ( sub_9EC680(&vars10, "v1.1", 4u) )
      return 50;
    if ( sub_9EC680(&vars10, "v1.2", 4u) )
      return 51;
    if ( sub_9EC680(&vars10, "v1.3", 4u) )
      return 52;
    if ( sub_9EC680(&vars10, "v1.4", 4u) )
      return 53;
    if ( sub_9EC680(&vars10, "v1.5", 4u) )
      return 54;
    if ( sub_9EC680(&vars10, "v1.6", 4u) )
      return 55;
    if ( sub_9EC680(&vars10, "v1.7", 4u) )
      return 56;
    if ( sub_9EC680(&vars10, "v1.8", 4u) )
      return 57;
    return 0;
  }
  v12 = (char *)sub_229C150(s1, n);
  if ( v13 )
  {
    v8 = 0;
    v14 = (unsigned int)sub_229CAC0(v12, v13) - 2;
    if ( (unsigned int)v14 <= 0x27 )
      return byte_26FCC40[v14];
  }
  else
  {
    vars18 = v6;
    vars10 = v7;
    vars24 = 0;
    if ( sub_9EC680(&vars10, "kalimba3", 8u) )
      return 37;
    if ( sub_9EC680(&vars10, "kalimba4", 8u) )
      return 38;
    v8 = 0;
    if ( sub_9EC680(&vars10, "kalimba5", 8u) )
      return 39;
  }
  return v8;
}
