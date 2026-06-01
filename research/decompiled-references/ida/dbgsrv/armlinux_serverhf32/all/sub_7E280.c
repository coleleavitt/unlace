/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7E280
// Address: 0x0007E280

//----- (0007E280) --------------------------------------------------------
int __fastcall sub_7E280(_DWORD *a1, _BYTE *a2, int a3)
{
  double v5; // r2
  int v6; // r8
  const char *v7; // r9
  const char *v8; // r3
  int v9; // r4
  void *v11; // [sp+Ch] [bp-20h] BYREF
  int v12; // [sp+10h] [bp-1Ch]
  int v13; // [sp+14h] [bp-18h]
  void *ptr; // [sp+18h] [bp-14h] BYREF
  int v15; // [sp+1Ch] [bp-10h]
  int v16; // [sp+20h] [bp-Ch]

  if ( a1 )
  {
    LODWORD(v5) = *a1;
    v11 = nullptr;
    v12 = 0;
    v13 = 0;
    v6 = a1[1];
    if ( LODWORD(v5) != -1 )
    {
      HIDWORD(v5) = LODWORD(v5) + 1;
      sub_1873C((int)&v11, "%a", v5);
      goto LABEL_4;
    }
  }
  else
  {
    v6 = -1;
    v11 = nullptr;
    v12 = 0;
    v13 = 0;
  }
  v11 = sub_77EB0((int)&v11, nullptr, 8u, 1u);
  v12 = 8;
  strcpy((char *)v11, "BADADDR");
LABEL_4:
  if ( v12 )
    v7 = (const char *)v11;
  else
    v7 = (const char *)&dword_8DA5C;
  ptr = nullptr;
  v15 = 0;
  v16 = 0;
  if ( v6 == -1 )
  {
    ptr = sub_77EB0((int)&ptr, nullptr, 8u, 1u);
    v15 = 8;
    strcpy((char *)ptr, "BADADDR");
  }
  else
  {
    sub_1873C((int)&ptr, "%a", v6);
  }
  if ( v15 )
    v8 = (const char *)ptr;
  else
    v8 = (const char *)&dword_8DA5C;
  v9 = sub_7EA4C(a2, a3, "%s..%s", v7, v8);
  if ( ptr )
  {
    v15 = 0;
    sub_77E08(ptr);
  }
  if ( v11 )
  {
    v12 = 0;
    sub_77E08(v11);
  }
  return v9;
}
// 8DA5C: using guessed type int dword_8DA5C;
