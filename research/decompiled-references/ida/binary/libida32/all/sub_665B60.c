unsigned __int64 __fastcall sub_665B60(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        void *a10,
        __int64 a11,
        int a12,
        __int64 a13)
{
  unsigned int *v13; // rax
  __int128 v15; // [rsp+0h] [rbp-48h]
  __int64 v16; // [rsp+10h] [rbp-38h]
  __int64 v17; // [rsp+18h] [rbp-30h]
  unsigned __int64 v18; // [rsp+28h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  if ( (sub_3B9AA0(a1, a2, 4) & 0x600) == 0x200 )
  {
    v15 = 0;
    v16 = 0;
    v17 = 0;
    sub_3CC010(a1, a2, 0);
  }
  v13 = sub_5AFCE0(a1, a2);
  if ( v13 && *v13 != a2 )
    return sub_5B9040(a1, a7, a8, a9, a10, a11, a12, a13);
  else
    return v18 - __readfsqword(0x28u);
}

