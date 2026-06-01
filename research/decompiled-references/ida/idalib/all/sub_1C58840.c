__int64 __fastcall sub_1C58840(__int64 *a1, unsigned __int8 *a2, size_t a3, int a4, char a5, double a6, double a7)
{
  unsigned __int8 *v9; // rbx
  __int64 v10; // r15
  unsigned int v11; // eax
  __int64 v12; // r8
  unsigned int v13; // r10d
  __int64 *v14; // r9
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 (__fastcall *v17)(); // r12
  _QWORD *v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // r13
  char *v24; // rdx
  _QWORD *v25; // rcx
  unsigned int v26; // eax
  __int64 v27; // rax
  __int64 v28; // r12
  _QWORD *v30; // rax
  __m128i *v31; // rdx
  unsigned __int8 *v32; // r14
  unsigned __int8 v33; // bp
  __m128i *v34; // rax
  __m128i *v35; // rax
  __int64 v36; // rax
  __m128i si128; // xmm0
  unsigned int v40; // [rsp+14h] [rbp-A4h]
  unsigned int v41; // [rsp+14h] [rbp-A4h]
  __int64 *v42; // [rsp+18h] [rbp-A0h]
  __int64 *v43; // [rsp+18h] [rbp-A0h]
  void *v44[2]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v45[16]; // [rsp+30h] [rbp-88h] BYREF
  __int64 (__fastcall **v46)(); // [rsp+40h] [rbp-78h] BYREF
  int v47; // [rsp+48h] [rbp-70h]
  __int128 v48; // [rsp+50h] [rbp-68h]
  __m128i *v49; // [rsp+60h] [rbp-58h]
  char v50; // [rsp+68h] [rbp-50h]
  int v51; // [rsp+6Ch] [rbp-4Ch]
  void **v52; // [rsp+70h] [rbp-48h]

  v9 = a2;
  v10 = a1[30];
  v11 = sub_2244B30(a2, a3);
  v13 = sub_2244CB0(v10 + 552, a2, a3, v11);
  v14 = (__int64 *)(*(_QWORD *)(v10 + 552) + 8LL * v13);
  if ( *v14 )
  {
    if ( *v14 != -8 )
    {
      sub_989490((__int64 **)&v46, v14, 0);
      v17 = *v46;
      v18 = *((_QWORD **)*v46 + 1);
      if ( v18 )
        goto LABEL_17;
      goto LABEL_4;
    }
    --*(_DWORD *)(v10 + 568);
  }
  v22 = *(_QWORD *)(v10 + 576);
  *(_QWORD *)(v10 + 656) += a3 + 17;
  v23 = (_QWORD *)((v22 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  v24 = (char *)v23 + a3 + 17;
  if ( *(_QWORD *)(v10 + 584) >= (unsigned __int64)v24 && v22 )
  {
    *(_QWORD *)(v10 + 576) = v24;
  }
  else
  {
    v43 = v14;
    v41 = v13;
    v36 = sub_986170(v10 + 576, a3 + 17, a3 + 17, 3, v12, (__int64)v14);
    v14 = v43;
    v13 = v41;
    v23 = (_QWORD *)v36;
  }
  v25 = v23 + 2;
  if ( a3 )
  {
    v42 = v14;
    v40 = v13;
    v30 = memcpy(v23 + 2, a2, a3);
    v14 = v42;
    v13 = v40;
    v25 = v30;
  }
  *((_BYTE *)v25 + a3) = 0;
  *v23 = a3;
  v23[1] = 0;
  *v14 = (__int64)v23;
  ++*(_DWORD *)(v10 + 564);
  v26 = sub_22450D0(v10 + 552, v13);
  sub_989490((__int64 **)&v46, (__int64 *)(*(_QWORD *)(v10 + 552) + 8LL * v26), 0);
  v17 = *v46;
  v18 = *((_QWORD **)*v46 + 1);
  if ( !v18 )
  {
LABEL_4:
    v19 = *(_QWORD *)(v10 + 672);
    if ( !v19
      || (v18 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, unsigned __int8 *, size_t))(*(_QWORD *)v19 + 16LL))(
                            v19,
                            v9,
                            a3),
          (*((_QWORD *)v17 + 1) = v18) == 0) )
    {
      v20 = *(_QWORD *)(v10 + 576);
      *(_QWORD *)(v10 + 656) += 24LL;
      v18 = (_QWORD *)((v20 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( *(_QWORD *)(v10 + 584) >= (unsigned __int64)(v18 + 3) && v20 )
        *(_QWORD *)(v10 + 576) = v18 + 3;
      else
        v18 = (_QWORD *)sub_986170(v10 + 576, 24, 24, 3, v15, v16);
      v21 = *v18 & 0xFFFFF80000000000LL;
      v18[1] = 0;
      *v18 = v21 | 0x1FFFC05;
      *((_QWORD *)v17 + 1) = v18;
      v18[2] = v17;
    }
  }
LABEL_17:
  v27 = sub_1A5C7E0(a1, (__int64)v18, a4, 0, a6, a7);
  v28 = v27;
  if ( *(_QWORD *)(v27 + 64) )
  {
    sub_B8C4D0(v27, a1[31]);
    goto LABEL_19;
  }
  v45[0] = 0;
  v44[0] = v45;
  v44[1] = nullptr;
  v47 = 0;
  v46 = &off_2BEBE68;
  v50 = 0;
  v51 = 1;
  v49 = nullptr;
  v48 = 0;
  v52 = v44;
  sub_227B8B0(&v46, 0, 0, 0);
  v31 = v49;
  if ( *((_QWORD *)&v48 + 1) - (_QWORD)v49 > 0x16u )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AAB90);
    v49[1].m128i_i32[0] = 1684632890;
    v31[1].m128i_i16[2] = 24445;
    *v31 = si128;
    v31[1].m128i_i8[6] = 95;
    v49 = (__m128i *)((char *)v49 + 23);
  }
  else
  {
    sub_227BF10(&v46, "__MSASMLABEL_.${:uid}__", 23);
  }
  v32 = &v9[a3];
  if ( v9 != &v9[a3] )
  {
    while ( 1 )
    {
      v33 = *v9;
      v34 = v49;
      if ( (unsigned __int64)v49 >= *((_QWORD *)&v48 + 1) )
      {
        sub_227BA10(&v46, v33);
      }
      else
      {
        v49 = (__m128i *)((char *)v49 + 1);
        v34->m128i_i8[0] = v33;
      }
      if ( v33 != 36 )
        goto LABEL_26;
      v35 = v49;
      if ( (unsigned __int64)v49 >= *((_QWORD *)&v48 + 1) )
      {
        sub_227BA10(&v46, 36);
LABEL_26:
        if ( ++v9 == v32 )
          break;
      }
      else
      {
        ++v9;
        v49 = (__m128i *)((char *)v49 + 1);
        v35->m128i_i8[0] = 36;
        if ( v9 == v32 )
          break;
      }
    }
  }
  sub_B7CC80(v28, *v52, (size_t)v52[1]);
  v46 = &off_2BEBE68;
  sub_227B7A0(&v46);
  if ( v44[0] != v45 )
    operator delete(v44[0]);
LABEL_19:
  if ( a5 )
    *(_BYTE *)(v28 + 72) = 1;
  *(_DWORD *)(v28 + 24) = a4;
  return v28;
}
