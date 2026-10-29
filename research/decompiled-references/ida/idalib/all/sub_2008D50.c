void __fastcall sub_2008D50(__int64 a1, __int64 a2, char **a3, __int64 a4, __int64 a5)
{
  void **v6; // r13
  void **v7; // r8
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  char v10; // r14
  _BYTE *v11; // r15
  __int64 v12; // rax
  char **v13; // r13
  __int64 v14; // r14
  _QWORD *v15; // r15
  char **v16; // r14
  char *v17; // r12
  size_t v18; // rax
  _QWORD *v19; // rdi
  void **v20; // r14
  void **v21; // r13
  __int64 v22; // rax
  void **i; // rbp
  char *v24; // r14
  char *v25; // rbp
  _BYTE *j; // rax
  __int64 v27; // rsi
  unsigned int v28; // ecx
  __int64 v29; // rdi
  __m128i *v30; // rbp
  __m128i *v31; // r13
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rcx
  void **v35; // [rsp+8h] [rbp-1C0h]
  _QWORD *v36; // [rsp+10h] [rbp-1B8h]
  char **v37; // [rsp+18h] [rbp-1B0h] BYREF
  __int64 v38; // [rsp+20h] [rbp-1A8h]
  __int64 v39; // [rsp+28h] [rbp-1A0h]
  __int64 v40; // [rsp+38h] [rbp-190h] BYREF
  _BYTE v41[16]; // [rsp+40h] [rbp-188h] BYREF
  __int64 v42; // [rsp+50h] [rbp-178h]
  __int64 v43; // [rsp+58h] [rbp-170h]
  char **v44; // [rsp+60h] [rbp-168h]
  __int128 v45; // [rsp+80h] [rbp-148h] BYREF
  void *ptr; // [rsp+90h] [rbp-138h]
  __int64 v47; // [rsp+98h] [rbp-130h]
  _BYTE v48[32]; // [rsp+A0h] [rbp-128h] BYREF
  __m128i *v49; // [rsp+C0h] [rbp-108h]
  __int64 v50; // [rsp+C8h] [rbp-100h]
  __m128i si128; // [rsp+D0h] [rbp-F8h] BYREF
  void *v52; // [rsp+E0h] [rbp-E8h] BYREF
  __int64 v53; // [rsp+E8h] [rbp-E0h]
  _BYTE v54[216]; // [rsp+F0h] [rbp-D8h] BYREF

  v6 = *(void ***)(a1 + 8);
  v39 = a5;
  v7 = *(void ***)a1;
  v37 = a3;
  v8 = ((char *)v6 - (char *)v7) >> 5;
  v38 = a4;
  v52 = v54;
  v53 = 0x1400000000LL;
  if ( v8 <= 0x14 )
  {
    if ( v7 == v6 )
      return;
    goto LABEL_3;
  }
  sub_2237220(&v52, v54, v8, 8);
  v7 = *(void ***)a1;
  v6 = *(void ***)(a1 + 8);
  if ( *(void ***)a1 != v6 )
  {
LABEL_3:
    v9 = (unsigned int)v53;
    v10 = 0;
    do
    {
      v11 = *v7;
      if ( v9 + 1 > (unsigned __int64)HIDWORD(v53) )
      {
        v35 = v7;
        sub_2237220(&v52, v54, v9 + 1, 8);
        v9 = (unsigned int)v53;
        v7 = v35;
      }
      *((_QWORD *)v52 + v9) = v11;
      v9 = (unsigned int)(v53 + 1);
      LODWORD(v53) = v53 + 1;
      if ( v7[1] )
        v10 |= *(_BYTE *)*v7 == 64;
      v7 += 4;
    }
    while ( v6 != v7 );
    if ( v10 )
    {
      v45 = 0;
      ptr = v48;
      v47 = 0x400000000LL;
      v49 = &si128;
      si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
      v50 = 0;
      sub_2210AB0(v41, &v45, v38);
      v42 = v39;
      v43 = a2;
      v44 = v37;
      sub_2215610(&v40, v41, &v52);
      if ( v40 )
      {
        v12 = sub_227D6D0(&v40, v41);
        if ( v40 )
        {
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v40 + 16LL))(v40, v12);
        }
        else
        {
          v34 = *(_QWORD *)(v12 + 32);
          if ( (unsigned __int64)(*(_QWORD *)(v12 + 24) - v34) > 6 )
          {
            *(_DWORD *)v34 = 1667462515;
            *(_WORD *)(v34 + 4) = 29541;
            *(_BYTE *)(v34 + 6) = 115;
            *(_QWORD *)(v12 + 32) += 7LL;
          }
          else
          {
            sub_227BF10(v12, "success", 7);
          }
        }
      }
      v37 = (char **)v52;
      v13 = (char **)((char *)v52 + 8 * (unsigned int)v53);
      v14 = 4LL * (unsigned int)v53;
      if ( 8LL * (unsigned int)v53 )
      {
        v15 = (_QWORD *)operator new(32LL * (unsigned int)v53);
        v36 = v15;
        v38 = (__int64)&v15[v14];
        v16 = v37;
        if ( v37 == v13 )
        {
          v37 = (char **)v15;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v17 = *v16;
              *v15 = v15 + 2;
              if ( !v17 )
                break;
              ++v16;
              v18 = strlen(v17);
              v19 = v15;
              v15 += 4;
              sub_2007F10(v19, v17, (__int64)&v17[v18]);
              if ( v13 == v16 )
                goto LABEL_17;
            }
            ++v16;
            sub_2007F10(v15, nullptr, -1);
            v15 += 4;
          }
          while ( v16 != v13 );
LABEL_17:
          v37 = (char **)&v36[4 * ((unsigned __int64)((char *)v13 - (char *)v37 - 8) >> 3) + 4];
        }
      }
      else
      {
        v38 = 32LL * (unsigned int)v53;
        v37 = nullptr;
      }
      v20 = *(void ***)a1;
      v21 = *(void ***)(a1 + 8);
      v22 = v38;
      *(__m128 *)a1 = _mm_loadh_ps((const double *)&v37);
      *(_QWORD *)(a1 + 16) = v22;
      for ( i = v20; v21 != i; i += 4 )
      {
        while ( *i != i + 2 )
        {
          operator delete(*i);
          i += 4;
          if ( v21 == i )
            goto LABEL_21;
        }
      }
LABEL_21:
      if ( v20 )
        operator delete(v20);
      if ( v40 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 8LL))(v40);
      v24 = (char *)ptr;
      v25 = (char *)ptr + 8 * (unsigned int)v47;
      if ( ptr != v25 )
      {
        for ( j = ptr; ; j = ptr )
        {
          v27 = 0x40000000000LL;
          v28 = (unsigned int)((v24 - j) >> 3) >> 7;
          if ( v28 <= 0x1D )
            v27 = 4096LL << v28;
          v29 = *(_QWORD *)v24;
          v24 += 8;
          operator delete(v29, v27, 16);
          if ( v25 == v24 )
            break;
        }
      }
      v30 = v49;
      v31 = &v49[(unsigned int)v50];
      if ( v49 != v31 )
      {
        do
        {
          v32 = v30->m128i_i64[1];
          v33 = v30->m128i_i64[0];
          ++v30;
          operator delete(v33, v32, 16);
        }
        while ( v31 != v30 );
        v31 = v49;
      }
      if ( v31 != &si128 )
        free(v31);
      if ( ptr != v48 )
        free(ptr);
    }
  }
  if ( v52 != v54 )
    free(v52);
}
