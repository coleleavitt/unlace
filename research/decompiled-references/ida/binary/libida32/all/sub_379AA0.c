__int64 __fastcall sub_379AA0(__int64 a1, __int64 a2)
{
  char v2; // al
  unsigned int v3; // ebp
  bool v5; // zf
  __int64 *v6; // r15
  __int64 v7; // r13
  int v8; // r8d
  int v9; // r9d
  int v10; // ebp
  __int64 v11; // r14
  __m128i si128; // xmm0
  char *v13; // rax
  __int64 v14; // rdx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rax
  int v18; // r14d
  __int64 v19; // r13
  __int64 v20; // r13
  __int64 v21; // rcx
  __m128i v22; // xmm1
  char *v23; // rdx
  __int64 v24; // rbp
  __int64 v25; // rbx
  char *v26; // rax
  void *v27; // rdi
  __int64 (__fastcall **v28)(); // rbx
  const char *v29; // [rsp+0h] [rbp-188h]
  const char *v30; // [rsp+0h] [rbp-188h]
  __int64 v31; // [rsp+10h] [rbp-178h]
  __int64 v32; // [rsp+38h] [rbp-150h] BYREF
  void *ptr; // [rsp+40h] [rbp-148h] BYREF
  __int128 v34; // [rsp+48h] [rbp-140h]
  __m128i dest; // [rsp+60h] [rbp-128h] BYREF
  __int64 v36; // [rsp+70h] [rbp-118h]
  int v37; // [rsp+78h] [rbp-110h]
  __int64 v38; // [rsp+80h] [rbp-108h] BYREF
  __int128 v39; // [rsp+88h] [rbp-100h]
  __int64 v40; // [rsp+98h] [rbp-F0h]
  __int128 v41; // [rsp+A0h] [rbp-E8h]
  int v42; // [rsp+B0h] [rbp-D8h]
  char v43[8]; // [rsp+C0h] [rbp-C8h] BYREF
  _BYTE v44[24]; // [rsp+C8h] [rbp-C0h] BYREF
  char v45[8]; // [rsp+E0h] [rbp-A8h] BYREF
  __int128 v46; // [rsp+E8h] [rbp-A0h]
  __int64 v47; // [rsp+F8h] [rbp-90h]
  char v48[8]; // [rsp+100h] [rbp-88h] BYREF
  __int128 src; // [rsp+108h] [rbp-80h] BYREF
  __int64 v50; // [rsp+118h] [rbp-70h]
  _BYTE v51[40]; // [rsp+120h] [rbp-68h] BYREF
  unsigned __int64 v52; // [rsp+148h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  v37 = 2;
  dest = _mm_load_si128((const __m128i *)&xmmword_23836B0);
  v36 = 0x5000000000LL;
  v2 = *(_BYTE *)(a1 + 96);
  if ( v2 != 5 )
  {
    if ( v2 != 2 )
      return (unsigned int)throw_idc_exception();
    dest.m128i_i32[0] = *(_DWORD *)(a1 + 104);
LABEL_6:
    v5 = *(_BYTE *)(a1 + 128) == 10;
    v38 = 0;
    v40 = 0;
    v42 = 0;
    v39 = 0;
    v41 = 0;
    if ( v5 )
      v6 = &v38;
    else
      v6 = nullptr;
    v32 = 0;
    if ( *(_BYTE *)(a1 + 64) == 2 && !*(_DWORD *)(a1 + 72)
      || (v3 = sub_36C270((__int64)&v32, (char *)(a1 + 64), 0)) == 0 )
    {
      ptr = nullptr;
      v34 = 0;
      if ( !(unsigned __int8)format_cdata(&ptr, a1 + 32, &v32, v6, &dest) )
        *(_DWORD *)(a2 + 8) = get_qerrno();
      v7 = deref_idcv(a1, 1);
      idcv_object(v7, 0);
      v43[0] = 2;
      memset(v44, 0, sizeof(v44));
      free_idcv(v43);
      v43[0] = 7;
      memset(v44, 0, sizeof(v44));
      if ( (_QWORD)v34 )
      {
        v10 = 0;
        v11 = 0;
        v29 = "%d";
        do
        {
          qsnprintf((int)v51, 32, (int)v29, v10, v8, v9, (char)v29);
          si128 = _mm_load_si128((const __m128i *)&v44[8]);
          v13 = (char *)ptr + 24 * v11;
          v14 = *(_QWORD *)v44;
          *(_OWORD *)v44 = *(_OWORD *)v13;
          *(_QWORD *)&v44[16] = *((_QWORD *)v13 + 2);
          *(_QWORD *)v13 = v14;
          *(__m128i *)(v13 + 8) = si128;
          set_idcv_attr();
          v11 = ++v10;
        }
        while ( v10 < (unsigned __int64)v34 );
      }
      if ( v6 && v6[4] )
      {
        v31 = deref_idcv(a1 + 128, 1);
        idcv_object(v31, 0);
        v17 = v6[4];
        v47 = 0;
        v46 = 0;
        v5 = *(_QWORD *)(v17 + 8) == 0;
        v45[0] = 2;
        if ( !v5 )
        {
          v18 = 0;
          v19 = 0;
          v30 = "%d";
          do
          {
            qsnprintf((int)v51, 32, (int)v30, v18, v15, v16, (char)v30);
            idcv_object(v45, 0);
            set_idcv_attr();
            v20 = *(_QWORD *)(*(_QWORD *)v6[4] + 56 * v19 + 40);
            src = 0;
            v48[0] = 2;
            v50 = 0;
            LODWORD(src) = *(_DWORD *)(v20 + 8);
            set_idcv_attr();
            sub_36ACE0((__int64)v48, (__int64 *)(v20 + 40));
            if ( *(_QWORD *)(v20 + 24) > 1u )
            {
              v21 = *(_QWORD *)(v20 + 16);
              v22 = _mm_load_si128((const __m128i *)&v44[8]);
              *(__m128 *)&v44[8] = _mm_loadh_ps((const double *)(v20 + 32));
              *(_QWORD *)(v20 + 16) = *(_QWORD *)v44;
              *(_QWORD *)v44 = v21;
              *(__m128i *)(v20 + 24) = v22;
              set_idcv_attr();
            }
            set_idcv_attr();
            ++v18;
            free_idcv(v48);
            v19 = v18;
          }
          while ( (unsigned __int64)v18 < *(_QWORD *)(v6[4] + 8) );
        }
        free_idcv(v45);
      }
      free_idcv(v43);
      v23 = (char *)ptr;
      if ( ptr )
      {
        v24 = v34;
        if ( (_QWORD)v34 )
        {
          v25 = 0;
          do
          {
            v26 = &v23[24 * v25];
            v27 = *(void **)v26;
            if ( *(_QWORD *)v26 )
            {
              *((_QWORD *)v26 + 1) = 0;
              qfree(v27);
              v23 = (char *)ptr;
            }
            ++v25;
          }
          while ( v24 != v25 );
        }
        *(_QWORD *)&v34 = 0;
        qfree(v23);
      }
      v3 = 0;
    }
    clear_tinfo_t(&v32);
    sub_378C80((__int64)&v38);
    return v3;
  }
  v28 = (__int64 (__fastcall **)())&unk_2AFC860;
  while ( 1 )
  {
    v48[0] = 2;
    v50 = 0;
    src = 0;
    if ( (unsigned int)get_idcv_attr() )
      goto LABEL_34;
    if ( v48[0] != 2 && v48[0] != 9 )
      break;
    memcpy(&dest.m128i_i8[(_QWORD)*v28], &src, (size_t)v28[1]);
LABEL_34:
    v28 += 3;
    free_idcv(v48);
    if ( v28 == off_2AFC908 )
      goto LABEL_6;
  }
  free_idcv(v48);
  return (unsigned int)throw_idc_exception();
}

