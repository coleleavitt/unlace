__int64 __fastcall sub_5CD040(__m128i *a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 *v4; // rbx
  __int64 v6; // r13
  unsigned __int64 v7; // rax
  __int64 v8; // r9
  char *v9; // rax
  unsigned __int64 *v10; // rax
  unsigned __int64 *v11; // r14
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 *v14; // rax
  unsigned __int64 *v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18[2]; // [rsp+10h] [rbp-1C8h] BYREF
  char v19; // [rsp+21h] [rbp-1B7h]
  __int128 v20; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v21; // [rsp+40h] [rbp-198h]
  __int64 v22; // [rsp+48h] [rbp-190h]
  __int64 v23; // [rsp+50h] [rbp-188h]
  char v24; // [rsp+58h] [rbp-180h] BYREF
  _QWORD v25[8]; // [rsp+198h] [rbp-40h] BYREF

  v25[0] = __readfsqword(0x28u);
  if ( (a2[2] & 1) != 0 )
    return 0;
  v4 = a2;
  v6 = sub_3C58C0(a1, a3);
  if ( v6 == -1 )
  {
    v15 = sub_505D70((__int64)&a1[106].m128i_i64[1], a3);
    if ( v15 )
    {
      v16 = v15[2];
      if ( (v16 & 0x8000) != 0 )
      {
        v15 = sub_505D70((__int64)&a1[106].m128i_i64[1], v15[3]);
        if ( !v15 )
          return 0;
        v16 = v15[2];
      }
      v6 = v15[6];
      v17 = v16 & 0x4000;
      if ( v17 | v6 )
      {
        v7 = v17 | a2[2];
        goto LABEL_5;
      }
    }
    return 0;
  }
  v7 = a2[2];
  BYTE1(v7) |= 0x40u;
LABEL_5:
  a2[2] = v7;
  a2[6] = v6;
  sub_5C77B0((__int64)a1, a2, 0);
  if ( (unsigned __int8)xrefblk_t_first_to(v18, *a2, 5) )
  {
    do
    {
      while ( 1 )
      {
        if ( (unsigned __int8)(v19 - 16) <= 1u )
        {
          v9 = &v24;
          v21 = -1;
          v22 = 0;
          v23 = 0;
          v20 = -1;
          do
          {
            *(_WORD *)v9 = 0;
            v9 += 40;
            *((_WORD *)v9 - 19) = 0;
            *((_WORD *)v9 - 18) = 0;
            *((_DWORD *)v9 - 2) = 0;
            *((_WORD *)v9 - 17) = 0;
            *((_OWORD *)v9 - 2) = 0;
            *((_QWORD *)v9 - 2) = 0;
          }
          while ( v9 != (char *)v25 );
          if ( (int)decode_insn(&v20, v18[0], v25, 0, 0, v8, 0.0) > 0 )
          {
            v10 = sub_505D70((__int64)&a1[106].m128i_i64[1], v18[0]);
            v11 = v10;
            if ( v10 )
            {
              if ( *((char *)v10 + 17) >= 0 || (v11 = sub_505D70((__int64)&a1[106].m128i_i64[1], v10[3])) != nullptr )
              {
                v12 = sub_5B93D0(a1, (__int64)v11, v18[0] + WORD1(v22)) - v6;
                v13 = v12;
                if ( v19 == 17 && (v4[2] & 2) != 0 )
                  v13 = v12 - (int)sub_5B7840((__int64)a1, (__int64)v4) / 2;
                if ( v13 )
                  sub_5CCFA0(a1, v11);
                v14 = sub_505D70((__int64)&a1[106].m128i_i64[1], *v4);
                v4 = v14;
                if ( v14 )
                {
                  if ( *((char *)v14 + 17) < 0 )
                    break;
                }
              }
            }
          }
        }
        if ( !(unsigned __int8)xrefblk_t_next_to(v18) )
          return 1;
      }
      v4 = sub_505D70((__int64)&a1[106].m128i_i64[1], v14[3]);
    }
    while ( (unsigned __int8)xrefblk_t_next_to(v18) );
  }
  return 1;
}
