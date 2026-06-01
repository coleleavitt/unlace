__int64 __fastcall sub_1BEF110(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 a4,
        __int64 *a5,
        unsigned __int64 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 *a10,
        unsigned __int16 a11,
        __int64 a12,
        __int64 a13,
        unsigned __int16 a14,
        char a15)
{
  __int64 v17; // r13
  __int64 v18; // rcx
  unsigned __int8 v19; // al
  __m128i *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  char v23; // al
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // rbp
  int v28; // r14d
  __int64 v29; // r13
  __int64 v30; // rax
  __int64 v31; // r12
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned __int64 v37; // r8
  __int64 v38; // r9
  int *v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rdx
  int *v42; // rbp
  __int64 v43; // rbp
  unsigned __int64 v44; // r13
  int v45; // ebp
  __int64 v46; // r12
  unsigned __int8 v47; // al
  __int64 v48; // rdi
  char v49; // al
  __int64 v50; // rdx
  __int64 v51; // rcx
  _QWORD *v52; // rbp
  __int64 v53; // r8
  __int64 v54; // r9
  unsigned __int64 v55; // rax
  __int64 v56; // rdx
  unsigned int v57; // ebx
  __m128i *v59; // r13
  __m128i *v60; // rdi
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  unsigned __int64 v64; // rax
  char v65; // r15
  int v66; // ecx
  unsigned int v67; // esi
  unsigned int v68; // edx
  __int64 v69; // r9
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // r10
  __int64 v73; // rcx
  __int64 v75; // [rsp+8h] [rbp-140h]
  int v76; // [rsp+8h] [rbp-140h]
  int v77; // [rsp+10h] [rbp-138h]
  __int64 v78; // [rsp+18h] [rbp-130h]
  int v79; // [rsp+28h] [rbp-120h]
  __int64 v82; // [rsp+48h] [rbp-100h]
  __int64 v83; // [rsp+50h] [rbp-F8h]
  int v84; // [rsp+64h] [rbp-E4h] BYREF
  __int64 v85; // [rsp+68h] [rbp-E0h] BYREF
  __m128i v86[2]; // [rsp+70h] [rbp-D8h] BYREF
  void *ptr; // [rsp+90h] [rbp-B8h]
  _BYTE v88[168]; // [rsp+A0h] [rbp-A8h] BYREF

  v17 = *(_QWORD *)(a2 + 48);
  v18 = a10[1];
  v19 = *(_BYTE *)(v17 + 28) & 0x7F;
  if ( (unsigned int)v19 - 35 > 3 )
  {
    v75 = 0;
    if ( v18 )
      goto LABEL_16;
    goto LABEL_73;
  }
  if ( *(_DWORD *)(a9 + 2972) == 4 || v19 == 38 )
  {
    v75 = *(_QWORD *)(a2 + 48);
    if ( v18 )
    {
LABEL_16:
      sub_18C74E0(a1, 0, 0, 4);
      v79 = 0;
      goto LABEL_17;
    }
LABEL_73:
    v79 = 0;
    v65 = 0;
    goto LABEL_74;
  }
  if ( !v18 )
  {
    v75 = *(_QWORD *)(a2 + 48);
    v65 = 1;
    v79 = 1;
LABEL_74:
    v66 = a6 + v79;
    v67 = *(_DWORD *)(a9 + 2988);
    v68 = 152 * (a6 + v79);
    v69 = (unsigned int)(a6 + v79);
    if ( v68 > 4864 - v67 )
    {
      v70 = sub_9C3B30((__int64 *)(a9 + 2872), 152 * v69, 3u);
      v69 = (unsigned int)(a6 + v79);
      v66 = a6 + v79;
    }
    else
    {
      *(_DWORD *)(a9 + 2988) = v67 + v68;
      v70 = a9 + v67 + 2992;
    }
    if ( v66 )
    {
      v71 = v70;
      v72 = v70 + 152 * ((unsigned int)(v66 - 1) + 1LL);
      do
      {
        v73 = *(_QWORD *)(v71 + 16);
        *(_DWORD *)v71 = 6;
        v71 += 152;
        *(_QWORD *)(v71 - 144) = 0;
        *(_QWORD *)(v71 - 96) = 0;
        *(_QWORD *)(v71 - 136) = v73 & 0xFFFFF80400000000LL | 0x2000000000LL;
      }
      while ( v72 != v71 );
    }
    *a10 = v70;
    v20 = nullptr;
    a10[1] = v69;
    sub_18C74E0(a1, 0, 0, 4);
    if ( v65 )
      goto LABEL_6;
LABEL_17:
    v77 = 0;
    v25 = 0;
    goto LABEL_18;
  }
  v20 = nullptr;
  sub_18C74E0(a1, 0, 0, 4);
  v75 = v17;
  v79 = 1;
LABEL_6:
  if ( !sub_B979F0((_QWORD *)v17)
    && (a13 & 0xFFFFFFFFFFFFFFF0LL) != 0
    && (!(unsigned __int8)sub_B771C0(v17, 0, v21, v22)
     || (*(_BYTE *)(*(_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0) )
  {
    v23 = sub_B771C0(v17, 0, v21, v22);
    v24 = 0;
    if ( v23 )
      v24 = *a3;
    sub_1BEC760(v86, a1, *(unsigned int *)(a9 + 2968), a13, a14, v75, a7, a8, a12, v24, 0);
    v20 = v86;
    sub_1BD9390((__m128i *)(152LL * (a15 == 1) + *a10), v86);
    if ( (v86[0].m128i_i32[0] & 0x7FFFFFFF) == 3 && ptr != v88 )
      free(ptr);
    if ( (*(_DWORD *)(*a10 + 152LL * (a15 == 1)) & 0x7FFFFFFF) == 5 )
    {
LABEL_60:
      v57 = 1;
      goto LABEL_54;
    }
  }
  v25 = (unsigned __int8)sub_B771C0(v75, (__int64)v20, v21, v22);
  v77 = (unsigned __int8)v25;
LABEL_18:
  v27 = a4 - v25;
  if ( v27 > a6 )
    LODWORD(v27) = a6;
  v76 = v77 + v27;
  if ( (_DWORD)v27 )
  {
    v28 = v77;
    while ( 1 )
    {
      v29 = a3[v28];
      if ( (*(_BYTE *)(*(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
        goto LABEL_52;
      v30 = (unsigned int)(v28 + v79 - v77);
      if ( a15 == 1 )
        v30 = (unsigned int)(v77 + a6 - 1 - v28);
      v31 = 19 * v30;
      v78 = 152 * v30;
      if ( (*(_DWORD *)(*a10 + 152 * v30) & 0x7FFFFFFF) != 6 )
        goto LABEL_52;
      v32 = *a5;
      if ( !HIBYTE(a11) )
        goto LABEL_57;
      v33 = *(_QWORD *)(v32 + 8);
      v85 = a3[v28];
      v86[0].m128i_i64[0] = v33;
      v85 = sub_C1BEF0((__int64)&v85, (__int64)a3, v32, v26);
      v36 = sub_C1BEF0((__int64)v86, (__int64)a3, v34, v35);
      v86[0].m128i_i64[0] = v36;
      v39 = *(int **)(v85 & 0xFFFFFFFFFFFFFFF0LL);
      v40 = *(_QWORD *)(*((_QWORD *)v39 + 1) & 0xFFFFFFFFFFFFFFF0LL);
      v41 = *(unsigned __int8 *)(v40 + 16);
      if ( (_BYTE)v41 != 42 )
        goto LABEL_28;
      v48 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      v49 = *(_BYTE *)(v48 + 16);
      if ( v49 == 42 )
        break;
LABEL_48:
      if ( v49 == 48 )
      {
        v52 = sub_F60F10(v48, (__int64)v39, v41, v26, v37, v38);
        if ( (*((_BYTE *)v52 + 28) & 0x7Fu) - 59 <= 2 )
        {
          if ( v52[16] || (sub_7052B0((__int64 *)(v52[13] + 96LL), v52[13], v50, v51, v53, v54), v52[16]) )
          {
            v55 = sub_B9F870((__int64)v52);
            if ( v55 != v56 )
              goto LABEL_52;
          }
        }
      }
      v32 = *a5;
LABEL_57:
      sub_1BEC520(v86, a1, (_WORD *)v32, v29, a11, 1u, a7, a8, (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 107LL) & 4) != 0, 0);
      v59 = (__m128i *)(*a10 + v78);
      if ( (v59->m128i_i32[0] & 0x7FFFFFFF) == 3 )
      {
        v60 = (__m128i *)v59[2].m128i_i64[0];
        if ( v60 != &v59[3] )
          free(v60);
      }
      sub_1A0B340(v59, v86);
      if ( (v86[0].m128i_i32[0] & 0x7FFFFFFF) == 3 && ptr != v88 )
        free(ptr);
      if ( (*(_DWORD *)(*a10 + 8 * v31) & 0x7FFFFFFF) == 5 )
        goto LABEL_60;
LABEL_52:
      ++v28;
      ++a5;
      if ( v28 == v76 )
        goto LABEL_53;
    }
    v85 = sub_F68450(*(_QWORD *)(v85 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v39, v41, v26, v37);
    v86[0].m128i_i64[0] = sub_F68450(
                            *(_QWORD *)(v86[0].m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL),
                            (__int64)v39,
                            v61,
                            v62,
                            v63);
    v64 = *(_QWORD *)(*(_QWORD *)(v85 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
    v40 = *(_QWORD *)v64;
    v41 = *(unsigned __int8 *)(*(_QWORD *)v64 + 16LL);
LABEL_28:
    if ( (_BYTE)v41 == 48 )
    {
      v42 = (int *)sub_F60F10(v40, (__int64)v39, v41, v26, v37, v38);
      if ( (v42[7] & 0x7Fu) - 59 <= 2 )
      {
        if ( *((_QWORD *)v42 + 16)
          || (v39 = *((int **)v42 + 13),
              sub_7052B0((__int64 *)v39 + 12, (__int64)v39, v41, v26, v37, v38),
              *((_QWORD *)v42 + 16)) )
        {
          v39 = v42;
          v37 = sub_1A3D890(a1, (__int64)v42, v41, v26, v37, v38);
          if ( v37 )
          {
            v82 = v29;
            v83 = v31;
            while ( 1 )
            {
              v43 = v37;
              v37 &= 0xFFFFFFFFFFFFFFF8LL;
              v44 = v37;
              v45 = (v43 >> 2) & 1;
              if ( v45 )
              {
                if ( v37 )
                {
                  v46 = *(_QWORD *)v37;
                  v47 = *(_BYTE *)(*(_QWORD *)v37 + 28LL) & 0x7F;
                  if ( v47 == 81 )
                    goto LABEL_45;
                }
                else
                {
                  v47 = 0;
                  v46 = 0;
                }
              }
              else
              {
                v47 = *(_BYTE *)(v37 + 28) & 0x7F;
                if ( v47 == 81 )
                  goto LABEL_46;
                v46 = v37;
              }
              if ( ((v47 + 52) & 0x7Fu) <= 1 || (v26 = (unsigned int)v47 - 53, (unsigned int)v26 <= 1) )
              {
                v46 = sub_B72ED0(v46);
                v47 = *(_BYTE *)(v46 + 28) & 0x7F;
              }
              if ( v47 == 71 )
              {
                v46 = *(_QWORD *)(v46 + 48);
                v47 = *(_BYTE *)(v46 + 28) & 0x7F;
              }
              if ( v47 == 38 )
              {
                v39 = &v84;
                if ( !(unsigned __int8)sub_B990E0(v46, &v84, v41, v26) )
                {
                  v39 = &dword_0 + 1;
                  if ( sub_B99130(v46, 1) )
                    goto LABEL_52;
                }
              }
              if ( !v45 || !v44 )
              {
LABEL_46:
                v29 = v82;
                v31 = v83;
                break;
              }
LABEL_45:
              v37 = *(_QWORD *)(v44 + 8);
              if ( !v37 )
                goto LABEL_46;
            }
          }
        }
      }
    }
    v48 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v86[0].m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v49 = *(_BYTE *)(v48 + 16);
    goto LABEL_48;
  }
LABEL_53:
  v57 = 0;
LABEL_54:
  sub_190D5E0(a1, a7);
  return v57;
}
