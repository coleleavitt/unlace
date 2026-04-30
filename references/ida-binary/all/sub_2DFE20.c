unsigned __int64 __fastcall sub_2DFE20(
        const __m128i *a1,
        __int64 a2,
        const char *a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  QT::QCoreApplication *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  size_t v17; // r13
  char *v18; // rax
  const char *v19; // rbp
  char *v20; // rax
  size_t v21; // r13
  char v22; // r15
  __int64 v23; // rax
  __int64 v24; // rbx
  double v25; // xmm0_8
  size_t v26; // rdx
  const char *v27; // r15
  char *v28; // r8
  void *v29; // rax
  __int64 v30; // rax
  const char *v31; // r13
  char *v32; // rax
  __int64 v33; // rcx
  double v34; // xmm4_8
  double v35; // xmm5_8
  signed __int64 v36; // rax
  const void **v38; // rbx
  char *v39; // rax
  size_t v40; // rdx
  unsigned __int64 v41; // r13
  char *v42; // rsi
  char *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  char *v46; // r8
  signed __int64 v47; // r15
  char *v48; // rax
  signed __int64 v49; // r13
  char v50; // dl
  __int64 v51; // rax
  const char *v52; // rsi
  const char *v53; // r13
  const char *v54; // rbx
  __int64 v55; // rcx
  double v56; // xmm4_8
  double v57; // xmm5_8
  size_t v58; // [rsp+0h] [rbp-88h]
  char *v59; // [rsp+0h] [rbp-88h]
  char *src; // [rsp+8h] [rbp-80h]
  char srca; // [rsp+8h] [rbp-80h]
  int v62; // [rsp+18h] [rbp-70h] BYREF
  int v63; // [rsp+1Ch] [rbp-6Ch] BYREF
  void *dest; // [rsp+20h] [rbp-68h] BYREF
  __int128 v65; // [rsp+28h] [rbp-60h]
  char needle[3]; // [rsp+42h] [rbp-46h] BYREF
  char v67[3]; // [rsp+45h] [rbp-43h] BYREF
  unsigned __int64 v68; // [rsp+48h] [rbp-40h]

  v68 = __readfsqword(0x28u);
  v13 = (QT::QCoreApplication *)sub_1EB5B0((__int64)a1, a2, (__int64)a3, a4, a5);
  sub_176E70(v13);
  needle[2] = 0;
  needle[0] = 1;
  needle[1] = a2 + 41;
  v67[2] = 0;
  v67[0] = 2;
  v67[1] = a2 + 41;
  v16 = sub_1F36A0((__int64)a1, 0, v14, v15, a5);
  v17 = *(_QWORD *)(v16 + 8);
  if ( !v17 )
  {
    v18 = strstr(&s1, needle);
    v19 = v18;
    if ( !v18 )
      return v68 - __readfsqword(0x28u);
    if ( v18 != &s1 )
      return v68 - __readfsqword(0x28u);
    v20 = strstr(v18, v67);
    if ( !v20 )
      return v68 - __readfsqword(0x28u);
    v21 = v20 - v19;
    if ( v20 - v19 == -1 )
      return v68 - __readfsqword(0x28u);
    v22 = byte_8CBC80;
    byte_8CBC80 = 0;
    v23 = tag_strlen(v19);
    byte_8CBC80 = v22;
    v24 = v23;
    if ( !a3 )
    {
      dest = nullptr;
      a5 = 0.0;
      v52 = v19;
      v19 = nullptr;
      v65 = 0;
      goto LABEL_29;
    }
    if ( *a3 )
    {
      dest = nullptr;
      v25 = 0.0;
      v26 = v21 + 1;
      v27 = nullptr;
      v65 = 0;
      v28 = &byte_8CBC80;
      goto LABEL_9;
    }
    v27 = nullptr;
    goto LABEL_28;
  }
  v38 = (const void **)v16;
  v39 = (char *)qalloc_or_throw(*(_QWORD *)(v16 + 8));
  v40 = v17;
  v41 = v17 - 1;
  v19 = v39;
  memcpy(v39, *v38, v40);
  v42 = needle;
  v43 = strstr(v19, needle);
  if ( v43 )
  {
    v47 = v43 - v19;
    if ( v41 >= v43 - v19 )
    {
      v42 = v67;
      v59 = v43;
      v48 = strstr(v43, v67);
      if ( v48 )
      {
        v46 = v59;
        v49 = v48 - v19;
        if ( v48 - v19 != -1 )
        {
          v50 = *v59;
          *v59 = 0;
          srca = v50;
          v51 = tag_strlen(v19);
          v28 = v59;
          v24 = v51;
          *v59 = srca;
          if ( a3 && *a3 )
          {
            dest = nullptr;
            v21 = v49 - v47;
            v25 = 0.0;
            v27 = v19;
            v65 = 0;
            v26 = v21 + 1;
            if ( v21 == -1 )
            {
              v21 = -1;
              v29 = nullptr;
              goto LABEL_10;
            }
LABEL_9:
            v58 = v26;
            src = v28;
            v29 = (void *)qvector_reserve(&dest, 0, v26, 1);
            v26 = v58;
            v28 = src;
            dest = v29;
LABEL_10:
            *(_QWORD *)&v65 = v26;
            *((_BYTE *)v29 + v21) = 0;
            memmove(dest, v28, v21);
            v30 = v65;
            if ( (unsigned __int64)v65 > 1 )
            {
              tag_remove(&dest, dest, 0);
              v30 = v65;
            }
            v31 = &s1;
            if ( v30 )
              v31 = (const char *)dest;
            v32 = strstr(v31, a3);
            if ( v32 )
            {
              v36 = v32 - v31;
              if ( v36 != -1 )
              {
                v62 = v24 + v36;
                sub_2006B0(a1, (__int64)&v62, 0, v33, 0.0, a6, a7, a8, v34, v35, a11, a12);
                if ( dest )
                {
                  *(_QWORD *)&v65 = 0;
                  v25 = qfree(dest, (const char *)&v62);
                }
                if ( v27 )
                  qfree(v27, (const char *)&v62, v25);
                return v68 - __readfsqword(0x28u);
              }
            }
            if ( dest )
            {
              *(_QWORD *)&v65 = 0;
              qfree(dest, a3);
            }
            goto LABEL_28;
          }
          v27 = v19;
LABEL_28:
          dest = nullptr;
          a5 = 0.0;
          v52 = v19;
          v19 = v27;
          v65 = 0;
LABEL_29:
          tag_remove(&dest, v52, 0);
          v53 = &s1;
          if ( (_QWORD)v65 )
            v53 = (const char *)dest;
          v54 = &v53[v24 + (v53[v24] == 91)];
          if ( !strncmp(v54, "offset ", 7u) )
            v54 += 7;
          if ( !strncmp(v54, "far ptr ", 8u) )
            v54 += 8;
          v42 = (char *)&v63;
          if ( !strncmp(v54, "near ptr ", 9u) )
            LODWORD(v54) = (_DWORD)v54 + 9;
          v63 = (_DWORD)v54 - (_DWORD)v53;
          sub_2006B0(a1, (__int64)&v63, 0, v55, 0.0, a6, a7, a8, v56, v57, a11, a12);
          if ( dest )
          {
            *(_QWORD *)&v65 = 0;
            a5 = qfree(dest, (const char *)&v63);
          }
        }
      }
    }
  }
  if ( v19 )
    qfree(v19, v42, v44, v45, v46, a5);
  return v68 - __readfsqword(0x28u);
}
