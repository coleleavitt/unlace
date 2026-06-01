__int64 __fastcall sub_68C7A0(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 (*v6)(void); // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  _QWORD *v9; // rbp
  _QWORD *v10; // r15
  __int64 v11; // rbp
  __int64 v12; // r14
  _QWORD *v13; // rbp
  _QWORD *v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rdi
  bool v17; // zf
  __int64 *v18; // rbp
  unsigned __int64 v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rsi
  unsigned __int64 v23; // rdi
  __int64 v24; // rsi
  unsigned __int64 v25; // rdi
  __int64 v26; // rsi
  unsigned __int64 v27; // rdi
  __int64 v28; // rbp
  __int64 v29; // r12
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  __m128i v33; // xmm2
  __m128i *v34; // rax
  __int64 v35; // rax
  _DWORD *v36; // r14
  unsigned __int64 v37; // rbx
  _OWORD *v38; // rax
  int v39; // edx
  int v40; // ecx
  int v41; // r8d
  int v42; // r9d
  __int64 (*v43)(); // rax
  __int64 v44; // rax
  __int64 v45; // rbx
  void (__fastcall ***v46)(void *); // r13
  void *v48; // [rsp-8h] [rbp-108h]
  int v49; // [rsp-8h] [rbp-108h]
  _QWORD *v50; // [rsp+0h] [rbp-100h]
  _QWORD *i; // [rsp+8h] [rbp-F8h]
  __m128i v53; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v54; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v55; // [rsp+40h] [rbp-C0h]
  __int64 v56; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v57; // [rsp+50h] [rbp-B0h]
  __int64 v58; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v59; // [rsp+60h] [rbp-A0h]
  _OWORD v60[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v61; // [rsp+88h] [rbp-78h]
  _OWORD *v62; // [rsp+90h] [rbp-70h]
  __int64 v63; // [rsp+98h] [rbp-68h]
  int v64; // [rsp+A0h] [rbp-60h]
  __int128 v65; // [rsp+A8h] [rbp-58h]
  int v66; // [rsp+B8h] [rbp-48h]

  v5 = a1[17];
  v53 = _mm_unpacklo_epi64((__m128i)a2, (__m128i)a2);
  if ( v5 && *(_DWORD *)(v5 - 4) )
  {
    v50 = a1 + 21;
    v6 = *(__int64 (**)(void))(*a1 + 104LL);
    if ( (char *)v6 == (char *)sub_2B1DE0 )
      v7 = (__int64)(a1 + 10);
    else
      v7 = v6();
    sub_1473C20(v50, v7);
    v8 = a1[15];
    v9 = (_QWORD *)a1[17];
    v54 = 0;
    v56 = 0;
    v55 = v8;
    v57 = v8;
    v58 = 0;
    v59 = v8;
    v60[0] = v8;
    if ( v9 )
    {
      for ( i = &v9[*((unsigned int *)v9 - 1)]; i != v9; ++v9 )
      {
        sub_14BB8A0(a1 + 19, *v9, &v56, &v54);
        sub_1475DD0(v50, 0, v56, &v58, &v54);
        sub_E5EBF0(a1[18], v58);
      }
    }
    sub_1474200(v50, v60);
    v10 = *((_QWORD **)&v60[0] + 1);
    if ( *((_QWORD *)&v60[0] + 1) )
    {
      v11 = *((_QWORD *)&v60[0] + 1) + 8LL * *(unsigned int *)(*((_QWORD *)&v60[0] + 1) - 4LL);
      if ( *((_QWORD *)&v60[0] + 1) != v11 )
      {
        v12 = a1[18];
        do
          sub_E5EBF0(v12, *v10++);
        while ( (_QWORD *)v11 != v10 );
      }
    }
    v13 = (_QWORD *)a1[17];
    if ( v13 )
    {
      v14 = &v13[*((unsigned int *)v13 - 1)];
      if ( v13 >= v14 )
        goto LABEL_20;
      do
      {
        while ( 1 )
        {
          v15 = *v13;
          if ( *v13 )
          {
            v16 = a1[16];
            v17 = (*(_DWORD *)(v15 + 8))-- == 1;
            if ( v17 )
              break;
          }
          if ( ++v13 >= v14 )
            goto LABEL_19;
        }
        sub_15D7BC0(v16, v15);
        ++v13;
      }
      while ( v13 < v14 );
LABEL_19:
      v13 = (_QWORD *)a1[17];
      if ( v13 )
LABEL_20:
        *((_DWORD *)v13 - 1) = 0;
    }
    v18 = *((__int64 **)&v60[0] + 1);
    if ( *((_QWORD *)&v60[0] + 1) )
    {
      v19 = *((_QWORD *)&v60[0] + 1) + 8LL * *(unsigned int *)(*((_QWORD *)&v60[0] + 1) - 4LL);
      if ( *((_QWORD *)&v60[0] + 1) >= v19 )
        goto LABEL_29;
      do
      {
        while ( 1 )
        {
          v20 = *v18;
          if ( *v18 )
          {
            v21 = *(_QWORD *)&v60[0];
            v17 = (*(_DWORD *)(v20 + 8))-- == 1;
            if ( v17 )
              break;
          }
          if ( (unsigned __int64)++v18 >= v19 )
            goto LABEL_28;
        }
        sub_15D7BC0(v21, v20);
        ++v18;
      }
      while ( (unsigned __int64)v18 < v19 );
LABEL_28:
      v18 = *((__int64 **)&v60[0] + 1);
      if ( *((_QWORD *)&v60[0] + 1) )
LABEL_29:
        sub_186B220(v18 - 1);
    }
    v22 = v58;
    if ( v58 )
    {
      v23 = v59;
      v17 = (*(_DWORD *)(v58 + 8))-- == 1;
      if ( v17 )
        sub_15D7BC0(v23, v22);
    }
    v24 = v56;
    if ( v56 )
    {
      v25 = v57;
      v17 = (*(_DWORD *)(v56 + 8))-- == 1;
      if ( v17 )
        sub_15D7BC0(v25, v24);
    }
    v26 = v54;
    if ( v54 )
    {
      v27 = v55;
      v17 = (*(_DWORD *)(v54 + 8))-- == 1;
      if ( v17 )
        sub_15D7BC0(v27, v26);
    }
  }
  v28 = sub_186B270(0xB0u);
  v29 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64))(*(_QWORD *)a1[18] + 80LL))(a1[18], a2, a3);
  sub_E1F060(v28, a2);
  v33 = _mm_load_si128(&v53);
  *(_QWORD *)(v28 + 136) = 0;
  *(_QWORD *)v28 = &off_1C69460;
  *(_QWORD *)(v28 + 72) = off_1C69610;
  *(_QWORD *)(v28 + 144) = v29;
  *(__m128i *)(v28 + 120) = v33;
  if ( v29 )
    ++*(_DWORD *)(v29 + 48);
  sub_14B7810(v28 + 152, a2, a3, v30, v31, v32, v48);
  sub_1474610(v28 + 168, a2, a3);
  sub_E5E9C0(v28, a3);
  v34 = sub_68C3F0((__int64)a1);
  v35 = sub_1336AB0(a1[7], v34);
  v36 = (_DWORD *)v35;
  if ( v35 )
  {
    v37 = a1[15];
    ++*(_DWORD *)(v35 + 8);
    v61 = 0;
    v60[0] = _mm_unpacklo_epi64((__m128i)v37, (__m128i)a2);
    v60[1] = 0;
    v38 = (_OWORD *)sub_186B270(0x80u);
    v62 = v38;
    *v38 = 0;
    v38[1] = 0;
    v38[2] = 0;
    v38[3] = 0;
    v38[4] = 0;
    v38[5] = 0;
    v38[6] = 0;
    v38[7] = 0;
    v63 = 8;
    v64 = 0;
    v66 = 0;
    v65 = 0;
    if ( v37 != a2 )
    {
      sub_15DA640(DWORD2(v60[0]), v60[0], v39, v40, v41, v42, v49);
      sub_15D2280(*((_QWORD *)&v60[0] + 1), *(_QWORD *)&v60[0]);
    }
    v43 = *(__int64 (**)())(*(_QWORD *)v36 + 56LL);
    if ( v43 == sub_667B10 )
      v44 = sub_1333690(v36, v60);
    else
      v44 = ((__int64 (__fastcall *)(_DWORD *, _OWORD *))v43)(v36, v60);
    v45 = v44;
    if ( v44 )
      ++*(_DWORD *)(v44 + 8);
    v46 = *(void (__fastcall ****)(void *))(v28 + 56);
    if ( v46 )
    {
      v17 = (*((_DWORD *)v46 + 2))-- == 1;
      if ( v17 )
      {
        (**v46)(v46);
        sub_186B220(v46);
      }
    }
    *(_QWORD *)(v28 + 56) = v45;
    sub_15CE760(v60);
    v17 = v36[2]-- == 1;
    if ( v17 )
    {
      (**(void (__fastcall ***)(_DWORD *))v36)(v36);
      sub_186B220(v36);
    }
  }
  return v28;
}

