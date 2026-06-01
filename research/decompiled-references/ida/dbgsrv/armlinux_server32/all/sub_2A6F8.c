/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2A6F8
// Address: 0x0002A6F8

//----- (0002A6F8) --------------------------------------------------------
int __fastcall sub_2A6F8(int a1)
{
  int v2; // r7
  int v3; // r8
  __int64 v4; // r0
  int v5; // r0
  int v6; // r1
  bool v7; // zf
  bool v8; // r7
  int v9; // r8
  int v11; // r3
  int v12; // r0
  int v13; // r1
  __int64 v14; // r0
  int v15; // r1
  __int64 v16; // r10
  _BOOL4 v17; // r9
  unsigned int v18; // lr
  __int64 v19; // r10
  signed int v20; // r2
  unsigned __int64 v21; // r0
  unsigned int v22; // r7
  unsigned int v23; // r3
  bool v24; // cf
  unsigned __int64 v25; // r2
  int v26; // r3
  int v27; // r0
  _DWORD *v28; // r0
  _DWORD *v29; // r0
  unsigned int v30; // r7
  unsigned int v31; // r3
  int v32; // r3
  unsigned int v33; // r2
  int v34; // r0
  int v35; // r1
  bool v36; // zf
  int v37; // r0
  int v38; // r3
  unsigned __int64 v39; // [sp+10h] [bp-64h]
  __int64 v40; // [sp+20h] [bp-54h]
  _BYTE v41[4]; // [sp+2Ch] [bp-48h] BYREF
  int v42; // [sp+30h] [bp-44h]
  int v43; // [sp+4Ch] [bp-28h]
  unsigned int v44; // [sp+54h] [bp-20h]

  v2 = *(unsigned __int8 *)(a1 + 392);
  if ( (unsigned int)(v2 - 1) > 1
    && !(*(int (__fastcall **)(int, int, _DWORD))(a1 + 384))(a1, 1, *(unsigned __int8 *)(a1 + 392)) )
  {
    return 0;
  }
  v3 = *(unsigned __int8 *)(a1 + 393);
  if ( (unsigned int)(v3 - 1) > 1
    && !(*(int (__fastcall **)(int, int, _DWORD))(a1 + 384))(a1, 3, *(unsigned __int8 *)(a1 + 393)) )
  {
    return 0;
  }
  LODWORD(v4) = sub_74D98(*(_DWORD *)(a1 + 364), 0, 1);
  v40 = v4 - *(_QWORD *)(a1 + 368);
  v5 = sub_74D98(*(_DWORD *)(a1 + 364), *(_QWORD *)(a1 + 368) + 16LL, 0);
  v7 = ++v6 == 0;
  if ( !v6 )
    v7 = v5 == -1;
  if ( v7 )
    goto LABEL_9;
  v8 = v2 == 2;
  *(_BYTE *)(a1 + 480) = v3 == 2;
  *(_BYTE *)(a1 + 481) = v8;
  *(_BYTE *)(a1 + 482) = v8;
  if ( sub_2A420(a1, (void *)(a1 + 404), 2, 1) < 0 )
    goto LABEL_9;
  if ( sub_2A420(a1, (void *)(a1 + 406), 2, 1) < 0 )
    goto LABEL_9;
  v9 = sub_2A58C(a1);
  if ( !v9 )
    goto LABEL_9;
  if ( *(_BYTE *)(a1 + 481) )
  {
    v13 = 24;
    v12 = 16;
    v11 = 24;
    *(_DWORD *)(a1 + 308) = 24;
    *(_DWORD *)(a1 + 320) = 24;
    *(_DWORD *)(a1 + 312) = 16;
    *(_DWORD *)(a1 + 316) = 16;
    *(_DWORD *)(a1 + 296) = 64;
    *(_DWORD *)(a1 + 300) = 56;
    *(_DWORD *)(a1 + 304) = 64;
    *(_DWORD *)(a1 + 336) = 8;
    *(_DWORD *)(a1 + 340) = 8;
    *(_DWORD *)(a1 + 344) = 8;
    *(_DWORD *)(a1 + 348) = 8;
  }
  else
  {
    v11 = 16;
    *(_DWORD *)(a1 + 296) = 52;
    *(_DWORD *)(a1 + 304) = 40;
    *(_DWORD *)(a1 + 308) = 16;
    *(_DWORD *)(a1 + 312) = 8;
    v12 = 8;
    *(_DWORD *)(a1 + 316) = 8;
    v13 = 12;
    *(_DWORD *)(a1 + 300) = 32;
    *(_DWORD *)(a1 + 320) = 12;
    *(_DWORD *)(a1 + 336) = 4;
    *(_DWORD *)(a1 + 340) = 4;
    *(_DWORD *)(a1 + 344) = 4;
    *(_DWORD *)(a1 + 348) = 4;
  }
  *(_DWORD *)(a1 + 324) = v11;
  *(_DWORD *)(a1 + 328) = v12;
  *(_DWORD *)(a1 + 332) = v13;
  if ( sub_2A420(a1, (void *)(a1 + 408), 4, 1) < 0
    || sub_2A420(a1, (void *)(a1 + 412), *(_DWORD *)(a1 + 336), 1) < 0
    || sub_2A420(a1, (void *)(a1 + 420), *(_DWORD *)(a1 + 340), 1) < 0
    || sub_2A420(a1, (void *)(a1 + 428), *(_DWORD *)(a1 + 340), 1) < 0
    || sub_2A420(a1, (void *)(a1 + 436), 4, 1) < 0
    || sub_2A420(a1, (void *)(a1 + 440), 2, 1) < 0
    || sub_2A420(a1, (void *)(a1 + 442), 2, 1) < 0
    || sub_2A420(a1, (void *)(a1 + 444), 2, 1) < 0
    || sub_2A420(a1, (void *)(a1 + 446), 2, 1) < 0
    || sub_2A420(a1, (void *)(a1 + 448), 2, 1) < 0
    || sub_2A420(a1, (void *)(a1 + 450), 2, 1) < 0
    || *(unsigned __int16 *)(a1 + 440) != *(_DWORD *)(a1 + 296) && !(*(int (__fastcall **)(int, int))(a1 + 384))(a1, 2) )
  {
    goto LABEL_9;
  }
  v14 = *(_QWORD *)(a1 + 420);
  if ( (*(_WORD *)(a1 + 444) == 0) == (v14 == 0) )
  {
    if ( v14 && *(unsigned __int16 *)(a1 + 442) != *(_DWORD *)(a1 + 300) )
    {
      if ( !(*(int (__fastcall **)(int, int))(a1 + 384))(a1, 4) )
        goto LABEL_9;
      v38 = *(_DWORD *)(a1 + 300);
      if ( *(unsigned __int16 *)(a1 + 442) < v38 )
        goto LABEL_9;
      *(_WORD *)(a1 + 442) = v38;
    }
  }
  else
  {
    if ( !(*(int (__fastcall **)(int, int))(a1 + 384))(a1, 5) )
      goto LABEL_9;
    *(_DWORD *)(a1 + 420) = 0;
    *(_DWORD *)(a1 + 424) = 0;
    *(_WORD *)(a1 + 444) = 0;
  }
  v15 = *(unsigned __int16 *)(a1 + 448);
  v16 = *(_QWORD *)(a1 + 428);
  if ( *(_WORD *)(a1 + 448) || !v16 )
    goto LABEL_34;
  v34 = sub_74D98(*(_DWORD *)(a1 + 364), v16 + *(_QWORD *)(a1 + 368), *(unsigned __int16 *)(a1 + 448));
  v36 = ++v35 == 0;
  if ( !v35 )
    v36 = v34 == -1;
  if ( v36 || !(v17 = sub_2A634((signed int *)a1, (int)v41)) || v42 )
  {
    v15 = *(unsigned __int16 *)(a1 + 448);
LABEL_34:
    v17 = 0;
    *(_DWORD *)(a1 + 452) = v15;
    goto LABEL_35;
  }
  *(_DWORD *)(a1 + 452) = v43;
LABEL_35:
  v18 = *(_DWORD *)(a1 + 452);
  v19 = *(_QWORD *)(a1 + 428);
  if ( (v18 == 0) != (v19 == 0) )
  {
    if ( !(*(int (__fastcall **)(int, int, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD))(a1 + 384))(
            a1,
            7,
            *(_DWORD *)(a1 + 452),
            *(_DWORD *)(a1 + 384),
            v19,
            HIDWORD(v19),
            *(_DWORD *)(a1 + 376) - *(_DWORD *)(a1 + 368),
            (*(_QWORD *)(a1 + 376) - *(_QWORD *)(a1 + 368)) >> 32) )
      goto LABEL_9;
    v20 = *(unsigned __int16 *)(a1 + 446);
    goto LABEL_38;
  }
  v20 = *(unsigned __int16 *)(a1 + 446);
  if ( !v19 )
  {
    LODWORD(v21) = *(_DWORD *)(a1 + 428);
    v21 = (unsigned int)v21;
    v30 = *(_DWORD *)(a1 + 376);
    v31 = *(_DWORD *)(a1 + 368);
    v24 = v30 >= v31;
    LODWORD(v39) = v30 - v31;
    v25 = *(unsigned __int16 *)(a1 + 446) * (unsigned __int64)v18 + (unsigned int)v21;
    HIDWORD(v39) = *(_DWORD *)(a1 + 380) - (*(_DWORD *)(a1 + 372) + !v24);
    goto LABEL_54;
  }
  if ( v20 != *(_DWORD *)(a1 + 304) )
  {
    v37 = (*(int (__fastcall **)(int, int))(a1 + 384))(a1, 6);
    v20 = *(unsigned __int16 *)(a1 + 446);
    if ( !v37 || v20 < *(_DWORD *)(a1 + 304) )
    {
LABEL_38:
      v18 = 0;
      *(_DWORD *)(a1 + 428) = 0;
      *(_DWORD *)(a1 + 432) = 0;
      *(_WORD *)(a1 + 448) = 0;
      *(_DWORD *)(a1 + 452) = 0;
      goto LABEL_39;
    }
    v18 = *(_DWORD *)(a1 + 452);
  }
LABEL_39:
  v21 = *(_QWORD *)(a1 + 428);
  v22 = *(_DWORD *)(a1 + 376);
  v23 = *(_DWORD *)(a1 + 368);
  v24 = v22 >= v23;
  LODWORD(v39) = v22 - v23;
  v25 = (unsigned int)v20 * (unsigned __int64)v18 + v21;
  HIDWORD(v39) = *(_DWORD *)(a1 + 380) - (*(_DWORD *)(a1 + 372) + !v24);
  if ( v25 < v21 )
  {
LABEL_40:
    if ( !(*(int (__fastcall **)(int, int, unsigned int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 384))(
            a1,
            7,
            v18,
            *(_DWORD *)(a1 + 384),
            v21,
            HIDWORD(v21),
            v39,
            HIDWORD(v39)) )
      goto LABEL_9;
    *(_DWORD *)(a1 + 428) = 0;
    *(_DWORD *)(a1 + 432) = 0;
    *(_WORD *)(a1 + 448) = 0;
    *(_DWORD *)(a1 + 452) = 0;
    goto LABEL_42;
  }
LABEL_54:
  if ( v39 < v25 )
    goto LABEL_40;
  if ( v21 )
  {
    v32 = *(unsigned __int16 *)(a1 + 450);
    if ( v32 == 0xFFFF && v17 )
    {
      v33 = v44;
      if ( v44 )
      {
        *(_DWORD *)(a1 + 456) = v44;
LABEL_59:
        if ( v33 >= v18 )
        {
          if ( !(*(int (__fastcall **)(int, int))(a1 + 384))(a1, 17) )
            goto LABEL_9;
          *(_DWORD *)(a1 + 456) = 0;
        }
        goto LABEL_42;
      }
    }
    v33 = *(unsigned __int16 *)(a1 + 450);
    *(_DWORD *)(a1 + 456) = v32;
    if ( v32 )
      goto LABEL_59;
  }
LABEL_42:
  if ( !*(_QWORD *)(a1 + 420) || *(_WORD *)(a1 + 404) != 1 || (*(int (__fastcall **)(int, int))(a1 + 384))(a1, 18) )
  {
    v26 = *(unsigned __int16 *)(a1 + 406);
    if ( v26 == 40 || v26 == 183 )
    {
      v27 = *(_DWORD *)(a1 + 472);
      if ( v27 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 4))(v27);
      v28 = sub_808A4(0x40u);
      *(_DWORD *)(a1 + 472) = v28;
      v28[4] = v28 + 2;
      v28[5] = v28 + 2;
      *v28 = &off_D0640;
      v28[10] = v28 + 8;
      v28[11] = v28 + 8;
      v28[2] = 0;
      v28[3] = 0;
      v28[6] = 0;
      v28[8] = 0;
      v28[9] = 0;
      v28[12] = 0;
      v28[13] = 0;
      v28[14] = 0;
      *((_BYTE *)v28 + 60) = 0;
      *((_BYTE *)v28 + 61) = 0;
      *((_BYTE *)v28 + 62) = 0;
    }
    else
    {
      v29 = sub_808A4(4u);
      *(_DWORD *)(a1 + 472) = v29;
      *v29 = &off_D05D8;
    }
    goto LABEL_10;
  }
LABEL_9:
  v9 = 0;
LABEL_10:
  sub_74D98(*(_DWORD *)(a1 + 364), v40 + *(_QWORD *)(a1 + 368), 0);
  return v9;
}
// 2A784: variable 'v4' is possibly undefined
// 2A78C: variable 'v6' is possibly undefined
// 2ABF0: variable 'v35' is possibly undefined
// D05D8: using guessed type _UNKNOWN *;
// D0640: using guessed type _UNKNOWN *off_D0640;
