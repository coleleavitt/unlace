__int64 __fastcall sub_C4F10(__m128i *a1, __int64 a2, unsigned __int64 a3, _DWORD *a4, __int64 *a5)
{
  _QWORD *exception; // rdi
  unsigned __int64 v6; // rbx
  unsigned int v8; // r15d
  unsigned __int64 *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r9d
  int v19; // ebp
  __int64 *v20; // rdx
  __int64 *v21; // rsi
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  char v25; // cl
  unsigned __int64 v26; // rdx
  _BYTE *v27; // rdx
  char v28; // dl
  __int64 v30; // rax
  __m128i v31; // xmm0
  __m128i *v34; // [rsp+20h] [rbp-1A8h]
  __int64 v35; // [rsp+40h] [rbp-188h]
  __int64 (__fastcall ***v36)(); // [rsp+58h] [rbp-170h] BYREF
  _QWORD v37[2]; // [rsp+60h] [rbp-168h] BYREF
  __int64 v38; // [rsp+70h] [rbp-158h] BYREF
  __int64 v39; // [rsp+78h] [rbp-150h]
  _QWORD v40[6]; // [rsp+90h] [rbp-138h] BYREF
  int v41; // [rsp+C0h] [rbp-108h]
  __int64 (__fastcall **v42)(); // [rsp+D0h] [rbp-F8h]
  char v43[8]; // [rsp+D8h] [rbp-F0h] BYREF
  __int128 v44; // [rsp+E0h] [rbp-E8h]
  _QWORD v45[2]; // [rsp+F8h] [rbp-D0h] BYREF
  _QWORD v46[2]; // [rsp+108h] [rbp-C0h] BYREF
  _QWORD v47[3]; // [rsp+118h] [rbp-B0h] BYREF
  __int64 (__fastcall **v48)(); // [rsp+130h] [rbp-98h] BYREF
  __int64 v49; // [rsp+138h] [rbp-90h] BYREF
  __int128 v50; // [rsp+140h] [rbp-88h] BYREF
  __int64 v51; // [rsp+150h] [rbp-78h]
  unsigned __int64 v52; // [rsp+158h] [rbp-70h] BYREF
  _DWORD *v53; // [rsp+160h] [rbp-68h]
  _QWORD v54[2]; // [rsp+168h] [rbp-60h] BYREF
  _QWORD v55[10]; // [rsp+178h] [rbp-50h] BYREF

  v55[2] = __readfsqword(0x28u);
  memset(&v40[2], 0, 24);
  v40[0] = off_4DB890;
  v40[1] = *(_QWORD *)(a2 + 64);
  v35 = a1[22].m128i_i64[1];
  v40[5] = a4;
  v41 = 0;
  if ( !a3 )
    return 1;
  v6 = a3;
  v8 = 1;
  while ( 2 )
  {
    if ( a4 == (_DWORD *)v6 )
      goto LABEL_15;
    sub_122180(v37, a2, v6, 0);
    if ( !(unsigned __int8)sub_63E80(a5, v37) && !(unsigned __int8)sub_314F20(a5 + 2, &v38) )
      goto LABEL_10;
    if ( !(_BYTE)v8 )
    {
      if ( v38 )
      {
        v39 = 0;
        qfree();
      }
      qfree();
      return v8;
    }
    v42 = (__int64 (__fastcall **)())v6;
    v45[0] = 0xFFFFFFFF00000000LL;
    v45[1] = 0;
    v46[0] = 0xFFFFFFFF00000000LL;
    v46[1] = 0;
    v47[0] = 0xFFFFFFFF00000000LL;
    v47[1] = 0;
    v44 = 0;
    sub_122EA0(v43, v6);
    v52 = 0xFFFFFFFF00000000LL;
    v53 = 0;
    v48 = v42;
    v54[0] = 0xFFFFFFFF00000000LL;
    v54[1] = 0;
    v55[0] = 0xFFFFFFFF00000000LL;
    v55[1] = 0;
    v50 = 0;
    sub_122EA0(&v49, v43);
    v9 = (unsigned __int64 *)a1[22].m128i_i64[0];
    v34 = a1 + 22;
    v36 = &v48;
    if ( !v9 )
    {
      v30 = qalloc();
      v31 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v30, (__m128i)(unsigned __int64)v30);
      if ( !v30 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      memset((void *)v30, 0, 0x70u);
      *(__m128i *)(v30 + 8) = v31;
      *(_QWORD *)v30 = v30 & 0xFFFFFFFFFFFFFFFCLL | 2;
      a1[22].m128i_i64[0] = v30;
      *(_QWORD *)v30 = v30 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v30 & 3LL;
      *(__m128i *)(a1[22].m128i_i64[0] + 8) = _mm_unpacklo_epi64(
                                                (__m128i)a1[22].m128i_u64[0],
                                                (__m128i)a1[22].m128i_u64[0]);
      *(_QWORD *)a1[22].m128i_i64[0] &= ~1uLL;
      *(_QWORD *)a1[22].m128i_i64[0] |= 2uLL;
      v9 = (unsigned __int64 *)a1[22].m128i_i64[0];
      goto LABEL_6;
    }
    if ( !a1[22].m128i_i64[1] )
    {
LABEL_6:
      sub_C4D40(v34, v9, 1, (__int64 **)&v36);
      goto LABEL_7;
    }
    v24 = *v9 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v24 & 2) != 0 )
    {
      v28 = 1;
LABEL_42:
      sub_C4D40(v34, v9, v28, (__int64 **)&v36);
      goto LABEL_7;
    }
    v25 = v8;
    while ( 1 )
    {
      v26 = *(_QWORD *)(v24 + 24);
      if ( (unsigned __int64)v48 < v26 )
      {
        v27 = *(_BYTE **)(v24 + 8);
        v25 = v8;
        if ( (*v27 & 2) != 0 )
          goto LABEL_34;
        goto LABEL_45;
      }
      if ( v26 >= (unsigned __int64)v48 )
        break;
      v27 = *(_BYTE **)(v24 + 16);
      v25 = 0;
      if ( (*v27 & 2) != 0 )
        goto LABEL_34;
LABEL_45:
      v24 = (unsigned __int64)v27;
    }
    if ( !v24 )
    {
LABEL_34:
      v28 = v25;
      v9 = (unsigned __int64 *)v24;
      goto LABEL_42;
    }
LABEL_7:
    sub_11A960(v55);
    sub_11A960(v54);
    sub_11A960(&v52);
    sub_11A960(v47);
    sub_11A960(v46);
    sub_11A960(v45);
    v41 = 0;
    sub_11D320(v6, v40);
    if ( (*a4 & 0xFFFFFFFD) == 5 )
    {
      v50 = 0u;
      v48 = off_4DB8B8;
      v23 = a1[20].m128i_i64[1];
      v51 = 0;
      LOBYTE(v52) = 0;
      v53 = a4;
      LODWORD(v54[0]) = 0;
      v49 = v23;
      sub_11C4C0(v6, &v48, v10, v11, v12, v13);
      v14 = v41 + LODWORD(v54[0]);
      v41 += LODWORD(v54[0]);
    }
    else
    {
      v14 = v41;
    }
    if ( !v14 )
    {
      v20 = (__int64 *)a1[22].m128i_i64[0];
      if ( v20 )
      {
        v21 = (__int64 *)(*v20 & 0xFFFFFFFFFFFFFFFCLL);
        if ( !v21 )
          goto LABEL_36;
        if ( (*(_BYTE *)(*v20 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
        {
          v22 = v21[3];
          if ( v6 < v22 )
          {
            while ( 1 )
            {
              v21 = (__int64 *)v21[1];
LABEL_26:
              if ( (*(_BYTE *)v21 & 2) != 0 )
                break;
              v22 = v21[3];
              if ( v6 >= v22 )
                goto LABEL_24;
            }
          }
          else
          {
LABEL_24:
            if ( v22 < v6 )
            {
              v21 = (__int64 *)v21[2];
              goto LABEL_26;
            }
            if ( v20 != v21 )
LABEL_36:
              sub_C4120((unsigned __int64 **)v34, v21);
          }
        }
      }
    }
LABEL_10:
    sub_125510(&v48, a2, v6, 257);
    v19 = sub_63D40(a5, (__int64 *)&v48, v15, v16, v17, v18);
    v8 &= (sub_314710(a5 + 2, &v50) | v19) ^ 1;
    if ( (_QWORD)v50 )
    {
      *((_QWORD *)&v50 + 1) = 0;
      qfree();
    }
    qfree();
    if ( v38 )
    {
      v39 = 0;
      qfree();
    }
    qfree();
LABEL_15:
    v6 = *(_QWORD *)(v6 + 8);
    if ( v6 )
      continue;
    break;
  }
  if ( v35 != a1[22].m128i_i64[1] )
    sub_63890(a1[21].m128i_i64, *(_DWORD *)(a2 + 72));
  return 1;
}
