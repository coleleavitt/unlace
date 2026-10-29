__int64 __fastcall sub_1945420(__int64 *a1, __int64 a2, __int64 a3, unsigned int *a4, __m128 a5, __m128 a6)
{
  __int64 v8; // rbp
  unsigned __int16 *v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // r15
  unsigned __int8 v16; // al
  __int64 v17; // rbx
  unsigned int *v18; // rdx
  __int64 v19; // rax
  unsigned int v21; // [rsp+Ch] [rbp-3Ch]

  v8 = *a1;
  sub_18C79E0(*a1, 4, 4);
  v9 = (unsigned __int16 *)sub_F57B50(a3);
  v10 = sub_1944E10(a1, v9, a5, a6);
  if ( v10 == 1 )
    goto LABEL_7;
  if ( v10 )
  {
    v19 = sub_1914520(*a1, v10 & 0xFFFFFFFFFFFFFFFELL, v11, v12, v13, v14, a5, a6);
    if ( v19 == 1 )
      goto LABEL_7;
    v15 = v19 & 0xFFFFFFFFFFFFFFFELL;
  }
  else
  {
    v15 = 0;
  }
  v21 = *a4;
  v16 = sub_F57B40(a3);
  v17 = sub_1E6EEC0(*a1, v16, v15, v21);
  if ( (v17 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
LABEL_7:
    v17 = 0;
    goto LABEL_8;
  }
  sub_1EA6140(a2, v17, 4, 4);
  *v18 = *a4;
LABEL_8:
  sub_190D5E0(v8, a5);
  return v17;
}
