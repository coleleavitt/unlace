__int64 __fastcall sub_E9120(__int64 *a1)
{
  unsigned int tinfo_details; // ebx
  char tinfo_property; // al
  __int64 v4; // rdi
  __int64 v5; // r13
  __int64 v6; // r12
  _QWORD *v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rax
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // r13
  __int64 v19; // r15
  __int64 *v20; // rdi
  __int64 *v21; // rdi
  __int64 v22; // r15
  __int64 *v23; // rdi
  __int64 *v24; // rdi
  __int64 v25; // rax
  __m128i v26; // xmm0
  int tinfo_size; // r12d
  int v28; // eax
  __int64 v29; // rax
  __m128i v30; // xmm0
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // [rsp+18h] [rbp-110h] BYREF
  __int64 v35; // [rsp+20h] [rbp-108h] BYREF
  __int64 v36; // [rsp+28h] [rbp-100h]
  int v37; // [rsp+30h] [rbp-F8h]
  __int64 v38; // [rsp+40h] [rbp-E8h] BYREF
  __int128 v39; // [rsp+48h] [rbp-E0h]
  int v40; // [rsp+58h] [rbp-D0h]
  __int64 v41; // [rsp+60h] [rbp-C8h] BYREF
  __int128 v42; // [rsp+68h] [rbp-C0h]
  int v43; // [rsp+78h] [rbp-B0h]
  __int64 v44; // [rsp+80h] [rbp-A8h] BYREF
  __int128 v45; // [rsp+88h] [rbp-A0h]
  __int64 v46; // [rsp+98h] [rbp-90h]
  __int64 v47; // [rsp+A0h] [rbp-88h]
  __int64 v48; // [rsp+A8h] [rbp-80h]
  __int128 v49; // [rsp+B0h] [rbp-78h]
  __int64 v50; // [rsp+C0h] [rbp-68h]
  __int128 v51; // [rsp+C8h] [rbp-60h]
  char v52; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v53; // [rsp+E8h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  v44 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v50 = 0;
  v52 = 16;
  v45 = 0;
  v49 = 0;
  v51 = 0;
  tinfo_details = get_tinfo_details();
  if ( !(_BYTE)tinfo_details
    || (int)v45 < 0
    || (tinfo_property = get_tinfo_property(), (tinfo_property & 0x3E) == 0)
    || (tinfo_property & 0xFu) > 8 )
  {
    tinfo_details = 0;
    goto LABEL_5;
  }
  v11 = a1[1];
  v12 = *a1;
  v38 = 0;
  v13 = *(_QWORD *)(v11 + 784);
  v14 = *(unsigned int *)(v12 + 72);
  v40 = 0;
  v41 = 0;
  v43 = 0;
  v35 = 0;
  v36 = 0;
  v37 = -1;
  v39 = 0;
  v42 = 0;
  sub_1109A0(v13, &v38, &v41, 64, &v35, v14);
  v15 = *(_DWORD *)(*(_QWORD *)(a1[1] + 1504) + 80LL);
  a1[42] = (v15 - 1 + a1[41] + *((_QWORD *)&v49 + 1)) & -v15;
  sub_DFE70((__int64)a1, &v35);
  sub_E60E0(&v34, (__int64)a1, (__int64)&v44, 0);
  if ( (_BYTE)v34
    && ((tinfo_size = get_tinfo_size(), v28 = get_tinfo_size(), tinfo_size < v28)
     || tinfo_size == v28 && (get_tinfo_property() & 0xF) == 9) )
  {
    copy_tinfo_t();
    create_tinfo();
  }
  else
  {
    tinfo_details = 0;
  }
  clear_tinfo_t();
  v16 = v35;
  if ( v35 )
  {
    v17 = *(_QWORD *)v35;
    if ( !v36 )
    {
      *(_QWORD *)v35 = v35 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v35 & 3LL;
      v29 = v35;
      v30 = (__m128i)(unsigned __int64)v35;
      *(_QWORD *)v35 &= ~1uLL;
      *(__m128i *)(v29 + 8) = _mm_unpacklo_epi64(v30, v30);
      *(_QWORD *)v35 |= 2uLL;
LABEL_42:
      if ( v35 )
        qfree(v35);
      goto LABEL_44;
    }
    v18 = v17 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v17 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_41:
      *(_QWORD *)v16 = v16 & 0xFFFFFFFFFFFFFFFCLL | v17 & 3;
      v25 = v35;
      v26 = (__m128i)(unsigned __int64)v35;
      *(_QWORD *)v35 &= ~1uLL;
      *(__m128i *)(v25 + 8) = _mm_unpacklo_epi64(v26, v26);
      *(_QWORD *)v35 |= 2uLL;
      v36 = 0;
      goto LABEL_42;
    }
    v19 = *(_QWORD *)(v18 + 8);
    if ( (*(_BYTE *)v19 & 2) != 0 )
    {
      v22 = *(_QWORD *)(v18 + 16);
      if ( (*(_BYTE *)v22 & 2) != 0 )
        goto LABEL_51;
      goto LABEL_31;
    }
    v20 = *(__int64 **)(v19 + 8);
    if ( (*(_BYTE *)v20 & 2) != 0 )
    {
      v21 = *(__int64 **)(v19 + 16);
      if ( (*(_BYTE *)v21 & 2) != 0 )
      {
LABEL_59:
        v33 = *(_QWORD *)(v19 + 24);
        if ( v33 )
        {
          *(_QWORD *)(v19 + 32) = 0;
          qfree(v33);
        }
        *(_QWORD *)v19 |= 2uLL;
LABEL_28:
        if ( v19 )
          qfree(v19);
        v22 = *(_QWORD *)(v18 + 16);
        if ( (*(_BYTE *)v22 & 2) != 0 )
        {
LABEL_37:
          if ( (*(_BYTE *)v18 & 2) != 0 )
          {
LABEL_38:
            if ( v17 > 3 )
              qfree(v17 & 0xFFFFFFFFFFFFFFFCLL);
            v16 = v35;
            v17 = *(_QWORD *)v35;
            goto LABEL_41;
          }
LABEL_51:
          v31 = *(_QWORD *)(v18 + 24);
          if ( v31 )
          {
            *(_QWORD *)(v18 + 32) = 0;
            qfree(v31);
          }
          *(_QWORD *)v18 |= 2uLL;
          goto LABEL_38;
        }
LABEL_31:
        v23 = *(__int64 **)(v22 + 8);
        if ( (*(_BYTE *)v23 & 2) != 0 )
        {
          v24 = *(__int64 **)(v22 + 16);
          if ( (*(_BYTE *)v24 & 2) != 0 )
            goto LABEL_55;
        }
        else
        {
          sub_E3E30(v23);
          v24 = *(__int64 **)(v22 + 16);
          if ( (*(_BYTE *)v24 & 2) != 0 )
            goto LABEL_34;
        }
        sub_E3E30(v24);
LABEL_34:
        if ( (*(_BYTE *)v22 & 2) != 0 )
        {
LABEL_35:
          if ( v22 )
            qfree(v22);
          goto LABEL_37;
        }
LABEL_55:
        v32 = *(_QWORD *)(v22 + 24);
        if ( v32 )
        {
          *(_QWORD *)(v22 + 32) = 0;
          qfree(v32);
        }
        *(_QWORD *)v22 |= 2uLL;
        goto LABEL_35;
      }
    }
    else
    {
      sub_E3E30(v20);
      v21 = *(__int64 **)(v19 + 16);
      if ( (*(_BYTE *)v21 & 2) != 0 )
        goto LABEL_27;
    }
    sub_E3E30(v21);
LABEL_27:
    if ( (*(_BYTE *)v19 & 2) != 0 )
      goto LABEL_28;
    goto LABEL_59;
  }
LABEL_44:
  sub_66C80((__int64)&v41);
  sub_66C80((__int64)&v38);
LABEL_5:
  if ( v50 )
  {
    *(_QWORD *)&v51 = 0;
    qfree(v50);
  }
  cleanup_argloc();
  clear_tinfo_t();
  v4 = v44;
  if ( v44 )
  {
    v5 = v45;
    if ( (_QWORD)v45 )
    {
      v6 = 0;
      do
      {
        v7 = (_QWORD *)(v4 + 80 * v6);
        clear_tinfo_t();
        v8 = v7[5];
        if ( v8 )
        {
          v7[6] = 0;
          qfree(v8);
        }
        v9 = v7[2];
        if ( v9 )
        {
          v7[3] = 0;
          qfree(v9);
        }
        ++v6;
        cleanup_argloc();
        v4 = v44;
      }
      while ( v5 != v6 );
    }
    *(_QWORD *)&v45 = 0;
    qfree(v4);
  }
  return tinfo_details;
}
