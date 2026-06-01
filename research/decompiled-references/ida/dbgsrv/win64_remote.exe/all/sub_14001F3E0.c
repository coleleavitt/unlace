/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001F3E0
// Address: 0x000000014001F3E0

//----- (000000014001F3E0) ----------------------------------------------------
__int64 __fastcall sub_14001F3E0(__int64 a1, __int64 a2)
{
  char *v3; // rbx
  char *v4; // rdx
  __int64 v5; // rax
  size_t v6; // rax
  unsigned int v7; // ebx
  char *Str; // [rsp+20h] [rbp-48h] BYREF
  __int64 v10; // [rsp+28h] [rbp-40h]
  __int64 v11; // [rsp+30h] [rbp-38h]
  char v12[8]; // [rsp+38h] [rbp-30h] BYREF
  __int128 v13; // [rsp+40h] [rbp-28h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h]

  Str = nullptr;
  v10 = 0;
  v11 = 0;
  v3 = (char *)Str1;
  v4 = (char *)Str1;
  if ( *(_QWORD *)(a1 + 16) )
    v4 = *(char **)(a1 + 8);
  if ( (unsigned __int8)sub_14002E8D0(nullptr, v4, (void **)&Str, 0) )
  {
    *(_QWORD *)(a2 + 8) = 1;
    v7 = 0;
  }
  else
  {
    if ( v10 )
      v3 = Str;
    v5 = sub_14002EAB0("exception");
    sub_14002A1A0(a2, v5);
    v12[0] = 2;
    v14 = 0;
    v13 = 0u;
    sub_140029390((__int64)v12);
    if ( v3 )
      v6 = strlen(v3);
    else
      v6 = 0;
    v12[0] = 7;
    v13 = 0;
    v14 = 0;
    if ( v6 )
      sub_140001810((__int64)&v13, v3, v6);
    sub_14002A890(a2, "description", v12, 0);
    v7 = sub_1400640B0(0x5Au);
    sub_140029390((__int64)v12);
  }
  if ( Str )
  {
    v10 = 0;
    j_free(Str);
  }
  return v7;
}
