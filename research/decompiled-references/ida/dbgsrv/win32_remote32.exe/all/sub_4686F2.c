/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4686F2
// Address: 0x004686F2

//----- (004686F2) --------------------------------------------------------
unsigned int __usercall sub_4686F2@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        _DWORD *a3,
        unsigned __int16 *a4,
        unsigned __int16 **a5,
        int a6,
        unsigned __int8 a7)
{
  unsigned int v7; // edi
  unsigned int v8; // ebx
  unsigned __int16 *v10; // eax
  unsigned __int16 v11; // si
  int v12; // ebx
  unsigned __int16 *v13; // edx
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // eax
  unsigned int v19; // edx
  unsigned int v20; // edi
  int v21; // ecx
  unsigned int v22; // eax
  int v23; // eax
  unsigned int v24; // ecx
  int v25; // esi
  int v26; // [esp-8h] [ebp-B0h]
  int v27[3]; // [esp+8h] [ebp-A0h] BYREF
  char v28; // [esp+14h] [ebp-94h]
  unsigned __int16 *v29; // [esp+18h] [ebp-90h]
  int v30; // [esp+1Ch] [ebp-8Ch]
  int v31; // [esp+20h] [ebp-88h]
  int v32; // [esp+24h] [ebp-84h]
  int v33; // [esp+28h] [ebp-80h]
  int v34; // [esp+2Ch] [ebp-7Ch]
  int v35; // [esp+30h] [ebp-78h]
  int v36; // [esp+34h] [ebp-74h]
  int v37; // [esp+38h] [ebp-70h]
  int v38; // [esp+3Ch] [ebp-6Ch]
  int v39; // [esp+40h] [ebp-68h]
  int v40; // [esp+44h] [ebp-64h]
  int v41; // [esp+48h] [ebp-60h]
  int v42; // [esp+4Ch] [ebp-5Ch]
  int v43; // [esp+50h] [ebp-58h]
  int v44; // [esp+54h] [ebp-54h]
  int v45; // [esp+58h] [ebp-50h]
  int v46; // [esp+5Ch] [ebp-4Ch]
  int v47; // [esp+60h] [ebp-48h]
  int v48; // [esp+64h] [ebp-44h]
  int v49; // [esp+68h] [ebp-40h]
  int v50; // [esp+6Ch] [ebp-3Ch]
  int v51; // [esp+70h] [ebp-38h]
  int v52; // [esp+74h] [ebp-34h]
  int v53; // [esp+78h] [ebp-30h]
  int v54; // [esp+7Ch] [ebp-2Ch]
  int v55; // [esp+80h] [ebp-28h]
  int v56; // [esp+84h] [ebp-24h]
  int v57; // [esp+88h] [ebp-20h]
  int v58; // [esp+8Ch] [ebp-1Ch]
  int v59; // [esp+90h] [ebp-18h]
  int v60; // [esp+94h] [ebp-14h]
  int v61; // [esp+98h] [ebp-10h]
  int v62; // [esp+9Ch] [ebp-Ch]
  int v63; // [esp+A0h] [ebp-8h]
  unsigned int v64; // [esp+A4h] [ebp-4h]

  if ( !sub_468FF7(&a4, a1, a2) )
    goto LABEL_6;
  v7 = a6;
  if ( a6 && (a6 < 2 || a6 > 36) )
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, v7);
LABEL_6:
    v8 = 0;
    goto LABEL_7;
  }
  sub_467FF8((int)v27, a3);
  v10 = a4;
  v64 = 0;
  v29 = a4;
  while ( 1 )
  {
    v11 = *v10;
    a4 = v10 + 1;
    if ( !sub_4788F1(v11, 8u) )
      break;
    v10 = a4;
  }
  v12 = a7;
  if ( v11 == 45 )
  {
    v12 = a7 | 2;
  }
  else if ( v11 != 43 )
  {
    v13 = a4;
    goto LABEL_18;
  }
  v11 = *a4;
  v13 = ++a4;
LABEL_18:
  v30 = 58;
  v63 = 1632;
  v62 = 1642;
  v61 = 1776;
  v60 = 1786;
  v59 = 2406;
  v58 = 2416;
  v57 = 2534;
  v56 = 2544;
  v55 = 2662;
  v54 = 2672;
  v53 = 2790;
  v52 = 2800;
  v51 = 2918;
  v50 = 2928;
  v49 = 3174;
  v48 = 3184;
  v47 = 3302;
  v46 = 3312;
  v45 = 3430;
  v44 = 3440;
  v43 = 3664;
  v42 = 3674;
  v41 = 3792;
  v40 = 3802;
  v39 = 3872;
  v38 = 3882;
  v37 = 4160;
  v36 = 4170;
  v35 = 6112;
  v34 = 6122;
  v33 = 6160;
  v32 = 6170;
  v31 = 65306;
  v14 = 48;
  if ( !v7 || v7 == 16 )
  {
    if ( v11 >= 0x30u )
    {
      if ( v11 < (unsigned __int16)v30 )
        goto LABEL_22;
      if ( v11 >= 0xFF10u )
      {
        if ( v11 >= (unsigned __int16)v31 )
          v15 = -1;
        else
          v15 = v11 - 65296;
LABEL_60:
        if ( v15 != -1 )
          goto LABEL_69;
        goto LABEL_61;
      }
      v14 = v63;
      if ( v11 >= (unsigned __int16)v63 )
      {
        if ( v11 < (unsigned __int16)v62
          || (v14 = v61, v11 >= (unsigned __int16)v61)
          && (v11 < (unsigned __int16)v60
           || (v14 = v59, v11 >= (unsigned __int16)v59)
           && (v11 < (unsigned __int16)v58
            || (v14 = v57, v11 >= (unsigned __int16)v57)
            && (v11 < (unsigned __int16)v56
             || (v14 = v55, v11 >= (unsigned __int16)v55)
             && (v11 < (unsigned __int16)v54
              || (v14 = v53, v11 >= (unsigned __int16)v53)
              && (v11 < (unsigned __int16)v52
               || (v14 = v51, v11 >= (unsigned __int16)v51)
               && (v11 < (unsigned __int16)v50
                || (v14 = v49, v11 >= (unsigned __int16)v49)
                && (v11 < (unsigned __int16)v48
                 || (v14 = v47, v11 >= (unsigned __int16)v47)
                 && (v11 < (unsigned __int16)v46
                  || (v14 = v45, v11 >= (unsigned __int16)v45)
                  && (v11 < (unsigned __int16)v44
                   || (v14 = v43, v11 >= (unsigned __int16)v43)
                   && (v11 < (unsigned __int16)v42
                    || (v14 = v41, v11 >= (unsigned __int16)v41)
                    && (v11 < (unsigned __int16)v40
                     || (v14 = v39, v11 >= (unsigned __int16)v39)
                     && (v11 < (unsigned __int16)v38
                      || (v14 = v37, v11 >= (unsigned __int16)v37)
                      && (v11 < (unsigned __int16)v36
                       || (v14 = v35, v11 >= (unsigned __int16)v35)
                       && (v11 < (unsigned __int16)v34
                        || (v14 = v33, v11 >= (unsigned __int16)v33) && v11 < (unsigned __int16)v32)))))))))))))) )
        {
LABEL_22:
          v15 = v11 - v14;
          goto LABEL_60;
        }
      }
    }
LABEL_61:
    v16 = v11;
    if ( v11 >= 0x41u && v11 <= 0x5Au )
    {
      v17 = v11 - 97;
LABEL_65:
      if ( v17 <= 0x19 )
        v16 = v11 - 32;
      v15 = v16 - 55;
      goto LABEL_69;
    }
    v17 = v11 - 97;
    if ( v17 <= 0x19 )
      goto LABEL_65;
    v15 = -1;
LABEL_69:
    if ( v15 )
    {
      if ( !v7 )
      {
        v7 = 10;
        a6 = 10;
      }
    }
    else
    {
      v18 = *v13;
      a4 = v13 + 1;
      if ( v18 == 120 || v18 == 88 )
      {
        if ( !v7 )
        {
          v7 = 16;
          a6 = 16;
        }
        v11 = v13[1];
        a4 = v13 + 2;
      }
      else
      {
        if ( !v7 )
        {
          v7 = 8;
          a6 = 8;
        }
        sub_468FC9(&a4, v12, v7, v18);
      }
    }
  }
  v19 = 0xFFFFFFFF % v7;
  v20 = 0xFFFFFFFF / v7;
  while ( 1 )
  {
    v21 = 48;
    if ( v11 >= 0x30u )
    {
      if ( v11 < 0x3Au )
        goto LABEL_83;
      v21 = 65296;
      if ( v11 >= 0xFF10u )
      {
        if ( v11 < (unsigned __int16)v31 )
LABEL_83:
          v22 = v11 - v21;
        else
          v22 = -1;
        if ( v22 != -1 )
          goto LABEL_129;
        goto LABEL_121;
      }
      v21 = v63;
      if ( v11 >= (unsigned __int16)v63 )
      {
        if ( v11 < (unsigned __int16)v62 )
          goto LABEL_83;
        v21 = v61;
        if ( v11 >= (unsigned __int16)v61 )
        {
          if ( v11 < (unsigned __int16)v60 )
            goto LABEL_83;
          v21 = v59;
          if ( v11 >= (unsigned __int16)v59 )
          {
            if ( v11 < (unsigned __int16)v58 )
              goto LABEL_83;
            v21 = v57;
            if ( v11 >= (unsigned __int16)v57 )
            {
              if ( v11 < (unsigned __int16)v56 )
                goto LABEL_83;
              v21 = v55;
              if ( v11 >= (unsigned __int16)v55 )
              {
                if ( v11 < (unsigned __int16)v54 )
                  goto LABEL_83;
                v21 = v53;
                if ( v11 >= (unsigned __int16)v53 )
                {
                  if ( v11 < (unsigned __int16)v52 )
                    goto LABEL_83;
                  v21 = v51;
                  if ( v11 >= (unsigned __int16)v51 )
                  {
                    if ( v11 < (unsigned __int16)v50 )
                      goto LABEL_83;
                    v21 = v49;
                    if ( v11 >= (unsigned __int16)v49 )
                    {
                      if ( v11 < (unsigned __int16)v48 )
                        goto LABEL_83;
                      v21 = v47;
                      if ( v11 >= (unsigned __int16)v47 )
                      {
                        if ( v11 < (unsigned __int16)v46 )
                          goto LABEL_83;
                        v21 = v45;
                        if ( v11 >= (unsigned __int16)v45 )
                        {
                          if ( v11 < (unsigned __int16)v44 )
                            goto LABEL_83;
                          v21 = v43;
                          if ( v11 >= (unsigned __int16)v43 )
                          {
                            if ( v11 < (unsigned __int16)v42 )
                              goto LABEL_83;
                            v21 = v41;
                            if ( v11 >= (unsigned __int16)v41 )
                            {
                              if ( v11 < (unsigned __int16)v40 )
                                goto LABEL_83;
                              v21 = v39;
                              if ( v11 >= (unsigned __int16)v39 )
                              {
                                if ( v11 < (unsigned __int16)v38 )
                                  goto LABEL_83;
                                v21 = v37;
                                if ( v11 >= (unsigned __int16)v37 )
                                {
                                  if ( v11 < (unsigned __int16)v36 )
                                    goto LABEL_83;
                                  v21 = v35;
                                  if ( v11 >= (unsigned __int16)v35 )
                                  {
                                    if ( v11 < (unsigned __int16)v34 )
                                      goto LABEL_83;
                                    v21 = v33;
                                    if ( v11 >= (unsigned __int16)v33 && v11 < (unsigned __int16)v32 )
                                      goto LABEL_83;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_121:
    v23 = v11;
    if ( v11 < 0x41u || v11 > 0x5Au )
    {
      v24 = v11 - 97;
      if ( v24 > 0x19 )
      {
        v22 = -1;
        goto LABEL_129;
      }
    }
    else
    {
      v24 = v11 - 97;
    }
    if ( v24 <= 0x19 )
      v23 = v11 - 32;
    v22 = v23 - 55;
LABEL_129:
    if ( v22 == -1 || v22 >= a6 )
      break;
    if ( v64 < v20 || v64 == v20 && v22 <= v19 )
    {
      v26 = 8;
      v64 = v22 + a6 * v64;
    }
    else
    {
      v26 = 12;
    }
    v11 = *a4++;
    v12 |= v26;
  }
  sub_468FC9(&a4, v12, v20, v11);
  if ( (v12 & 8) != 0 )
  {
    v25 = v64;
    if ( sub_46845D(v12, v64) )
    {
      *sub_46B984() = 34;
      if ( (v12 & 1) != 0 )
      {
        if ( (v12 & 2) != 0 )
          v8 = 0x80000000;
        else
          v8 = 0x7FFFFFFF;
        goto LABEL_148;
      }
      v25 = -1;
    }
    else if ( (v12 & 2) != 0 )
    {
      v25 = -v25;
    }
    v8 = v25;
  }
  else
  {
    v8 = 0;
    a4 = v29;
  }
LABEL_148:
  if ( v28 )
    *(_DWORD *)(v27[0] + 848) &= ~2u;
LABEL_7:
  if ( a5 )
    *a5 = a4;
  return v8;
}
