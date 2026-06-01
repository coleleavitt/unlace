/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_413650
// Address: 0x00413650

//----- (00413650) --------------------------------------------------------
int __thiscall sub_413650(__int32 this)
{
  __m128i *v2; // eax
  __m128i *v3; // ebx
  __int32 *v4; // esi
  _DWORD *v5; // eax
  int *v6; // ebx
  int v7; // eax
  int v8; // esi
  unsigned int v9; // eax
  int v10; // ecx
  _DWORD *v11; // eax
  bool v12; // zf
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int *v18; // ebx
  void **v19; // esi
  int v20; // ecx
  _DWORD *v21; // eax
  int v22; // eax
  int v23; // esi
  int v24; // ebx
  int v25; // ecx
  _DWORD *v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int *v32; // ebx
  void **v33; // esi
  int v34; // ecx
  _DWORD *v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int *v48; // ebx
  int v49; // eax
  int v50; // esi
  unsigned int v51; // eax
  int v52; // ecx
  _DWORD *v53; // eax
  int v54; // eax
  int *v55; // ebx
  int v56; // eax
  int v57; // esi
  unsigned int v58; // eax
  int v59; // ecx
  _DWORD *v60; // eax
  int result; // eax
  int *v62; // ebx
  int v63; // eax
  int v64; // esi
  unsigned int v65; // eax
  int v66; // ecx
  _DWORD *v67; // eax
  int v68; // [esp+10h] [ebp-18h]
  int v69; // [esp+10h] [ebp-18h]
  int v70; // [esp+10h] [ebp-18h]
  int v71; // [esp+10h] [ebp-18h]
  int v72; // [esp+10h] [ebp-18h]
  int v73; // [esp+10h] [ebp-18h]
  int v74; // [esp+10h] [ebp-18h]
  int v75; // [esp+14h] [ebp-14h]
  unsigned int v76; // [esp+14h] [ebp-14h]
  int v77; // [esp+14h] [ebp-14h]
  unsigned int v78; // [esp+14h] [ebp-14h]
  int v79; // [esp+18h] [ebp-10h]
  int v80; // [esp+18h] [ebp-10h]
  int v81; // [esp+18h] [ebp-10h]

  v2 = (__m128i *)sub_4627C2(0x320u);
  v3 = v2;
  if ( v2 )
  {
    v2->m128i_i32[0] = (__int32)&off_48A244;
    v2->m128i_i32[1] = this + 264;
    v2->m128i_i32[2] = 0;
    v2->m128i_i32[3] = 0;
    v2[1].m128i_i32[0] = 0;
    v4 = &v2[1].m128i_i32[1];
    v2[1].m128i_i32[1] = 0;
    v2[1].m128i_i32[2] = 0;
    v2[1].m128i_i32[3] = 0;
    v5 = sub_4627C2(0x10u);
    *v5 = v5;
    v5[1] = v5;
    v3[1].m128i_i32[2] = (__int32)v5;
    v3[2].m128i_i32[0] = 0;
    v3[2].m128i_i32[1] = 0;
    v3[2].m128i_i32[2] = 0;
    v3[2].m128i_i32[3] = 7;
    v3[3].m128i_i32[0] = 8;
    *v4 = 1065353216;
    sub_40B9C0((int)v3[2].m128i_i32, 0x10u, v3[1].m128i_i32[2]);
    v3[3].m128i_i32[1] = 0;
    v3[3].m128i_i32[2] = 0;
    v3->m128i_i32[0] = (__int32)&off_48A4C8;
    v3[3].m128i_i32[3] = this;
    v3[4].m128i_i32[0] = 0;
    v3[4].m128i_i32[1] = 0;
    v3[4].m128i_i32[2] = 0;
    v3[4].m128i_i32[3] = 0;
    sub_464890(v3 + 5, 0, 0x40u);
    sub_464890(v3 + 9, 0, 0x290u);
    sub_416440((_DWORD *)v3->m128i_i32[1], (const char **)off_4B4C60, (char *)1);
  }
  else
  {
    v3 = nullptr;
  }
  *(_DWORD *)(this + 260) = v3;
  v6 = dword_4B47DC;
  v79 = 144;
  v75 = 8;
  do
  {
    v7 = *(_DWORD *)(this + 260);
    v8 = v7 + 8;
    v68 = v7;
    v9 = *(_DWORD *)(v7 + 12) + 1;
    if ( v9 > *(_DWORD *)(v8 + 8) )
      *(_DWORD *)v8 = sub_453B00(v8, *(void **)v8, v9, 0x14u);
    v10 = *(_DWORD *)(v8 + 4);
    *(_DWORD *)(v8 + 4) = v10 + 1;
    v10 *= 5;
    v11 = *(_DWORD **)v8;
    v11[v10] = 1;
    v11[v10 + 1] = -1;
    v11[v10 + 2] = v79;
    v11[v10 + 3] = 10;
    v11[v10 + 4] = 10;
    sub_40C3F0(
      *(_DWORD *)(v68 + 4),
      (const char *)*(v6 - 3),
      *(v6 - 2),
      *((_BYTE *)v6 - 3),
      *((_BYTE *)v6 - 4),
      *v6,
      v6[1]);
    v6 += 5;
    v12 = v75-- == 1;
    v79 += 16;
  }
  while ( !v12 );
  switch ( byte_4B4879 )
  {
    case 1:
      v13 = 2;
      break;
    case 2:
      v13 = 4;
      break;
    case 7:
      v13 = 8;
      break;
    default:
      goto LABEL_154;
  }
  sub_40C340(*(int **)(this + 260), 0, (int)&off_4B4870, 788, 4, v13, -1);
  switch ( byte_4B488D )
  {
    case 1:
      v14 = 2;
      break;
    case 2:
      v14 = 4;
      break;
    case 7:
      v14 = 8;
      break;
    default:
      goto LABEL_154;
  }
  sub_40C340(*(int **)(this + 260), 0, (int)&off_4B4884, 792, 4, v14, -1);
  switch ( byte_4B48A1 )
  {
    case 1:
      v15 = 2;
      break;
    case 2:
      v15 = 4;
      break;
    case 7:
      v15 = 8;
      break;
    default:
      goto LABEL_154;
  }
  sub_40C340(*(int **)(this + 260), 0, (int)&off_4B4898, 796, 4, v15, -1);
  switch ( byte_4B48B5 )
  {
    case 1:
      v16 = 2;
      break;
    case 2:
      v16 = 4;
      break;
    case 7:
      v16 = 8;
      break;
    default:
      goto LABEL_154;
  }
  v17 = sub_40C340(*(int **)(this + 260), 0, (int)&off_4B48AC, 124, 4, v16, -1);
  v12 = *(_BYTE *)(this + 480) == 0;
  v18 = *(int **)(this + 260);
  *(_DWORD *)(this + 428) = v17;
  if ( v12 )
  {
    switch ( byte_4B48C9 )
    {
      case 1:
        v27 = 2;
        break;
      case 2:
        v27 = 4;
        break;
      case 7:
        v27 = 8;
        break;
      default:
        goto LABEL_154;
    }
    *(_DWORD *)(this + 432) = sub_40C340(v18, 0, (int)&off_4B48C0, 128, 4, v27, -1);
    switch ( byte_4B48DD )
    {
      case 1:
        v28 = 2;
        break;
      case 2:
        v28 = 4;
        break;
      case 7:
        v28 = 8;
        break;
      default:
        goto LABEL_154;
    }
    v24 = sub_40C340(*(int **)(this + 260), 0, (int)&off_4B48D4, 132, 4, v28, -1);
  }
  else
  {
    v19 = (void **)(v18 + 2);
    v69 = v18[3];
    if ( v69 + 1 > (unsigned int)v18[4] )
      *v19 = sub_453B00((int)(v18 + 2), *v19, v69 + 1, 0x14u);
    v20 = v18[3];
    v18[3] = v20 + 1;
    v20 *= 5;
    v21 = *v19;
    v21[v20] = 3;
    v21[v20 + 1] = -1;
    v21[v20 + 2] = sub_40D210;
    v21[v20 + 3] = nullsub_1;
    v21[v20 + 4] = 0;
    sub_40C3F0(v18[1], off_4B48C0, dword_4B48C4, byte_4B48C9, byte_4B48C8, dword_4B48CC, dword_4B48D0);
    *(_DWORD *)(this + 432) = v69;
    v22 = *(_DWORD *)(this + 260);
    v23 = v22 + 8;
    v70 = v22;
    v24 = *(_DWORD *)(v22 + 12);
    if ( (unsigned int)(v24 + 1) > *(_DWORD *)(v22 + 16) )
      *(_DWORD *)v23 = sub_453B00(v23, *(void **)v23, v24 + 1, 0x14u);
    v25 = *(_DWORD *)(v23 + 4);
    *(_DWORD *)(v23 + 4) = v25 + 1;
    v25 *= 5;
    v26 = *(_DWORD **)v23;
    v26[v25] = 3;
    v26[v25 + 1] = -1;
    v26[v25 + 2] = sub_40D210;
    v26[v25 + 3] = nullsub_1;
    v26[v25 + 4] = 0;
    sub_40C3F0(*(_DWORD *)(v70 + 4), off_4B48D4, dword_4B48D8, byte_4B48DD, byte_4B48DC, dword_4B48E0, dword_4B48E4);
  }
  *(_DWORD *)(this + 436) = v24;
  switch ( byte_4B48F1 )
  {
    case 1:
      v29 = 2;
      break;
    case 2:
      v29 = 4;
      break;
    case 7:
      v29 = 8;
      break;
    default:
      goto LABEL_154;
  }
  *(_DWORD *)(this + 420) = sub_40C340(*(int **)(this + 260), 0, (int)&off_4B48E8, 136, 4, v29, -1);
  switch ( byte_4B4905 )
  {
    case 1:
      v30 = 2;
      break;
    case 2:
      v30 = 4;
      break;
    case 7:
      v30 = 8;
      break;
    default:
      goto LABEL_154;
  }
  v31 = sub_40C340(*(int **)(this + 260), 0, (int)&off_4B48FC, 140, 4, v30, -1);
  v12 = *(_BYTE *)(this + 480) == 0;
  v32 = *(int **)(this + 260);
  *(_DWORD *)(this + 424) = v31;
  if ( v12 )
  {
    switch ( byte_4B4919 )
    {
      case 1:
        v37 = 2;
        break;
      case 2:
        v37 = 4;
        break;
      case 7:
        v37 = 8;
        break;
      default:
        goto LABEL_154;
    }
    v36 = sub_40C340(v32, 0, (int)&off_4B4910, 120, 4, v37, -1);
  }
  else
  {
    v33 = (void **)(v32 + 2);
    v71 = v32[3];
    if ( v71 + 1 > (unsigned int)v32[4] )
      *v33 = sub_453B00((int)(v32 + 2), *v33, v71 + 1, 0x14u);
    v34 = v32[3];
    v32[3] = v34 + 1;
    v34 *= 5;
    v35 = *v33;
    v35[v34] = 3;
    v35[v34 + 1] = -1;
    v35[v34 + 2] = sub_40D210;
    v35[v34 + 3] = nullsub_1;
    v35[v34 + 4] = 0;
    sub_40C3F0(v32[1], off_4B4910, dword_4B4914, byte_4B4919, byte_4B4918, dword_4B491C, dword_4B4920);
    v36 = v71;
  }
  *(_DWORD *)(this + 440) = v36;
  switch ( byte_4B470D )
  {
    case 1:
      v38 = 2;
      break;
    case 2:
      v38 = 4;
      break;
    case 7:
      v38 = 8;
      break;
    default:
      goto LABEL_154;
  }
  sub_40C340(*(int **)(this + 260), 0, (int)&off_4B4704, 80, 4, v38, -1);
  switch ( byte_4B4721 )
  {
    case 1:
      v39 = 2;
      break;
    case 2:
      v39 = 4;
      break;
    case 7:
      v39 = 8;
      break;
    default:
      goto LABEL_154;
  }
  sub_40C340(*(int **)(this + 260), 0, (int)&off_4B4718, 84, 4, v39, -1);
  switch ( byte_4B4735 )
  {
    case 1:
      v40 = 2;
      break;
    case 2:
      v40 = 4;
      break;
    case 7:
      v40 = 8;
      break;
    default:
      goto LABEL_154;
  }
  sub_40C340(*(int **)(this + 260), 0, (int)&off_4B472C, 88, 4, v40, -1);
  switch ( byte_4B4749 )
  {
    case 1:
      v41 = 2;
      break;
    case 2:
      v41 = 4;
      break;
    case 7:
      v41 = 8;
      break;
    default:
      goto LABEL_154;
  }
  sub_40C340(*(int **)(this + 260), 0, (int)&off_4B4740, 92, 4, v41, -1);
  switch ( byte_4B475D )
  {
    case 1:
      v42 = 2;
      break;
    case 2:
      v42 = 4;
      break;
    case 7:
      v42 = 8;
      break;
    default:
      goto LABEL_154;
  }
  sub_40C340(*(int **)(this + 260), 0, (int)&off_4B4754, 100, 4, v42, -1);
  switch ( byte_4B4771 )
  {
    case 1:
      v43 = 2;
      break;
    case 2:
      v43 = 4;
      break;
    case 7:
      v43 = 8;
      break;
    default:
      goto LABEL_154;
  }
  sub_40C340(*(int **)(this + 260), 0, (int)&off_4B4768, 96, 4, v43, -1);
  switch ( byte_4B4785 )
  {
    case 1:
      v44 = 2;
      break;
    case 2:
      v44 = 4;
      break;
    case 7:
      v44 = 8;
      break;
    default:
      goto LABEL_154;
  }
  sub_40C340(*(int **)(this + 260), 0, (int)&off_4B477C, 104, 4, v44, -1);
  switch ( byte_4B4799 )
  {
    case 1:
      v45 = 2;
      break;
    case 2:
      v45 = 4;
      break;
    case 7:
      v45 = 8;
      break;
    default:
      goto LABEL_154;
  }
  *(_DWORD *)(this + 320) = sub_40C340(*(int **)(this + 260), 0, (int)&off_4B4790, 108, 4, v45, -1);
  switch ( byte_4B47AD )
  {
    case 1:
      v46 = 2;
      break;
    case 2:
      v46 = 4;
      break;
    case 7:
      v46 = 8;
      break;
    default:
      goto LABEL_154;
  }
  *(_DWORD *)(this + 324) = sub_40C340(*(int **)(this + 260), 0, (int)&off_4B47A4, 112, 4, v46, -1);
  switch ( byte_4B47C1 )
  {
    case 1:
      v47 = 2;
      break;
    case 2:
      v47 = 4;
      break;
    case 7:
      v47 = 8;
      break;
    default:
      goto LABEL_154;
  }
  *(_DWORD *)(this + 416) = sub_40C340(*(int **)(this + 260), 0, (int)&off_4B47B8, 116, 4, v47, -1);
  v48 = (int *)&off_4B4934;
  v80 = 272;
  v76 = 0;
  *(_DWORD *)(this + 720) = 8 * (*(_BYTE *)(this + 480) != 0) + 8;
  do
  {
    v49 = *(_DWORD *)(this + 260);
    v50 = v49 + 8;
    v72 = v49;
    v51 = *(_DWORD *)(v49 + 12) + 1;
    if ( v51 > *(_DWORD *)(v50 + 8) )
      *(_DWORD *)v50 = sub_453B00(v50, *(void **)v50, v51, 0x14u);
    v52 = *(_DWORD *)(v50 + 4);
    *(_DWORD *)(v50 + 4) = v52 + 1;
    v52 *= 5;
    v53 = *(_DWORD **)v50;
    v53[v52] = 2;
    v53[v52 + 1] = -1;
    v53[v52 + 2] = v80;
    v53[v52 + 3] = 16;
    v53[v52 + 4] = 16;
    sub_40C3F0(
      *(_DWORD *)(v72 + 4),
      (const char *)*(v48 - 3),
      *(v48 - 2),
      *((_BYTE *)v48 - 3),
      *((_BYTE *)v48 - 4),
      *v48,
      v48[1]);
    v80 += 16;
    v48 += 5;
    ++v76;
  }
  while ( v76 < *(_DWORD *)(this + 720) );
  if ( byte_4B4A71 != 1 )
  {
    if ( byte_4B4A71 == 2 )
    {
      v54 = 4;
      goto LABEL_140;
    }
    if ( byte_4B4A71 == 7 )
    {
      v54 = 8;
      goto LABEL_140;
    }
LABEL_154:
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(1798);
  }
  v54 = 2;
LABEL_140:
  sub_40C340(*(int **)(this + 260), 0, (int)&off_4B4A68, 784, 4, v54, -1);
  v77 = 144;
  v55 = (int *)&off_4B4A8C;
  v81 = 8;
  do
  {
    v56 = *(_DWORD *)(this + 260);
    v57 = v56 + 8;
    v73 = v56;
    v58 = *(_DWORD *)(v56 + 12) + 1;
    if ( v58 > *(_DWORD *)(v57 + 8) )
      *(_DWORD *)v57 = sub_453B00(v57, *(void **)v57, v58, 0x14u);
    v59 = *(_DWORD *)(v57 + 4);
    *(_DWORD *)(v57 + 4) = v59 + 1;
    v59 *= 5;
    v60 = *(_DWORD **)v57;
    v60[v59] = 2;
    v60[v59 + 1] = -1;
    v60[v59 + 2] = v77;
    v60[v59 + 3] = 8;
    v60[v59 + 4] = 8;
    result = sub_40C3F0(
               *(_DWORD *)(v73 + 4),
               (const char *)*(v55 - 3),
               *(v55 - 2),
               *((_BYTE *)v55 - 3),
               *((_BYTE *)v55 - 4),
               *v55,
               v55[1]);
    v55 += 5;
    v12 = v81-- == 1;
    v77 += 16;
  }
  while ( !v12 );
  v78 = 0;
  if ( *(_DWORD *)(this + 720) )
  {
    v62 = (int *)&off_4B4B2C;
    do
    {
      v63 = *(_DWORD *)(this + 260);
      v64 = v63 + 8;
      v74 = v63;
      v65 = *(_DWORD *)(v63 + 12) + 1;
      if ( v65 > *(_DWORD *)(v64 + 8) )
        *(_DWORD *)v64 = sub_453B00(v64, *(void **)v64, v65, 0x14u);
      v66 = *(_DWORD *)(v64 + 4);
      *(_DWORD *)(v64 + 4) = v66 + 1;
      v66 *= 5;
      v67 = *(_DWORD **)v64;
      v67[v66] = 3;
      v67[v66 + 1] = -1;
      v67[v66 + 2] = sub_417EB0;
      v67[v66 + 3] = sub_417EF0;
      v67[v66 + 4] = v78;
      result = sub_40C3F0(
                 *(_DWORD *)(v74 + 4),
                 (const char *)*(v62 - 3),
                 *(v62 - 2),
                 *((_BYTE *)v62 - 3),
                 *((_BYTE *)v62 - 4),
                 *v62,
                 v62[1]);
      v62 += 5;
      ++v78;
    }
    while ( v78 < *(_DWORD *)(this + 720) );
  }
  return result;
}
// 4015F0: using guessed type int __cdecl nullsub_1(_DWORD);
// 48A244: using guessed type int (__stdcall *off_48A244)(char);
// 48A4C8: using guessed type int (__stdcall *off_48A4C8)(char);
// 4B4704: using guessed type int *off_4B4704;
// 4B470D: using guessed type char byte_4B470D;
// 4B4718: using guessed type int *off_4B4718;
// 4B4721: using guessed type char byte_4B4721;
// 4B472C: using guessed type int *off_4B472C;
// 4B4735: using guessed type char byte_4B4735;
// 4B4740: using guessed type int *off_4B4740;
// 4B4749: using guessed type char byte_4B4749;
// 4B4754: using guessed type char (**off_4B4754)[3];
// 4B475D: using guessed type char byte_4B475D;
// 4B4768: using guessed type char (**off_4B4768)[3];
// 4B4771: using guessed type char byte_4B4771;
// 4B477C: using guessed type int *off_4B477C;
// 4B4785: using guessed type char byte_4B4785;
// 4B4790: using guessed type int *off_4B4790;
// 4B4799: using guessed type char byte_4B4799;
// 4B47A4: using guessed type int *off_4B47A4;
// 4B47AD: using guessed type char byte_4B47AD;
// 4B47B8: using guessed type int (*off_4B47B8)[9];
// 4B47C1: using guessed type char byte_4B47C1;
// 4B47DC: using guessed type int dword_4B47DC[2];
// 4B4870: using guessed type char *off_4B4870;
// 4B4879: using guessed type char byte_4B4879;
// 4B4884: using guessed type char *off_4B4884;
// 4B488D: using guessed type char byte_4B488D;
// 4B4898: using guessed type char *off_4B4898;
// 4B48A1: using guessed type char byte_4B48A1;
// 4B48AC: using guessed type char *off_4B48AC;
// 4B48B5: using guessed type char byte_4B48B5;
// 4B48C0: using guessed type char *off_4B48C0;
// 4B48C4: using guessed type int dword_4B48C4;
// 4B48C8: using guessed type char byte_4B48C8;
// 4B48C9: using guessed type char byte_4B48C9;
// 4B48CC: using guessed type int dword_4B48CC;
// 4B48D0: using guessed type int dword_4B48D0;
// 4B48D4: using guessed type char *off_4B48D4;
// 4B48D8: using guessed type int dword_4B48D8;
// 4B48DC: using guessed type char byte_4B48DC;
// 4B48DD: using guessed type char byte_4B48DD;
// 4B48E0: using guessed type int dword_4B48E0;
// 4B48E4: using guessed type int dword_4B48E4;
// 4B48E8: using guessed type char *off_4B48E8;
// 4B48F1: using guessed type char byte_4B48F1;
// 4B48FC: using guessed type char *off_4B48FC;
// 4B4905: using guessed type char byte_4B4905;
// 4B4910: using guessed type char *off_4B4910;
// 4B4914: using guessed type int dword_4B4914;
// 4B4918: using guessed type char byte_4B4918;
// 4B4919: using guessed type char byte_4B4919;
// 4B491C: using guessed type int dword_4B491C;
// 4B4920: using guessed type int dword_4B4920;
// 4B4934: using guessed type char **off_4B4934;
// 4B4A68: using guessed type char *off_4B4A68;
// 4B4A71: using guessed type char byte_4B4A71;
// 4B4A8C: using guessed type char **off_4B4A8C;
// 4B4B2C: using guessed type char **off_4B4B2C;
// 4B4C60: using guessed type char *off_4B4C60[6];
// 4B70F0: using guessed type char byte_4B70F0;
