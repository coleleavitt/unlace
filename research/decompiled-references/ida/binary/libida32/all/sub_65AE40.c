__int64 __fastcall sub_65AE40(_QWORD *a1, int a2, __int16 a3, unsigned int *a4, int a5, int a6)
{
  unsigned int byter; // r15d
  int v7; // ebp
  unsigned __int64 v8; // r8
  unsigned __int64 v10; // rax
  unsigned __int64 *v11; // rax
  unsigned int v12; // ebp
  __int64 v13; // r14
  int v14; // r8d
  unsigned int v15; // r14d
  int v16; // [rsp+4h] [rbp-194h]
  unsigned int v17; // [rsp+Ch] [rbp-18Ch]
  int v18; // [rsp+20h] [rbp-178h]
  int v19; // [rsp+24h] [rbp-174h]
  int v21; // [rsp+38h] [rbp-160h] BYREF
  int v22; // [rsp+3Ch] [rbp-15Ch] BYREF
  int v23[16]; // [rsp+40h] [rbp-158h] BYREF
  __m128i v24; // [rsp+80h] [rbp-118h] BYREF
  __int64 v25; // [rsp+90h] [rbp-108h]
  char v26; // [rsp+98h] [rbp-100h] BYREF
  unsigned __int64 v27; // [rsp+158h] [rbp-40h] BYREF

  byter = a2;
  v27 = __readfsqword(0x28u);
  v16 = a3 & 0x20;
  v7 = a3 & 1;
  if ( (a3 & 0x800) != 0 )
    callui(9, 0, (int)&v21, (int)&v22, (int)&callui, a6);
  if ( (a3 & 1) != 0 )
    v18 = 0x10000;
  else
    v18 = -65536;
  v17 = a2 + v18;
  if ( (a3 & 0x10) == 0 )
    callui(25, a2, (int)&callui, (int)a4, a5, a6);
  do
  {
    do
    {
LABEL_7:
      if ( v7 )
      {
        byter = sub_3BD3E0((__int64)a1, byter);
        if ( byter == -1 )
          return 0xFFFFFFFFLL;
        if ( v16 || byter < v17 )
        {
          v8 = sub_3B9AA0((__int64)a1, byter, 1);
          if ( (v8 & 0x100) != 0 )
            goto LABEL_22;
          goto LABEL_35;
        }
      }
      else
      {
        byter = sub_3BD5D0((__int64)a1, byter);
        if ( byter == -1 )
          return 0xFFFFFFFFLL;
        if ( v16 )
        {
          v8 = sub_3B9AA0((__int64)a1, byter, 1);
          if ( (v8 & 0x100) != 0 )
          {
LABEL_22:
            v10 = v8 & 0x600;
            break;
          }
LABEL_13:
          if ( !byter )
            return 0xFFFFFFFFLL;
LABEL_14:
          byter = find_byter(0, byter - 1, 0, 4);
          goto LABEL_15;
        }
        if ( v17 < byter )
        {
          v8 = sub_3B9AA0((__int64)a1, byter, 1);
          if ( (v8 & 0x100) != 0 )
            goto LABEL_22;
          goto LABEL_14;
        }
      }
      show_auto(byter, 0);
      v17 += v18;
      v8 = sub_3B9AA0((__int64)a1, byter, 1);
      if ( (v8 & 0x100) != 0 )
        goto LABEL_22;
      if ( !v7 )
        goto LABEL_13;
LABEL_35:
      byter = find_byte(byter + 1, ~(byter + 1), 0, 4);
LABEL_15:
      if ( byter == -1 )
        return 0xFFFFFFFFLL;
      v8 = sub_3B9AA0((__int64)a1, byter, 1);
      v10 = v8 & 0x600;
    }
    while ( v10 == 512 );
  }
  while ( v10 != 1536 || (v8 & 0x40000000) == 0 );
  v25 = 0;
  v24.m128i_i64[0] = -1;
  v24.m128i_i64[1] = 0xFFFFFFFFLL;
  v11 = (unsigned __int64 *)&v26;
  do
  {
    *(_WORD *)v11 = 0;
    v11 += 3;
    *((_WORD *)v11 - 11) = 0;
    *((_WORD *)v11 - 10) = 0;
    *((_DWORD *)v11 - 1) = 0;
    *((_WORD *)v11 - 9) = 0;
    *(v11 - 2) = 0;
    *((_DWORD *)v11 - 2) = 0;
  }
  while ( &v27 != v11 );
  v19 = v7;
  v12 = 0;
  v13 = v8;
  while ( 2 )
  {
    if ( !sub_55DF80(a1, v23, byter, v12, v13, &v24)
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
    if ( (v13 & 0xE00000) != 0x800000
      && (v13 & 0x700000) != 3145728
      && (v13 & 0x600000) != (_QWORD)&loc_400000
      && (_UNKNOWN *)(v13 & 0xF00000) != &loc_A00000 )
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

