__int64 __fastcall sub_5BC040(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // r14
  __int128 v8; // [rsp+8h] [rbp-58h] BYREF
  unsigned __int64 v9; // [rsp+20h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 16);
  v9 = __readfsqword(0x28u);
  v8 = 0;
  get_frame_part(&v8, a3, 0);
  if ( *(char *)(v5 + 9) >= 0 )
  {
    if ( a4 >= (unsigned __int64)v8 )
      goto LABEL_3;
LABEL_6:
    v8 = 0;
    get_frame_part(&v8, a3, 3);
    goto LABEL_4;
  }
  if ( a4 >= *((_QWORD *)&v8 + 1) )
    goto LABEL_6;
LABEL_3:
  v8 = 0;
  get_frame_part(&v8, a3, 0);
LABEL_4:
  sub_35A790((char **)a2);
  return (*(_QWORD *)(a2 + 8) == 0) + *(_QWORD *)(a2 + 8) - 1LL;
}
