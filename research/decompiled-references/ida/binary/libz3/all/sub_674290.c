_QWORD *__fastcall sub_674290(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // r15
  _QWORD *v7; // rbx
  __int64 (__fastcall *v8)(int, int, int, int, int, int, int, int, int, int, int, __int64, __int64, __int64, void *); // rax
  __int64 v9; // rbp
  __int64 v10; // r13
  __m128i *v11; // rax
  __int64 v12; // rax
  _DWORD *v13; // r13
  unsigned __int64 v14; // r15
  _OWORD *v15; // rax
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 (*v20)(); // rax
  __int64 v21; // rax
  void (***v22)(void); // rdi
  bool v23; // zf
  __m128i *v24; // rax
  __int64 v25; // rax
  _DWORD *v26; // rbp
  unsigned __int64 v27; // r13
  _OWORD *v28; // rax
  int v29; // edx
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  __int64 (*v33)(); // rax
  __int64 v34; // rax
  __int64 v35; // r12
  void (__fastcall ***v36)(void *); // r13
  int v38; // [rsp+0h] [rbp-B8h]
  __int64 v40; // [rsp+18h] [rbp-A0h]
  __m128i v41; // [rsp+20h] [rbp-98h] BYREF
  __int128 v42; // [rsp+30h] [rbp-88h]
  __int64 v43; // [rsp+40h] [rbp-78h]
  _OWORD *v44; // [rsp+48h] [rbp-70h]
  __int64 v45; // [rsp+50h] [rbp-68h]
  int v46; // [rsp+58h] [rbp-60h]
  __int128 v47; // [rsp+60h] [rbp-58h]
  int v48; // [rsp+70h] [rbp-48h]

  v5 = sub_186B270(0x90u);
  v6 = a1[16];
  v7 = (_QWORD *)v5;
  v8 = *(__int64 (__fastcall **)(int, int, int, int, int, int, int, int, int, int, int, __int64, __int64, __int64, void *))(*(_QWORD *)v6 + 80LL);
  if ( v8 == sub_674290 )
  {
    v9 = sub_186B270(0x90u);
    v10 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64))(**(_QWORD **)(v6 + 128) + 80LL))(
            *(_QWORD *)(v6 + 128),
            a2,
            a3);
    sub_E1F060(v9, a2);
    *(_QWORD *)(v9 + 120) = a2;
    *(_QWORD *)v9 = &off_1C68EE0;
    *(_QWORD *)(v9 + 72) = off_1C69090;
    *(_QWORD *)(v9 + 128) = v10;
    if ( v10 )
      ++*(_DWORD *)(v10 + 48);
    sub_14CDB80(v9 + 136, a2, a3);
    sub_E5E9C0(v9, a3);
    v11 = sub_673C60(v6);
    v12 = sub_1336AB0(*(_QWORD *)(v6 + 56), v11);
    v13 = (_DWORD *)v12;
    if ( v12 )
    {
      v14 = *(_QWORD *)(v6 + 120);
      ++*(_DWORD *)(v12 + 8);
      v43 = 0;
      v41 = _mm_unpacklo_epi64((__m128i)v14, (__m128i)a2);
      v42 = 0;
      v15 = (_OWORD *)sub_186B270(0x80u);
      v44 = v15;
      *v15 = 0;
      v15[1] = 0;
      v15[2] = 0;
      v15[3] = 0;
      v15[4] = 0;
      v15[5] = 0;
      v15[6] = 0;
      v15[7] = 0;
      v45 = 8;
      v46 = 0;
      v48 = 0;
      v47 = 0;
      if ( a2 != v14 )
      {
        sub_15DA640(v41.m128i_i32[2], v41.m128i_i32[0], v16, v17, v18, v19, v38);
        sub_15D2280(v41.m128i_i64[1], v41.m128i_i64[0]);
      }
      v20 = *(__int64 (**)())(*(_QWORD *)v13 + 56LL);
      if ( v20 == sub_667B10 )
        v21 = sub_1333690(v13, &v41);
      else
        v21 = ((__int64 (__fastcall *)(_DWORD *, __m128i *))v20)(v13, &v41);
      if ( v21 )
        ++*(_DWORD *)(v21 + 8);
      v22 = *(void (****)(void))(v9 + 56);
      if ( v22 )
      {
        v23 = (*((_DWORD *)v22 + 2))-- == 1;
        if ( v23 )
        {
          v40 = v21;
          (**v22)();
          sub_186B220(v22);
          v21 = v40;
        }
      }
      *(_QWORD *)(v9 + 56) = v21;
      sub_15CE760(&v41);
      v23 = v13[2]-- == 1;
      if ( v23 )
      {
        (**(void (__fastcall ***)(_DWORD *))v13)(v13);
        sub_186B220(v13);
      }
    }
    sub_E1F060(v7, a2);
    v7[15] = a2;
    *v7 = &off_1C68EE0;
    v7[9] = off_1C69090;
    v7[16] = v9;
    goto LABEL_17;
  }
  v9 = ((__int64 (__fastcall *)(_QWORD, unsigned __int64, __int64))v8)(a1[16], a2, a3);
  sub_E1F060(v7, a2);
  v7[15] = a2;
  *v7 = &off_1C68EE0;
  v7[9] = off_1C69090;
  v7[16] = v9;
  if ( v9 )
LABEL_17:
    ++*(_DWORD *)(v9 + 48);
  sub_14CDB80(v7 + 17, a2, a3);
  sub_E5E9C0(v7, a3);
  v24 = sub_673C60((__int64)a1);
  v25 = sub_1336AB0(a1[7], v24);
  v26 = (_DWORD *)v25;
  if ( v25 )
  {
    v27 = a1[15];
    ++*(_DWORD *)(v25 + 8);
    v43 = 0;
    v41 = _mm_unpacklo_epi64((__m128i)v27, (__m128i)a2);
    v42 = 0;
    v28 = (_OWORD *)sub_186B270(0x80u);
    v44 = v28;
    *v28 = 0;
    v28[1] = 0;
    v28[2] = 0;
    v28[3] = 0;
    v28[4] = 0;
    v28[5] = 0;
    v28[6] = 0;
    v28[7] = 0;
    v45 = 8;
    v46 = 0;
    v48 = 0;
    v47 = 0;
    if ( v27 != a2 )
    {
      sub_15DA640(v41.m128i_i32[2], v41.m128i_i32[0], v29, v30, v31, v32, v38);
      sub_15D2280(v41.m128i_i64[1], v41.m128i_i64[0]);
    }
    v33 = *(__int64 (**)())(*(_QWORD *)v26 + 56LL);
    if ( v33 == sub_667B10 )
      v34 = sub_1333690(v26, &v41);
    else
      v34 = ((__int64 (__fastcall *)(_DWORD *, __m128i *))v33)(v26, &v41);
    v35 = v34;
    if ( v34 )
      ++*(_DWORD *)(v34 + 8);
    v36 = (void (__fastcall ***)(void *))v7[7];
    if ( v36 )
    {
      v23 = (*((_DWORD *)v36 + 2))-- == 1;
      if ( v23 )
      {
        (**v36)(v36);
        sub_186B220(v36);
      }
    }
    v7[7] = v35;
    sub_15CE760(&v41);
    v23 = v26[2]-- == 1;
    if ( v23 )
    {
      (**(void (__fastcall ***)(_DWORD *))v26)(v26);
      sub_186B220(v26);
    }
  }
  return v7;
}

