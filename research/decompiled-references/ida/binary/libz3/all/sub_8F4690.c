__int64 __fastcall sub_8F4690(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4, double a5, __m128 a6)
{
  char **exception; // rbp
  _QWORD *v7; // r14
  __int64 v9; // rax
  _QWORD *v10; // r13
  char v11; // cl
  __int64 v12; // rbp
  unsigned int v13; // eax
  __int64 v14; // rax
  int v15; // r15d
  __int64 v16; // rax
  _QWORD *v17; // rdx
  __int64 v18; // rbx
  unsigned int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 *v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rsi
  _QWORD *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdi
  __int64 *v30; // rbx
  __int64 *i; // r15
  __int64 v32; // rsi
  char v33; // al
  _QWORD *v34; // rax
  __int64 v35; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rbx
  unsigned int v40; // r15d
  size_t v41; // rsi
  unsigned int *v42; // rax
  __int64 v43; // rcx
  unsigned int v44; // eax
  __int64 v45; // rbx
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // [rsp+0h] [rbp-78h]
  __int64 v50; // [rsp+10h] [rbp-68h]
  char v51; // [rsp+1Bh] [rbp-5Dh]
  __int64 v52[11]; // [rsp+20h] [rbp-58h] BYREF

  v7 = a3;
  v48 = (__int64)a2;
  v9 = *(_QWORD *)(a1 + 104);
  v10 = (_QWORD *)a3[1];
  v11 = *(_BYTE *)(v9 + 4);
  v50 = v9;
  *(_BYTE *)(v9 + 4) = 1;
  ++*(_DWORD *)(a1 + 28);
  v12 = a2[1];
  v51 = v11;
  if ( (_QWORD *)v12 == v10 )
    goto LABEL_35;
  if ( (unsigned int)sub_180B130(a1) <= 0x13 )
  {
    if ( (*(_BYTE *)(v12 + 44) & 4) != 0 )
      goto LABEL_4;
LABEL_36:
    if ( *((_DWORD *)v10 + 8) >= *(_DWORD *)(v12 + 32) || (*((_BYTE *)v10 + 44) & 4) != 0 )
    {
      v37 = v10;
      v10 = (_QWORD *)v12;
      v12 = (__int64)v37;
      v38 = v7;
      v7 = a2;
      v48 = (__int64)v38;
    }
    goto LABEL_5;
  }
  if ( (unsigned __int8)sub_186A530(a5) )
  {
    sub_186A4C0(a5);
    v39 = sub_180B150(a1, a2);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_1648CA0(v39, *(_QWORD *)(a1 + 104), *a2, 3);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_1648CA0(v39, *(_QWORD *)(a1 + 104), *v7, 3);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_186A500(v39, "\n");
    if ( (*(_BYTE *)(v12 + 44) & 4) == 0 )
      goto LABEL_36;
  }
  else
  {
    v45 = sub_180B150(a1, a2);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_1648CA0(v45, *(_QWORD *)(a1 + 104), *a2, 3);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_1648CA0(v45, *(_QWORD *)(a1 + 104), *v7, 3);
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( (*(_BYTE *)(v12 + 44) & 4) == 0 )
      goto LABEL_36;
  }
LABEL_4:
  if ( (*((_BYTE *)v10 + 44) & 4) != 0 )
  {
    v46 = sub_180C100(a1 + 8400, 40);
    *(_QWORD *)(v46 + 8) = 2;
    *(_QWORD *)(v46 + 24) = v7;
    *(_QWORD *)(v46 + 16) = a2;
    *(_QWORD *)v46 = off_1C576D0;
    *(_QWORD *)(v46 + 32) = a4;
    if ( *(_QWORD *)(a1 + 8984) == qword_1C7EC50 && !*(_BYTE *)(a1 + 2416) )
    {
      *(_DWORD *)(a1 + 8992) = -2;
      *(_QWORD *)(a1 + 8984) = v46 | 3;
    }
    goto LABEL_35;
  }
LABEL_5:
  v13 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 476LL);
  if ( v13 > *(_DWORD *)(a1 + 184) )
    v13 = *(_DWORD *)(a1 + 184);
  if ( v13
    && !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 7488) + 56LL))(
          *(_QWORD *)(a1 + 7488),
          *v10) )
  {
    v44 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 476LL);
    if ( v44 > *(_DWORD *)(a1 + 184) )
      v44 = *(_DWORD *)(a1 + 184);
    if ( v44
      && !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 7488) + 56LL))(
            *(_QWORD *)(a1 + 7488),
            *(_QWORD *)v12) )
    {
      goto LABEL_11;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 7488) + 48LL))(*(_QWORD *)(a1 + 7488), *v10);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 7488) + 48LL))(*(_QWORD *)(a1 + 7488), *(_QWORD *)v12);
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 7488) + 64LL))(*(_QWORD *)(a1 + 7488));
LABEL_11:
  v14 = *(_QWORD *)(v12 + 56);
  if ( v14 )
    v15 = *(_DWORD *)(v14 - 4);
  else
    v15 = 0;
  v16 = sub_180C100(a1 + 8400, 40);
  v17 = *(_QWORD **)(a1 + 9456);
  v18 = v16;
  *(_QWORD *)v16 = off_1C55B18;
  *(_QWORD *)(v16 + 8) = a1;
  *(_QWORD *)(v16 + 16) = v10;
  *(_QWORD *)(v16 + 24) = v7;
  *(_DWORD *)(v16 + 32) = v15;
  if ( v17 )
  {
    v19 = *((_DWORD *)v17 - 1);
    if ( v19 == *((_DWORD *)v17 - 2) )
    {
      v40 = (3 * v19 + 1) >> 1;
      v41 = 8 * v40 + 8;
      if ( 8 * v19 + 8 >= (unsigned int)v41 || v19 >= v40 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_8E4EB0(v52, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v52);
        sub_233E40((__int64)v52);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v42 = (unsigned int *)sub_186B300(v17 - 1, v41);
      v43 = v42[1];
      v17 = v42 + 2;
      *v42 = v40;
      *(_QWORD *)(a1 + 9456) = v42 + 2;
      LODWORD(v42) = v43;
      v22 = &v17[v43];
      v21 = (_DWORD)v42 + 1;
    }
    else
    {
      v20 = v19;
      v21 = v19 + 1;
      v22 = &v17[v20];
    }
  }
  else
  {
    v47 = (_QWORD *)sub_186B270(0x18u);
    v17 = v47 + 1;
    *v47 = 2;
    v21 = 1;
    *(_QWORD *)(a1 + 9456) = v17;
    v22 = v17;
  }
  *v22 = v18;
  v23 = *(_QWORD *)(a1 + 7472);
  *((_DWORD *)v17 - 1) = v21;
  sub_9532A0(v23, v10, v12);
  sub_8EE3A0((_QWORD *)a1, v48, (__int64)v7, a4);
  v24 = v7[10];
  v25 = v7[11];
  *((_BYTE *)v7 + 52) = 0;
  v26 = v7;
  v27 = qword_1C7EC58;
  v7[10] = 0;
  v7[11] = v27;
  if ( v24 )
  {
    while ( 1 )
    {
      v28 = *(_QWORD *)(v24 + 80);
      v29 = v25;
      v25 = *(_QWORD *)(v24 + 88);
      *(_QWORD *)(v24 + 80) = v26;
      *(_QWORD *)(v24 + 88) = v29;
      v26 = (_QWORD *)v24;
      *(_BYTE *)(v24 + 52) = 0;
      if ( !v28 )
        break;
      v24 = v28;
    }
  }
  v30 = (__int64 *)v10[7];
  *((_BYTE *)v7 + 52) = 0;
  v7[10] = v48;
  v7[11] = a4;
  if ( v30 )
  {
    for ( i = &v30[*((unsigned int *)v30 - 1)]; i != v30; ++v30 )
    {
      while ( 1 )
      {
        v32 = *v30;
        v33 = *(_BYTE *)(*v30 + 44);
        if ( (v33 & 1) == 0
          && v32 == *(_QWORD *)(v32 + 24)
          && ((v33 & 0x10) == 0 || *(_QWORD *)(*(_QWORD *)(v32 + 112) + 8LL) != *(_QWORD *)(*(_QWORD *)(v32 + 120) + 8LL)) )
        {
          *(_BYTE *)(v32 + 44) |= 1u;
          if ( (*(_BYTE *)(v32 + 45) & 1) != 0 )
            break;
        }
        if ( i == ++v30 )
          goto LABEL_30;
      }
      sub_97A460(a1 + 8712);
    }
  }
LABEL_30:
  v34 = v10;
  do
  {
    v34[1] = v12;
    v34 = (_QWORD *)v34[2];
  }
  while ( v34 != v10 );
  sub_8F4230(a1, (__int64)v10, v12, v7, (_QWORD *)v48, a4, a5, a6);
  if ( (*(_BYTE *)(v48 + 44) & 0x40) != 0 )
    sub_8F3690(a1, (unsigned int **)v10, v12, (unsigned int **)v7, (unsigned int **)v48);
  v35 = v10[2];
  v10[2] = *(_QWORD *)(v12 + 16);
  *(_QWORD *)(v12 + 16) = v35;
  *(_DWORD *)(v12 + 32) += *((_DWORD *)v10 + 8);
  *(_BYTE *)(v12 + 45) = *(_BYTE *)(v12 + 45) & 0xF9 | 4;
LABEL_35:
  *(_BYTE *)(v50 + 4) = v51;
  return v50;
}

