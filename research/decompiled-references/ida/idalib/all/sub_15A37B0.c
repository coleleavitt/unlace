__int64 __fastcall sub_15A37B0(__int64 a1, __int64 a2)
{
  size_t v2; // rdx
  const void *v3; // rbx
  size_t v4; // rdx
  size_t v5; // r13
  unsigned int v6; // eax
  size_t v7; // r14
  size_t v8; // rdx
  void *s1; // [rsp+0h] [rbp-78h] BYREF
  size_t n; // [rsp+8h] [rbp-70h]
  void *v12[2]; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v13[16]; // [rsp+20h] [rbp-58h] BYREF
  void *v14[2]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v15[56]; // [rsp+40h] [rbp-38h] BYREF

  v13[0] = 0;
  v12[1] = nullptr;
  v12[0] = v13;
  v14[0] = v15;
  v14[1] = nullptr;
  v15[0] = 0;
  s1 = (void *)sub_15A35B0(a1, v12);
  n = v2;
  v3 = (const void *)sub_15A35B0(a2, v14);
  v5 = v4;
  v6 = sub_22462B0(&s1, v3, v4);
  if ( v6 )
    goto LABEL_13;
  v7 = n;
  v8 = v5;
  if ( n <= v5 )
    v8 = n;
  if ( v8 && (v6 = memcmp(s1, v3, v8)) != 0 )
  {
LABEL_13:
    LODWORD(v3) = v6 >> 31;
  }
  else
  {
    LOBYTE(v3) = v7 < v5;
    if ( v7 == v5 )
      LODWORD(v3) = 0;
  }
  if ( v14[0] != v15 )
    operator delete(v14[0]);
  if ( v12[0] != v13 )
    operator delete(v12[0]);
  return (unsigned int)v3;
}
