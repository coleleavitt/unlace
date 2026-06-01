_QWORD *__fastcall sub_6C5D40(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128i a6,
        double a7,
        __m128 a8,
        double a9,
        double a10,
        double a11,
        __m128 a12)
{
  int v16; // eax
  __int64 v17; // rdx
  __int64 v19; // rdi
  __int64 v20; // rsi
  unsigned int v21; // edx
  char tinfo_property; // al
  __int64 v23; // rax
  char *v24; // rsi
  char *v25; // r15
  __int64 v26; // rsi
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r13
  int v31; // r14d
  char v32; // al
  __int64 v33; // r14
  int v34; // r14d
  char *v35; // rdi
  __int64 v36; // r14
  __int64 v37; // r13
  char *v38; // rbp
  void *v39; // rdi
  void *v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rax
  char *v43; // rsi
  __int64 v44; // rax
  char *v45; // r15
  __int64 v46; // [rsp+0h] [rbp-D8h]
  int v47; // [rsp+14h] [rbp-C4h]
  __int64 v48; // [rsp+18h] [rbp-C0h]
  __int64 v49; // [rsp+20h] [rbp-B8h]
  __int64 v50; // [rsp+28h] [rbp-B0h]
  __int64 v51; // [rsp+30h] [rbp-A8h]
  __int64 v52; // [rsp+38h] [rbp-A0h]
  __int64 v53; // [rsp+48h] [rbp-90h] BYREF
  __int64 v54; // [rsp+50h] [rbp-88h] BYREF
  int v55; // [rsp+58h] [rbp-80h]
  int v56; // [rsp+5Ch] [rbp-7Ch]
  void *ptr; // [rsp+60h] [rbp-78h] BYREF
  __int128 v58; // [rsp+68h] [rbp-70h]
  __int128 v59; // [rsp+78h] [rbp-60h]
  __int64 v60; // [rsp+88h] [rbp-50h]
  int v61; // [rsp+90h] [rbp-48h]
  unsigned __int64 v62; // [rsp+98h] [rbp-40h]

  v62 = __readfsqword(0x28u);
  *a1 = 0;
  v16 = *(_DWORD *)(a4 + 20);
  v17 = *(_QWORD *)(a4 + 32);
  v55 = 0;
  v54 = 0;
  v56 = v16;
  sub_6C3AF0((__int64 *)&ptr, a2, v17, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  copy_tinfo_t(&v54);
  clear_tinfo_t(&ptr);
  if ( !(_BYTE)v54 )
    goto LABEL_2;
  v19 = *(_QWORD *)(a2 + 48);
  ptr = nullptr;
  v20 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 16777217;
  sub_A73FE0(v19, v20);
  BYTE1(v61) = log2floor(v21 >> 3) + 1;
  tinfo_property = get_tinfo_property(v54, 2);
  if ( (tinfo_property & 0x3E) != 0 && (tinfo_property & 0xFu) <= 8 )
    goto LABEL_8;
  v23 = v58;
  v24 = (char *)ptr;
  if ( *((_QWORD *)&v58 + 1) < (unsigned __int64)(v58 + 1) )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v58 + 1, 128);
    v24 = (char *)ptr;
    v23 = v58;
  }
  v25 = &v24[128 * v23];
  *((_QWORD *)v25 + 2) = 0;
  *((_QWORD *)v25 + 5) = 0;
  *((_QWORD *)v25 + 12) = 1;
  *((_DWORD *)v25 + 26) = -1;
  *((_QWORD *)v25 + 14) = 0;
  v25[120] = 0;
  *(_OWORD *)v25 = 0;
  v26 = v54;
  *(_OWORD *)(v25 + 24) = 0;
  *((_OWORD *)v25 + 3) = 0;
  *((_OWORD *)v25 + 4) = 0;
  *(_QWORD *)&v58 = v58 + 1;
  get_tinfo_size(0, v26, 0);
  sub_3573A0((char **)v25 + 2);
  if ( (unsigned __int8)create_tinfo(v25 + 64, 11, 11, &v54) )
  {
LABEL_8:
    if ( (get_tinfo_property(v54, 2) & 0x3F) != 0x19 )
    {
      v27 = *(_QWORD *)(a2 + 48);
      v28 = sub_A8A730(v27, a4);
      v29 = sub_A74320(v27, v28);
      v30 = v29;
      if ( v29 < 0 )
        goto LABEL_18;
      v31 = 1;
      if ( v29 <= 8 )
        goto LABEL_38;
      do
      {
        v32 = v31 & 1;
        v47 = v31;
        v33 = 8;
        v48 = v32 == 0 ? 38LL : 6LL;
        v49 = v32 == 0 ? 37LL : 5LL;
        v50 = v32 == 0 ? 36LL : 4LL;
        v52 = v32 == 0 ? 35LL : 3LL;
        v51 = v32 == 0 ? 34LL : 2LL;
        v46 = v32 == 0 ? 39LL : 7LL;
        do
        {
          if ( v30 % v33 )
            break;
          if ( v33 / 8 != (unsigned __int8)getinf(59) )
          {
            switch ( v33 / 8 )
            {
              case 1LL:
                v41 = v51;
                goto LABEL_28;
              case 2LL:
                v41 = v52;
                goto LABEL_28;
              case 4LL:
                v41 = v50;
                goto LABEL_28;
              case 8LL:
                v41 = v49;
                goto LABEL_28;
              case 16LL:
                v41 = v48;
                goto LABEL_28;
              default:
                v34 = v47;
                v53 = 0;
                clear_tinfo_t(&v53);
                goto LABEL_16;
            }
          }
          v41 = v46;
LABEL_28:
          v42 = v54;
          v43 = (char *)ptr;
          v54 = v41;
          v56 = v30 / v33;
          v53 = v42;
          v44 = v58;
          if ( *((_QWORD *)&v58 + 1) < (unsigned __int64)(v58 + 1) )
          {
            ptr = (void *)qvector_reserve(&ptr, ptr, v58 + 1, 128);
            v43 = (char *)ptr;
            v44 = v58;
          }
          v45 = &v43[128 * v44];
          *((_QWORD *)v45 + 2) = 0;
          *((_QWORD *)v45 + 12) = 1;
          *((_QWORD *)v45 + 5) = 0;
          *((_DWORD *)v45 + 26) = -1;
          *((_QWORD *)v45 + 14) = 0;
          v45[120] = 0;
          *(_OWORD *)v45 = 0;
          *(_OWORD *)(v45 + 24) = 0;
          *((_OWORD *)v45 + 3) = 0;
          *((_OWORD *)v45 + 4) = 0;
          *(_QWORD *)&v58 = v58 + 1;
          sub_3573A0((char **)v45 + 2);
          if ( !(unsigned __int8)create_tinfo(v45 + 64, 11, 11, &v54) )
          {
            clear_tinfo_t(&v53);
            goto LABEL_18;
          }
          v33 *= 2;
          clear_tinfo_t(&v53);
        }
        while ( v33 < v30 );
        v34 = v47;
LABEL_16:
        if ( !v34 )
          break;
LABEL_38:
        v31 = 0;
      }
      while ( v30 > 8 );
    }
    create_tinfo(a1, 29, 13, &ptr);
  }
LABEL_18:
  v35 = (char *)ptr;
  if ( ptr )
  {
    v36 = v58;
    if ( (_QWORD)v58 )
    {
      v37 = 0;
      do
      {
        v38 = &v35[128 * v37];
        clear_tinfo_t(v38 + 64);
        v39 = *((void **)v38 + 5);
        if ( v39 )
        {
          *((_QWORD *)v38 + 6) = 0;
          qfree(v39);
        }
        v40 = *((void **)v38 + 2);
        if ( v40 )
        {
          *((_QWORD *)v38 + 3) = 0;
          qfree(v40);
        }
        ++v37;
        v35 = (char *)ptr;
      }
      while ( v36 != v37 );
    }
    *(_QWORD *)&v58 = 0;
    qfree(v35);
  }
LABEL_2:
  clear_tinfo_t(&v54);
  return a1;
}

