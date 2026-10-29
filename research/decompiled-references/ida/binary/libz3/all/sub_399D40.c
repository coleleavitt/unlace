__int64 __fastcall sub_399D40(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rbp
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // r13
  int *v9; // rsi
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // r14
  __int64 v15; // r14
  __int64 v16; // r13
  _QWORD *v17; // rax
  _QWORD *v18; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rax
  unsigned int v22; // ebx
  __int64 v24; // rax
  __int64 v25; // r14
  char v26; // al
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rbp
  __int64 v30; // r13
  __int64 v31; // rsi
  __int64 v32; // r13
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rbp
  void (***v36)(void); // rdi
  __int64 v37; // rdi
  __int64 v38; // r14
  __int64 v39; // rax
  __int64 v40; // rbp
  unsigned __int64 v41; // rsi
  __int64 v42; // [rsp+0h] [rbp-188h]
  __int64 v43; // [rsp+8h] [rbp-180h] BYREF
  __int64 v44[2]; // [rsp+10h] [rbp-178h] BYREF
  int v45[4]; // [rsp+20h] [rbp-168h] BYREF
  _BYTE v46[24]; // [rsp+30h] [rbp-158h] BYREF
  int v47; // [rsp+48h] [rbp-140h]
  _BYTE v48[312]; // [rsp+50h] [rbp-138h] BYREF

  v4 = *(_DWORD **)(a1 + 64);
  if ( v4 )
  {
    if ( v4[12]-- == 1 )
    {
      (**(void (__fastcall ***)(_DWORD *))v4)(v4);
      sub_186B220(v4);
    }
  }
  v6 = *(_QWORD *)(a1 + 344);
  *(_QWORD *)(a1 + 64) = 0;
  sub_399450(*(_QWORD *)(a1 + 336), v6);
  v7 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 336) = 0;
  sub_64C320(v7);
  sub_63D510(a1 + 72);
  v8 = *(_QWORD *)(a1 + 48);
  sub_654110(v8, v6);
  sub_643420(v48, v8 + 2360);
  sub_632080(v8 + 656, a2, v8 + 2360);
  v9 = *(int **)(a1 + 48);
  sub_64C590(v44, v9);
  sub_5D9090(*(_QWORD *)(a1 + 48), (_DWORD)v9, v10, v11, v12, v13);
  if ( (unsigned __int8)sub_64B330(*(_QWORD *)(a1 + 48)) )
  {
    sub_6440D0(v45, *(_QWORD *)(a1 + 48));
    v14 = sub_186B270(0xA8u);
    sub_5BDEB0(v14, *(_QWORD *)(a1 + 48));
    sub_644270(v45, v14);
    v9 = v45;
    sub_64C400(*(_QWORD *)(a1 + 48), v45);
    sub_6440F0(v45);
  }
  v15 = *(_QWORD *)(a1 + 48);
  sub_654110(v15, v9);
  v16 = v15 + 2360;
  if ( !*(_DWORD *)(v15 + 2524) )
  {
    v22 = -1;
    goto LABEL_17;
  }
  v17 = *(_QWORD **)(v15 + 2512);
  v18 = &v17[*(unsigned int *)(v15 + 2520)];
  if ( v17 == v18 )
  {
    v38 = *v17;
LABEL_28:
    if ( !v38 )
      goto LABEL_12;
  }
  else
  {
    while ( 1 )
    {
      v38 = *v17;
      v19 = v17;
      if ( *v17 > 1u )
        break;
      if ( v18 == ++v17 )
      {
        v38 = v19[1];
        goto LABEL_28;
      }
    }
  }
  ++*(_DWORD *)(v38 + 8);
LABEL_12:
  sub_3993F0(*(_QWORD *)(a1 + 320), *(_QWORD *)(a1 + 328));
  *(_QWORD *)(a1 + 320) = v38;
  sub_63ECD0(a1 + 72, v16);
  sub_6430A0(a1 + 72);
  sub_64C350(*(_QWORD *)(a1 + 48));
  sub_64C430(*(_QWORD *)(a1 + 48), v48);
  v20 = *(_QWORD *)(a1 + 56);
  sub_EE4F40(v20);
  if ( (unsigned int)sub_180B130(v20) > 1 )
  {
    if ( (unsigned __int8)sub_186A530() )
    {
      sub_186A4C0();
      v30 = *(_QWORD *)(a1 + 48);
      v31 = sub_180B150(v20, v48);
      sub_63C8E0(v30 + 2360, v31);
      sub_186A500(v30 + 2360, v31);
    }
    else
    {
      v32 = *(_QWORD *)(a1 + 48);
      v33 = sub_180B150(v20, v48);
      sub_63C8E0(v32 + 2360, v33);
    }
  }
  v43 = 0;
  v21 = *(_QWORD *)(a1 + 96);
  if ( v21
    && *(_DWORD *)(v21 - 4)
    && (v24 = *(_QWORD *)sub_63BA90(a1 + 72, *(_QWORD *)(a1 + 320))) != 0
    && *(_DWORD *)(v24 - 4) )
  {
    if ( (unsigned __int8)sub_399570(a1) )
    {
      v25 = *(_QWORD *)(a1 + 48);
      sub_653BE0(v25, 0);
      if ( *(_DWORD *)(v25 + 3024) == 3 )
      {
        v39 = sub_B00C00(*(_QWORD *)(a1 + 56), &v43, &qword_18D6CD0);
        v40 = v39;
        if ( v39 )
          ++*(_DWORD *)(v39 + 48);
        sub_399370(*(void (****)(void))(a1 + 64));
        v41 = *(_QWORD *)(a1 + 56);
        *(_QWORD *)(a1 + 64) = v40;
        *(__m128i *)v45 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1, (__m128i)v41);
        sub_16744A0(v46, v41);
        v47 = 1;
        v22 = sub_3AFBF0((int)v45, v42);
      }
      else
      {
        v26 = sub_63CB90(a1 + 72);
        v27 = *(_QWORD *)(a1 + 56);
        if ( v26 )
          v28 = sub_667860(v27, &v43, 1);
        else
          v28 = sub_B00C00(v27, &v43, &qword_18D6CD0);
        v29 = v28;
        if ( v28 )
          ++*(_DWORD *)(v28 + 48);
        sub_399370(*(void (****)(void))(a1 + 64));
        *(_QWORD *)(a1 + 64) = v29;
        *(__m128 *)v45 = _mm_loadh_ps((const double *)(a1 + 56));
        v22 = sub_3ADDF0(v45);
      }
    }
    else
    {
      v34 = sub_B00C00(*(_QWORD *)(a1 + 56), &v43, &qword_18D6CD0);
      v35 = v34;
      if ( v34 )
        ++*(_DWORD *)(v34 + 48);
      v36 = *(void (****)(void))(a1 + 64);
      sub_399370(v36);
      *(_QWORD *)(a1 + 64) = v35;
      sub_180B130(v36);
      if ( (unsigned __int8)sub_186A530() )
      {
        sub_186A4C0();
        v37 = sub_180B150(v36, &v43);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v37, "WARNING: non-linear BMC is highly inefficient\n");
      }
      else
      {
        sub_180B150(v36, &v43);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      *(__m128 *)v45 = _mm_loadh_ps((const double *)(a1 + 56));
      v22 = sub_3AC380((int)v45);
    }
  }
  else
  {
    v22 = -1;
  }
  sub_18572D0(&v43);
LABEL_17:
  sub_399450(v44[0], v44[1]);
  sub_63D960(v48);
  return v22;
}

