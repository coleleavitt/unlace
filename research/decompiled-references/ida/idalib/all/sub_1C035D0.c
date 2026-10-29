unsigned __int64 __fastcall sub_1C035D0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned int a6,
        __m128 a7,
        __m128 a8,
        unsigned __int64 *a9,
        unsigned __int64 a10,
        __int64 a11,
        char a12,
        char a13)
{
  unsigned int v13; // r13d
  int v16; // ebx
  __int128 *v17; // rsi
  unsigned __int64 v18; // rbx
  unsigned int v20; // eax
  unsigned __int64 *v21; // rsi
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rbx
  bool v25; // al
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int128 **v29; // r14
  __int64 v30; // r9
  __int128 **v31; // rbx
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  char v38; // al
  __int64 v39; // rax
  __int64 v40; // rdx
  int v44; // [rsp+1Ch] [rbp-1F0Ch]
  unsigned int v45; // [rsp+1Ch] [rbp-1F0Ch]
  unsigned __int64 v46; // [rsp+20h] [rbp-1F08h] BYREF
  __int64 *v47; // [rsp+28h] [rbp-1F00h] BYREF
  __int128 **v48; // [rsp+30h] [rbp-1EF8h] BYREF
  __int64 v49; // [rsp+38h] [rbp-1EF0h]
  _QWORD v50[338]; // [rsp+40h] [rbp-1EE8h] BYREF
  int v51; // [rsp+AD0h] [rbp-1458h]
  char v52; // [rsp+AD4h] [rbp-1454h]
  _QWORD v53[17]; // [rsp+AD8h] [rbp-1450h] BYREF
  int v54; // [rsp+B60h] [rbp-13C8h]
  __int64 v55; // [rsp+B68h] [rbp-13C0h]
  __int64 v56; // [rsp+B70h] [rbp-13B8h]
  _QWORD *v57; // [rsp+B78h] [rbp-13B0h]
  __int64 v58; // [rsp+B80h] [rbp-13A8h]
  _QWORD v59[6]; // [rsp+B88h] [rbp-13A0h] BYREF
  _QWORD v60[2]; // [rsp+BB8h] [rbp-1370h] BYREF
  int v61; // [rsp+BC8h] [rbp-1360h]
  int v62; // [rsp+BCCh] [rbp-135Ch]
  __int64 v63; // [rsp+BD0h] [rbp-1358h]
  char v64; // [rsp+BD8h] [rbp-1350h]
  int v65; // [rsp+BDCh] [rbp-134Ch]
  int v66; // [rsp+1EE0h] [rbp-48h]

  v13 = a5;
  v16 = 4 * (a13 != 0);
  v48 = (__int128 **)v50;
  v50[336] = v53;
  v49 = 0x1000000000LL;
  v57 = v59;
  v61 = sub_C00A40(a3, a2, a3, a4, a5);
  v58 = 0x400000000LL;
  v17 = (__int128 *)a3;
  v59[4] = v60;
  v50[337] = 16;
  v51 = 0;
  v52 = 1;
  v53[16] = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v59[5] = 0;
  v60[0] = 0;
  v60[1] = 1;
  v62 = v16;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v46 = 0;
  if ( (unsigned __int8)sub_1BF5170(a1, a3, a4, a9, a10, v13, a7, a8, (unsigned int *)&v48, &v46) )
  {
    v18 = v46;
    goto LABEL_3;
  }
  if ( a13 )
  {
    v29 = v48;
    v30 = (__int64)&v48[21 * (unsigned int)v49];
    if ( v48 != (__int128 **)v30 )
    {
      v31 = &v48[21 * (unsigned int)v49];
      do
      {
        while ( 1 )
        {
          if ( ((_BYTE)v29[13] & 1) != 0 )
          {
            v17 = *v29;
            if ( !(unsigned __int8)sub_1BDFA80(a1, *v29, 0, 0, 0, v30) )
              break;
          }
          v29 += 21;
          if ( v31 == v29 )
            goto LABEL_23;
        }
        v32 = *((_DWORD *)v29 + 26);
        v29 += 21;
        v32 &= 0xFFFC03FE;
        BYTE1(v32) |= 0x2Cu;
        *((_DWORD *)v29 - 16) = v32;
      }
      while ( v31 != v29 );
LABEL_23:
      v16 = 4 * (a13 != 0);
    }
  }
  v20 = sub_EEB7E0(a3, (__int64)v17, *(double *)a7.m128_u64);
  v21 = (unsigned __int64 *)a1;
  v22 = (unsigned int)sub_1BF27B0((__int64)&v48, (_QWORD *)a1, v20, &v47, *(double *)a7.m128_u64, a8);
  if ( v16 == 4 && v47 != (__int64 *)&v48[21 * (unsigned int)v49] )
  {
    v28 = *v47;
    if ( *v47 )
    {
      if ( (*(_BYTE *)(v28 + 28) & 0x7Fu) - 35 <= 3 )
      {
        v45 = v22;
        if ( (unsigned __int8)sub_B98200((_QWORD *)v28, a1) )
        {
          LODWORD(v22) = 1;
LABEL_11:
          v18 = sub_1C028B0(a1, a2, a3, a4, v13, a6, a7, a8, a9, a10, a11, (__int64)&v48, (__int64 *)&v47, v22, a12);
          goto LABEL_3;
        }
        v22 = v45;
      }
    }
  }
  if ( (_DWORD)v22 )
    goto LABEL_11;
  v24 = *v47;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 60LL) & 0x10) != 0 )
  {
    v21 = a9;
    sub_178FD70(*(__int64 **)(a1 + 664), (__int64)a9, a10, (__int64)&v48, v22, v23);
    LODWORD(v22) = 0;
  }
  if ( !v24 )
    goto LABEL_11;
  v44 = v22;
  v25 = sub_B77D90(v24);
  LODWORD(v22) = v44;
  if ( !v25 )
    goto LABEL_11;
  v33 = sub_C1D490(v24, (__int64)v21, v26, v27);
  v34 = sub_F57E80(*(_QWORD *)(v33 & 0xFFFFFFFFFFFFFFF0LL));
  LODWORD(v22) = v44;
  if ( !v34 )
    goto LABEL_11;
  if ( (*(_QWORD *)(v34 + 24) & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    goto LABEL_11;
  if ( (*(_BYTE *)(v34 + 17) & 4) != 0 )
    goto LABEL_11;
  v37 = sub_B7D580(v24, 0, v35, v36);
  LODWORD(v22) = v44;
  if ( !v37 )
    goto LABEL_11;
  if ( (*(_BYTE *)(v37 + 84) & 0x40) == 0 )
    goto LABEL_11;
  v38 = sub_B8E180(*(_QWORD *)(a1 + 544));
  LODWORD(v22) = v44;
  if ( !v38 )
    goto LABEL_11;
  v39 = *(unsigned int *)(a1 + 1952);
  v40 = *(unsigned int *)(a1 + 1956);
  if ( *(_QWORD *)(a1 + 1944) == __PAIR64__(v40, v39) )
  {
    v40 = 0;
    v39 = 0;
  }
  v18 = sub_C0BFD0(
          *(_QWORD **)(a1 + 248),
          a3,
          a9,
          a10,
          *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19072LL),
          0,
          a6,
          (v40 << 32) | v39,
          0,
          0);
LABEL_3:
  sub_17A20D0((__int64)&v48);
  return v18;
}
