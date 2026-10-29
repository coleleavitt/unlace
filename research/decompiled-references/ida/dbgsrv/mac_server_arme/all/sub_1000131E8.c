/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000131E8
// Address: 0x00000001000131E8

//----- (00000001000131E8) ----------------------------------------------------
__int64 __fastcall sub_1000131E8(__int64 a1, off_t a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // x0
  size_t v11; // x0
  off_t v12; // x0
  size_t v13; // x0
  off_t v14; // x0
  size_t v15; // x0
  off_t v16; // x0
  size_t v17; // x0
  off_t v18; // x0
  void *v19; // x0
  __int64 v20; // x19
  _BYTE v21[4]; // [xsp+0h] [xbp-120h] BYREF
  unsigned int v22; // [xsp+4h] [xbp-11Ch]
  unsigned int v23; // [xsp+8h] [xbp-118h]
  unsigned int v24; // [xsp+Ch] [xbp-114h]
  __int64 v25; // [xsp+10h] [xbp-110h]
  __int128 v26; // [xsp+18h] [xbp-108h]
  __int128 v27; // [xsp+28h] [xbp-F8h] BYREF
  off_t v28; // [xsp+38h] [xbp-E8h]
  __int64 v29; // [xsp+40h] [xbp-E0h]
  int v30; // [xsp+48h] [xbp-D8h]
  void *v31; // [xsp+50h] [xbp-D0h] BYREF
  __int64 v32; // [xsp+58h] [xbp-C8h]
  __int64 v33; // [xsp+60h] [xbp-C0h]
  int v34; // [xsp+68h] [xbp-B8h]
  void *v35[2]; // [xsp+70h] [xbp-B0h] BYREF
  __int128 v36; // [xsp+80h] [xbp-A0h] BYREF
  __int128 v37; // [xsp+90h] [xbp-90h]
  void *v38[4]; // [xsp+A0h] [xbp-80h] BYREF
  __int128 v39; // [xsp+C0h] [xbp-60h]
  int v40; // [xsp+D4h] [xbp-4Ch] BYREF

  result = 0;
  if ( !a2 || !a3 )
    return result;
  v40 = 0;
  if ( qlseek(*(_QWORD *)(a1 + 8), a2, 0) != a2
    || qlread(*(_QWORD *)(a1 + 8), &v40, 4u) != 4
    || qlseek(*(_QWORD *)(a1 + 8), a2, 0) != a2 )
  {
    return 0;
  }
  v31 = nullptr;
  v32 = 0;
  v34 = 0;
  v33 = 0;
  *(_OWORD *)v35 = 0u;
  v36 = 0u;
  v37 = 0u;
  memset(v38, 0, 28);
  v39 = 0u;
  *(_QWORD *)&v27 = a4;
  *((_QWORD *)&v27 + 1) = a5 + a4;
  v30 = v40;
  v28 = a2;
  v29 = a3;
  if ( v40 <= 2 )
  {
    if ( v40 == 1 )
    {
      if ( qlread(*(_QWORD *)(a1 + 8), v21, 0x18u) == 24 )
      {
        sub_100013684((__int64)&v31, v23);
        v16 = qlseek(*(_QWORD *)(a1 + 8), v22 + a2, 0);
        if ( v16 == v22 + a2 )
        {
          sub_100013744(*(_QWORD *)(a1 + 8), v23, 2u, (__int64)"Slide info TOC entries count", -1, -1);
          v17 = qlread(*(_QWORD *)(a1 + 8), v31, 2LL * v23);
          if ( v17 == 2LL * v23 )
          {
            v34 = HIDWORD(v25);
            sub_10000FC08((_QWORD **)v35, (unsigned int)(v25 * HIDWORD(v25)));
            v18 = qlseek(*(_QWORD *)(a1 + 8), v24 + a2, 0);
            if ( v18 == v24 + a2 )
            {
              v19 = (void *)qlread(*(_QWORD *)(a1 + 8), v35[0], (size_t)v35[1]);
              if ( v19 == v35[1] )
                goto LABEL_30;
            }
          }
        }
      }
      goto LABEL_31;
    }
    if ( v40 != 2 )
      goto LABEL_30;
LABEL_18:
    if ( qlread(*(_QWORD *)(a1 + 8), v21, 0x28u) == 40 )
    {
      if ( v22 )
      {
        LODWORD(v38[3]) = v22;
        v39 = v26;
        sub_100013684((__int64)&v36 + 8, v24);
        v12 = qlseek(*(_QWORD *)(a1 + 8), v23 + a2, 0);
        if ( v12 == v23 + a2 )
        {
          sub_100013744(*(_QWORD *)(a1 + 8), v24, 2u, (__int64)"Slide info page starts count", -1, -1);
          v13 = qlread(*(_QWORD *)(a1 + 8), *((void **)&v36 + 1), 2LL * v24);
          if ( v13 == 2LL * v24 )
          {
            sub_100013684((__int64)v38, HIDWORD(v25));
            v14 = qlseek(*(_QWORD *)(a1 + 8), (unsigned int)v25 + a2, 0);
            if ( v14 == (unsigned int)v25 + a2 )
            {
              sub_100013744(*(_QWORD *)(a1 + 8), HIDWORD(v25), 2u, (__int64)"Slide info page extras count", -1, -1);
              v15 = qlread(*(_QWORD *)(a1 + 8), v38[0], 2LL * HIDWORD(v25));
              if ( v15 == 2LL * HIDWORD(v25) )
                goto LABEL_30;
            }
          }
        }
      }
    }
    goto LABEL_31;
  }
  switch ( v40 )
  {
    case 3:
LABEL_10:
      if ( qlread(*(_QWORD *)(a1 + 8), v21, 0x18u) == 24 )
      {
        if ( v22 )
        {
          LODWORD(v38[3]) = v22;
          *(_QWORD *)&v39 = 0x3FF8000000000000LL;
          *((_QWORD *)&v39 + 1) = v25;
          sub_100013684((__int64)&v36 + 8, v23);
          sub_100013744(*(_QWORD *)(a1 + 8), v23, 2u, (__int64)"Slide info page starts count", -1, -1);
          v11 = qlread(*(_QWORD *)(a1 + 8), *((void **)&v36 + 1), 2LL * v23);
          if ( v11 == 2LL * v23 )
            break;
        }
      }
LABEL_31:
      result = 0;
      goto LABEL_32;
    case 4:
      goto LABEL_18;
    case 5:
      goto LABEL_10;
  }
LABEL_30:
  sub_10001381C((_QWORD *)(a1 + 648), &v27);
  result = 1;
LABEL_32:
  v20 = result;
  if ( v38[0] )
  {
    v38[1] = nullptr;
    qfree(v38[0]);
    v38[0] = nullptr;
    v38[2] = nullptr;
    result = v20;
  }
  if ( *((_QWORD *)&v36 + 1) )
  {
    *(_QWORD *)&v37 = 0;
    qfree(*((void **)&v36 + 1));
    *((_QWORD *)&v36 + 1) = 0;
    *((_QWORD *)&v37 + 1) = 0;
    result = v20;
  }
  if ( v35[0] )
  {
    v35[1] = nullptr;
    qfree(v35[0]);
    v35[0] = nullptr;
    *(_QWORD *)&v36 = 0;
    result = v20;
  }
  if ( v31 )
  {
    v32 = 0;
    qfree(v31);
    return v20;
  }
  return result;
}
