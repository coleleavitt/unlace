/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_624E0
// Address: 0x000624E0

//----- (000624E0) --------------------------------------------------------
int __fastcall sub_624E0(unsigned int a1, int *a2, int a3, unsigned int a4, _DWORD **a5)
{
  __int64 v6; // r6
  __int64 v7; // r0
  __int64 v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  unsigned int v12; // r1
  unsigned int v13; // r2
  char *v14; // r0
  unsigned __int8 *v15; // r6
  int v16; // r5
  int v17; // r0
  int v18; // r4
  int v19; // r5
  unsigned int v20; // r1
  int v21; // r1
  unsigned int v22; // r2
  _DWORD *v23; // r0
  unsigned int v24; // r2
  int v25; // r3
  int v26; // r4
  unsigned int v27; // r3
  _DWORD *v28; // r0
  int v29; // r1
  int v30; // r2
  int v31; // r2
  int v32; // r3
  bool v33; // zf
  _DWORD *v34; // r0
  unsigned int v35; // r0
  int v36; // r4
  int v37; // r6
  int v38; // r1
  _DWORD *v39; // r7
  int v40; // r1
  unsigned int v41; // r4
  _DWORD *v42; // r7
  __int64 v44; // [sp+4h] [bp-7Ch]
  __int64 v45; // [sp+Ch] [bp-74h]
  const char *v46; // [sp+14h] [bp-6Ch]
  int v47; // [sp+18h] [bp-68h]
  int v48; // [sp+2Ch] [bp-54h]
  unsigned __int8 *v49; // [sp+30h] [bp-50h]
  void **v50; // [sp+34h] [bp-4Ch]
  unsigned int v52; // [sp+50h] [bp-30h]
  int v53; // [sp+54h] [bp-2Ch]
  int v54; // [sp+58h] [bp-28h]
  int v55; // [sp+60h] [bp-20h]
  int v56; // [sp+64h] [bp-1Ch]
  int v58; // [sp+6Ch] [bp-14h]
  int v59; // [sp+6Ch] [bp-14h]
  void *ptr; // [sp+70h] [bp-10h] BYREF
  unsigned int v61; // [sp+74h] [bp-Ch]
  unsigned int v62; // [sp+78h] [bp-8h]

  *(_DWORD *)(a1 + 8) = 0;
  v61 = 0;
  ptr = nullptr;
  v62 = 0;
  v56 = ((*(_DWORD *)(a1 + 112) >> 12) | *(_DWORD *)(a1 + 116) ^ *(_DWORD *)(a1 + 112)) == 0;
  v50 = (void **)(a1 + 4);
  v6 = a3;
  qlseek((int)a2, a3, 0);
  if ( (_DWORD)v6 == -1 )
    v6 = qlseek((int)a2, 0, 1);
  LODWORD(v7) = qlsize(a2);
  v8 = v7 - v6;
  LODWORD(v6) = 0;
  if ( (HIDWORD(v6) | HIDWORD(v8)) >= 0 )
  {
    if ( a4 <= 0x6666666 && v8 >= 40 * a4 )
    {
      LODWORD(v6) = a4;
      goto LABEL_10;
    }
    LODWORD(v6) = v8 / 40;
  }
  v44 = (int)a4;
  v45 = (int)v6;
  v46 = ". Do you want to continue with the new value?";
  if ( sub_375C0() != 1 )
    sub_371F8(0, v9, v10, v11);
LABEL_10:
  v58 = v6;
  if ( (int)v6 < 1 )
  {
LABEL_20:
    v47 = 511;
    HIDWORD(v6) = a1;
    if ( v56 << 31
      || (v17 = 512,
          (((*(unsigned __int8 *)(a1 + 59) << 8) + *(unsigned __int8 *)(a1 + 58)) << 16)
        + (*(unsigned __int8 *)(a1 + 57) << 8)
        + *(unsigned __int8 *)(a1 + 56) == 23126) )
    {
      v16 = ((int (__fastcall *)(_DWORD **))(*a5)[1])(a5);
      if ( v16 )
        goto LABEL_63;
      v17 = 512;
      v6 = __PAIR64__(a1, v58);
      if ( v56 << 31 )
        v17 = *(_DWORD *)(a1 + 116);
    }
    v49 = (unsigned __int8 *)(HIDWORD(v6) + 148);
    if ( (unsigned __int16)((*(unsigned __int8 *)(HIDWORD(v6) + 149) << 8) + *(unsigned __int8 *)(HIDWORD(v6) + 148) - 10) < 4u
      || (((*(unsigned __int8 *)(HIDWORD(v6) + 59) << 8) + *(unsigned __int8 *)(HIDWORD(v6) + 58)) << 16)
       + (*(unsigned __int8 *)(HIDWORD(v6) + 57) << 8)
       + *(unsigned __int8 *)(HIDWORD(v6) + 56) == 23126 )
    {
      v17 = 1;
    }
    if ( (int)v6 > 0 )
    {
      v48 = -v17;
      v18 = 0;
      v19 = 0;
      v20 = 0;
      while ( 1 )
      {
        v52 = v20;
        LODWORD(v6) = (char *)ptr + v18;
        v55 = ((((*((unsigned __int8 *)ptr + v18 + 23) << 8) + *((unsigned __int8 *)ptr + v18 + 22)) << 16)
             + (*((unsigned __int8 *)ptr + v18 + 21) << 8)
             + *((unsigned __int8 *)ptr + v18 + 20))
            & v48;
        v21 = *(_DWORD *)(HIDWORD(v6) + 8);
        v22 = v21 + 1;
        v54 = v18;
        v53 = v19;
        if ( *(_DWORD *)(HIDWORD(v6) + 12) >= (unsigned int)(v21 + 1) )
        {
          v23 = *v50;
        }
        else
        {
          v23 = qvector_reserve((int)v50, *v50, v22, 0x10u);
          *(_DWORD *)(HIDWORD(v6) + 4) = v23;
          v21 = *(_DWORD *)(HIDWORD(v6) + 8);
          v22 = v21 + 1;
        }
        *(_DWORD *)(HIDWORD(v6) + 8) = v22;
        v23[4 * v21] = (((*(unsigned __int8 *)(v6 + 15) << 8) + *(unsigned __int8 *)(v6 + 14)) << 16)
                     + (*(unsigned __int8 *)(v6 + 13) << 8)
                     + *(unsigned __int8 *)(v6 + 12);
        v24 = (((*(unsigned __int8 *)(v6 + 19) << 8) + *(unsigned __int8 *)(v6 + 18)) << 16)
            + (*(unsigned __int8 *)(v6 + 17) << 8)
            + *(unsigned __int8 *)(v6 + 16);
        v25 = v24;
        if ( (((*(unsigned __int8 *)(v6 + 11) << 8) + *(unsigned __int8 *)(v6 + 10)) << 16)
           + (*(unsigned __int8 *)(v6 + 9) << 8)
           + *(unsigned __int8 *)(v6 + 8) )
        {
          v25 = (((*(unsigned __int8 *)(v6 + 11) << 8) + *(unsigned __int8 *)(v6 + 10)) << 16)
              + (*(unsigned __int8 *)(v6 + 9) << 8)
              + *(unsigned __int8 *)(v6 + 8);
        }
        v26 = 1;
        if ( (((*(unsigned __int8 *)(HIDWORD(v6) + 115) << 8) + *(unsigned __int8 *)(HIDWORD(v6) + 114)) << 16)
           + (*(unsigned __int8 *)(HIDWORD(v6) + 113) << 8)
           + *(unsigned __int8 *)(HIDWORD(v6) + 112) )
        {
          v26 = (((*(unsigned __int8 *)(HIDWORD(v6) + 115) << 8) + *(unsigned __int8 *)(HIDWORD(v6) + 114)) << 16)
              + (*(unsigned __int8 *)(HIDWORD(v6) + 113) << 8)
              + *(unsigned __int8 *)(HIDWORD(v6) + 112);
        }
        v27 = -v26 & (v25 + v26 - 1);
        if ( v24 >= v27 )
          v24 = v27;
        v28 = &v23[4 * v21];
        v28[3] = v24;
        v29 = v24
            + (((*(unsigned __int8 *)(v6 + 15) << 8) + *(unsigned __int8 *)(v6 + 14)) << 16)
            + (*(unsigned __int8 *)(v6 + 13) << 8)
            + *(unsigned __int8 *)(v6 + 12);
        HIDWORD(v6) = a1;
        if ( (unsigned __int16)((v49[1] << 8) + *v49 - 10) >= 4u )
        {
          v30 = 511;
          if ( (((*(unsigned __int8 *)(a1 + 115) << 8) + *(unsigned __int8 *)(a1 + 114)) << 16)
             + (*(unsigned __int8 *)(a1 + 113) << 8)
             + *(unsigned __int8 *)(a1 + 112) != 4096 )
          {
            v31 = (((*(unsigned __int8 *)(a1 + 119) << 8) + *(unsigned __int8 *)(a1 + 118)) << 16)
                + (*(unsigned __int8 *)(a1 + 117) << 8)
                + *(unsigned __int8 *)(a1 + 116);
            v32 = v31 - 1;
            v33 = v31 == 0;
            v30 = 511;
            if ( !v33 )
              v30 = v32;
          }
          v29 = (v30 + v29) & ~v30;
        }
        v28[1] = v29;
        v28[2] = v55;
        v34 = v28 + 2;
        if ( (((*(unsigned __int8 *)(a1 + 59) << 8) + *(unsigned __int8 *)(a1 + 58)) << 16)
           + (*(unsigned __int8 *)(a1 + 57) << 8)
           + *(unsigned __int8 *)(a1 + 56) == 23126 )
          *v34 = v55 + 40 - ((*(unsigned __int8 *)(a1 + 23) << 8) + *(unsigned __int8 *)(a1 + 22));
        v16 = ((int (__fastcall *)(_DWORD **, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, const char *))**a5)(
                a5,
                v6,
                v55,
                **a5,
                v44,
                HIDWORD(v44),
                v45,
                HIDWORD(v45),
                v46);
        if ( v16 )
          break;
        v35 = (((*(unsigned __int8 *)(v6 + 11) << 8) + *(unsigned __int8 *)(v6 + 10)) << 16)
            + (*(unsigned __int8 *)(v6 + 9) << 8)
            + *(unsigned __int8 *)(v6 + 8)
            + (((*(unsigned __int8 *)(v6 + 15) << 8) + *(unsigned __int8 *)(v6 + 14)) << 16)
            + (*(unsigned __int8 *)(v6 + 13) << 8)
            + *(unsigned __int8 *)(v6 + 12);
        if ( v52 >= v35 )
          v35 = v52;
        v18 = v54 + 40;
        v19 = v53 + 1;
        LODWORD(v6) = v58;
        v20 = v35;
        if ( v53 + 1 >= v58 )
          goto LABEL_51;
      }
    }
    else
    {
      v35 = 0;
LABEL_51:
      if ( (((*(unsigned __int8 *)(HIDWORD(v6) + 59) << 8) + *(unsigned __int8 *)(HIDWORD(v6) + 58)) << 16)
         + (*(unsigned __int8 *)(HIDWORD(v6) + 57) << 8)
         + *(unsigned __int8 *)(HIDWORD(v6) + 56) == 23126 )
        *(_DWORD *)(HIDWORD(v6) + 136) = v35;
      v16 = 0;
      if ( (((_DWORD)v6 != 0) & (v56 ^ 1)) == 0 )
      {
        v36 = qlsize(a2);
        v37 = *(_DWORD *)(a1 + 136);
        if ( (unsigned __int16)((v49[1] << 8) + *v49 - 10) >= 4u )
        {
          if ( (((*(unsigned __int8 *)(a1 + 115) << 8) + *(unsigned __int8 *)(a1 + 114)) << 16)
             + (*(unsigned __int8 *)(a1 + 113) << 8)
             + *(unsigned __int8 *)(a1 + 112) != 4096 )
          {
            v38 = (((*(unsigned __int8 *)(a1 + 119) << 8) + *(unsigned __int8 *)(a1 + 118)) << 16)
                + (*(unsigned __int8 *)(a1 + 117) << 8)
                + *(unsigned __int8 *)(a1 + 116);
            if ( v38 )
              v47 = v38 - 1;
          }
          v37 = (v47 + v37) & ~v47;
        }
        v39 = *(_DWORD **)(a1 + 4);
        v40 = *(_DWORD *)(a1 + 8);
        v59 = v36;
        if ( *(_DWORD *)(a1 + 12) >= (unsigned int)(v40 + 1) )
        {
          v41 = a1;
        }
        else
        {
          v39 = qvector_reserve((int)v50, v39, v40 + 1, 0x10u);
          v41 = a1;
          *(_DWORD *)(a1 + 4) = v39;
          v40 = *(_DWORD *)(a1 + 8);
        }
        memmove(v39 + 4, v39, 16 * v40);
        v16 = 0;
        *v39 = 0;
        v39[1] = v37;
        v42 = v39 + 2;
        *v42 = 0;
        v42[1] = v59;
        ++*(_DWORD *)(v41 + 8);
      }
    }
  }
  else
  {
    HIDWORD(v6) = 0;
    while ( 1 )
    {
      v12 = v61;
      v13 = v61 + 1;
      if ( v62 >= v61 + 1 )
      {
        v14 = (char *)ptr;
      }
      else
      {
        v14 = (char *)qvector_reserve((int)&ptr, ptr, v13, 0x28u);
        ptr = v14;
        v12 = v61;
        v13 = v61 + 1;
      }
      v61 = v13;
      v15 = (unsigned __int8 *)&v14[40 * v12];
      v16 = -1;
      if ( qlread((int)a2, v15, 40) != 40 )
        break;
      if ( (((v15[15] << 8) + v15[14]) << 16) + (v15[13] << 8) + v15[12] != (((v15[23] << 8) + v15[22]) << 16)
                                                                          + (v15[21] << 8)
                                                                          + v15[20]
        || (((v15[11] << 8) + v15[10]) << 16) + (v15[9] << 8) + (unsigned int)v15[8] > (((v15[19] << 8) + v15[18]) << 16)
                                                                                     + (v15[17] << 8)
                                                                                     + (unsigned int)v15[16] )
      {
        v56 = 0;
      }
      ++HIDWORD(v6);
      LODWORD(v6) = v58;
      if ( SHIDWORD(v6) >= v58 )
        goto LABEL_20;
    }
  }
LABEL_63:
  if ( ptr )
  {
    v61 = 0;
    qfree(ptr);
    v62 = 0;
    ptr = nullptr;
  }
  return v16;
}
// 62556: variable 'v7' is possibly undefined
// 629FE: variable 'v9' is possibly undefined
// 629FE: variable 'v10' is possibly undefined
// 629FE: variable 'v11' is possibly undefined
// 62880: variable 'v44' is possibly undefined
// 62880: variable 'v45' is possibly undefined
// 62880: variable 'v46' is possibly undefined
