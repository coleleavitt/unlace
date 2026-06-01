__int64 __fastcall sub_7D1F90(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v4; // ebp
  char v6[8]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v7; // [rsp+8h] [rbp-40h]
  __int64 v8; // [rsp+18h] [rbp-30h]
  unsigned __int64 v9; // [rsp+28h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v6[0] = 2;
  v8 = 0;
  v7 = 0;
  free_idcv(v6);
  v6[0] = 8;
  *(_QWORD *)&v7 = a2;
  v4 = set_idcv_attr(a1, "__bpt", v6, 0, v2, v3);
  free_idcv(v6);
  return v4;
}
