unsigned __int64 __fastcall sub_1922170(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        unsigned int a4,
        unsigned __int8 a5,
        char a6,
        __m128 a7,
        __m128 a8)
{
  __int64 *v12; // rbx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  char v17; // al
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // r13
  __int64 *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r9
  __int64 v29; // rax
  char v30; // bl
  __int64 v31; // rsi
  __int64 v32; // rdx
  _QWORD *v33; // rcx
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rbx
  __int64 v38; // rsi
  int v39; // eax
  __int64 v40; // rdx
  __m128i *v41; // rcx
  __m128i *v42; // rsi
  __m128i *v43; // rax
  _QWORD *v45; // [rsp+8h] [rbp-60h]
  __int64 v46; // [rsp+8h] [rbp-60h]
  __int64 *v47; // [rsp+10h] [rbp-58h]
  __int64 v48; // [rsp+10h] [rbp-58h]
  __int64 v49; // [rsp+10h] [rbp-58h]
  _QWORD *v50; // [rsp+10h] [rbp-58h]
  __int64 v51; // [rsp+18h] [rbp-50h]
  __m128i v52; // [rsp+20h] [rbp-48h] BYREF

  sub_18D4200(a1, a2, a3, a4, 0, *(double *)a7.m128_u64);
  v12 = (__int64 *)(*(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 <= 1 )
    return sub_1918B10(
             (__int64 *)a1,
             a2,
             a3,
             a4,
             a5,
             (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 13LL) & 2) != 0,
             a7,
             a8,
             0,
             0,
             1);
  v47 = (__int64 *)(*(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v47 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 <= 1 )
    return sub_1918B10(
             (__int64 *)a1,
             a2,
             a3,
             a4,
             a5,
             (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 13LL) & 2) != 0,
             a7,
             a8,
             0,
             0,
             1);
  if ( sub_F58380(*v12) || sub_F58380(*v47) )
    return sub_1918440(a1, a2, a3, a4, a5, 0, a7, a8);
  v17 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( !a6 )
  {
    if ( v17 == 31 || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v47 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 31 )
      return sub_19181F0(a1, a2, (unsigned __int64 *)a3, a4, a5, v16, a7, a8);
LABEL_8:
    v18 = sub_191F280(a1, a2, a3, a4, 4 * (unsigned int)(a5 != 0), a7, a8);
    v23 = v18;
    if ( *a2 == 1 || *a3 == 1 )
      return 0;
    v24 = (__int64 *)(v18 & 0xFFFFFFFFFFFFFFF0LL);
    if ( !v24 || !sub_F610C0(*v24, (__int64)a2, v19, v20, v21, v22) )
      return sub_18F40B0(a1, a4, a2, a3, *(double *)a7.m128_u64);
    if ( !a6 )
      return v23;
    v29 = *(_QWORD *)(*(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v29 + 16) != 14
      && ((v32 = *(_QWORD *)(*(_QWORD *)(v29 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v32 + 16) != 14)
       || (v29 = sub_F63050(
                   *(_QWORD *)(*(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL),
                   a2,
                   v32,
                   v25)) == 0)
      || (v48 = *(_QWORD *)(v29 + 32),
          v30 = *(_BYTE *)(*(_QWORD *)(a1 + 232) + 202LL) & 7,
          !sub_F58060(*(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL)))
      || (v31 = v48, v30 != 2) )
    {
LABEL_25:
      sub_18CAD50(a1, a3, a4, 1u, *(double *)a7.m128_u64, v26, v27);
      sub_18E0AF0(a1, *a2 & 0xFFFFFFFFFFFFFFFELL, *a3 & 0xFFFFFFFFFFFFFFFELL, a4, *(double *)a7.m128_u64);
      return v23;
    }
    v33 = *(_QWORD **)(a1 + 248);
    v34 = *(unsigned __int16 *)(*(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL) + 18LL);
    LOWORD(v34) = (unsigned __int16)v34 >> 3;
    v35 = (unsigned int)(v34 + 32);
    LOWORD(v35) = v35 & 0x1FF;
    switch ( v35 )
    {
      case 0LL:
      case 4LL:
        v36 = v33[2350];
        break;
      case 1LL:
      case 5LL:
        v36 = v33[2351];
        break;
      case 2LL:
        v36 = v33[2352];
        break;
      default:
        v36 = v48;
        break;
    }
    v49 = v36;
    v45 = *(_QWORD **)(a1 + 248);
    v37 = sub_A62D20(v45, v31);
    v38 = v49;
    v51 = v49;
    v50 = v45;
    v46 = sub_A62D20(v45, v38);
    LODWORD(v37) = sub_21F9110(v37);
    v39 = sub_21F9110(v46);
    v40 = v51;
    if ( 2 * (int)v37 < v39 )
    {
      if ( v51 != v50[2352] || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v50[2181] + 136LL))(v50[2181]) )
        goto LABEL_25;
      v40 = v51;
    }
    if ( !*(_DWORD *)(a1 + 9864) )
      *(_DWORD *)(a1 + 9864) = a4;
    v41 = *(__m128i **)(a1 + 9840);
    v42 = *(__m128i **)(a1 + 9848);
    if ( v41 != v42 )
    {
      v43 = *(__m128i **)(a1 + 9840);
      if ( v40 == v41->m128i_i64[0] )
      {
LABEL_44:
        ++v43->m128i_i32[2];
        goto LABEL_25;
      }
      while ( v42 != ++v43 )
      {
        if ( v40 == v43->m128i_i64[0] )
          goto LABEL_44;
      }
    }
    v52.m128i_i64[0] = v40;
    v52.m128i_i32[2] = v42 - v41;
    if ( v42 == *(__m128i **)(a1 + 9856) )
    {
      sub_18C71E0(a1 + 9840, v42, &v52);
    }
    else
    {
      a7 = (__m128)_mm_load_si128(&v52);
      *v42 = (__m128i)a7;
      *(_QWORD *)(a1 + 9848) += 16LL;
    }
    goto LABEL_25;
  }
  if ( v17 != 31 || !sub_F610C0(*v47, (__int64)a2, (__int64)v47, v14, v15, v16) )
    goto LABEL_8;
  return sub_1917F70(a1, a2, (unsigned __int64 *)a3, a4, a5, v28, a7, a8);
}
