unsigned __int64 __fastcall sub_37EF30(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rax
  char *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  const char *v13; // rsi
  bool v14; // zf
  void (__fastcall *v15)(__int64, const char *, __int64, __int64, __int64, __int64, unsigned __int64, unsigned __int64, __int64); // rax
  __m128i si128; // xmm2
  char *v17; // rdi
  void *v18; // rbx
  __int64 v20; // r15
  __int64 v21; // rax
  void (__fastcall *v22)(__int64, __int64); // rdx
  unsigned int v23; // r13d
  char *v24; // rsi
  __int64 v25; // rax
  __int64 (__fastcall *v26)(_QWORD *, char); // rax
  __int64 v27; // r12
  unsigned __int64 v28; // r13
  __int64 v29; // rsi
  char *v30; // r13
  char *v31; // rdi
  char *v32; // rax
  __int64 v33; // r13
  unsigned int default_radix; // eax
  __int64 v35; // rax
  __int64 v36; // rax
  __m128 v37; // [rsp+0h] [rbp-78h] BYREF
  __int64 v38; // [rsp+10h] [rbp-68h]
  char v39; // [rsp+1Fh] [rbp-59h]
  char *s; // [rsp+20h] [rbp-58h] BYREF
  __int128 v41; // [rsp+28h] [rbp-50h]
  unsigned __int64 v42; // [rsp+38h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 520) == a2 && *(_QWORD *)(a1 + 120) > 1u )
    return v42 - __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 32);
  v7 = *(_QWORD *)(a1 + 24);
  s = nullptr;
  *(_QWORD *)(a1 + 24) = 0;
  v38 = v6;
  v8 = *(_QWORD *)(a1 + 40);
  v41 = 0;
  v37.m128_u64[0] = v8;
  *(_OWORD *)(a1 + 32) = 0;
  if ( (*(_BYTE *)(a1 + 146) & 0x10) != 0 )
  {
    tag_addr(&s, a2, 1);
    v9 = (char *)haystack;
    if ( (_QWORD)v41 )
      v9 = s;
    (*(void (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, v9, 0);
    *(_QWORD *)&v41 = 0;
  }
  if ( (unsigned __int8)getinf_flag(44, 32) )
  {
    *(_DWORD *)(a1 + 520) = a2;
    v20 = qword_2CA1698;
    v21 = getseg(a2);
    v22 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL);
    if ( v21 )
    {
      v39 = *(_BYTE *)(v21 + 96);
      v22(a1, 19);
      v23 = 270;
      if ( v39 == 1 )
      {
LABEL_18:
        if ( (getinf(48) & 1) != 0 )
        {
          if ( !(unsigned __int8)getinf_flag(44, 64) )
            v23 |= 0x20u;
        }
        else
        {
          v23 |= 1u;
        }
        get_nice_colored_name(&s, a2, v23);
        v24 = (char *)haystack;
        if ( (_QWORD)v41 )
          v24 = s;
        (*(void (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, v24, 0);
        if ( (v23 & 8) == 0 && get_fchunk(a2) )
        {
          v30 = s;
          v31 = s;
          v32 = strchr(s, 43);
          if ( v32 || (v31 = v30, (v32 = strchr(v30, 45)) != nullptr) )
            v33 = v32 - v30;
          else
            v33 = ((_QWORD)v41 == 0) + (_QWORD)v41 - 1LL;
          default_radix = get_default_radix(v31);
          v35 = b2a_width(2, default_radix);
          (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, a1 + 24, v33 + v35 + 1);
        }
        if ( (*(_BYTE *)(a1 + 146) & 0x20) != 0 )
          sub_359A50(a1, (__int64)".%d", a3);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, 19);
        v25 = *(_QWORD *)(v20 + 1440);
        if ( *(_QWORD *)(v25 + 24) )
        {
          *(_QWORD *)(v25 + 32) = (*(_QWORD *)(a1 + 32) == 0) + *(_QWORD *)(a1 + 32) - 1LL;
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 40LL))(
            a1,
            32,
            *(unsigned int *)(*(_QWORD *)(v20 + 1440) + 24LL));
        }
        v26 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
        if ( v26 == sub_3598B0 )
        {
          v27 = *(_QWORD *)(a1 + 32);
          v28 = 2;
          if ( v27 )
            v28 = v27-- + 1;
          v29 = *(_QWORD *)(a1 + 24);
          if ( *(_QWORD *)(a1 + 40) < v28 )
          {
            v36 = qvector_reserve(a1 + 24, v29, v28, 1);
            *(_QWORD *)(a1 + 24) = v36;
            v29 = v36;
          }
          *(_QWORD *)(a1 + 32) = v28;
          *(_BYTE *)(v29 + v27) = 32;
          *(_BYTE *)(*(_QWORD *)(a1 + 24) + v27 + 1) = 0;
        }
        else
        {
          v26((_QWORD *)a1, 32);
        }
        goto LABEL_7;
      }
    }
    else
    {
      v22(a1, 19);
    }
    v23 = (getinf(48) & 2) == 0 ? 270 : 262;
    goto LABEL_18;
  }
LABEL_7:
  v13 = haystack;
  v14 = *(_QWORD *)(a1 + 32) == 0;
  v15 = *(void (__fastcall **)(__int64, const char *, __int64, __int64, __int64, __int64, unsigned __int64, unsigned __int64, __int64))(*(_QWORD *)a1 + 192LL);
  v37 = _mm_loadh_ps((const double *)v37.m128_u64);
  if ( !v14 )
    v13 = *(const char **)(a1 + 24);
  v15(a1, v13, 7, v10, v11, v12, v37.m128_u64[0], v37.m128_u64[1], v38);
  sub_37ED20(a1, a2);
  si128 = _mm_load_si128((const __m128i *)&v37);
  v17 = s;
  *(_DWORD *)(a1 + 196) = a2;
  v18 = *(void **)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v7;
  *(__m128i *)(a1 + 32) = si128;
  if ( v17 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(v17);
  }
  if ( v18 )
    qfree(v18);
  return v42 - __readfsqword(0x28u);
}

