/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4210E8
// Address: 0x00000000004210E8

//----- (00000000004210E8) ----------------------------------------------------
__int64 __fastcall sub_4210E8(__int64 a1)
{
  __int64 v2; // x22
  int v3; // w21
  int v4; // w23
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x24
  unsigned int v8; // w21
  int v10; // w1
  int v11; // w0
  int v12; // w2
  int v13; // w1
  __int64 v14; // x3
  int v15; // w0
  unsigned __int64 v16; // x1
  _BOOL4 v17; // w23
  unsigned int v18; // w2
  unsigned int v19; // w4
  unsigned __int64 v20; // x0
  unsigned __int64 v21; // x3
  unsigned __int64 v22; // x4
  int v23; // w0
  __int64 v24; // x0
  _DWORD *v25; // x0
  unsigned int v26; // w1
  unsigned int v28; // w0
  char v29; // w0
  int v30; // w0
  _QWORD *v31; // x0
  char v32[4]; // [xsp+48h] [xbp-48h] BYREF
  int v33; // [xsp+4Ch] [xbp-44h]
  __int64 v34; // [xsp+68h] [xbp-28h]
  unsigned int v35; // [xsp+70h] [xbp-20h]

  v2 = a1 + 504;
  v3 = *(unsigned __int8 *)(a1 + 508);
  if ( (unsigned __int8)(v3 - 1) > 1u
    && !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(a1 + 496))(a1, 1, *(unsigned __int8 *)(a1 + 508)) )
  {
    return 0;
  }
  v4 = *(unsigned __int8 *)(v2 + 5);
  if ( (unsigned __int8)(v4 - 1) > 1u
    && !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(a1 + 496))(a1, 3, *(unsigned __int8 *)(v2 + 5)) )
  {
    return 0;
  }
  v5 = sub_48C428(*(_QWORD *)(a1 + 472), 0, 1);
  v6 = *(_QWORD *)(a1 + 480);
  v7 = v5 - v6;
  if ( sub_48C428(*(_QWORD *)(a1 + 472), v6 + 16, 0) == -1 )
    goto LABEL_7;
  *(_BYTE *)(a1 + 616) = v4 == 2;
  *(_BYTE *)(a1 + 617) = v3 == 2;
  *(_BYTE *)(a1 + 618) = v3 == 2;
  if ( (sub_420C98(a1, (void *)(a1 + 520), 2u, 1u) & 0x80000000) != 0 )
    goto LABEL_7;
  if ( (sub_420C98(a1, (void *)(a1 + 522), 2u, 1u) & 0x80000000) != 0 )
    goto LABEL_7;
  v8 = (unsigned __int8)sub_420EE8(a1);
  if ( !v8 )
    goto LABEL_7;
  v10 = *(unsigned __int8 *)(a1 + 617);
  if ( *(_BYTE *)(a1 + 468) )
  {
    if ( *(_BYTE *)(a1 + 617) )
    {
      *(_QWORD *)(a1 + 456) = *(_QWORD *)(a1 + 448);
      *(_DWORD *)(a1 + 464) = 8;
    }
    else
    {
      *(_QWORD *)(a1 + 456) = *(_QWORD *)(a1 + 440);
      *(_DWORD *)(a1 + 464) = 4;
    }
  }
  if ( v10 )
  {
    *(_QWORD *)(a1 + 424) = 0x800000008LL;
    *(_QWORD *)(a1 + 432) = 0x800000008LL;
    v11 = 24;
    v12 = 24;
    *(_QWORD *)(a1 + 384) = 0x3800000040LL;
    *(_QWORD *)(a1 + 392) = 0x1800000040LL;
    v13 = 16;
    *(_QWORD *)(a1 + 400) = 0x1000000010LL;
    *(_DWORD *)(a1 + 408) = 24;
  }
  else
  {
    v11 = 12;
    *(_QWORD *)(a1 + 384) = 0x2000000034LL;
    *(_QWORD *)(a1 + 392) = 0x1000000028LL;
    *(_QWORD *)(a1 + 400) = 0x800000008LL;
    v12 = 16;
    *(_DWORD *)(a1 + 408) = 12;
    *(_QWORD *)(a1 + 424) = 0x400000004LL;
    *(_QWORD *)(a1 + 432) = 0x400000004LL;
    v13 = 8;
  }
  *(_DWORD *)(a1 + 412) = v12;
  *(_DWORD *)(a1 + 416) = v13;
  *(_DWORD *)(a1 + 420) = v11;
  if ( (sub_420C98(a1, (void *)(a1 + 524), 4u, 1u) & 0x80000000) != 0
    || (sub_420C98(a1, (void *)(a1 + 528), *(int *)(a1 + 424), 1u) & 0x80000000) != 0
    || (sub_420C98(a1, (void *)(a1 + 536), *(int *)(a1 + 428), 1u) & 0x80000000) != 0
    || (sub_420C98(a1, (void *)(a1 + 544), *(int *)(a1 + 428), 1u) & 0x80000000) != 0
    || (sub_420C98(a1, (void *)(a1 + 552), 4u, 1u) & 0x80000000) != 0
    || (sub_420C98(a1, (void *)(a1 + 556), 2u, 1u) & 0x80000000) != 0
    || (sub_420C98(a1, (void *)(a1 + 558), 2u, 1u) & 0x80000000) != 0
    || (sub_420C98(a1, (void *)(a1 + 560), 2u, 1u) & 0x80000000) != 0
    || (sub_420C98(a1, (void *)(a1 + 562), 2u, 1u) & 0x80000000) != 0
    || (sub_420C98(a1, (void *)(a1 + 564), 2u, 1u) & 0x80000000) != 0
    || (sub_420C98(a1, (void *)(a1 + 566), 2u, 1u) & 0x80000000) != 0
    || *(unsigned __int16 *)(a1 + 556) != *(_DWORD *)(a1 + 384)
    && !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(a1 + 496))(a1, 2) )
  {
    goto LABEL_7;
  }
  v14 = *(_QWORD *)(a1 + 536);
  if ( (*(_WORD *)(a1 + 560) == 0) == (v14 == 0) )
  {
    if ( v14 && *(unsigned __int16 *)(a1 + 558) != *(_DWORD *)(a1 + 388) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(a1 + 496))(a1, 4) )
        goto LABEL_7;
      v30 = *(_DWORD *)(a1 + 388);
      if ( *(unsigned __int16 *)(a1 + 558) < v30 )
        goto LABEL_7;
      *(_WORD *)(a1 + 558) = v30;
    }
  }
  else
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(a1 + 496))(a1, 5) )
      goto LABEL_7;
    *(_QWORD *)(v2 + 32) = 0;
    *(_WORD *)(v2 + 56) = 0;
  }
  v15 = *(unsigned __int16 *)(a1 + 564);
  v16 = *(_QWORD *)(a1 + 544);
  if ( *(_WORD *)(a1 + 564) || !v16 )
    goto LABEL_33;
  if ( sub_48C428(*(_QWORD *)(a1 + 472), v16 + *(_QWORD *)(a1 + 480), 0) == -1
    || !(v17 = sub_420FD8((int *)a1, (__int64)v32))
    || v33 )
  {
    v15 = *(unsigned __int16 *)(a1 + 564);
    v16 = *(_QWORD *)(a1 + 544);
LABEL_33:
    v17 = 0;
    *(_DWORD *)(a1 + 568) = v15;
    goto LABEL_34;
  }
  v16 = *(_QWORD *)(a1 + 544);
  *(_DWORD *)(a1 + 568) = v34;
LABEL_34:
  v18 = *(_DWORD *)(a1 + 568);
  if ( (v18 == 0) != (v16 == 0) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(a1 + 496))(a1, 7) )
      goto LABEL_7;
    goto LABEL_36;
  }
  v19 = *(unsigned __int16 *)(a1 + 562);
  if ( !v16 )
  {
    v20 = v18 * (unsigned __int64)*(unsigned __int16 *)(a1 + 562);
    v21 = 0;
    v22 = *(_QWORD *)(a1 + 488) - *(_QWORD *)(a1 + 480);
    goto LABEL_54;
  }
  if ( v19 != *(_DWORD *)(a1 + 392) )
  {
    v29 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a1 + 496))(a1, 6, *(unsigned __int16 *)(a1 + 562));
    v19 = *(unsigned __int16 *)(a1 + 562);
    if ( !v29 || (signed int)v19 < *(_DWORD *)(a1 + 392) )
    {
LABEL_36:
      *(_QWORD *)(v2 + 40) = 0;
      *(_WORD *)(v2 + 60) = 0;
      *(_DWORD *)(v2 + 64) = 0;
      v19 = *(unsigned __int16 *)(a1 + 562);
      v18 = *(_DWORD *)(a1 + 568);
      v16 = *(_QWORD *)(a1 + 544);
      goto LABEL_37;
    }
    v18 = *(_DWORD *)(a1 + 568);
    v16 = *(_QWORD *)(a1 + 544);
  }
LABEL_37:
  v20 = v16 + v18 * (unsigned __int64)v19;
  v21 = v16;
  v22 = *(_QWORD *)(a1 + 488) - *(_QWORD *)(a1 + 480);
  if ( v16 > v20 )
  {
LABEL_38:
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(a1 + 496))(a1, 7) )
      goto LABEL_7;
    *(_QWORD *)(v2 + 40) = 0;
    *(_WORD *)(v2 + 60) = 0;
    *(_DWORD *)(v2 + 64) = 0;
    goto LABEL_40;
  }
LABEL_54:
  if ( v22 < v20 )
    goto LABEL_38;
  if ( v21 )
  {
    v26 = *(unsigned __int16 *)(a1 + 566);
    if ( v17 && v26 == 0xFFFF )
    {
      v28 = v35;
      if ( v35 )
      {
        *(_DWORD *)(a1 + 572) = v35;
LABEL_61:
        if ( v28 >= v18 )
        {
          if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(a1 + 496))(a1, 17, v28, v18) )
            goto LABEL_7;
          *(_DWORD *)(a1 + 572) = 0;
        }
        goto LABEL_40;
      }
    }
    *(_DWORD *)(a1 + 572) = v26;
    v28 = v26;
    if ( v26 )
      goto LABEL_61;
  }
LABEL_40:
  if ( !*(_QWORD *)(v2 + 32)
    || *(_WORD *)(a1 + 520) != 1
    || (*(unsigned __int8 (__fastcall **)(__int64, __int64))(a1 + 496))(a1, 18) )
  {
    v23 = *(unsigned __int16 *)(a1 + 522);
    if ( v23 == 40 || v23 == 183 )
    {
      v24 = *(_QWORD *)(a1 + 600);
      if ( v24 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
      v25 = sub_49E050(0x80u);
      *(_QWORD *)(a1 + 600) = v25;
      *(_QWORD *)v25 = off_519C80;
      v25[4] = 0;
      *((_QWORD *)v25 + 3) = 0;
      *((_QWORD *)v25 + 4) = v25 + 4;
      *((_QWORD *)v25 + 5) = v25 + 4;
      *((_QWORD *)v25 + 6) = 0;
      v25[16] = 0;
      *((_QWORD *)v25 + 9) = 0;
      *((_QWORD *)v25 + 10) = v25 + 16;
      *((_QWORD *)v25 + 11) = v25 + 16;
      *((_QWORD *)v25 + 12) = 0;
      *((_QWORD *)v25 + 13) = 0;
      *((_QWORD *)v25 + 14) = 0;
      *((_BYTE *)v25 + 120) = 0;
      *((_BYTE *)v25 + 121) = 0;
      *((_BYTE *)v25 + 122) = 0;
    }
    else
    {
      v31 = sub_49E050(8u);
      *(_QWORD *)(a1 + 600) = v31;
      *v31 = off_519BB0;
    }
    goto LABEL_8;
  }
LABEL_7:
  v8 = 0;
LABEL_8:
  sub_48C428(*(_QWORD *)(a1 + 472), v7 + *(_QWORD *)(a1 + 480), 0);
  return v8;
}
// 4210E8: could not find valid save-restore pair for x23
// 4210E8: could not find valid save-restore pair for x24
// 519BB0: using guessed type __int64 (__fastcall *off_519BB0[4])();
// 519C80: using guessed type __int64 (__fastcall *off_519C80[5])();
