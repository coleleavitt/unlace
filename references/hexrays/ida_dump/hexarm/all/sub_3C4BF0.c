__int64 __fastcall sub_3C4BF0(__int64 a1)
{
  __int64 v1; // rbp
  char v3[8]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v4; // [rsp+8h] [rbp-40h]
  __int64 v5; // [rsp+18h] [rbp-30h]
  unsigned __int64 v6; // [rsp+28h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v3[0] = 2;
  v5 = 0;
  v4 = 0;
  v1 = 0;
  if ( !(unsigned int)get_idcv_attr(v3, a1, "__ptr", 0) )
    v1 = v4;
  free_idcv(v3);
  return v1;
}
