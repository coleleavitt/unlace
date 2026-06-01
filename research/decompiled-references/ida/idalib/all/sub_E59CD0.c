void __fastcall sub_E59CD0(__int64 a1, int *a2)
{
  int v3; // eax
  __int64 v4; // r13
  const char *v5; // rsi
  size_t v6; // rax
  char v7; // r12
  size_t v8; // rax
  char v9; // r12
  size_t v10; // rax
  unsigned __int8 v11; // cl
  char v12; // bl
  size_t v13; // rax
  size_t v14; // rax
  __int16 *v15; // [rsp+0h] [rbp-68h] BYREF
  __int64 v16; // [rsp+8h] [rbp-60h]
  __int16 v17; // [rsp+10h] [rbp-58h] BYREF
  bool v18; // [rsp+18h] [rbp-50h]

  if ( !a2 )
    return;
  v3 = *a2;
  if ( *a2 == 1 )
  {
    v4 = a1 + 1048;
    v5 = "SimpleRequirement";
    goto LABEL_7;
  }
  switch ( v3 )
  {
    case 0:
      v4 = a1 + 1048;
      v5 = "TypeRequirement";
      goto LABEL_7;
    case 2:
      v4 = a1 + 1048;
      v5 = "CompoundRequirement";
      goto LABEL_7;
    case 3:
      v4 = a1 + 1048;
      v5 = "NestedRequirement";
LABEL_7:
      sub_E598C0((__int64)&v17, v5);
      v6 = j__strlen("kind");
      v15 = &v17;
      v16 = v4;
      sub_E585D0(v4, (__int64)"kind", v6, (__int64)sub_E58580, &v15);
      sub_222B2A0(&v17);
      v3 = *a2;
      break;
  }
  if ( (unsigned int)(v3 - 1) <= 1 )
  {
    v7 = a2[4] != 0;
    v8 = j__strlen("noexcept");
    sub_E59B90(a1, (__int64)"noexcept", v8, v7);
  }
  v9 = *((_BYTE *)a2 + 4);
  v10 = j__strlen("isDependent");
  sub_E59B90(a1, (__int64)"isDependent", v10, v9 & 1);
  v11 = *((_BYTE *)a2 + 4);
  if ( (v11 & 1) == 0 )
  {
    v17 = 1;
    v18 = (v11 & 4) != 0;
    v14 = j__strlen("satisfied");
    v15 = &v17;
    v16 = a1 + 1048;
    sub_E585D0(a1 + 1048, (__int64)"satisfied", v14, (__int64)sub_E58580, &v15);
    sub_222B2A0(&v17);
    v11 = *((_BYTE *)a2 + 4);
  }
  v12 = v11 >> 1;
  v13 = j__strlen("containsUnexpandedPack");
  sub_E59B90(a1, (__int64)"containsUnexpandedPack", v13, v12 & 1);
}
