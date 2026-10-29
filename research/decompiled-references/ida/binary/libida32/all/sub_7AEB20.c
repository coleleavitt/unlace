__int64 __fastcall sub_7AEB20(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  char v4[8]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v5; // [rsp+8h] [rbp-40h]
  __int64 v6; // [rsp+18h] [rbp-30h]
  unsigned __int64 v7; // [rsp+28h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v4[0] = 2;
  v6 = 0;
  v5 = 0;
  free_idcv(v4);
  v4[0] = 8;
  *(_QWORD *)&v5 = a2;
  v2 = set_idcv_attr();
  free_idcv(v4);
  return v2;
}

