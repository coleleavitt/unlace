unsigned __int64 __fastcall sub_4290(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v9; // ebx
  _QWORD v11[2]; // [rsp+0h] [rbp-108h] BYREF
  __int16 v12; // [rsp+28h] [rbp-E0h]
  char v13; // [rsp+2Bh] [rbp-DDh]
  __int64 v14; // [rsp+30h] [rbp-D8h]
  __int128 v15; // [rsp+88h] [rbp-80h]
  __int128 v16; // [rsp+98h] [rbp-70h]
  __int128 v17; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v18; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v19; // [rsp+C8h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v18 = 0xFFFFFFFF00000000LL;
  v9 = a6 | 1;
  v15 = -1;
  v16 = -1;
  v17 = -1;
  v14 = setup_selector(a1, a2, a3, a4, a5, a6, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1);
  v11[0] = a2;
  v11[1] = a3;
  v12 = 513;
  v13 = 1;
  if ( !(unsigned __int8)add_segm_ex(v11, a4, a5, v9) )
    sub_27B0(0);
  return v19 - __readfsqword(0x28u);
}
