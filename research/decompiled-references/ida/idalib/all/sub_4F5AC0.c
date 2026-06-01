__int64 __fastcall sub_4F5AC0(_QWORD *a1, unsigned __int64 *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 *v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // r14
  __int64 v9; // r12
  unsigned int i; // eax
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r15
  __int64 (__fastcall *v14)(__int64, __int64); // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 *v17; // rax
  unsigned int v18; // edx
  __int64 v20; // rcx
  unsigned __int64 v21; // rsi
  __m128i *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rdx
  __m128i v26; // xmm0
  bool v27; // cf
  __int64 v28; // rdx
  __m128i v29; // xmm0
  __m128i *v30; // rbp
  unsigned int v31; // eax
  __int64 aflags; // rax
  unsigned int tinfo; // eax
  __int8 v34; // dl
  unsigned int v35; // ebx
  char tinfo_property; // al
  __int64 v37; // rax
  unsigned __int64 v38; // r12
  __m128i *v39; // rdi
  unsigned __int64 v40; // rbp
  __m128i v41; // xmm0
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  __m128i v44; // xmm1
  unsigned __int64 v45; // rax
  __m128i v46; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v47; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v48; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v49; // [rsp+20h] [rbp-98h]
  char *v50; // [rsp+28h] [rbp-90h]
  unsigned __int64 v51; // [rsp+30h] [rbp-88h]
  char v52; // [rsp+3Fh] [rbp-79h]
  void *ptr; // [rsp+40h] [rbp-78h] BYREF
  __int128 v54; // [rsp+48h] [rbp-70h]
  _QWORD v55[2]; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int8 v56; // [rsp+71h] [rbp-47h]
  unsigned __int64 v57; // [rsp+78h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  a2[1] = 0;
  v6 = (__int64 *)a1[3];
  v51 = a4;
  if ( !v6 )
  {
    if ( v51 != -1 )
    {
      if ( a3 >= a4 )
        goto LABEL_5;
LABEL_38:
      v29 = _mm_unpacklo_epi64((__m128i)a4, (__m128i)a3);
      if ( a2[2] )
      {
        v30 = (__m128i *)*a2;
      }
      else
      {
        v46 = v29;
        v37 = qvector_reserve(a2, 0, 1, 16);
        v38 = a2[2];
        v39 = (__m128i *)*a2;
        a2[2] = 0;
        v40 = v37;
        v41 = _mm_load_si128(&v46);
        v42 = a2[1] - 1;
        if ( v42 >= 0 )
        {
          v43 = v40;
          do
          {
            v44 = _mm_loadu_si128(v39);
            v43 += 16LL;
            ++v39;
            *(__m128i *)(v43 - 16) = v44;
            v27 = v42-- == 0;
          }
          while ( !v27 );
          v39 = (__m128i *)*a2;
        }
        v46 = v41;
        qfree(v39);
        v45 = a2[1];
        *a2 = v40;
        a2[2] = v38;
        v29 = _mm_load_si128(&v46);
        v30 = (__m128i *)(16 * v45 + v40);
      }
      *v30 = v29;
      v18 = 0;
      ++a2[1];
      return v18;
    }
    goto LABEL_21;
  }
  v7 = *v6;
  if ( a4 == -1 )
  {
    if ( a3 == v7 )
      return 1;
LABEL_21:
    v51 = a3;
    goto LABEL_5;
  }
  if ( a4 == v7 )
    return 1;
  if ( a3 < a4 )
    goto LABEL_38;
LABEL_5:
  v54 = 0;
  ptr = nullptr;
  v52 = sub_4F5460(a1, a2, (__int64 *)&ptr, v51);
  v8 = ptr;
  v50 = (char *)ptr + 8 * v54;
  if ( v50 != ptr )
  {
    v46.m128i_i8[0] = 0;
    while ( 1 )
    {
      v9 = *v8;
      for ( i = xrefblk_t_first_to(v55, *v8, 5); ; i = xrefblk_t_next_to(v55) )
      {
        v18 = i;
        if ( !(_BYTE)i )
          break;
        if ( (unsigned __int8)(v56 - 16) <= 1u )
        {
          v46.m128i_i8[0] = i;
          continue;
        }
        if ( v55[0] == v9 )
          continue;
        v11 = a1[3];
        if ( v11 )
        {
          if ( (int)get_func_chunknum(v11, v55[0]) < 0 )
            continue;
        }
        else if ( get_fchunk(v55[0]) )
        {
          continue;
        }
        v12 = v55[0];
        v13 = -1;
        v14 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 16LL);
        if ( v14 != sub_4F3C60 )
        {
          v12 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, _QWORD))v14)(a1, v55[0], v56);
          v13 = v28;
        }
        v15 = a2[1];
        if ( a2[2] < v15 + 1 )
        {
          v48 = a2[2];
          v47 = v12;
          v20 = qvector_reserve(a2, 0, v15 + 1, 16);
          v21 = a2[2];
          v22 = (__m128i *)*a2;
          v23 = a2[1] - 1;
          a2[2] = v48;
          v24 = v47;
          if ( v23 >= 0 )
          {
            v25 = v20;
            do
            {
              v26 = _mm_loadu_si128(v22);
              v25 += 16;
              ++v22;
              *(__m128i *)(v25 - 16) = v26;
              v27 = v23-- == 0;
            }
            while ( !v27 );
            v22 = (__m128i *)*a2;
          }
          v49 = v21;
          v48 = v20;
          v47 = v24;
          qfree(v22);
          v16 = v48;
          v15 = a2[1];
          v12 = v47;
          *a2 = v48;
          a2[2] = v21;
        }
        else
        {
          v16 = *a2;
        }
        v17 = (__int64 *)(v16 + 16 * v15);
        *v17 = v12;
        v17[1] = v13;
        ++a2[1];
      }
      if ( v50 == (char *)++v8 )
      {
        if ( !a2[1] && !v52 )
        {
          v18 = v46.m128i_u8[0];
          if ( !v46.m128i_i8[0] )
            goto LABEL_43;
        }
LABEL_27:
        v8 = ptr;
        goto LABEL_28;
      }
    }
  }
  if ( a2[1] || v52 )
  {
    v18 = 0;
  }
  else
  {
LABEL_43:
    LOBYTE(v31) = is_planned_proc(v51);
    v18 = v31;
    if ( (_BYTE)v31 )
      goto LABEL_27;
    v46.m128i_i8[0] = 0;
    aflags = get_aflags(v51);
    v18 = 0;
    if ( (aflags & 0x800) == 0 )
      goto LABEL_27;
    v55[0] = 0;
    tinfo = get_tinfo(v55, v51);
    v34 = v46.m128i_i8[0];
    v35 = tinfo;
    if ( (_BYTE)tinfo
      && (tinfo_property = get_tinfo_property(v55[0], 2), v34 = v46.m128i_i8[0], (tinfo_property & 0xF) == 0xC) )
    {
      clear_tinfo_t(v55);
      v8 = ptr;
      v18 = v35;
    }
    else
    {
      v46.m128i_i8[0] = v34;
      clear_tinfo_t(v55);
      v8 = ptr;
      v18 = v46.m128i_u8[0];
    }
  }
LABEL_28:
  if ( v8 )
  {
    v46.m128i_i8[0] = v18;
    *(_QWORD *)&v54 = 0;
    qfree(v8);
    return v46.m128i_u8[0];
  }
  return v18;
}
