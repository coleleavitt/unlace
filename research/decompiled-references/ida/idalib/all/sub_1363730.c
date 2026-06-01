void __fastcall sub_1363730(_QWORD *a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  unsigned int v8; // r15d
  __int64 (__fastcall **v9)(); // rdx
  __int64 (__fastcall **v10)(); // r14
  __int64 v11; // rax
  size_t v12; // rdx
  __m128i *v13; // rdx
  const void *v14; // r9
  size_t v15; // rcx
  __m128i *v16; // rdx
  __int64 v17; // rax
  __int64 (__fastcall ***v18)(); // r8
  __m128i *v19; // rdi
  __int64 v20; // r8
  _BYTE *v21; // rcx
  __m128i v22; // xmm0
  __m128i v23; // xmm0
  size_t n; // [rsp+0h] [rbp-158h]
  size_t na; // [rsp+0h] [rbp-158h]
  void *src; // [rsp+8h] [rbp-150h]
  __int64 (__fastcall ***srca)(); // [rsp+8h] [rbp-150h]
  __int64 v28; // [rsp+10h] [rbp-148h] BYREF
  _DWORD *v29; // [rsp+18h] [rbp-140h]
  __int64 (__fastcall **v30)(); // [rsp+20h] [rbp-138h] BYREF
  int v31; // [rsp+28h] [rbp-130h]
  __int128 v32; // [rsp+30h] [rbp-128h]
  __m128i *v33; // [rsp+40h] [rbp-118h]
  char v34; // [rsp+48h] [rbp-110h]
  int v35; // [rsp+4Ch] [rbp-10Ch]
  void **p_ptr; // [rsp+50h] [rbp-108h]
  void *v37; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v38; // [rsp+68h] [rbp-F0h]
  _BYTE v39[48]; // [rsp+70h] [rbp-E8h] BYREF
  void *ptr; // [rsp+A0h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+A8h] [rbp-B0h]
  _BYTE v42[160]; // [rsp+B8h] [rbp-A0h] BYREF

  v28 = a2;
  v29 = a3;
  v8 = sub_101B2E0((__int64)&v28);
  v10 = v9;
  v37 = v39;
  v38 = 0x400000000LL;
  sub_135F720((unsigned int)v28, v29, a4, a5, (__int64)&v37);
  ptr = v42;
  v31 = 2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8090);
  v34 = 0;
  v35 = 1;
  v33 = nullptr;
  v32 = 0;
  v30 = &off_2BEBEE0;
  p_ptr = &ptr;
  sub_227B8B0(&v30, 0, 0, 0);
  v11 = sub_13DC5B0((unsigned int)v28, v29, a1[1]);
  if ( v12 )
  {
    v14 = (const void *)v11;
    v15 = v12;
    v16 = v33;
    if ( *((_QWORD *)&v32 + 1) - (_QWORD)v33 > 0x14u )
    {
      v23 = _mm_load_si128((const __m128i *)&xmmword_23AA0B0);
      v33[1].m128i_i32[0] = 544174691;
      v18 = &v30;
      v16[1].m128i_i8[4] = 39;
      *v16 = v23;
      v19 = (__m128i *)((char *)v33 + 21);
      v33 = v19;
      if ( *((_QWORD *)&v32 + 1) - (_QWORD)v19 >= v15 )
      {
LABEL_6:
        srca = v18;
        na = v15;
        memcpy(v19, v14, v15);
        v20 = (__int64)srca;
        v21 = (char *)srca[4] + na;
        srca[4] = (__int64 (__fastcall **)())v21;
        if ( srca[3] == (__int64 (__fastcall **)())v21 )
        {
LABEL_7:
          sub_227BF10(v20, "'", 1);
          goto LABEL_8;
        }
LABEL_16:
        *v21 = 39;
        ++*(_QWORD *)(v20 + 32);
        goto LABEL_8;
      }
    }
    else
    {
      src = (void *)v11;
      n = v15;
      v17 = sub_227BF10(&v30, "expanded from macro '", 21);
      v15 = n;
      v14 = src;
      v18 = (__int64 (__fastcall ***)())v17;
      v19 = *(__m128i **)(v17 + 32);
      if ( *(_QWORD *)(v17 + 24) - (_QWORD)v19 >= n )
        goto LABEL_6;
    }
    v20 = sub_227BF10(v18, v14, v15);
    v21 = *(_BYTE **)(v20 + 32);
    if ( *(_BYTE **)(v20 + 24) == v21 )
      goto LABEL_7;
    goto LABEL_16;
  }
  v13 = v33;
  if ( *((_QWORD *)&v32 + 1) - (_QWORD)v33 > 0x11u )
  {
    v22 = _mm_load_si128((const __m128i *)&xmmword_23AA0A0);
    v33[1].m128i_i16[0] = 25970;
    *v13 = v22;
    v33 = (__m128i *)((char *)v33 + 18);
  }
  else
  {
    sub_227BF10(&v30, "expanded from here", 18);
  }
LABEL_8:
  sub_1361E30(a1, (char *)v8, v10, 1u, (char *)*p_ptr, (__int64)p_ptr[1], v37, (unsigned int)v38, nullptr, 0, 0);
  v30 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v30);
  if ( ptr != v42 )
    free(ptr);
  if ( v37 != v39 )
    free(v37);
}
