__int64 __fastcall sub_8D1550(
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
  __int64 v13; // rbp
  __int64 v14; // r13
  unsigned __int64 v15; // r9
  size_t v16; // r10
  const void *v17; // r11
  void *v18; // rdi
  __int64 v19; // rax
  __m128i v20; // xmm0
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // r14
  const char *v27; // rbp
  unsigned int v28; // eax
  void *v29; // rdi
  __m128i v31; // xmm0
  __int64 (*v32)(); // rax
  __int64 v33; // rbp
  size_t v34; // rax
  size_t v35; // r12
  size_t v36; // rbp
  const char *v37; // rdx
  __int64 (__fastcall *v38)(__int64 *, _BYTE *, const char *); // rax
  int v39; // eax
  int v41; // [rsp+0h] [rbp-1B0h]
  int v42; // [rsp+0h] [rbp-1B0h]
  int v43; // [rsp+0h] [rbp-1B0h]
  int v44; // [rsp+0h] [rbp-1B0h]
  int v46; // [rsp+8h] [rbp-1A8h]
  __int64 v49; // [rsp+20h] [rbp-190h]
  unsigned __int64 v50; // [rsp+28h] [rbp-188h]
  unsigned __int64 v51; // [rsp+28h] [rbp-188h]
  size_t v53; // [rsp+38h] [rbp-178h]
  const void *v54; // [rsp+40h] [rbp-170h]
  char v55; // [rsp+57h] [rbp-159h] BYREF
  void *dest; // [rsp+58h] [rbp-158h] BYREF
  __int128 v57; // [rsp+60h] [rbp-150h]
  void *v58; // [rsp+78h] [rbp-138h] BYREF
  __int128 v59; // [rsp+80h] [rbp-130h]
  void *ptr; // [rsp+98h] [rbp-118h] BYREF
  __int128 v61; // [rsp+A0h] [rbp-110h]
  void *v62; // [rsp+B8h] [rbp-F8h] BYREF
  __int128 v63; // [rsp+C0h] [rbp-F0h]
  _BYTE v64[80]; // [rsp+D8h] [rbp-D8h] BYREF
  __m128i v65; // [rsp+128h] [rbp-88h] BYREF
  __int64 v66; // [rsp+138h] [rbp-78h]
  __m128i v67; // [rsp+140h] [rbp-70h]
  __int64 v68; // [rsp+158h] [rbp-58h] BYREF
  __m128i v69; // [rsp+160h] [rbp-50h]
  unsigned __int64 v70; // [rsp+170h] [rbp-40h]

  v70 = __readfsqword(0x28u);
  v57 = 0;
  dest = nullptr;
  if ( a3 )
  {
    v7 = strlen(a3);
    v8 = v7 + 1;
    v9 = v7;
    dest = (void *)qvector_reserve(&dest, 0, v7 + 1, 1);
    *(_QWORD *)&v57 = v8;
    memmove(dest, a3, v9);
    *((_BYTE *)dest + v9) = 0;
  }
  sub_8CC1A0((__int64)&dest, "\\", "/");
  v58 = nullptr;
  v59 = 0;
  if ( a2 )
  {
    v10 = strlen(a2);
    v11 = v10 + 1;
    v12 = v10;
    v58 = (void *)qvector_reserve(&v58, 0, v10 + 1, 1);
    *(_QWORD *)&v59 = v11;
    memmove(v58, a2, v12);
    *((_BYTE *)v58 + v12) = 0;
  }
  sub_8CC1A0((__int64)&v58, "\\", "/");
  sub_7A4810();
  v13 = *a4;
  v14 = *a4 + 24 * a4[1];
  if ( *a4 != v14 )
  {
    do
    {
      if ( (void **)v13 != &dest )
      {
        v15 = *(_QWORD *)(v13 + 8);
        if ( !v15 || (v16 = v15 - 1, v15 == 1) )
        {
          *(_QWORD *)&v57 = 0;
        }
        else
        {
          v17 = *(const void **)v13;
          v18 = dest;
          if ( *((_QWORD *)&v57 + 1) < v15 )
          {
            v54 = *(const void **)v13;
            v53 = v15 - 1;
            v51 = *(_QWORD *)(v13 + 8);
            dest = (void *)qvector_reserve(&dest, dest, v51, 1);
            v17 = v54;
            v18 = dest;
            v16 = v53;
            v15 = v51;
          }
          *(_QWORD *)&v57 = v15;
          v50 = v15;
          memmove(v18, v17, v16);
          *((char *)dest + v50 - 1) = 0;
        }
      }
      sub_8CC1A0((__int64)&dest, "\\", "/");
      sub_7A4810();
      v13 += 24;
    }
    while ( v14 != v13 );
  }
  v67 = 0;
  v19 = *a5;
  v20 = _mm_loadu_si128((const __m128i *)(a5 + 1));
  v66 = 0;
  v68 = v19;
  v69 = v20;
  LODWORD(v21) = sub_8A6E50((__int64)&v68, a1[1], a3, &v55);
  if ( !(_DWORD)v21 )
  {
    if ( v55 )
    {
      ptr = nullptr;
      v22 = *a5;
      v67 = _mm_loadu_si128((const __m128i *)(a5 + 1));
      v23 = *a4;
      v24 = a4[1];
      v66 = v22;
      v61 = 0;
      v25 = v23 + 24 * v24;
      if ( v25 == v23 )
      {
LABEL_38:
        if ( *(_QWORD *)a6 == v22
          && *(_OWORD *)&v67 - *(_OWORD *)(a6 + 8) == 0
          && (memmove(ptr, (char *)ptr + 56, v61 - 56),
              *(_QWORD *)&v61 = v61 - 56,
              v33 = v61,
              v66 = v61,
              sub_8DA800(&v65, ptr),
              v67 = _mm_load_si128(&v65),
              v33 == *(_QWORD *)a6)
          && *(_OWORD *)&v67 - *(_OWORD *)(a6 + 8) == 0 )
        {
          LODWORD(v21) = sub_8D0E00(a1, (__int64)a2, (__int64 *)&ptr, 1u);
          if ( !(_DWORD)v21 )
          {
            v62 = nullptr;
            v63 = 0;
            if ( a2 )
            {
              v34 = strlen(a2);
              v35 = v34 + 1;
              v36 = v34;
              v62 = (void *)qvector_reserve(&v62, 0, v34 + 1, 1);
              *(_QWORD *)&v63 = v35;
              memmove(v62, a2, v36);
              LODWORD(v21) = 0;
              v37 = haystack;
              *((_BYTE *)v62 + v36) = 0;
              v38 = *(__int64 (__fastcall **)(__int64 *, _BYTE *, const char *))(*a1 + 96);
              if ( (_QWORD)v63 )
                v37 = (const char *)v62;
            }
            else
            {
              v37 = haystack;
              v38 = *(__int64 (__fastcall **)(__int64 *, _BYTE *, const char *))(*a1 + 96);
            }
            v46 = v21;
            v39 = v38(a1, v64, v37);
            LODWORD(v21) = v46;
            if ( !v39 )
            {
              sub_8A8890(a1[1], (__int64)&v62, (__int64)v64, (const __m128i *)(a6 + 8));
              LODWORD(v21) = v46;
            }
            if ( v62 )
            {
              v44 = v21;
              *(_QWORD *)&v63 = 0;
              qfree(v62);
              LODWORD(v21) = v44;
            }
          }
        }
        else
        {
LABEL_25:
          set_error_string();
          LODWORD(v21) = 56;
        }
      }
      else
      {
        v26 = v23;
        while ( 1 )
        {
          v27 = haystack;
          if ( *(_QWORD *)(v26 + 8) )
            v27 = *(const char **)v26;
          v28 = sub_8D0470(a1, (__int64 *)&ptr, (__int64)v27, 0);
          v21 = v28;
          if ( v28 )
            break;
          if ( (unsigned __int64)v61 <= 0x37 || *(_QWORD *)ptr != 0x41544C4544594F54LL )
          {
            set_error_string();
            v29 = ptr;
            LODWORD(v21) = 55;
            if ( ptr )
              goto LABEL_27;
            goto LABEL_28;
          }
          if ( v66 != *((_QWORD *)ptr + 1) || *((_OWORD *)ptr + 1) - *(_OWORD *)&v67 != 0 )
            goto LABEL_25;
          v22 = *((_QWORD *)ptr + 4);
          v31 = _mm_loadu_si128((const __m128i *)((char *)ptr + 40));
          v66 = v22;
          v67 = v31;
          if ( a7 )
          {
            v32 = *(__int64 (**)())(*(_QWORD *)a7 + 8LL);
            if ( v32 != sub_8A46A0 )
            {
              v49 = v22;
              ((void (__fastcall *)(__int64, __int64, __int64, __int64 (*)(), __int64))v32)(a7, 1, v22, sub_8A46A0, v21);
              v22 = v49;
            }
          }
          v26 += 24;
          if ( v25 == v26 )
            goto LABEL_38;
        }
      }
      v29 = ptr;
      if ( ptr )
      {
LABEL_27:
        v41 = v21;
        *(_QWORD *)&v61 = 0;
        qfree(v29);
        LODWORD(v21) = v41;
      }
    }
    else
    {
      set_error_string();
      LODWORD(v21) = 56;
    }
  }
LABEL_28:
  if ( v58 )
  {
    v42 = v21;
    *(_QWORD *)&v59 = 0;
    qfree(v58);
    LODWORD(v21) = v42;
  }
  if ( dest )
  {
    v43 = v21;
    *(_QWORD *)&v57 = 0;
    qfree(dest);
    LODWORD(v21) = v43;
  }
  return (unsigned int)v21;
}

