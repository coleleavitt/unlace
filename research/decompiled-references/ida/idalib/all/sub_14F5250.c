unsigned __int64 __fastcall sub_14F5250(__int64 a1, __int64 a2, int a3)
{
  int *v4; // r13
  unsigned __int64 result; // rax
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int16 v9; // dx
  __int64 *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rdi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rdi
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  char v24; // al
  __int16 v25; // dx
  __int16 v26; // ax
  __int64 v27; // rdi
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rdi
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // rdi
  unsigned __int64 v34; // rax
  __int64 v35; // rdi
  unsigned __int64 v36; // rax
  __int64 v37; // rdi
  unsigned __int64 v38; // rax
  __int64 v39; // rdi
  unsigned __int64 v40; // rax

  v4 = (int *)(a1 + 16);
LABEL_2:
  for ( result = *(unsigned __int16 *)(a1 + 32); (_WORD)result != 3; result = *(unsigned __int16 *)(a1 + 32) )
  {
    if ( (_WORD)result != 5 )
      return result;
    v7 = *(_QWORD *)(a1 + 24);
    if ( v7 == *(_QWORD *)(a1 + 2080) )
    {
      v8 = *(_QWORD *)(a1 + 8);
      result = *(_QWORD *)(v8 + 2944);
      if ( result >= *(unsigned int *)(v8 + 2912) )
      {
        result = sub_14180A0(v8, 1u);
        if ( *(_WORD *)(result + 16) == 47 )
          goto LABEL_5;
        v15 = *(_QWORD *)(a1 + 8);
        v16 = *(_QWORD *)(v15 + 2944);
        if ( v16 < *(unsigned int *)(v15 + 2912) )
          result = *(_QWORD *)(v15 + 2904) + 24 * v16;
        else
          result = sub_14180A0(v15, 1u);
        v9 = *(_WORD *)(result + 16);
      }
      else
      {
        v9 = *(_WORD *)(*(_QWORD *)(v8 + 2904) + 24 * result + 16);
        if ( v9 == 47 )
        {
          if ( v7 != *(_QWORD *)(a1 + 2088) )
            goto LABEL_6;
          goto LABEL_24;
        }
      }
      if ( v9 != 72 )
      {
        *(_BYTE *)a2 |= 1u;
        goto LABEL_19;
      }
    }
LABEL_5:
    if ( v7 != *(_QWORD *)(a1 + 2088) )
      goto LABEL_6;
    v8 = *(_QWORD *)(a1 + 8);
    result = *(_QWORD *)(v8 + 2944);
    if ( result >= *(unsigned int *)(v8 + 2912) )
    {
      result = sub_14180A0(v8, 1u);
      if ( *(_WORD *)(result + 16) == 47 )
        goto LABEL_6;
      v18 = *(_QWORD *)(a1 + 8);
      v19 = *(_QWORD *)(v18 + 2944);
      if ( v19 < *(unsigned int *)(v18 + 2912) )
        result = *(unsigned __int16 *)(*(_QWORD *)(v18 + 2904) + 24 * v19 + 16);
      else
        result = *(unsigned __int16 *)(sub_14180A0(v18, 1u) + 16);
      goto LABEL_25;
    }
LABEL_24:
    result = *(unsigned __int16 *)(*(_QWORD *)(v8 + 2904) + 24 * result + 16);
    if ( (_WORD)result == 47 )
    {
      if ( v7 != *(_QWORD *)(a1 + 2096) )
        goto LABEL_7;
      v13 = *(_QWORD *)(v8 + 2944);
      goto LABEL_28;
    }
LABEL_25:
    if ( (_WORD)result != 72 )
    {
      *(_BYTE *)a2 |= 4u;
      goto LABEL_19;
    }
LABEL_6:
    if ( v7 != *(_QWORD *)(a1 + 2096) )
      goto LABEL_7;
    v8 = *(_QWORD *)(a1 + 8);
    v13 = *(_QWORD *)(v8 + 2944);
    if ( v13 >= *(unsigned int *)(v8 + 2912) )
    {
      result = sub_14180A0(v8, 1u);
      if ( *(_WORD *)(result + 16) == 47 )
        goto LABEL_7;
      v21 = *(_QWORD *)(a1 + 8);
      v22 = *(_QWORD *)(v21 + 2944);
      if ( v22 < *(unsigned int *)(v21 + 2912) )
        result = *(unsigned __int16 *)(*(_QWORD *)(v21 + 2904) + 24 * v22 + 16);
      else
        result = *(unsigned __int16 *)(sub_14180A0(v21, 1u) + 16);
      goto LABEL_29;
    }
LABEL_28:
    result = *(unsigned __int16 *)(*(_QWORD *)(v8 + 2904) + 24 * v13 + 16);
    if ( (_WORD)result == 47 )
    {
      if ( v7 != *(_QWORD *)(a1 + 2104) )
        goto LABEL_8;
      v14 = *(_QWORD *)(v8 + 2944);
      goto LABEL_32;
    }
LABEL_29:
    if ( (_WORD)result != 72 )
    {
      *(_BYTE *)a2 |= 2u;
      goto LABEL_19;
    }
LABEL_7:
    if ( v7 != *(_QWORD *)(a1 + 2104) )
      goto LABEL_8;
    v8 = *(_QWORD *)(a1 + 8);
    v14 = *(_QWORD *)(v8 + 2944);
    if ( v14 >= *(unsigned int *)(v8 + 2912) )
    {
      result = sub_14180A0(v8, 1u);
      if ( *(_WORD *)(result + 16) == 47 )
        goto LABEL_8;
      v27 = *(_QWORD *)(a1 + 8);
      v28 = *(_QWORD *)(v27 + 2944);
      if ( v28 < *(unsigned int *)(v27 + 2912) )
        result = *(unsigned __int16 *)(*(_QWORD *)(v27 + 2904) + 24 * v28 + 16);
      else
        result = *(unsigned __int16 *)(sub_14180A0(v27, 1u) + 16);
      goto LABEL_33;
    }
LABEL_32:
    result = *(unsigned __int16 *)(*(_QWORD *)(v8 + 2904) + 24 * v14 + 16);
    if ( (_WORD)result == 47 )
    {
      if ( v7 != *(_QWORD *)(a1 + 2112) )
        goto LABEL_9;
      v17 = *(_QWORD *)(v8 + 2944);
      goto LABEL_40;
    }
LABEL_33:
    if ( (_WORD)result != 72 )
    {
      *(_BYTE *)a2 |= 0x20u;
      goto LABEL_19;
    }
LABEL_8:
    if ( v7 != *(_QWORD *)(a1 + 2112) )
      goto LABEL_9;
    v8 = *(_QWORD *)(a1 + 8);
    v17 = *(_QWORD *)(v8 + 2944);
    if ( v17 >= *(unsigned int *)(v8 + 2912) )
    {
      result = sub_14180A0(v8, 1u);
      if ( *(_WORD *)(result + 16) == 47 )
        goto LABEL_9;
      v30 = *(_QWORD *)(a1 + 8);
      v31 = *(_QWORD *)(v30 + 2944);
      if ( v31 < *(unsigned int *)(v30 + 2912) )
        result = *(unsigned __int16 *)(*(_QWORD *)(v30 + 2904) + 24 * v31 + 16);
      else
        result = *(unsigned __int16 *)(sub_14180A0(v30, 1u) + 16);
      goto LABEL_41;
    }
LABEL_40:
    result = *(unsigned __int16 *)(*(_QWORD *)(v8 + 2904) + 24 * v17 + 16);
    if ( (_WORD)result == 47 )
    {
      if ( v7 != *(_QWORD *)(a1 + 2120) )
      {
LABEL_10:
        if ( v7 != *(_QWORD *)(a1 + 2128) )
          goto LABEL_11;
        v8 = *(_QWORD *)(a1 + 8);
        v23 = *(_QWORD *)(v8 + 2944);
        if ( v23 < *(unsigned int *)(v8 + 2912) )
        {
LABEL_54:
          result = *(unsigned __int16 *)(*(_QWORD *)(v8 + 2904) + 24 * v23 + 16);
          if ( (_WORD)result != 47 )
            goto LABEL_55;
          if ( v7 != *(_QWORD *)(a1 + 2136) )
            goto LABEL_12;
          v29 = *(_QWORD *)(v8 + 2944);
LABEL_64:
          result = *(unsigned __int16 *)(*(_QWORD *)(v8 + 2904) + 24 * v29 + 16);
          if ( (_WORD)result != 47 )
          {
LABEL_65:
            if ( (_WORD)result != 72 )
            {
              *(_BYTE *)a2 |= 0x40u;
              v24 = 1;
              goto LABEL_57;
            }
LABEL_12:
            if ( v7 != *(_QWORD *)(a1 + 2144) )
              goto LABEL_13;
            v8 = *(_QWORD *)(a1 + 8);
            v32 = *(_QWORD *)(v8 + 2944);
            if ( v32 >= *(unsigned int *)(v8 + 2912) )
            {
              result = sub_14180A0(v8, 1u);
              if ( *(_WORD *)(result + 16) == 47 )
                goto LABEL_13;
              v39 = *(_QWORD *)(a1 + 8);
              v40 = *(_QWORD *)(v39 + 2944);
              if ( v40 < *(unsigned int *)(v39 + 2912) )
                result = *(unsigned __int16 *)(*(_QWORD *)(v39 + 2904) + 24 * v40 + 16);
              else
                result = *(unsigned __int16 *)(sub_14180A0(v39, 1u) + 16);
            }
            else
            {
LABEL_73:
              result = *(unsigned __int16 *)(*(_QWORD *)(v8 + 2904) + 24 * v32 + 16);
              if ( (_WORD)result == 47 )
                goto LABEL_13;
            }
            if ( (_WORD)result == 72 )
              goto LABEL_13;
            *(_BYTE *)a2 |= 0x40u;
            v24 = 2;
            goto LABEL_57;
          }
          if ( v7 != *(_QWORD *)(a1 + 2144) )
          {
LABEL_13:
            if ( !v7 )
              goto LABEL_2;
            return result;
          }
          v32 = *(_QWORD *)(v8 + 2944);
          goto LABEL_73;
        }
        result = sub_14180A0(v8, 1u);
        if ( *(_WORD *)(result + 16) != 47 )
        {
          v37 = *(_QWORD *)(a1 + 8);
          v38 = *(_QWORD *)(v37 + 2944);
          result = v38 < *(unsigned int *)(v37 + 2912)
                 ? *(unsigned __int16 *)(*(_QWORD *)(v37 + 2904) + 24 * v38 + 16)
                 : *(unsigned __int16 *)(sub_14180A0(v37, 1u) + 16);
LABEL_55:
          if ( (_WORD)result != 72 )
          {
            *(_BYTE *)a2 |= 0x40u;
            v24 = 0;
LABEL_57:
            v25 = (v24 & 3) << 7;
            v26 = *(_WORD *)(a2 + 2);
            *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 16);
            *(_WORD *)(a2 + 2) = v25 | v26 & 0xFE7F;
            goto LABEL_19;
          }
        }
LABEL_11:
        if ( v7 == *(_QWORD *)(a1 + 2136) )
        {
          v8 = *(_QWORD *)(a1 + 8);
          v29 = *(_QWORD *)(v8 + 2944);
          if ( v29 < *(unsigned int *)(v8 + 2912) )
            goto LABEL_64;
          result = sub_14180A0(v8, 1u);
          if ( *(_WORD *)(result + 16) != 47 )
          {
            v35 = *(_QWORD *)(a1 + 8);
            v36 = *(_QWORD *)(v35 + 2944);
            if ( v36 < *(unsigned int *)(v35 + 2912) )
              result = *(unsigned __int16 *)(*(_QWORD *)(v35 + 2904) + 24 * v36 + 16);
            else
              result = *(unsigned __int16 *)(sub_14180A0(v35, 1u) + 16);
            goto LABEL_65;
          }
        }
        goto LABEL_12;
      }
      v20 = *(_QWORD *)(v8 + 2944);
LABEL_47:
      result = *(unsigned __int16 *)(*(_QWORD *)(v8 + 2904) + 24 * v20 + 16);
      if ( (_WORD)result == 47 )
      {
        if ( v7 == *(_QWORD *)(a1 + 2128) )
        {
          v23 = *(_QWORD *)(v8 + 2944);
          goto LABEL_54;
        }
        goto LABEL_11;
      }
      goto LABEL_48;
    }
LABEL_41:
    if ( (_WORD)result != 72 )
    {
      *(_BYTE *)a2 |= 8u;
      goto LABEL_19;
    }
LABEL_9:
    if ( v7 != *(_QWORD *)(a1 + 2120) )
      goto LABEL_10;
    v8 = *(_QWORD *)(a1 + 8);
    v20 = *(_QWORD *)(v8 + 2944);
    if ( v20 < *(unsigned int *)(v8 + 2912) )
      goto LABEL_47;
    result = sub_14180A0(v8, 1u);
    if ( *(_WORD *)(result + 16) == 47 )
      goto LABEL_10;
    v33 = *(_QWORD *)(a1 + 8);
    v34 = *(_QWORD *)(v33 + 2944);
    if ( v34 < *(unsigned int *)(v33 + 2912) )
      result = *(unsigned __int16 *)(*(_QWORD *)(v33 + 2904) + 24 * v34 + 16);
    else
      result = *(unsigned __int16 *)(sub_14180A0(v33, 1u) + 16);
LABEL_48:
    if ( (_WORD)result == 72 )
      goto LABEL_10;
    *(_BYTE *)a2 |= 0x10u;
LABEL_19:
    v10 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v10, v4);
  }
  v11 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v11 + 760) )
  {
    *(_BYTE *)(v11 + 968) = 1;
    *(_BYTE *)(*(_QWORD *)(v11 + 48) + 6LL) = 1;
  }
  v12 = *(_QWORD *)(a1 + 96);
  *(_WORD *)(a1 + 32) = 1;
  return sub_172E410(*(_QWORD *)(v12 + 656), *(_QWORD *)(v12 + 608), a2, a3 == 3);
}
