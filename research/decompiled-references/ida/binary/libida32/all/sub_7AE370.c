__int64 __fastcall sub_7AE370(__int64 a1)
{
  char v2[8]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v3; // [rsp+8h] [rbp-40h]
  __int64 v4; // [rsp+18h] [rbp-30h]
  unsigned __int64 v5; // [rsp+28h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v2[0] = 2;
  v4 = 0;
  v3 = 0;
  if ( !(unsigned int)get_idcv_attr() )
    set_qerrno(61, a1);
  free_idcv(v2);
  return 0;
}

