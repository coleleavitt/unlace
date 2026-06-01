__int64 __fastcall sub_678F00(_QWORD *a1, unsigned __int64 a2, __int16 a3, unsigned int *a4, int a5, int a6)
{
  unsigned __int64 byter; // r15
  int v7; // ebp
  unsigned __int64 v8; // r8
  unsigned __int64 v10; // rax
  unsigned __int64 *v11; // rax
  unsigned int v12; // ebp
  __int64 v13; // r14
  int v14; // r8d
  unsigned int v15; // r14d
  unsigned __int64 v16; // [rsp+10h] [rbp-268h]
  __int64 v17; // [rsp+28h] [rbp-250h]
  int v18; // [rsp+30h] [rbp-248h]
  int v19; // [rsp+34h] [rbp-244h]
  __int64 v21; // [rsp+40h] [rbp-238h] BYREF
  __int64 v22; // [rsp+48h] [rbp-230h] BYREF
  __int64 v23[16]; // [rsp+50h] [rbp-228h] BYREF
  __int128 v24; // [rsp+D0h] [rbp-1A8h] BYREF
  __int64 v25; // [rsp+E0h] [rbp-198h]
  __int64 v26; // [rsp+E8h] [rbp-190h]
  __int64 v27; // [rsp+F0h] [rbp-188h]
  char v28; // [rsp+F8h] [rbp-180h] BYREF
  unsigned __int64 v29; // [rsp+238h] [rbp-40h] BYREF

  byter = a2;
  v29 = __readfsqword(0x28u);
  v18 = a3 & 0x20;
  v7 = a3 & 1;
  if ( (a3 & 0x800) != 0 )
    callui(9, 0, (int)&v21, (int)&v22, (int)&callui, a6);
  if ( (a3 & 1) != 0 )
    v17 = (__int64)&stru_10000;
  else
    v17 = -65536;
  v16 = a2 + v17;
  if ( (a3 & 0x10) == 0 )
    callui(25, a2, (int)&callui, (int)a4, a5, a6);
  do
  {
    do
    {
LABEL_7:
      if ( v7 )
      {
        byter = sub_3C2450(a1, byter);
        if ( byter == -1 )
          return -1;
        if ( v18 || byter < v16 )
        {
          v8 = sub_3BE900(a1, byter, 1);
          if ( (v8 & 0x100) != 0 )
            goto LABEL_22;
          goto LABEL_35;
        }
      }
      else
      {
        byter = sub_3C2650(a1, byter);
        if ( byter == -1 )
          return -1;
        if ( v18 )
        {
          v8 = sub_3BE900(a1, byter, 1);
          if ( (v8 & 0x100) != 0 )
          {
LABEL_22:
            v10 = v8 & 0x600;
            break;
          }
LABEL_13:
          if ( !byter )
            return -1;
LABEL_14:
          byter = find_byter(0, byter - 1, 0, 4);
          goto LABEL_15;
        }
        if ( v16 < byter )
        {
          v8 = sub_3BE900(a1, byter, 1);
          if ( (v8 & 0x100) != 0 )
            goto LABEL_22;
          goto LABEL_14;
        }
      }
      show_auto(byter, 0);
      v16 += v17;
      v8 = sub_3BE900(a1, byter, 1);
      if ( (v8 & 0x100) != 0 )
        goto LABEL_22;
      if ( !v7 )
        goto LABEL_13;
LABEL_35:
      byter = find_byte(byter + 1, ~(byter + 1), 0, 4);
LABEL_15:
      if ( byter == -1 )
        return -1;
      v8 = sub_3BE900(a1, byter, 1);
      v10 = v8 & 0x600;
    }
    while ( v10 == 512 );
  }
  while ( v10 != 1536 || (v8 & 0x40000000) == 0 );
  v11 = (unsigned __int64 *)&v28;
  v25 = -1;
  v26 = 0;
  v27 = 0;
  v24 = -1;
  do
  {
    *(_WORD *)v11 = 0;
    v11 += 5;
    *((_WORD *)v11 - 19) = 0;
    *((_WORD *)v11 - 18) = 0;
    *((_DWORD *)v11 - 2) = 0;
    *((_WORD *)v11 - 17) = 0;
    *((_OWORD *)v11 - 2) = 0;
    *(v11 - 2) = 0;
  }
  while ( &v29 != v11 );
  v19 = v7;
  v12 = 0;
  v13 = v8;
  while ( 2 )
  {
    if ( !sub_577940(a1, v23, byter, v12, v13, &v24)
      || !v23[0]
      || (unsigned __int8)is_bnot(byter, v13, v12)
      || (unsigned __int8)is_invsign(byter, v13, v12) )
    {
      if ( v12 == 1 )
      {
        v7 = v19;
        goto LABEL_7;
      }
LABEL_31:
      v12 = 1;
      continue;
    }
    break;
  }
  if ( !v12 )
  {
    if ( (v13 & 0xE00000) != (_QWORD)&loc_800000
      && (v13 & 0x700000) != 3145728
      && (v13 & 0x600000) != 0x400000
      && (v13 & 0xF00000) != 0xA00000 )
    {
      v15 = 0;
      goto LABEL_44;
    }
    goto LABEL_31;
  }
  v14 = v13;
  v15 = v12;
  v7 = v19;
  if ( (v14 & 0xE000000) == 0x8000000
    || (v14 & 0x7000000) == 50331648
    || (v14 & 0x6000000) == 0x4000000
    || (v14 & 0xF000000) == 0xA000000 )
  {
    goto LABEL_7;
  }
LABEL_44:
  if ( a4 )
    *a4 = v15;
  return byter;
}
