/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_487E08
// Address: 0x0000000000487E08

//----- (0000000000487E08) ----------------------------------------------------
__int64 __fastcall sub_487E08(__int64 a1, __int64 a2, _QWORD *a3, unsigned __int8 a4)
{
  int v5; // w23
  int v7; // w23
  int v8; // w3
  int v9; // w1
  __int64 v10; // x0
  unsigned int v11; // w2
  unsigned int v12; // w1
  __int64 v14; // x6
  __int64 v15; // x7
  int v16; // w4
  int v17; // w4
  unsigned __int8 v18; // w1
  int v19; // w5
  __int64 v20; // x0
  __int64 v21; // x2
  unsigned __int64 v22; // x2
  unsigned __int8 v23; // w2
  unsigned int v24; // w4
  int v25; // w0
  __int64 v26; // x6
  __int64 v27; // x7
  int v28; // w0
  __int64 v29; // [xsp+40h] [xbp-50h] BYREF
  __int64 v30; // [xsp+48h] [xbp-48h]
  int v31; // [xsp+50h] [xbp-40h]
  unsigned __int16 v32; // [xsp+54h] [xbp-3Ch]
  __int64 v33; // [xsp+58h] [xbp-38h] BYREF
  __int64 v34; // [xsp+60h] [xbp-30h]
  int v35; // [xsp+68h] [xbp-28h]
  unsigned __int16 v36; // [xsp+6Ch] [xbp-24h]
  __int64 v37; // [xsp+70h] [xbp-20h]
  __int64 v38; // [xsp+78h] [xbp-18h]
  int v39; // [xsp+80h] [xbp-10h]
  __int16 v40; // [xsp+84h] [xbp-Ch]

  v5 = a4;
  sub_487938(a1, &v29);
  sub_487938(a2, &v33);
  if ( v5 )
    LOWORD(v33) = ~(_WORD)v33;
  v7 = WORD1(v29);
  v8 = WORD1(v33);
  v9 = WORD1(v29) - WORD1(v33);
  if ( v9 > 0 )
  {
    v14 = v29;
    v15 = v30;
    v9 = WORD1(v33) - WORD1(v29);
    v29 = v33;
    v30 = v34;
    v16 = v31;
    v31 = v35;
    v32 = 0;
    v33 = v14;
    v34 = v15;
    v35 = v16;
    v36 = 0;
    v37 = v29;
    v38 = v30;
    v39 = v31;
    v40 = 0;
  }
  else
  {
    v10 = 4;
    if ( WORD1(v29) == WORD1(v33) )
    {
      do
      {
        v11 = *(unsigned __int16 *)((char *)&v29 + v10);
        v12 = *(unsigned __int16 *)((char *)&v33 + v10);
        if ( v11 != v12 )
        {
          if ( v11 > v12 )
          {
            v40 = 0;
            v25 = v35;
            v26 = v33;
            v27 = v34;
            v32 = 0;
            v36 = 0;
            v33 = v29;
            v34 = v30;
            v19 = 0;
            v35 = v31;
            v17 = 0;
            v37 = v26;
            v38 = v27;
            v18 = 0;
            v29 = v26;
            v30 = v27;
            v31 = v25;
            v39 = v25;
          }
          else
          {
            v17 = v36;
            v18 = 0;
            v19 = v32;
          }
          goto LABEL_18;
        }
        v10 += 2;
      }
      while ( v10 != 22 );
      if ( (unsigned __int16)v29 != (unsigned __int16)v33 || !WORD1(v33) )
      {
        *a3 = 0;
        a3[1] = 0;
        return 1;
      }
      if ( WORD1(v33) + 1 > 32766 )
        goto LABEL_24;
      ++WORD1(v33);
      goto LABEL_15;
    }
    v7 = WORD1(v33);
  }
  if ( v9 < -113 )
    goto LABEL_15;
  v28 = sub_487770((__int64)&v29, v9);
  v17 = v36;
  v18 = v28 != 1;
  v19 = v32;
  v8 = v7;
LABEL_18:
  v20 = 18;
  LODWORD(v21) = 0;
  if ( (unsigned __int16)v29 == (unsigned __int16)v33 )
  {
    while ( 1 )
    {
      v24 = v19 + v17 + v21;
      *(_WORD *)((char *)&v33 + v20 + 2) = v24;
      LODWORD(v21) = HIWORD(v24);
      if ( v20 == 2 )
        break;
      v19 = *(unsigned __int16 *)((char *)&v29 + v20);
      v17 = *(unsigned __int16 *)((char *)&v33 + v20);
      v20 -= 2;
    }
    v23 = 0;
  }
  else
  {
    while ( 1 )
    {
      v22 = (unsigned int)(v17 - v19 - v21);
      *(_WORD *)((char *)&v33 + v20 + 2) = v22;
      v21 = (v22 >> 16) & 1;
      if ( v20 == 2 )
        break;
      v17 = *(unsigned __int16 *)((char *)&v33 + v20);
      v19 = *(unsigned __int16 *)((char *)&v29 + v20);
      v20 -= 2;
    }
    v23 = 1;
  }
  if ( sub_487978((__int64)&v33, v18, v23, v8, 112) )
  {
LABEL_15:
    sub_4878F8((unsigned __int16 *)&v33, (__int64)a3);
    return 1;
  }
LABEL_24:
  *a3 = 0;
  a3[1] = 0;
  return 2;
}
