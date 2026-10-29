__int64 *__fastcall sub_1DEAA60(__int64 *a1, __int64 *a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  void *v18; // r13
  __int64 v19; // rax
  unsigned int v20; // r15d
  void *v21; // rdx
  _QWORD *v22; // rax
  char v23; // cl
  unsigned __int64 i; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int16 v31; // cx
  unsigned int v32; // eax
  const __m128i *v33; // roff
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // r14
  __int64 v39; // r15
  __int64 v40; // rdx
  __int64 v41; // r8
  int v42; // eax
  const __m128i *v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 *result; // rax
  unsigned __int16 *v47; // rax
  __int64 v48; // rdx
  unsigned int v49; // ecx
  __int64 v50; // rax
  unsigned int v51; // edx
  unsigned int v52; // r12d
  __m128i v53; // xmm2
  __int64 v54; // rax
  unsigned __int64 v55; // r8
  unsigned int v56; // ecx
  __int64 v57; // r12
  _DWORD *v58; // [rsp+8h] [rbp-1F0h]
  __int64 *v59; // [rsp+8h] [rbp-1F0h]
  __int64 *v60; // [rsp+8h] [rbp-1F0h]
  __int64 *v61; // [rsp+8h] [rbp-1F0h]
  unsigned int v62; // [rsp+10h] [rbp-1E8h]
  __int64 v63; // [rsp+10h] [rbp-1E8h]
  __int64 v64; // [rsp+10h] [rbp-1E8h]
  unsigned __int64 v65; // [rsp+18h] [rbp-1E0h]
  __int64 v66; // [rsp+20h] [rbp-1D8h]
  bool v67; // [rsp+2Ch] [rbp-1CCh]
  unsigned int v68; // [rsp+2Ch] [rbp-1CCh]
  __m128i v69; // [rsp+30h] [rbp-1C8h] BYREF
  void *v70; // [rsp+40h] [rbp-1B8h]
  __m128i v71[2]; // [rsp+50h] [rbp-1A8h] BYREF
  __m128i v72; // [rsp+70h] [rbp-188h] BYREF
  void *v73[2]; // [rsp+80h] [rbp-178h]
  __int128 v74; // [rsp+90h] [rbp-168h]
  void *ptr[2]; // [rsp+A0h] [rbp-158h] BYREF
  void *v76[2]; // [rsp+B0h] [rbp-148h] BYREF
  __int128 v77; // [rsp+C0h] [rbp-138h]
  int v78; // [rsp+1B0h] [rbp-48h]
  int v79; // [rsp+1B4h] [rbp-44h]

  v6 = a2[2];
  if ( v6 && !(unsigned __int8)sub_BFE300(v6) )
  {
    v65 = a2[2];
    v47 = sub_1DC71F0(a1, v65, v7, v8, v9, v10, a3, a4);
    if ( v47 == (unsigned __int16 *)((char *)&dword_0 + 1) )
      return (_QWORD *)(&dword_0 + 1);
    v48 = *a2;
    v49 = *((_DWORD *)a2 + 1);
    v72.m128i_i8[0] = 0;
    ptr[0] = nullptr;
    v50 = sub_19B0570(
            *a1,
            0,
            (unsigned __int64)v47 & 0xFFFFFFFFFFFFFFFELL,
            v49,
            (v48 & 0x80000) == 0 ? 26 : 37,
            (__int64 *)ptr,
            a3,
            a4,
            &v72);
    if ( v50 == 1 )
      return (_QWORD *)(&dword_0 + 1);
    v18 = ptr[0];
    v58 = (_DWORD *)(v50 & 0xFFFFFFFFFFFFFFFELL);
    v14 = *(_QWORD *)((v50 & 0xFFFFFFFFFFFFFFFELL) + 8);
  }
  else
  {
    v11 = a2[3];
    v14 = (__int64)sub_1DD1AB0((__int64)a1, v11, a3, a4);
    v17 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v17 + 16) != 42 )
      v17 = sub_F63050(v17, v11, v12, v13);
    v58 = nullptr;
    v18 = *(void **)(v17 + 32);
    v65 = 0;
  }
  v19 = a2[4];
  v20 = 0;
  if ( v19 )
  {
    v21 = (void *)a2[5];
    ptr[0] = (void *)a2[4];
    ptr[1] = v21;
    v22 = (_QWORD *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v22 )
    {
      ptr[0] = v22;
      v23 = 0;
      for ( i = v22[1] & 0xFFFFFFFFFFFFFFF8LL; i; i = *(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF8LL )
      {
        v22 = (_QWORD *)i;
        v23 = 1;
      }
      if ( v23 )
        ptr[0] = v22;
    }
    v20 = sub_E90530((__int64 *)ptr);
  }
  v25 = 0;
  if ( (*a2 & 0x200000) == 0 )
    goto LABEL_24;
  v26 = 16LL * ((*a2 & 0x100000) != 0) + 72;
  if ( (*a2 & 0x100000) != 0 )
  {
    v16 = *((unsigned int *)a2 + 18);
    if ( (_DWORD)v16 )
      v26 += 32LL * *((unsigned int *)a2 + 21);
  }
  v25 = *(__int64 *)((char *)a2 + v26);
  if ( !v25 || (*(_BYTE *)(v25 + 28) & 0x7F) != 0x43 )
    goto LABEL_24;
  v27 = *(_QWORD *)(v25 + 48);
  if ( !v27 )
  {
    v64 = v25;
    v27 = sub_A7AA70(*(_QWORD *)(*a1 + 248), v25, v25, v13, v15, v16);
    v25 = v64;
  }
  v28 = v27 & 0xFFFFFFFFFFFFFFF0LL;
  v29 = *(_QWORD *)v28;
  v30 = a1[4];
  v31 = *(_WORD *)(*(_QWORD *)v28 + 20LL);
  v32 = *(_DWORD *)(v30 + 8) + *(_DWORD *)(v30 + 112);
  v13 = v31 & 0x7FFF;
  if ( (unsigned int)v13 >= v32 )
    goto LABEL_24;
  v15 = *(_QWORD *)v30;
  v33 = (const __m128i *)(*(_QWORD *)(*(_QWORD *)v30 + 24LL * (v32 - 1 - (unsigned int)v13) + 8)
                        + 24LL * *(unsigned __int16 *)(v29 + 22));
  a4 = (__m128)_mm_loadu_si128(v33);
  v72 = (__m128i)a4;
  v13 = v33[1].m128i_i64[0];
  v73[0] = (void *)v13;
  v34 = v33->m128i_i64[1];
  if ( *(char *)(v29 + 21) < 0 )
  {
    v29 = *a1;
    v63 = v25;
    v38 = 0;
    if ( !*(_DWORD *)(*a1 + 12632) )
      goto LABEL_25;
    sub_1DB7720(&v69, v29, v25, v13, v15, v16, (__m128i)a3, v72.m128i_i64[0]);
    v53 = _mm_loadu_si128(&v69);
    v73[0] = v70;
    v72 = v53;
    v34 = v53.m128i_i64[1];
    v25 = v63;
  }
  v71[0].m128i_i64[0] = v34;
  v35 = v34 & 0xFFFFFFFFFFFFFFF0LL;
  if ( !v35 )
  {
LABEL_24:
    v38 = sub_1DD8310((__int64)a1, v20, v25, v13, v15, v16, a3, a4);
    goto LABEL_25;
  }
  v36 = *(_QWORD *)v35;
  v37 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v35 + 16LL) - 47;
  if ( (unsigned int)v37 <= 1
    || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v36 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 47 <= 1
    && (v36 = sub_F63050(v36, v29, v37, v13)) != 0 )
  {
    v38 = (__int64)sub_F60F10(v36, v29, v37, v13, v15, v16);
  }
  else
  {
    sub_168B9F0((__int64)ptr, (__int64 *)(*a1 + 8), v20, 0x10A1u, 0);
    sub_1605D30((__int64)ptr, v71[0].m128i_i64);
    v38 = 0;
    sub_15F7200(ptr);
  }
LABEL_25:
  v39 = a2[4];
  if ( v39 )
  {
    v39 = sub_1DD3CF0((__int64)a1, a2[4], (void *)a2[5], (__int64)v18, v38);
    if ( v39 )
    {
      v66 = v40;
      goto LABEL_28;
    }
    return (_QWORD *)(&dword_0 + 1);
  }
  v66 = 0;
LABEL_28:
  v62 = 0;
  if ( (*a2 & 0x100000) != 0 )
    v62 = *((_DWORD *)a2 + 20);
  sub_1DD8C40(v71, (__int64)a1, (const __m128i *)a2 + 3, a3, a4, v13, v15, v16);
  if ( !v71[0].m128i_i64[0] )
    return (_QWORD *)(&dword_0 + 1);
  v41 = *a2;
  if ( (*a2 & 0x100000) != 0 && *((_DWORD *)a2 + 18) )
  {
    v42 = *((_DWORD *)a2 + 19);
    v43 = nullptr;
    v78 = *((_DWORD *)a2 + 18);
    v44 = *((unsigned int *)a2 + 21);
    ptr[0] = v76;
    ptr[1] = (void *)0x800000000LL;
    v45 = 2 * v44;
    v79 = v42;
    if ( (v41 & 0x100000) != 0 )
      v43 = (const __m128i *)(a2 + 11);
    if ( (unsigned __int8)sub_1DD6C30(a1, v43, &v43[v45], (__int64)ptr, a3, a4) )
    {
      result = (_QWORD *)(&dword_0 + 1);
    }
    else
    {
      v55 = *a2;
      v56 = *((_DWORD *)a2 + 1);
      v72 = 0;
      v68 = v56;
      *(_OWORD *)v73 = 0;
      v57 = (v55 >> 19) & 1;
      v74 = 0;
      sub_15AB8B0((__int64)&v72, v39, v66);
      result = sub_19CC2F0((__m128 *)*a1, v58, v14, v68, v57 & 1, &v72, v62, v38, v71, (__int64)ptr, 0, nullptr);
      if ( HIDWORD(v73[1]) )
      {
        v61 = result;
        free(v73[0]);
        result = v61;
      }
    }
    if ( ptr[0] != v76 )
    {
      v59 = result;
      free(ptr[0]);
      return v59;
    }
  }
  else
  {
    v51 = *(_DWORD *)(*a1 + 12632);
    if ( v51 || (_DWORD *)v65 != v58 || v14 != a2[3] || a2[4] != v39 || a2[5] != v66 || a2[6] != v71[0].m128i_i64[0] )
      goto LABEL_47;
    if ( (v41 & 0x200000) != 0 )
    {
      if ( (v41 & 0x100000) != 0 )
      {
        v51 = *((_DWORD *)a2 + 18);
        if ( v51 )
          v51 = *((_DWORD *)a2 + 21);
      }
      v54 = a2[4 * v51 + 9 + 2 * ((v41 & 0x100000) != 0)];
    }
    else
    {
      v54 = 0;
    }
    if ( v54 == v38 )
    {
      return a2;
    }
    else
    {
LABEL_47:
      *(_OWORD *)ptr = 0;
      v52 = *((_DWORD *)a2 + 1);
      v67 = (v41 & 0x80000) != 0;
      *(_OWORD *)v76 = 0;
      v77 = 0;
      sub_15AB8B0((__int64)ptr, v39, v66);
      result = sub_19CC2F0((__m128 *)*a1, v58, v14, v52, v67, (__m128i *)ptr, v62, v38, v71, 0, 0, nullptr);
      if ( HIDWORD(v76[1]) )
      {
        v60 = result;
        free(v76[0]);
        return v60;
      }
    }
  }
  return result;
}
