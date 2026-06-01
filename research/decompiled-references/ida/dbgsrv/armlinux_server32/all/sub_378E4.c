/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_378E4
// Address: 0x000378E4

//----- (000378E4) --------------------------------------------------------
int __fastcall sub_378E4(_BYTE *a1, const char *a2)
{
  unsigned int v4; // r0
  size_t v5; // r0
  size_t v6; // r9
  size_t v7; // r10
  int v8; // r5
  unsigned __int8 v10[8]; // [sp+0h] [bp-20h] BYREF
  void *v11; // [sp+8h] [bp-18h] BYREF
  size_t v12; // [sp+Ch] [bp-14h]
  int v13; // [sp+10h] [bp-10h]
  int v14; // [sp+14h] [bp-Ch]

  v4 = sub_3F40C("exception");
  sub_469F0((int)a1, v4);
  v10[0] = 2;
  v12 = 0;
  v11 = nullptr;
  v13 = 0;
  v14 = 0;
  sub_45758(v10);
  if ( a2 )
  {
    v5 = strlen(a2);
    v6 = v5;
    v10[0] = 7;
    v11 = nullptr;
    v12 = 0;
    v13 = 0;
    if ( v5 )
    {
      v7 = v5 + 1;
      v11 = sub_78018((int)&v11, nullptr, v5 + 1, 1u);
      v12 = v7;
      memmove(v11, a2, v6);
      *((_BYTE *)v11 + v6) = 0;
    }
  }
  else
  {
    v11 = nullptr;
    v12 = 0;
    v13 = 0;
    v10[0] = 7;
  }
  sub_48E9C(a1, "description", v10, 0);
  v8 = sub_70B98(90);
  sub_45758(v10);
  return v8;
}
