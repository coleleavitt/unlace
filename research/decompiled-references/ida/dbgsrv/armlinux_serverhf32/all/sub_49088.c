/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49088
// Address: 0x00049088

//----- (00049088) --------------------------------------------------------
void __fastcall sub_49088(_BYTE *a1)
{
  void *v2; // r9
  unsigned int v3; // r0
  const char *v4; // r5
  size_t v5; // r0
  size_t v6; // r6
  size_t v7; // r10
  unsigned __int8 v8[8]; // [sp+0h] [bp-20h] BYREF
  void *v9; // [sp+8h] [bp-18h] BYREF
  size_t v10; // [sp+Ch] [bp-14h]
  int v11; // [sp+10h] [bp-10h]
  int v12; // [sp+14h] [bp-Ch]

  v2 = (void *)sub_70A10();
  v3 = sub_3F278("exception");
  sub_46860((int)a1, v3);
  v8[0] = 2;
  v9 = v2;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  sub_48D0C(a1, "qerrno", v8, 0);
  v4 = sub_79818(-1);
  sub_455C8(v8);
  if ( v4 )
  {
    v5 = strlen(v4);
    v6 = v5;
    v8[0] = 7;
    v9 = nullptr;
    v10 = 0;
    v11 = 0;
    if ( v5 )
    {
      v7 = v5 + 1;
      v9 = sub_77EB0((int)&v9, nullptr, v5 + 1, 1u);
      v10 = v7;
      memmove(v9, v4, v6);
      *((_BYTE *)v9 + v6) = 0;
    }
  }
  else
  {
    v9 = nullptr;
    v10 = 0;
    v11 = 0;
    v8[0] = 7;
  }
  sub_48D0C(a1, "description", v8, 0);
  sub_70A2C((int)v2);
  sub_455C8(v8);
}
