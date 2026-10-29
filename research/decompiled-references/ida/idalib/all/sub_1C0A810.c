__int64 __fastcall sub_1C0A810(
        __m128 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v11; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int32 v17; // eax
  __int64 *v18; // r14
  __int64 v19; // rax
  unsigned int *v20; // rsi
  unsigned __int8 v21; // dl
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r12
  unsigned int v26; // eax
  __int64 v27; // rax
  __int64 *v28; // rsi
  unsigned int v29; // eax
  __int64 *v30; // rsi
  unsigned int v31; // ecx
  unsigned int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rsi
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned int v46; // eax
  __int64 v47; // rax
  __int64 v48; // r15
  __int64 v49; // rax
  __int64 v50; // rdi
  char v51; // al
  _QWORD *v52; // rax
  __int64 v53; // [rsp+0h] [rbp-1B8h]
  int v54; // [rsp+Ch] [rbp-1ACh] BYREF
  __int64 v55; // [rsp+10h] [rbp-1A8h] BYREF
  __int64 *v56; // [rsp+18h] [rbp-1A0h] BYREF
  int v57; // [rsp+24h] [rbp-194h] BYREF
  __int64 v58; // [rsp+28h] [rbp-190h] BYREF
  void *v59[2]; // [rsp+30h] [rbp-188h] BYREF
  __int64 v60; // [rsp+40h] [rbp-178h] BYREF
  unsigned int v61; // [rsp+50h] [rbp-168h] BYREF
  char v62; // [rsp+54h] [rbp-164h]
  __int64 v63; // [rsp+58h] [rbp-160h]
  __int64 v64; // [rsp+60h] [rbp-158h]
  int v65; // [rsp+68h] [rbp-150h]
  __int64 v66; // [rsp+70h] [rbp-148h]
  __int16 v67; // [rsp+78h] [rbp-140h]
  __m128i v68; // [rsp+E0h] [rbp-D8h] BYREF
  _BYTE v69[16]; // [rsp+F0h] [rbp-C8h] BYREF
  void *ptr; // [rsp+100h] [rbp-B8h]
  __int64 v71; // [rsp+110h] [rbp-A8h] BYREF
  __int64 v72; // [rsp+130h] [rbp-88h] BYREF

  v56 = a2;
  v55 = a3;
  v54 = a4;
  if ( (unsigned __int8)sub_1BC8220((__int64)a1, (__int64 *)&v56, (__m128i)a7, a8, a3, a4, a5, (__int64)a6) )
    return 1;
  if ( (unsigned int)(v54 - 5) <= 1 )
    sub_1BFA5E0(&v68, (__int64)a1, (unsigned __int64)v56, a7, a8);
  else
    sub_1BFFB80(&v68, a1, v56, v55, 0, 0, a7, a8);
  v17 = v68.m128i_i32[0] & 0x7FFFFFFF;
  if ( (v68.m128i_i32[0] & 0x7FFFFFFF) == 2 )
  {
    v18 = (__int64 *)v69;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v55 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 48 )
      v18 = &v72;
    goto LABEL_10;
  }
  if ( v17 <= 2 )
  {
    if ( !v17 )
    {
      v18 = (__int64 *)v69;
LABEL_10:
      switch ( *((_BYTE *)v18 + 1) )
      {
        case 0:
        case 6:
        case 9:
        case 0x1B:
          goto LABEL_13;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 7:
        case 8:
        case 0xA:
        case 0xB:
        case 0xC:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1A:
        case 0x1C:
        case 0x1D:
        case 0x1E:
        case 0x1F:
        case 0x20:
        case 0x21:
          goto LABEL_34;
        case 0xD:
        case 0xE:
          v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v19 + 16) == 13 && ((*(_WORD *)(v19 + 18) >> 3) & 0x1FF) == 0x1E8 )
            goto LABEL_13;
          goto LABEL_34;
        case 0xF:
          if ( !sub_F61920(*(_QWORD *)(v18[1] & 0xFFFFFFFFFFFFFFF0LL), (__int64)a1, v13, v14, v15, v16)
            || (v33 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18[4] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
                *(_BYTE *)(v33 + 16) != 13)
            || ((*(_WORD *)(v33 + 18) >> 3) & 0x1FF) != 0x1B4 )
          {
LABEL_34:
            v29 = sub_EEB7E0((unsigned __int64)v56, (__int64)a1, *(double *)a7.m128_u64);
            v30 = &a1->m128_i64[1];
            v31 = 5259;
            goto LABEL_35;
          }
LABEL_13:
          v20 = (unsigned int *)v56;
          if ( (*((_BYTE *)v18 + 4) & 0x18) == 8 )
          {
            v29 = sub_EEB7E0((unsigned __int64)v56, (__int64)v56, *(double *)a7.m128_u64);
            v30 = &a1->m128_i64[1];
            v31 = 5260;
            goto LABEL_35;
          }
          v21 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v55 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                         + 16LL);
          if ( ((*((_BYTE *)v56 + 1) >> 3) & 7) == 1 && (unsigned int)v21 - 43 <= 1 )
          {
            v32 = sub_EEB7E0((unsigned __int64)v56, (__int64)v56, *(double *)a7.m128_u64);
            v11 = 1;
            sub_168B9F0((__int64)&v61, &a1->m128_i64[1], v32, 0x1341u, 0);
            v59[0] = (void *)sub_EEC8C0((unsigned __int64)v56, (__int64)&a1->m128_i64[1], *(double *)a7.m128_u64);
            sub_1587DB0((__int64)&v61, (__int64 *)v59);
            sub_15F7200(&v61);
            goto LABEL_20;
          }
          if ( v21 == 48 )
          {
            v66 = a5;
            v64 = v55;
            v20 = &v61;
            v63 = 0;
            v65 = 0;
            v61 = 2;
            v67 = 0;
            v25 = sub_1A24E20((__int64)a1, (__int64)&v61, 0, (__int64)v56, 0, 0, a7, a8);
          }
          else
          {
            v25 = sub_19AFC70((__int64)a1, v56, v55, (__int64)&v68, 3, 0, a7, a8);
          }
          if ( v25 == 1 )
            goto LABEL_19;
          v26 = sub_C00A40((unsigned __int64)v56, (__int64)v20, v22, v23, v24);
          v27 = sub_19B4A30((__int64)a1, v25 & 0xFFFFFFFFFFFFFFFELL, v26, 0, 1, (unsigned int)(v54 - 2) <= 1, a7, a8);
          v53 = v27;
          if ( v27 == 1 )
            goto LABEL_19;
          v36 = a1[15].m128_i64[1];
          v58 = 0;
          v37 = sub_1BD78E0((__int64)v18, v36, v27 & 0xFFFFFFFFFFFFFFFELL, (__int64)a6, &v58, 0);
          if ( v37 != 2 )
          {
            if ( v37 == 4 )
            {
              if ( v54 != 3 )
                goto LABEL_43;
            }
            else if ( v37 != 1 )
            {
              goto LABEL_43;
            }
            v42 = sub_EEB7E0((unsigned __int64)v56, v36, *(double *)a7.m128_u64);
            sub_168B9F0((__int64)&v61, &a1->m128_i64[1], v42, 0x158Cu, 0);
            v43 = sub_1BDB390((__int64)&v61, &v54);
            v57 = 0;
            v44 = sub_1587D10(v43, &v57);
            v59[0] = (void *)v56[1];
            v45 = sub_162B6D0(v44, (__int64 *)v59);
            sub_1605D30(v45, &v55);
LABEL_48:
            sub_15F7200(&v61);
LABEL_43:
            v62 &= ~1u;
            v61 = 0;
            sub_A4FD20((__int64)a6, (__int64)&v61);
            if ( v61 > 1 )
              sub_A4F8E0((int *)&v61);
LABEL_45:
            v11 = v53;
            goto LABEL_20;
          }
          if ( v54 != 4 )
            goto LABEL_50;
          v50 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v58 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
          v51 = *(_BYTE *)(v50 + 16);
          switch ( v51 )
          {
            case 13:
              if ( (((*(_WORD *)(v50 + 18) >> 3) + 76) & 0x1FFu) <= 0x13 )
                break;
LABEL_50:
              v46 = sub_EEB7E0((unsigned __int64)v56, v36, *(double *)a7.m128_u64);
              sub_168B9F0((__int64)&v61, &a1->m128_i64[1], v46, 0x158Cu, 0);
              v47 = sub_1BDB390((__int64)&v61, &v54);
              v57 = 1;
              v48 = sub_1587D10(v47, &v57);
              sub_A53AF0((__int64)v59, a6, a1[15].m128_i64[1], v58);
              v49 = sub_1682AF0(v48, (__int64)v59);
              sub_1605D30(v49, &v55);
              if ( v59[0] != &v60 )
                operator delete(v59[0]);
              goto LABEL_48;
            case 47:
              v52 = sub_F60F10(v50, v36, v38, v39, v40, v41);
              if ( (*((_BYTE *)v52 + 74) & 1) == 0 && (v52[16] & 0xFFFFFFFFFFFFFFF8LL) == 0 )
                goto LABEL_50;
              break;
            case 10:
              break;
            default:
              goto LABEL_50;
          }
          if ( *a6 == 2 )
            goto LABEL_45;
          goto LABEL_50;
      }
    }
LABEL_27:
    BUG();
  }
  if ( v17 != 3 && v17 != 5 )
    goto LABEL_27;
  v28 = v56;
  if ( (unsigned __int8)sub_1C01CD0(a1, (unsigned __int64)v56, v55, v14, v15, a7, a8) )
  {
LABEL_19:
    v11 = 1;
  }
  else
  {
    v29 = sub_EEB7E0((unsigned __int64)v56, (__int64)v28, *(double *)a7.m128_u64);
    v30 = &a1->m128_i64[1];
    v31 = 5258;
LABEL_35:
    sub_168B9F0((__int64)&v61, v30, v29, v31, 0);
    v58 = v56[1];
    v34 = sub_162B6D0((__int64)&v61, &v58);
    v11 = 1;
    v59[0] = (void *)sub_EEC8C0((unsigned __int64)v56, (__int64)&v58, *(double *)a7.m128_u64);
    v35 = sub_1587DB0(v34, (__int64 *)v59);
    sub_1605D30(v35, &v55);
    sub_15F7200(&v61);
  }
LABEL_20:
  if ( (v68.m128i_i32[0] & 0x7FFFFFFF) == 3 && ptr != &v71 )
    free(ptr);
  return v11;
}
