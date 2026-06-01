__int64 __fastcall sub_8F5290(
        __int64 *a1,
        const char *a2,
        const char *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7)
{
  size_t v7; // rax
  size_t v8; // r12
  size_t v9; // rbp
  size_t v10; // rax
  size_t v11; // rbp
  size_t v12; // r13
  const char *v13; // rdx
  const char *v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // r13
  const char *v17; // rsi
  unsigned __int64 v18; // r9
  size_t v19; // r10
  const void *v20; // r11
  void *v21; // rdi
  __int64 v22; // rax
  __m128i v23; // xmm0
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // r14
  const char *v30; // rbp
  unsigned int v31; // eax
  void *v32; // rdi
  __m128i v34; // xmm0
  __int64 (*v35)(); // rax
  __int64 v36; // rbp
  size_t v37; // rax
  size_t v38; // r12
  size_t v39; // rbp
  const char *v40; // rdx
  __int64 (__fastcall *v41)(__int64 *, _BYTE *, const char *); // rax
  int v42; // eax
  int v44; // [rsp+0h] [rbp-1B0h]
  int v45; // [rsp+0h] [rbp-1B0h]
  int v46; // [rsp+0h] [rbp-1B0h]
  int v47; // [rsp+0h] [rbp-1B0h]
  int v49; // [rsp+8h] [rbp-1A8h]
  __int64 v53; // [rsp+20h] [rbp-190h]
  unsigned __int64 v54; // [rsp+28h] [rbp-188h]
  unsigned __int64 v55; // [rsp+28h] [rbp-188h]
  size_t v57; // [rsp+38h] [rbp-178h]
  const void *v58; // [rsp+40h] [rbp-170h]
  char v59; // [rsp+57h] [rbp-159h] BYREF
  void *dest; // [rsp+58h] [rbp-158h] BYREF
  __int128 v61; // [rsp+60h] [rbp-150h]
  void *v62; // [rsp+78h] [rbp-138h] BYREF
  __int128 v63; // [rsp+80h] [rbp-130h]
  void *ptr; // [rsp+98h] [rbp-118h] BYREF
  __int128 v65; // [rsp+A0h] [rbp-110h]
  void *v66; // [rsp+B8h] [rbp-F8h] BYREF
  __int128 v67; // [rsp+C0h] [rbp-F0h]
  _BYTE v68[80]; // [rsp+D8h] [rbp-D8h] BYREF
  __m128i v69; // [rsp+128h] [rbp-88h] BYREF
  __int64 v70; // [rsp+138h] [rbp-78h]
  __m128i v71; // [rsp+140h] [rbp-70h]
  __int64 v72; // [rsp+158h] [rbp-58h] BYREF
  __m128i v73; // [rsp+160h] [rbp-50h]
  unsigned __int64 v74; // [rsp+170h] [rbp-40h]

  v74 = __readfsqword(0x28u);
  v61 = 0;
  dest = nullptr;
  if ( a3 )
  {
    v7 = strlen(a3);
    v8 = v7 + 1;
    v9 = v7;
    dest = (void *)qvector_reserve(&dest, 0, v7 + 1, 1);
    *(_QWORD *)&v61 = v8;
    memmove(dest, a3, v9);
    *((_BYTE *)dest + v9) = 0;
  }
  sub_8EFEE0((__int64)&dest, "\\", "/");
  v62 = nullptr;
  v63 = 0;
  if ( a2 )
  {
    v10 = strlen(a2);
    v11 = v10 + 1;
    v12 = v10;
    v62 = (void *)qvector_reserve(&v62, 0, v10 + 1, 1);
    *(_QWORD *)&v63 = v11;
    memmove(v62, a2, v12);
    *((_BYTE *)v62 + v12) = 0;
  }
  sub_8EFEE0((__int64)&v62, "\\", "/");
  v13 = haystack;
  if ( (_QWORD)v63 )
    v13 = (const char *)v62;
  v14 = haystack;
  if ( (_QWORD)v61 )
    v14 = (const char *)dest;
  sub_7C7C70((__int64)"apply_deltas: %s -> %s\n", v14, v13);
  v15 = *a4;
  v16 = *a4 + 24 * a4[1];
  if ( *a4 != v16 )
  {
    do
    {
      if ( (void **)v15 != &dest )
      {
        v18 = *(_QWORD *)(v15 + 8);
        if ( !v18 || (v19 = v18 - 1, v18 == 1) )
        {
          *(_QWORD *)&v61 = 0;
        }
        else
        {
          v20 = *(const void **)v15;
          v21 = dest;
          if ( *((_QWORD *)&v61 + 1) < v18 )
          {
            v58 = *(const void **)v15;
            v57 = v18 - 1;
            v55 = *(_QWORD *)(v15 + 8);
            dest = (void *)qvector_reserve(&dest, dest, v55, 1);
            v20 = v58;
            v21 = dest;
            v19 = v57;
            v18 = v55;
          }
          *(_QWORD *)&v61 = v18;
          v54 = v18;
          memmove(v21, v20, v19);
          *((char *)dest + v54 - 1) = 0;
        }
      }
      sub_8EFEE0((__int64)&dest, "\\", "/");
      v17 = haystack;
      if ( (_QWORD)v61 )
        v17 = (const char *)dest;
      sub_7C7C70((__int64)"  %s\n", v17);
      v15 += 24;
    }
    while ( v16 != v15 );
  }
  v71 = 0;
  v22 = *a5;
  v23 = _mm_loadu_si128((const __m128i *)(a5 + 1));
  v70 = 0;
  v72 = v22;
  v73 = v23;
  LODWORD(v24) = sub_8CAB90((__int64)&v72, a1[1], a3, &v59);
  if ( !(_DWORD)v24 )
  {
    if ( v59 )
    {
      ptr = nullptr;
      v25 = *a5;
      v71 = _mm_loadu_si128((const __m128i *)(a5 + 1));
      v26 = *a4;
      v27 = a4[1];
      v70 = v25;
      v65 = 0;
      v28 = v26 + 24 * v27;
      if ( v28 == v26 )
      {
LABEL_44:
        if ( *(_QWORD *)a6 == v25
          && *(_OWORD *)&v71 - *(_OWORD *)(a6 + 8) == 0
          && (memmove(ptr, (char *)ptr + 56, v65 - 56),
              *(_QWORD *)&v65 = v65 - 56,
              v36 = v65,
              v70 = v65,
              sub_8FE540(&v69, ptr),
              v71 = _mm_load_si128(&v69),
              v36 == *(_QWORD *)a6)
          && *(_OWORD *)&v71 - *(_OWORD *)(a6 + 8) == 0 )
        {
          LODWORD(v24) = sub_8F4B40(a1, (__int64)a2, (__int64 *)&ptr, 1u);
          if ( !(_DWORD)v24 )
          {
            v66 = nullptr;
            v67 = 0;
            if ( a2 )
            {
              v37 = strlen(a2);
              v38 = v37 + 1;
              v39 = v37;
              v66 = (void *)qvector_reserve(&v66, 0, v37 + 1, 1);
              *(_QWORD *)&v67 = v38;
              memmove(v66, a2, v39);
              LODWORD(v24) = 0;
              v40 = haystack;
              *((_BYTE *)v66 + v39) = 0;
              v41 = *(__int64 (__fastcall **)(__int64 *, _BYTE *, const char *))(*a1 + 96);
              if ( (_QWORD)v67 )
                v40 = (const char *)v66;
            }
            else
            {
              v40 = haystack;
              v41 = *(__int64 (__fastcall **)(__int64 *, _BYTE *, const char *))(*a1 + 96);
            }
            v49 = v24;
            v42 = v41(a1, v68, v40);
            LODWORD(v24) = v49;
            if ( !v42 )
            {
              sub_8CC5D0(a1[1], (__int64)&v66, (__int64)v68, (const __m128i *)(a6 + 8));
              LODWORD(v24) = v49;
            }
            if ( v66 )
            {
              v47 = v24;
              *(_QWORD *)&v67 = 0;
              qfree(v66);
              LODWORD(v24) = v47;
            }
          }
        }
        else
        {
LABEL_31:
          set_error_string(0, a3);
          LODWORD(v24) = 56;
        }
      }
      else
      {
        v29 = v26;
        while ( 1 )
        {
          v30 = haystack;
          if ( *(_QWORD *)(v29 + 8) )
            v30 = *(const char **)v29;
          v31 = sub_8F41B0(a1, (__int64 *)&ptr, (__int64)v30, 0);
          v24 = v31;
          if ( v31 )
            break;
          if ( (unsigned __int64)v65 <= 0x37 || *(_QWORD *)ptr != 0x41544C4544594F54LL )
          {
            set_error_string(0, v30);
            v32 = ptr;
            LODWORD(v24) = 55;
            if ( ptr )
              goto LABEL_33;
            goto LABEL_34;
          }
          if ( v70 != *((_QWORD *)ptr + 1) || *((_OWORD *)ptr + 1) - *(_OWORD *)&v71 != 0 )
            goto LABEL_31;
          v25 = *((_QWORD *)ptr + 4);
          v34 = _mm_loadu_si128((const __m128i *)((char *)ptr + 40));
          v70 = v25;
          v71 = v34;
          if ( a7 )
          {
            v35 = *(__int64 (**)())(*(_QWORD *)a7 + 8LL);
            if ( v35 != sub_8C83E0 )
            {
              v53 = v25;
              ((void (__fastcall *)(__int64, __int64, __int64, __int64 (*)(), __int64))v35)(a7, 1, v25, sub_8C83E0, v24);
              v25 = v53;
            }
          }
          v29 += 24;
          if ( v28 == v29 )
            goto LABEL_44;
        }
      }
      v32 = ptr;
      if ( ptr )
      {
LABEL_33:
        v44 = v24;
        *(_QWORD *)&v65 = 0;
        qfree(v32);
        LODWORD(v24) = v44;
      }
    }
    else
    {
      set_error_string(0, a3);
      LODWORD(v24) = 56;
    }
  }
LABEL_34:
  if ( v62 )
  {
    v45 = v24;
    *(_QWORD *)&v63 = 0;
    qfree(v62);
    LODWORD(v24) = v45;
  }
  if ( dest )
  {
    v46 = v24;
    *(_QWORD *)&v61 = 0;
    qfree(dest);
    LODWORD(v24) = v46;
  }
  return (unsigned int)v24;
}
