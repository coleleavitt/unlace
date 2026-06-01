/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140020490
// Address: 0x0000000140020490

//----- (0000000140020490) ----------------------------------------------------
__int64 __fastcall sub_140020490(__int64 a1, const char *a2)
{
  __int64 v4; // rax
  size_t v5; // rax
  unsigned int v6; // ebx
  char v8[8]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+28h] [rbp-20h] BYREF
  __int64 v10; // [rsp+38h] [rbp-10h]

  v4 = sub_14002EAB0("exception");
  sub_14002A1A0(a1, v4);
  v8[0] = 2;
  v10 = 0;
  v9 = 0u;
  sub_140029390((__int64)v8);
  if ( a2 )
    v5 = strlen(a2);
  else
    v5 = 0;
  v8[0] = 7;
  v9 = 0;
  v10 = 0;
  if ( v5 )
    sub_140001810((__int64)&v9, a2, v5);
  sub_14002A890(a1, "description", v8, 0);
  v6 = sub_1400640B0(0x5Au);
  sub_140029390((__int64)v8);
  return v6;
}
