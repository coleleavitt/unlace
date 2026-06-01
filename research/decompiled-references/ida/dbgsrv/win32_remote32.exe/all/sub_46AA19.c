/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46AA19
// Address: 0x0046AA19

//----- (0046AA19) --------------------------------------------------------
char __usercall sub_46AA19@<al>(__m128i *a1@<ecx>, int a2@<edi>, __m128i a3@<xmm0>)
{
  int v4; // eax
  char v5; // al
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  unsigned int v11; // ecx
  __int32 v12; // ebx
  __int8 v13; // dl
  bool v14; // bl
  bool v15; // al
  char v16; // al
  int v17; // edi
  char v18; // [esp-4h] [ebp-14h]
  int v19; // [esp+8h] [ebp-8h]
  __int16 v20; // [esp+Ch] [ebp-4h] BYREF
  char v21; // [esp+Eh] [ebp-2h]

  v4 = a1[3].m128i_i8[1];
  if ( v4 <= 100 )
  {
    if ( v4 != 100 )
    {
      if ( v4 > 88 )
      {
        v7 = v4 - 90;
        if ( !v7 )
        {
          v5 = sub_46ACDC((int)a1);
          goto LABEL_11;
        }
        v8 = v7 - 7;
        if ( !v8 )
          goto LABEL_30;
        if ( v8 != 2 )
          return 0;
        goto LABEL_18;
      }
      if ( v4 != 88 )
      {
        if ( v4 != 65 )
        {
          if ( v4 != 67 )
          {
            if ( v4 <= 68 )
              return 0;
            if ( v4 > 71 )
            {
              if ( v4 == 83 )
              {
LABEL_10:
                v5 = sub_46B116((int)a1);
                goto LABEL_11;
              }
              return 0;
            }
            goto LABEL_30;
          }
LABEL_18:
          v5 = sub_46AE87(a1, 0);
          goto LABEL_11;
        }
LABEL_30:
        v5 = sub_46AD36(a1->m128i_i32, a3);
        goto LABEL_11;
      }
      v18 = 1;
LABEL_14:
      v5 = sub_46AF1A((int)a1, 0, a2, 0x10u, v18);
      goto LABEL_11;
    }
    goto LABEL_28;
  }
  if ( v4 > 112 )
  {
    v9 = v4 - 115;
    if ( !v9 )
      goto LABEL_10;
    v10 = v9 - 2;
    if ( v10 )
    {
      if ( v10 != 3 )
        return 0;
      v18 = 0;
      goto LABEL_14;
    }
LABEL_29:
    v5 = sub_46AF1A((int)a1, 0, a2, 0xAu, 0);
    goto LABEL_11;
  }
  if ( v4 == 112 )
  {
    v5 = sub_46B0FE((int)a1, 0, a2);
  }
  else
  {
    if ( v4 <= 103 )
      goto LABEL_30;
    switch ( v4 )
    {
      case 'i':
LABEL_28:
        a1[2].m128i_i32[0] |= 0x10u;
        goto LABEL_29;
      case 'n':
        v5 = sub_46B06B((int)a1, 0);
        break;
      case 'o':
        v5 = sub_46B0DF((int)a1, 0, a2);
        break;
      default:
        return 0;
    }
  }
LABEL_11:
  if ( !v5 )
    return 0;
  if ( !a1[3].m128i_i8[0] )
  {
    v11 = 0;
    v20 = 0;
    v21 = 0;
    v12 = a1[2].m128i_i32[0];
    v19 = 0;
    if ( (v12 & 0x10) != 0 )
    {
      if ( (v12 & 0x40) != 0 )
      {
        LOBYTE(v20) = 45;
      }
      else
      {
        if ( (v12 & 1) == 0 )
        {
          if ( (v12 & 2) != 0 )
          {
            LOBYTE(v20) = 32;
            v11 = 1;
            v19 = 1;
          }
          goto LABEL_45;
        }
        LOBYTE(v20) = 43;
      }
      v11 = 1;
      v19 = 1;
    }
LABEL_45:
    v13 = a1[3].m128i_i8[1];
    v14 = (v13 == 120 || v13 == 88) && (v12 & 0x20) != 0;
    v15 = v13 == 97 || v13 == 65;
    if ( v14 || v15 )
    {
      *((_BYTE *)&v20 + v11) = 48;
      if ( v13 == 88 || v13 == 65 )
        v16 = 88;
      else
        v16 = 120;
      *((_BYTE *)&v20 + v11 + 1) = v16;
      v11 += 2;
      v19 = v11;
    }
    v17 = a1[2].m128i_i32[1] - a1[3].m128i_i32[2] - v11;
    if ( (a1[2].m128i_i8[0] & 0xC) == 0 )
    {
      sub_469CAC(&a1[68].m128i_i32[2], 32, v17, &a1[1].m128i_i32[2]);
      v11 = v19;
    }
    sub_46B43F(&a1[68].m128i_i32[2], (unsigned int)&v20, v11, &a1[1].m128i_i32[2], (int)&a1->m128i_i32[3]);
    if ( (a1[2].m128i_i32[0] & 8) != 0 && (a1[2].m128i_i32[0] & 4) == 0 )
      sub_469CAC(&a1[68].m128i_i32[2], 48, v17, &a1[1].m128i_i32[2]);
    sub_46B36E((int)a1, 0);
    if ( a1[1].m128i_i32[2] >= 0 && (a1[2].m128i_i32[0] & 4) != 0 )
      sub_469CAC(&a1[68].m128i_i32[2], 32, v17, &a1[1].m128i_i32[2]);
  }
  return 1;
}
