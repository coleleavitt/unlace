__int64 __fastcall sub_37D4E0(__int64 a1, __int64 a2)
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
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rax
  int v20; // r14d
  __int64 v21; // r13
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r13
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __m128i v30; // xmm1
  char *v31; // rdx
  __int64 v32; // rbp
  __int64 v33; // rbx
  char *v34; // rax
  void *v35; // rdi
  __int64 (__fastcall **v36)(); // rbx
  __int64 v37; // [rsp+10h] [rbp-178h]
  __int64 v38; // [rsp+38h] [rbp-150h] BYREF
  void *ptr; // [rsp+40h] [rbp-148h] BYREF
  __int128 v40; // [rsp+48h] [rbp-140h]
  __m128i dest; // [rsp+60h] [rbp-128h] BYREF
  __int64 v42; // [rsp+70h] [rbp-118h]
  int v43; // [rsp+78h] [rbp-110h]
  __int64 v44; // [rsp+80h] [rbp-108h] BYREF
  __int128 v45; // [rsp+88h] [rbp-100h]
  __int64 v46; // [rsp+98h] [rbp-F0h]
  __int128 v47; // [rsp+A0h] [rbp-E8h]
  int v48; // [rsp+B0h] [rbp-D8h]
  char v49[8]; // [rsp+C0h] [rbp-C8h] BYREF
  _BYTE v50[24]; // [rsp+C8h] [rbp-C0h] BYREF
  char v51[8]; // [rsp+E0h] [rbp-A8h] BYREF
  __int128 v52; // [rsp+E8h] [rbp-A0h]
  __int64 v53; // [rsp+F8h] [rbp-90h]
  char v54[8]; // [rsp+100h] [rbp-88h] BYREF
  __int128 src; // [rsp+108h] [rbp-80h] BYREF
  __int64 v56; // [rsp+118h] [rbp-70h]
  _BYTE v57[40]; // [rsp+120h] [rbp-68h] BYREF
  unsigned __int64 v58; // [rsp+148h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  v43 = 2;
  dest = _mm_load_si128((const __m128i *)&xmmword_23A76E0);
  v42 = 0x5000000000LL;
  v2 = *(_BYTE *)(a1 + 96);
  if ( v2 != 5 )
  {
    if ( v2 != 2 )
      return (unsigned int)throw_idc_exception(a2, "Bad options");
    dest.m128i_i32[0] = *(_QWORD *)(a1 + 104);
LABEL_6:
    v5 = *(_BYTE *)(a1 + 128) == 10;
    v44 = 0;
    v46 = 0;
    v48 = 0;
    v45 = 0;
    v47 = 0;
    if ( v5 )
      v6 = &v44;
    else
      v6 = nullptr;
    v38 = 0;
    if ( *(_BYTE *)(a1 + 64) == 2 && !*(_QWORD *)(a1 + 72)
      || (v3 = sub_36FA50((__int64)&v38, (char *)(a1 + 64), 0)) == 0 )
    {
      ptr = nullptr;
      v40 = 0;
      if ( !(unsigned __int8)format_cdata(&ptr, a1 + 32, &v38, v6, &dest) )
        *(_QWORD *)(a2 + 8) = (int)get_qerrno();
      v7 = deref_idcv(a1, 1);
      idcv_object(v7, 0);
      v49[0] = 2;
      memset(v50, 0, sizeof(v50));
      free_idcv(v49);
      v49[0] = 7;
      memset(v50, 0, sizeof(v50));
      if ( (_QWORD)v40 )
      {
        v10 = 0;
        v11 = 0;
        do
        {
          qsnprintf((unsigned int)v57, 32, (unsigned int)"%d", v10, v8, v9);
          si128 = _mm_load_si128((const __m128i *)&v50[8]);
          v13 = (char *)ptr + 24 * v11;
          v14 = *(_QWORD *)v50;
          *(_OWORD *)v50 = *(_OWORD *)v13;
          *(_QWORD *)&v50[16] = *((_QWORD *)v13 + 2);
          *(_QWORD *)v13 = v14;
          *(__m128i *)(v13 + 8) = si128;
          set_idcv_attr(v7, v57, v49, 0, v15, v16);
          v11 = ++v10;
        }
        while ( v10 < (unsigned __int64)v40 );
      }
      if ( v6 && v6[4] )
      {
        v37 = deref_idcv(a1 + 128, 1);
        idcv_object(v37, 0);
        v19 = v6[4];
        v53 = 0;
        v52 = 0;
        v5 = *(_QWORD *)(v19 + 8) == 0;
        v51[0] = 2;
        if ( !v5 )
        {
          v20 = 0;
          v21 = 0;
          do
          {
            qsnprintf((unsigned int)v57, 32, (unsigned int)"%d", v20, v17, v18);
            idcv_object(v51, 0);
            set_idcv_attr(v37, v57, v51, 0, v22, v23);
            v24 = *(_QWORD *)(*(_QWORD *)v6[4] + 56 * v21 + 40);
            src = 0;
            v54[0] = 2;
            v56 = 0;
            *(_QWORD *)&src = *(_QWORD *)(v24 + 8);
            set_idcv_attr(v51, "ea", v54, 0, v25, v26);
            sub_36E470((__int64)v54, (__int64 *)(v24 + 40));
            if ( *(_QWORD *)(v24 + 24) > 1u )
            {
              v29 = *(_QWORD *)(v24 + 16);
              v30 = _mm_load_si128((const __m128i *)&v50[8]);
              *(__m128 *)&v50[8] = _mm_loadh_ps((const double *)(v24 + 32));
              *(_QWORD *)(v24 + 16) = *(_QWORD *)v50;
              *(_QWORD *)v50 = v29;
              *(__m128i *)(v24 + 24) = v30;
              set_idcv_attr(v54, "name", v49, 0, v27, v28);
            }
            set_idcv_attr(v51, "type", v54, 0, v27, v28);
            ++v20;
            free_idcv(v54);
            v21 = v20;
          }
          while ( (unsigned __int64)v20 < *(_QWORD *)(v6[4] + 8) );
        }
        free_idcv(v51);
      }
      free_idcv(v49);
      v31 = (char *)ptr;
      if ( ptr )
      {
        v32 = v40;
        if ( (_QWORD)v40 )
        {
          v33 = 0;
          do
          {
            v34 = &v31[24 * v33];
            v35 = *(void **)v34;
            if ( *(_QWORD *)v34 )
            {
              *((_QWORD *)v34 + 1) = 0;
              qfree(v35);
              v31 = (char *)ptr;
            }
            ++v33;
          }
          while ( v32 != v33 );
        }
        *(_QWORD *)&v40 = 0;
        qfree(v31);
      }
      v3 = 0;
    }
    clear_tinfo_t(&v38);
    sub_37C6A0((__int64)&v44);
    return v3;
  }
  v36 = (__int64 (__fastcall **)())&unk_2B25940;
  while ( 1 )
  {
    v54[0] = 2;
    v56 = 0;
    src = 0;
    if ( (unsigned int)get_idcv_attr(v54, a1 + 96, v36[2], 0) )
      goto LABEL_34;
    if ( v54[0] != 2 && v54[0] != 9 )
      break;
    memcpy(&dest.m128i_i8[(_QWORD)*v36], &src, (size_t)v36[1]);
LABEL_34:
    v36 += 3;
    free_idcv(v54);
    if ( v36 == off_2B259E8 )
      goto LABEL_6;
  }
  free_idcv(v54);
  return (unsigned int)throw_idc_exception(a2, "Bad options");
}
