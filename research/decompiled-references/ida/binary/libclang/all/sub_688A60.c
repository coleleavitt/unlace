bool __fastcall sub_688A60(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __m128i *a9,
        __int64 a10)
{
  __int64 v15; // r9
  __int64 v16; // r10
  __int64 v17; // r14
  unsigned __int8 v18; // al
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  int v23; // ebx
  int v24; // r13d
  __int64 v25; // rax
  __int64 v26; // r9
  __m128i *v27; // rcx
  unsigned int (__fastcall *v28)(_QWORD, _QWORD); // rax
  int v30; // eax
  __int64 v31; // r8
  __int64 i; // r13
  __int64 v33; // r15
  char v34; // al
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  _QWORD *v39; // rax
  __int64 v40; // r8
  __int64 v41; // rdx
  _DWORD *v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  _QWORD *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rsi
  _DWORD *v49; // rax
  __int64 v50; // rdi
  int v51; // edx
  __int64 v52; // rdi
  int v53; // edx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // [rsp+38h] [rbp-70h]
  __int64 v57; // [rsp+38h] [rbp-70h]
  __int64 v58; // [rsp+38h] [rbp-70h]
  __int64 v59; // [rsp+38h] [rbp-70h]
  __int64 v60; // [rsp+38h] [rbp-70h]
  __int64 v61; // [rsp+38h] [rbp-70h]
  __int64 v62; // [rsp+38h] [rbp-70h]
  __int64 v63; // [rsp+38h] [rbp-70h]
  __int64 v64; // [rsp+40h] [rbp-68h]
  __int64 v65; // [rsp+40h] [rbp-68h]
  __int64 v66; // [rsp+40h] [rbp-68h]
  __int64 v67; // [rsp+40h] [rbp-68h]
  __int64 v68; // [rsp+40h] [rbp-68h]
  __int64 v69; // [rsp+48h] [rbp-60h]
  __int64 v70; // [rsp+48h] [rbp-60h]
  __int64 v71; // [rsp+48h] [rbp-60h]
  __m128i v72; // [rsp+50h] [rbp-58h] BYREF
  __m128i v73[4]; // [rsp+60h] [rbp-48h] BYREF

  v15 = a7;
  v16 = a8;
  v17 = a10;
  if ( a6 < 0 )
  {
    v69 = a5;
    v30 = sub_CADBE0(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 2152LL), (unsigned int)a6);
    a5 = v69;
    v15 = a7;
    v16 = a8;
    a6 = v30;
  }
  if ( (a3 & 4) == 0 )
  {
    if ( !a10 )
    {
      v31 = 16 * a5;
      for ( i = a4 + v31; i != a4; a4 += 16 )
      {
        if ( (*(_BYTE *)(a4 + 1) & 4) != 0 )
        {
          v33 = *(_QWORD *)(a4 + 8);
          v57 = v16;
          v17 = 0;
          v34 = sub_79B790(v33);
          v16 = v57;
          if ( v34 )
          {
            v35 = sub_79AC10(v33);
            v16 = v57;
            v17 = v35;
          }
        }
      }
    }
    v72.m128i_i64[0] = a1;
    v72.m128i_i32[2] = a6;
    v73[0].m128i_i64[0] = v17;
    sub_688810((__int64)&v72, v16);
    v28 = **(unsigned int (__fastcall ***)(_QWORD, _QWORD))(a1 + 24);
    if ( !v28 )
      return 1;
    return v28(*(_QWORD *)(a1 + 16), 0) == 0;
  }
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 16 > 0x3E )
    return 1;
  if ( v16 )
  {
    v18 = *(_BYTE *)(v16 + 28) & 0x7F;
    if ( v18 != 18 )
      goto LABEL_12;
    v19 = *(_QWORD *)(v16 + 120);
    v20 = v19;
    if ( v19 )
    {
LABEL_8:
      if ( v20 > 7 && v16 == *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF8LL) )
      {
LABEL_11:
        v18 = *(_BYTE *)(v16 + 28) & 0x7F;
LABEL_12:
        if ( v18 != 17 )
        {
          v23 = a3 & 0x1FF;
          if ( (a3 & 0x100) != 0 )
          {
            v24 = 2;
            if ( v15 )
              goto LABEL_19;
          }
          else
          {
            v24 = 1;
            if ( v15 )
              goto LABEL_19;
          }
          goto LABEL_39;
        }
        v21 = *(_QWORD *)(v16 + 104);
        v22 = v21;
        if ( v21 )
        {
LABEL_14:
          if ( v21 > 7 && v16 == *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF8LL) )
            goto LABEL_17;
LABEL_16:
          if ( a6 != *(_DWORD *)(v16 + 24) )
          {
LABEL_17:
            v23 = a3 & 0x1FF;
            if ( (a3 & 0x100) != 0 )
            {
              v24 = 2;
              if ( v15 )
                goto LABEL_19;
            }
            else
            {
              v24 = 1;
              if ( v15 )
              {
LABEL_19:
                v64 = v15;
                v56 = *(_QWORD *)(a1 + 40);
                v25 = sub_79A2E0(a10);
                sub_639270((__int64)&v72, v64, v25, v56, 0);
                v26 = v64;
                goto LABEL_20;
              }
            }
            v18 = *(_BYTE *)(v16 + 28) & 0x7F;
LABEL_39:
            v58 = v15;
            if ( (unsigned int)v18 - 16 > 0x3E )
              sub_639160((__int64)&v72, v16, *(_QWORD *)(a1 + 40), 0, 1u);
            else
              sub_6844F0(&v72, a1, v16, a6);
            v26 = v58;
            goto LABEL_20;
          }
          goto LABEL_76;
        }
        v43 = *(_QWORD *)(v16 + 96);
        v44 = *(_QWORD *)(v43 + 88);
        v45 = v44 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v44 & 1) != 0 )
        {
          if ( !v45 )
            goto LABEL_16;
        }
        else
        {
          if ( v45 <= 3 )
          {
            if ( !v45 )
              goto LABEL_16;
            goto LABEL_82;
          }
          if ( (v44 & 2) == 0 )
            goto LABEL_16;
          v46 = (_QWORD *)(v44 & 0xFFFFFFFFFFFFFFFCLL);
          v47 = v46[2275];
          if ( !v47 )
          {
            *(_QWORD *)(v43 + 88) = v43 & 0xFFFFFFFFFFFFFFFALL | 1;
            if ( (v43 & 0xFFFFFFFFFFFFFFFALL) == 0 )
            {
LABEL_65:
              v21 = *(_QWORD *)(v16 + 104);
              goto LABEL_14;
            }
            goto LABEL_81;
          }
          v48 = v46[274];
          v46[284] += 24LL;
          v45 = (v48 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v46[275] >= v45 + 24 && v48 )
          {
            v46[274] = v45 + 24;
          }
          else
          {
            v71 = v47;
            v68 = v15;
            v63 = v16;
            v55 = sub_67A630((__int64)(v46 + 274), 24, 3);
            v47 = v71;
            v15 = v68;
            v16 = v63;
            v45 = v55;
          }
          *(_QWORD *)v45 = v47;
          v44 = v45 | 5;
          *(_DWORD *)(v45 + 8) = 0;
          *(_QWORD *)(v45 + 16) = v43;
          *(_QWORD *)(v43 + 88) = v45 | 5;
          LOBYTE(v45) = v45 & 0xFA | 4;
        }
        if ( (v45 & 4) != 0 )
        {
          v49 = (_DWORD *)(v44 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v49 )
          {
            v52 = *(_QWORD *)v49;
            v53 = *(_DWORD *)(*(_QWORD *)v49 + 12LL);
            if ( v49[2] != v53 )
            {
              v49[2] = v53;
              v66 = v15;
              v61 = v16;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v52 + 144LL))(v52, v43);
              v16 = v61;
              v15 = v66;
              v21 = *(_QWORD *)(v61 + 104);
              goto LABEL_14;
            }
          }
          goto LABEL_65;
        }
LABEL_81:
        v22 = *(_QWORD *)(v16 + 104);
LABEL_82:
        v21 = v22;
        goto LABEL_14;
      }
LABEL_10:
      if ( *(_DWORD *)(v16 + 24) == a6 )
      {
LABEL_76:
        v72.m128i_i64[0] = a1;
        v72.m128i_i32[2] = a6;
        v73[0].m128i_i64[0] = 0;
        sub_688810((__int64)&v72, v16);
        return 1;
      }
      goto LABEL_11;
    }
    v36 = *(_QWORD *)(v16 + 96);
    v37 = *(_QWORD *)(v36 + 88);
    v38 = v37 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v37 & 1) != 0 )
    {
      if ( !v38 )
        goto LABEL_10;
    }
    else
    {
      if ( v38 <= 3 )
      {
        if ( !v38 )
          goto LABEL_10;
        goto LABEL_79;
      }
      if ( (v37 & 2) == 0 )
        goto LABEL_10;
      v39 = (_QWORD *)(v37 & 0xFFFFFFFFFFFFFFFCLL);
      v40 = v39[2275];
      if ( !v40 )
      {
        *(_QWORD *)(v36 + 88) = v36 & 0xFFFFFFFFFFFFFFFALL | 1;
        if ( (v36 & 0xFFFFFFFFFFFFFFFALL) == 0 )
        {
LABEL_54:
          v20 = *(_QWORD *)(v16 + 120);
          goto LABEL_8;
        }
        goto LABEL_78;
      }
      v41 = v39[274];
      v39[284] += 24LL;
      v38 = (v41 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v39[275] >= v38 + 24 && v41 )
      {
        v39[274] = v38 + 24;
      }
      else
      {
        v70 = v40;
        v67 = v15;
        v62 = v16;
        v54 = sub_67A630((__int64)(v39 + 274), 24, 3);
        v40 = v70;
        v15 = v67;
        v16 = v62;
        v38 = v54;
      }
      *(_QWORD *)v38 = v40;
      v37 = v38 | 5;
      *(_DWORD *)(v38 + 8) = 0;
      *(_QWORD *)(v38 + 16) = v36;
      *(_QWORD *)(v36 + 88) = v38 | 5;
      LOBYTE(v38) = v38 & 0xFA | 4;
    }
    if ( (v38 & 4) != 0 )
    {
      v42 = (_DWORD *)(v37 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v42 )
      {
        v50 = *(_QWORD *)v42;
        v51 = *(_DWORD *)(*(_QWORD *)v42 + 12LL);
        if ( v42[2] != v51 )
        {
          v42[2] = v51;
          v65 = v15;
          v60 = v16;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v50 + 144LL))(v50, v36);
          v16 = v60;
          v15 = v65;
          v20 = *(_QWORD *)(v60 + 120);
          goto LABEL_8;
        }
      }
      goto LABEL_54;
    }
LABEL_78:
    v19 = *(_QWORD *)(v16 + 120);
LABEL_79:
    v20 = v19;
    goto LABEL_8;
  }
  v23 = a3 & 0x1FF;
  if ( (a3 & 0x100) != 0 )
  {
    v24 = 2;
    if ( v15 )
      goto LABEL_19;
  }
  else
  {
    v24 = 1;
    if ( v15 )
      goto LABEL_19;
  }
  v59 = v15;
  sub_6844F0(&v72, a1, a2, a6);
  v26 = v59;
LABEL_20:
  v27 = a9;
  if ( a9 )
  {
    if ( (a9[1].m128i_i8[12] & 0x7Fu) - 16 >= 0x3F )
      v27 = nullptr;
  }
  sub_67FDF0(
    (__m128i *)a1,
    a2,
    a6,
    v27,
    a10,
    v26,
    (__int128)_mm_load_si128(&v72),
    (__int128)_mm_load_si128(v73),
    v24,
    v23);
  v28 = **(unsigned int (__fastcall ***)(_QWORD, _QWORD))(a1 + 24);
  if ( !v28 )
    return 1;
  return v28(*(_QWORD *)(a1 + 16), 0) == 0;
}

