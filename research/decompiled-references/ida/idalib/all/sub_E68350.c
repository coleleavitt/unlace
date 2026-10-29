__int64 __fastcall sub_E68350(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  size_t v4; // rax
  __int64 *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  size_t v8; // rax
  char v9; // al
  const char *v10; // rsi
  size_t v11; // rax
  __int64 v12; // rbx
  size_t v13; // rax
  _QWORD v15[2]; // [rsp+0h] [rbp-88h] BYREF
  __int16 *v16; // [rsp+10h] [rbp-78h] BYREF
  __int64 v17; // [rsp+18h] [rbp-70h]
  int v18; // [rsp+20h] [rbp-68h]
  __int16 v19; // [rsp+30h] [rbp-58h] BYREF
  __int64 v20; // [rsp+38h] [rbp-50h]
  __int64 v21; // [rsp+40h] [rbp-48h]
  int v22; // [rsp+48h] [rbp-40h]

  v3 = a1 + 1048;
  sub_E673B0((__int64)&v16, a1, a2[2]);
  v19 = 7;
  v20 = (__int64)v16;
  v16 = nullptr;
  v21 = v17;
  v17 = 0;
  v22 = v18;
  v18 = 0;
  v4 = j__strlen("referencedDecl");
  sub_222AB70(a1 + 1048, "referencedDecl", v4);
  sub_222CAC0(a1 + 1048, &v19);
  sub_2229BF0(a1 + 1048);
  sub_222B2A0(&v19);
  sub_E5D2E0((__int64 *)&v16);
  if ( (*a2 & 0x200000) != 0 )
  {
    v5 = &a2[2 * ((*a2 & 0x80000) != 0)];
    if ( a2[2] != v5[4] )
    {
      sub_E673B0((__int64)&v16, a1, v5[4]);
      v19 = 7;
      v6 = (__int64)v16;
      v16 = nullptr;
      v20 = v6;
      v7 = v17;
      v17 = 0;
      v21 = v7;
      LODWORD(v7) = v18;
      v18 = 0;
      v22 = v7;
      v8 = j__strlen("foundReferencedDecl");
      v15[0] = &v19;
      v15[1] = a1 + 1048;
      sub_E585D0(v3, (__int64)"foundReferencedDecl", v8, (__int64)sub_E58580, v15);
      sub_222B2A0(&v19);
      sub_E5D2E0((__int64 *)&v16);
    }
  }
  v9 = (*((_BYTE *)a2 + 3) >> 1) & 3;
  if ( v9 == 2 )
  {
    v10 = "constant";
    goto LABEL_7;
  }
  if ( ((*((_BYTE *)a2 + 3) >> 1) & 3) == 3 )
  {
    v10 = "discarded";
    goto LABEL_7;
  }
  v10 = "unevaluated";
  if ( v9 == 1 )
  {
LABEL_7:
    sub_E598C0((__int64)&v19, v10);
    v11 = j__strlen("nonOdrUseReason");
    v16 = &v19;
    v17 = a1 + 1048;
    sub_E585D0(v3, (__int64)"nonOdrUseReason", v11, (__int64)sub_E58580, &v16);
    sub_222B2A0(&v19);
  }
  v12 = *a2;
  v13 = j__strlen("isImmediateEscalating");
  return sub_E59B90(a1, (__int64)"isImmediateEscalating", v13, (v12 & 0x8000000) != 0);
}
