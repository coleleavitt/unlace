__int64 __fastcall sub_C0A540(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rcx
  char v7; // dl
  unsigned int v8; // edx
  __int64 v9; // rax
  bool v10; // zf
  __int64 v11; // rdi
  _DWORD *v12; // rdx
  __int64 *v13; // rbp
  __int64 *v14; // r14
  char *v15; // rdx
  __int64 v16; // rbx
  unsigned int v17; // eax
  __int64 v18; // r12
  char *v19; // rdi
  __int64 v20; // rsi
  _QWORD *v21; // rbx
  __int64 v22; // rax
  void (__fastcall ***v23)(_QWORD); // rbp
  _DWORD **v24; // rbx
  unsigned __int64 v25; // r12
  _DWORD *v26; // rbp
  unsigned int v27; // edx
  __int64 *v28; // rbp
  unsigned int v29; // r12d
  __int64 v30; // rbx
  char *v32; // rbx
  char *v33; // rbp
  __int64 v34; // rsi
  __int64 v35; // rcx
  int v36; // edx
  __int64 *v37; // rax
  __int64 v38; // r12
  _QWORD *v39; // rdi
  __int64 v40; // rax
  unsigned int v41; // ebx
  __int64 i; // rax
  __int64 *v43; // [rsp+8h] [rbp-120h]
  char *v44; // [rsp+10h] [rbp-118h]
  unsigned int v45; // [rsp+18h] [rbp-110h]
  unsigned int v46; // [rsp+1Ch] [rbp-10Ch]
  __int64 v50; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v51; // [rsp+50h] [rbp-D8h]
  void *ptr; // [rsp+58h] [rbp-D0h]
  __int64 v53; // [rsp+60h] [rbp-C8h]
  _BYTE v54[192]; // [rsp+68h] [rbp-C0h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v43 = (__int64 *)*a2;
  v4 = *(_QWORD *)(*a2 + 72);
  if ( !v4 )
    goto LABEL_33;
  v45 = 0;
  v5 = *v43;
  while ( 2 )
  {
    v6 = v4;
    v7 = *(_BYTE *)(v4 + 3) >> 6;
    if ( v7 )
    {
      if ( v7 != 1 )
        goto LABEL_5;
    }
    else
    {
      do
      {
        v6 = *(_QWORD *)(v6 + 16);
        v7 = *(_BYTE *)(v6 + 3) >> 6;
      }
      while ( !v7 );
      if ( v7 != 1 )
      {
LABEL_5:
        if ( v7 == 2 )
          v8 = *(_DWORD *)(v6 + 4) - 1;
        else
          v8 = *(_DWORD *)(v6 + 4);
        if ( v45 >= v8 )
          break;
        goto LABEL_8;
      }
    }
    if ( v45 >= *(_DWORD *)(v6 + 4) + 1 )
      break;
LABEL_8:
    if ( (*((_BYTE *)v43 + 123) & 0x20) != 0 )
    {
      v9 = *(_QWORD *)(v5 + 864);
      goto LABEL_10;
    }
    v36 = 17;
    while ( 1 )
    {
      if ( *(char *)(v4 + 3) < 0 )
      {
        if ( *(_BYTE *)(v4 + 3) >> 6 != 2 )
        {
          v37 = (__int64 *)(*(_QWORD *)(v4 + 16) + 8LL * v45);
          goto LABEL_66;
        }
        goto LABEL_68;
      }
      if ( v45 == *(_DWORD *)(v4 + 4) )
        break;
LABEL_68:
      v4 = *(_QWORD *)(v4 + 16);
      if ( !--v36 )
      {
        sub_233F80((__int64 *)(v5 + 616), (_DWORD *)v43 + 18);
        v37 = (__int64 *)(*(_QWORD *)(v43[9] + 16) + 8LL * v45);
        goto LABEL_66;
      }
    }
    v37 = (__int64 *)(v4 + 8);
LABEL_66:
    v9 = *v37;
LABEL_10:
    v10 = *(_WORD *)(v9 + 4) == 0;
    v50 = v9;
    v11 = *(_QWORD *)(v3 + 2648);
    if ( !v10 || (v12 = *(_DWORD **)(*(_QWORD *)(v9 + 16) + 24LL)) == nullptr || *v12 )
    {
      v51 = *(_QWORD *)(v3 + 2648);
      ptr = v54;
      v53 = 0x1000000000LL;
      goto LABEL_14;
    }
    if ( v12[1] == 6 )
    {
      v41 = *(_DWORD *)(v9 + 24);
      v51 = *(_QWORD *)(v3 + 2648);
      ptr = v54;
      v53 = 0x1000000000LL;
      v46 = v41;
      if ( v41 )
      {
        v13 = (__int64 *)(v9 + 32);
        goto LABEL_15;
      }
    }
    else
    {
      v51 = *(_QWORD *)(v3 + 2648);
      ptr = v54;
      v53 = 0x1000000000LL;
LABEL_14:
      v46 = 1;
      v13 = &v50;
LABEL_15:
      v14 = &v13[v46];
      do
      {
        v16 = sub_C09F10(v3, *v13);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v51 + 72LL))(v51, v16);
        v17 = v53;
        if ( (unsigned int)v53 < HIDWORD(v53) )
        {
          v15 = (char *)ptr;
        }
        else
        {
          v18 = (unsigned int)(2 * HIDWORD(v53));
          v15 = (char *)sub_186B270(8 * v18);
          v17 = v53;
          v19 = (char *)ptr;
          if ( (_DWORD)v53 )
          {
            if ( (unsigned int)(v53 - 1) <= 2 || v15 == (char *)ptr + 8 )
            {
              v35 = 0;
              do
              {
                *(_QWORD *)&v15[v35] = *(_QWORD *)&v19[v35];
                v35 += 8;
              }
              while ( 8LL * v17 != v35 );
            }
            else
            {
              v20 = 0;
              do
              {
                *(__m128i *)&v15[v20] = _mm_loadu_si128((const __m128i *)&v19[v20]);
                v20 += 16;
              }
              while ( v20 != 16LL * (v17 >> 1) );
              if ( (v17 & 1) != 0 )
                *(_QWORD *)&v15[8 * (v17 & 0xFFFFFFFE)] = *(_QWORD *)&v19[8 * (v17 & 0xFFFFFFFE)];
            }
          }
          if ( v19 != v54 && v19 )
          {
            v44 = v15;
            sub_186B220(v19);
            v17 = v53;
            v15 = v44;
          }
          ptr = v15;
          HIDWORD(v53) = v18;
        }
        ++v13;
        *(_QWORD *)&v15[8 * v17] = v16;
        LODWORD(v53) = v17 + 1;
      }
      while ( v14 != v13 );
      v11 = *(_QWORD *)(v3 + 2648);
    }
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 88LL))(v11, v46);
    v32 = (char *)ptr;
    v33 = (char *)ptr + 8 * (unsigned int)v53;
    if ( ptr < v33 )
    {
      do
      {
        v34 = *(_QWORD *)v32;
        v32 += 8;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v51 + 80LL))(v51, v34);
      }
      while ( v32 < v33 );
      v32 = (char *)ptr;
    }
    if ( v32 != v54 && v32 )
      sub_186B220(v32);
    ++v45;
    v4 = v43[9];
    if ( v4 )
    {
      v5 = *v43;
      continue;
    }
    break;
  }
LABEL_33:
  v21 = (_QWORD *)sub_186B270(0x18u);
  *v21 = &off_1C58048;
  v22 = *(_QWORD *)(v3 + 2664);
  v21[2] = 0;
  v21[1] = v22;
  sub_1623BC0(v3 + 2664, v21 + 1);
  v23 = *(void (__fastcall ****)(_QWORD))(v3 + 2656);
  if ( v21 != v23 )
  {
    if ( v23 )
    {
      (**v23)(*(_QWORD *)(v3 + 2656));
      sub_186B220(v23);
    }
    *(_QWORD *)(v3 + 2656) = v21;
    v23 = (void (__fastcall ***)(_QWORD))v21;
  }
  (*(void (__fastcall **)(_QWORD, void (__fastcall ***)(_QWORD)))(**(_QWORD **)(v3 + 2648) + 120LL))(
    *(_QWORD *)(v3 + 2648),
    v23);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 2648) + 144LL))(*(_QWORD *)(v3 + 2648));
  if ( *(_BYTE *)(v3 + 2720) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD))(**(_QWORD **)(v3 + 2648) + 96LL))(
      *(_QWORD *)(v3 + 2648),
      &std::cout,
      0);
    std::__ostream_insert<char,std::char_traits<char>>();
    (*(void (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(v3 + 2648) + 152LL))(*(_QWORD *)(v3 + 2648), &std::cout);
  }
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 2648LL) + 136LL))(
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 2648LL),
    a1 + 32);
  v24 = *(_DWORD ***)a3;
  v25 = *(_QWORD *)a3 + 8LL * *(unsigned int *)(a3 + 8);
  if ( *(_QWORD *)a3 < v25 )
  {
    do
    {
      while ( 1 )
      {
        v26 = *v24;
        if ( *v24 )
        {
          v10 = v26[8]-- == 1;
          if ( v10 )
            break;
        }
        if ( (unsigned __int64)++v24 >= v25 )
          goto LABEL_45;
      }
      sub_ED44E0(v26);
      sub_186B220(v26);
      ++v24;
    }
    while ( (unsigned __int64)v24 < v25 );
  }
LABEL_45:
  v27 = 0;
  *(_DWORD *)(a3 + 8) = 0;
  v28 = (__int64 *)*a2;
  if ( *a2 )
  {
    ++*((_DWORD *)v28 + 8);
    v27 = *(_DWORD *)(a3 + 8);
  }
  v29 = *(_DWORD *)(a3 + 12);
  if ( v27 >= v29 )
  {
    v38 = 2 * v29;
    v30 = sub_186B270(8 * v38);
    v27 = *(_DWORD *)(a3 + 8);
    v39 = *(_QWORD **)a3;
    if ( v27 )
    {
      if ( v27 - 1 <= 2 || (_QWORD *)v30 == v39 + 1 )
      {
        for ( i = 0; i != v27; ++i )
          *(_QWORD *)(v30 + i * 8) = v39[i];
      }
      else
      {
        v40 = 0;
        do
        {
          *(__m128i *)(v30 + v40 * 8) = _mm_loadu_si128((const __m128i *)&v39[v40]);
          v40 += 2;
        }
        while ( 2LL * (v27 >> 1) != v40 );
        if ( (v27 & 1) != 0 )
          *(_QWORD *)(v30 + 8LL * (v27 & 0xFFFFFFFE)) = v39[v27 & 0xFFFFFFFE];
      }
    }
    if ( v39 != (_QWORD *)(a3 + 16) && v39 )
    {
      sub_186B220(v39);
      v27 = *(_DWORD *)(a3 + 8);
    }
    *(_QWORD *)a3 = v30;
    *(_DWORD *)(a3 + 12) = v38;
  }
  else
  {
    v30 = *(_QWORD *)a3;
  }
  *(_QWORD *)(v30 + 8LL * v27) = v28;
  *(_DWORD *)(a3 + 8) = v27 + 1;
  return a3;
}

