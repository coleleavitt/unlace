__int64 __fastcall sub_7D17D0(__int64 a1)
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
  if ( (unsigned int)get_idcv_attr(v3, a1, "li", 0) )
    goto LABEL_5;
  v1 = v4;
  if ( v3[0] != 8 )
  {
    set_qerrno(61);
LABEL_5:
    v1 = 0;
  }
  free_idcv(v3);
  return v1;
}
