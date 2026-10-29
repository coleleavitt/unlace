__int64 __fastcall sub_5A2CD0(__int64 a1, __int64 *a2, __m128i si128)
{
  __int64 v5; // rax
  int v6; // r15d
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(_QWORD *, unsigned int); // rax
  _QWORD *v12; // rax
  __int64 v13; // rsi
  void (***v14)(void); // rdi
  __int64 v15; // rax
  void *v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(_QWORD *, unsigned int); // rax
  _QWORD *v22; // rax
  __int64 v23; // rsi
  unsigned int v24; // edx
  __m128i *v25; // r14
  unsigned int v26; // eax
  unsigned int v27; // ecx
  __int64 v28; // r13
  __int64 v29; // rax
  char *v30; // rdi
  unsigned int v31; // ecx
  unsigned __int64 v32; // rax
  __int64 v33; // rsi
  unsigned int v34; // eax
  __int64 v35; // rsi
  __int64 v36; // rax
  __m128i *v37; // rax
  __m128i v38; // xmm2
  __m128i v39; // xmm1
  unsigned int v40; // eax
  unsigned int v41; // edx
  _QWORD *v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rdx
  void *v45; // rcx
  __int64 v46; // rax
  void (***v47)(void); // r13
  unsigned int v48; // eax
  unsigned __int64 v49; // rax
  __int64 v50; // r8
  unsigned int v51; // [rsp+Ch] [rbp-9Ch]
  void *v52; // [rsp+18h] [rbp-90h] BYREF
  void *v53; // [rsp+20h] [rbp-88h] BYREF
  __int64 v54; // [rsp+28h] [rbp-80h]
  _BYTE v55[120]; // [rsp+30h] [rbp-78h] BYREF

  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 - 4) - 1;
    if ( *(_DWORD *)(v5 - 4) == 1 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 104) + 24LL))(*(_QWORD *)(a1 + 104));
      if ( !(_BYTE)result )
      {
        (*(void (__fastcall **)(void **))(**(_QWORD **)(a1 + 104) + 200LL))(&v52);
        (*(void (__fastcall **)(void **))(**(_QWORD **)(a1 + 104) + 208LL))(&v53);
        v8 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v52 + 24LL))(v52);
        v9 = *(_QWORD *)v8;
        v10 = v8;
        v11 = *(__int64 (__fastcall **)(_QWORD *, unsigned int))(*(_QWORD *)v8 + 16LL);
        if ( v11 == sub_4C98C0 )
        {
          v12 = *(_QWORD **)(v10 + 16);
          if ( !v12 || !*((_DWORD *)v12 - 1) )
          {
            (*(void (__fastcall **)(__int64, __int64))(v9 + 24))(v10, v10 + 16);
            v12 = *(_QWORD **)(v10 + 16);
          }
          v13 = *v12;
        }
        else
        {
          LODWORD(v13) = v11((_QWORD *)v10, 0);
        }
        sub_506520(a2, v13);
        sub_59FDF0((void (__fastcall ***)(_QWORD))v53);
        return sub_59FDF0((void (__fastcall ***)(_QWORD))v52);
      }
      return result;
    }
  }
  else
  {
    v6 = -1;
  }
  v14 = *(void (****)(void))(a1 + 144);
  if ( !v14 )
  {
    v24 = 0;
    v53 = v55;
    v25 = (__m128i *)v55;
    v54 = 0x1000000000LL;
    v26 = 0;
    while ( 1 )
    {
      v25->m128i_i32[v24] = 0;
      v24 = v54 + 1;
      v27 = v26 + 1;
      LODWORD(v54) = v54 + 1;
      if ( v6 == v26 + 1 )
        break;
      if ( v24 >= HIDWORD(v54) )
      {
        v51 = v26 + 1;
        v28 = (unsigned int)(2 * HIDWORD(v54));
        v29 = sub_186B270(4 * v28);
        v24 = v54;
        v30 = (char *)v53;
        v25 = (__m128i *)v29;
        v31 = v51;
        if ( (_DWORD)v54 )
        {
          if ( (unsigned int)(v54 - 1) <= 2 || (unsigned __int64)(v29 - ((_QWORD)v53 + 4)) <= 8 )
          {
            v49 = 0;
            v50 = 4LL * (unsigned int)v54;
            do
            {
              v25->m128i_i32[v49 / 4] = *(_DWORD *)&v30[v49];
              v49 += 4LL;
            }
            while ( v50 != v49 );
          }
          else
          {
            v32 = 0;
            v33 = 16LL * ((unsigned int)v54 >> 2);
            do
            {
              si128 = _mm_loadu_si128((const __m128i *)&v30[v32]);
              v25[v32 / 0x10] = si128;
              v32 += 16LL;
            }
            while ( v32 != v33 );
            v34 = v24 & 0xFFFFFFFC;
            if ( (v24 & 3) != 0 )
            {
              v25->m128i_i32[v34] = *(_DWORD *)&v30[4 * v34];
              v35 = v34 + 1;
              if ( (unsigned int)v35 < v24 )
              {
                v36 = v34 + 2;
                v25->m128i_i32[v35] = *(_DWORD *)&v30[4 * v35];
                if ( (unsigned int)v36 < v24 )
                  v25->m128i_i32[v36] = *(_DWORD *)&v30[4 * v36];
              }
            }
          }
        }
        if ( v30 != v55 && v30 )
        {
          sub_186B220(v30);
          v24 = v54;
          v31 = v51;
        }
        v53 = v25;
        v26 = v31;
        HIDWORD(v54) = v28;
      }
      else
      {
        ++v26;
      }
    }
    if ( v26 <= 2 )
    {
      v40 = 0;
    }
    else
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_18B6590);
      v37 = v25;
      v38 = _mm_shuffle_epi32(_mm_cvtsi32_si128(4u), 0);
      do
      {
        v39 = si128;
        ++v37;
        si128 = _mm_add_epi32(si128, v38);
        v37[-1] = v39;
      }
      while ( &v25[v27 >> 2] != v37 );
      v40 = v27 & 0xFFFFFFFC;
      if ( (v27 & 3) == 0 )
      {
LABEL_46:
        v42 = (_QWORD *)sub_186B270(0x10u);
        v43 = *(_QWORD *)(a1 + 104);
        v44 = (unsigned int)v54;
        *v42 = off_1C52440;
        v45 = v53;
        v42[1] = a1 + 136;
        v46 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, void *, double))(**(_QWORD **)(*(_QWORD *)(a1 + 8)
                                                                                                + 24LL)
                                                                                  + 24LL))(
                *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
                v43,
                v44,
                v45,
                *(double *)si128.m128i_i64);
        v14 = *(void (****)(void))(a1 + 144);
        v47 = (void (***)(void))v46;
        if ( (void (***)(void))v46 != v14 )
        {
          sub_4CFE00(v14);
          *(_QWORD *)(a1 + 144) = v47;
          v14 = v47;
        }
        if ( v53 != v55 && v53 )
        {
          sub_186B220(v53);
          v14 = *(void (****)(void))(a1 + 144);
        }
        goto LABEL_12;
      }
    }
    v25->m128i_i32[v40] = v40;
    v41 = v40 + 1;
    if ( v40 + 1 < v27 )
    {
      v48 = v40 + 2;
      v25->m128i_i32[v41] = v41;
      if ( v48 < v27 )
        v25->m128i_i32[v48] = v48;
    }
    goto LABEL_46;
  }
LABEL_12:
  v15 = *(_QWORD *)(a1 + 136);
  if ( v15 )
    *(_DWORD *)(v15 - 4) = 0;
  v16 = (void *)((__int64 (__fastcall *)(void (***)(void), _QWORD))(*v14)[2])(v14, *(_QWORD *)(a1 + 104));
  v17 = *a2;
  *a2 = *(_QWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 136) = v17;
  if ( !(*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v16 + 24LL))(v16) )
  {
    (*(void (__fastcall **)(void **, void *))(*(_QWORD *)v16 + 200LL))(&v52, v16);
    (*(void (__fastcall **)(void **, void *))(*(_QWORD *)v16 + 208LL))(&v53, v16);
    v18 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v52 + 24LL))(v52);
    v19 = *(_QWORD *)v18;
    v20 = v18;
    v21 = *(__int64 (__fastcall **)(_QWORD *, unsigned int))(*(_QWORD *)v18 + 16LL);
    if ( v21 == sub_4C98C0 )
    {
      v22 = *(_QWORD **)(v20 + 16);
      if ( !v22 || !*((_DWORD *)v22 - 1) )
      {
        (*(void (__fastcall **)(__int64, __int64))(v19 + 24))(v20, v20 + 16);
        v22 = *(_QWORD **)(v20 + 16);
      }
      v23 = *v22;
    }
    else
    {
      LODWORD(v23) = v21((_QWORD *)v20, 0);
    }
    sub_506520(a2, v23);
    sub_59FDF0((void (__fastcall ***)(_QWORD))v53);
    sub_59FDF0((void (__fastcall ***)(_QWORD))v52);
  }
  return sub_4D63E0(v16);
}

