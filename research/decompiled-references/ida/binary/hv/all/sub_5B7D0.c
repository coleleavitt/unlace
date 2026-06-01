__int64 __fastcall sub_5B7D0(
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
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  const char *v16; // rdx
  const char *v17; // rsi
  __int64 v18; // rbp
  __int64 v19; // r13
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  const char *v24; // rsi
  unsigned __int64 v25; // r9
  size_t v26; // r10
  const void *v27; // r11
  void *v28; // rdi
  __int64 v29; // rax
  __m128i v30; // xmm0
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // r14
  const char *v37; // rbp
  unsigned int v38; // eax
  void *v39; // rdi
  __m128i v41; // xmm0
  __int64 (*v42)(); // rax
  __int64 v43; // rbp
  size_t v44; // rax
  size_t v45; // r12
  size_t v46; // rbp
  const char *v47; // rdx
  __int64 (__fastcall *v48)(__int64 *, _BYTE *, const char *); // rax
  int v49; // eax
  int v51; // [rsp+0h] [rbp-1B0h]
  int v52; // [rsp+0h] [rbp-1B0h]
  int v53; // [rsp+0h] [rbp-1B0h]
  int v54; // [rsp+0h] [rbp-1B0h]
  int v56; // [rsp+8h] [rbp-1A8h]
  __int64 v60; // [rsp+20h] [rbp-190h]
  unsigned __int64 v61; // [rsp+28h] [rbp-188h]
  unsigned __int64 v62; // [rsp+28h] [rbp-188h]
  size_t v64; // [rsp+38h] [rbp-178h]
  const void *v65; // [rsp+40h] [rbp-170h]
  char v66; // [rsp+57h] [rbp-159h] BYREF
  void *dest; // [rsp+58h] [rbp-158h] BYREF
  __int128 v68; // [rsp+60h] [rbp-150h]
  void *v69; // [rsp+78h] [rbp-138h] BYREF
  __int128 v70; // [rsp+80h] [rbp-130h]
  void *ptr; // [rsp+98h] [rbp-118h] BYREF
  __int128 v72; // [rsp+A0h] [rbp-110h]
  void *v73; // [rsp+B8h] [rbp-F8h] BYREF
  __int128 v74; // [rsp+C0h] [rbp-F0h]
  _BYTE v75[80]; // [rsp+D8h] [rbp-D8h] BYREF
  __m128i v76; // [rsp+128h] [rbp-88h] BYREF
  __int64 v77; // [rsp+138h] [rbp-78h]
  __m128i v78; // [rsp+140h] [rbp-70h]
  __int64 v79; // [rsp+158h] [rbp-58h] BYREF
  __m128i v80; // [rsp+160h] [rbp-50h]
  unsigned __int64 v81; // [rsp+170h] [rbp-40h]

  v81 = __readfsqword(0x28u);
  v68 = 0;
  dest = nullptr;
  if ( a3 )
  {
    v7 = strlen(a3);
    v8 = v7 + 1;
    v9 = v7;
    dest = (void *)sub_96080(&dest, 0, v7 + 1, 1);
    *(_QWORD *)&v68 = v8;
    memmove(dest, a3, v9);
    *((_BYTE *)dest + v9) = 0;
  }
  sub_56380((__int64)&dest, "\\", "/");
  v69 = nullptr;
  v70 = 0;
  if ( a2 )
  {
    v10 = strlen(a2);
    v11 = v10 + 1;
    v12 = v10;
    v69 = (void *)sub_96080(&v69, 0, v10 + 1, 1);
    *(_QWORD *)&v70 = v11;
    memmove(v69, a2, v12);
    *((_BYTE *)v69 + v12) = 0;
  }
  sub_56380((__int64)&v69, "\\", "/");
  v16 = haystack;
  if ( (_QWORD)v70 )
    LODWORD(v16) = (_DWORD)v69;
  v17 = haystack;
  if ( (_QWORD)v68 )
    LODWORD(v17) = (_DWORD)dest;
  sub_708D0((unsigned int)"apply_deltas: %s -> %s\n", (_DWORD)v17, (_DWORD)v16, v13, v14, v15);
  v18 = *a4;
  v19 = *a4 + 24 * a4[1];
  if ( *a4 != v19 )
  {
    do
    {
      if ( (void **)v18 != &dest )
      {
        v25 = *(_QWORD *)(v18 + 8);
        if ( !v25 || (v26 = v25 - 1, v25 == 1) )
        {
          *(_QWORD *)&v68 = 0;
        }
        else
        {
          v27 = *(const void **)v18;
          v28 = dest;
          if ( *((_QWORD *)&v68 + 1) < v25 )
          {
            v65 = *(const void **)v18;
            v64 = v25 - 1;
            v62 = *(_QWORD *)(v18 + 8);
            dest = (void *)sub_96080(&dest, dest, v62, 1);
            v27 = v65;
            v28 = dest;
            v26 = v64;
            v25 = v62;
          }
          *(_QWORD *)&v68 = v25;
          v61 = v25;
          memmove(v28, v27, v26);
          *((char *)dest + v61 - 1) = 0;
        }
      }
      sub_56380((__int64)&dest, "\\", "/");
      v24 = haystack;
      if ( (_QWORD)v68 )
        LODWORD(v24) = (_DWORD)dest;
      sub_708D0((unsigned int)"  %s\n", (_DWORD)v24, v20, v21, v22, v23);
      v18 += 24;
    }
    while ( v19 != v18 );
  }
  v78 = 0;
  v29 = *a5;
  v30 = _mm_loadu_si128((const __m128i *)(a5 + 1));
  v77 = 0;
  v79 = v29;
  v80 = v30;
  LODWORD(v31) = sub_694A0(&v79, a1[1], a3, &v66);
  if ( !(_DWORD)v31 )
  {
    if ( v66 )
    {
      ptr = nullptr;
      v32 = *a5;
      v78 = _mm_loadu_si128((const __m128i *)(a5 + 1));
      v33 = *a4;
      v34 = a4[1];
      v77 = v32;
      v72 = 0;
      v35 = v33 + 24 * v34;
      if ( v35 == v33 )
      {
LABEL_44:
        if ( *(_QWORD *)a6 == v32
          && *(_OWORD *)&v78 - *(_OWORD *)(a6 + 8) == 0
          && (memmove(ptr, (char *)ptr + 56, v72 - 56),
              *(_QWORD *)&v72 = v72 - 56,
              v43 = v72,
              v77 = v72,
              sub_64C70(&v76, ptr),
              v78 = _mm_load_si128(&v76),
              v43 == *(_QWORD *)a6)
          && *(_OWORD *)&v78 - *(_OWORD *)(a6 + 8) == 0 )
        {
          LODWORD(v31) = sub_5B080(a1, (__int64)a2, (__int64 *)&ptr, 1u);
          if ( !(_DWORD)v31 )
          {
            v73 = nullptr;
            v74 = 0;
            if ( a2 )
            {
              v44 = strlen(a2);
              v45 = v44 + 1;
              v46 = v44;
              v73 = (void *)sub_96080(&v73, 0, v44 + 1, 1);
              *(_QWORD *)&v74 = v45;
              memmove(v73, a2, v46);
              LODWORD(v31) = 0;
              v47 = haystack;
              *((_BYTE *)v73 + v46) = 0;
              v48 = *(__int64 (__fastcall **)(__int64 *, _BYTE *, const char *))(*a1 + 96);
              if ( (_QWORD)v74 )
                v47 = (const char *)v73;
            }
            else
            {
              v47 = haystack;
              v48 = *(__int64 (__fastcall **)(__int64 *, _BYTE *, const char *))(*a1 + 96);
            }
            v56 = v31;
            v49 = v48(a1, v75, v47);
            LODWORD(v31) = v56;
            if ( !v49 )
            {
              sub_6AEF0(a1[1], &v73, v75, a6 + 8);
              LODWORD(v31) = v56;
            }
            if ( v73 )
            {
              v54 = v31;
              *(_QWORD *)&v74 = 0;
              j__free(v73);
              LODWORD(v31) = v54;
            }
          }
        }
        else
        {
LABEL_31:
          sub_8F890(0, a3);
          LODWORD(v31) = 56;
        }
      }
      else
      {
        v36 = v33;
        while ( 1 )
        {
          v37 = haystack;
          if ( *(_QWORD *)(v36 + 8) )
            v37 = *(const char **)v36;
          v38 = sub_5A6F0(a1, (__int64 *)&ptr, (__int64)v37, 0);
          v31 = v38;
          if ( v38 )
            break;
          if ( (unsigned __int64)v72 <= 0x37 || *(_QWORD *)ptr != 0x41544C4544594F54LL )
          {
            sub_8F890(0, v37);
            v39 = ptr;
            LODWORD(v31) = 55;
            if ( ptr )
              goto LABEL_33;
            goto LABEL_34;
          }
          if ( v77 != *((_QWORD *)ptr + 1) || *((_OWORD *)ptr + 1) - *(_OWORD *)&v78 != 0 )
            goto LABEL_31;
          v32 = *((_QWORD *)ptr + 4);
          v41 = _mm_loadu_si128((const __m128i *)((char *)ptr + 40));
          v77 = v32;
          v78 = v41;
          if ( a7 )
          {
            v42 = *(__int64 (**)())(*(_QWORD *)a7 + 8LL);
            if ( v42 != sub_34740 )
            {
              v60 = v32;
              ((void (__fastcall *)(__int64, __int64, __int64, __int64 (*)(), __int64))v42)(a7, 1, v32, sub_34740, v31);
              v32 = v60;
            }
          }
          v36 += 24;
          if ( v35 == v36 )
            goto LABEL_44;
        }
      }
      v39 = ptr;
      if ( ptr )
      {
LABEL_33:
        v51 = v31;
        *(_QWORD *)&v72 = 0;
        j__free(v39);
        LODWORD(v31) = v51;
      }
    }
    else
    {
      sub_8F890(0, a3);
      LODWORD(v31) = 56;
    }
  }
LABEL_34:
  if ( v69 )
  {
    v52 = v31;
    *(_QWORD *)&v70 = 0;
    j__free(v69);
    LODWORD(v31) = v52;
  }
  if ( dest )
  {
    v53 = v31;
    *(_QWORD *)&v68 = 0;
    j__free(dest);
    LODWORD(v31) = v53;
  }
  return (unsigned int)v31;
}

