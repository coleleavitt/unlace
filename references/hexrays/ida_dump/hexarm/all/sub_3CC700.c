unsigned __int64 __fastcall sub_3CC700(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned int v4; // eax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r15
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // r15d
  int v15; // eax
  unsigned int v16; // ebp
  int v17; // r12d
  __int64 v18; // rdx
  __int64 (*v19)(); // rax
  __int64 v20; // rdi
  void (__fastcall *v21)(__int64, _QWORD, __int64, _QWORD *); // r8
  _QWORD *v22; // rcx
  int v23; // eax
  __int64 v24; // rax
  int v25; // eax
  size_t v26; // rax
  __int64 *v27; // r8
  size_t v28; // r9
  __int64 (*v29)(); // rdx
  int v30; // eax
  void *v32; // rdi
  size_t v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // r14
  __int64 *v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rsi
  __int64 v42; // r14
  __int64 *v43; // rbp
  __int64 v44; // r14
  __int64 v45; // r15
  __int64 v46; // rax
  __m128i v47; // xmm0
  __int64 v48; // rdi
  bool v49; // cf
  __int64 v50; // r14
  __int64 v51; // rax
  __int64 *v52; // rbp
  __int64 v53; // r15
  __int64 v54; // rbx
  __int64 v55; // rax
  __m128i v56; // xmm0
  __int64 v57; // rdi
  unsigned int v58; // [rsp+0h] [rbp-4B8h]
  char *v59; // [rsp+0h] [rbp-4B8h]
  __int64 *v60; // [rsp+0h] [rbp-4B8h]
  size_t v61; // [rsp+0h] [rbp-4B8h]
  __int64 *v62; // [rsp+0h] [rbp-4B8h]
  __int64 v63; // [rsp+0h] [rbp-4B8h]
  __int64 v64; // [rsp+0h] [rbp-4B8h]
  __int64 *v65; // [rsp+10h] [rbp-4A8h]
  size_t v66; // [rsp+10h] [rbp-4A8h]
  size_t v67; // [rsp+18h] [rbp-4A0h]
  __int64 v68; // [rsp+28h] [rbp-490h] BYREF
  __int64 v69; // [rsp+30h] [rbp-488h] BYREF
  unsigned int v70; // [rsp+38h] [rbp-480h]
  _QWORD v71[3]; // [rsp+40h] [rbp-478h] BYREF
  __int128 v72; // [rsp+58h] [rbp-460h]
  char s[1032]; // [rsp+70h] [rbp-448h] BYREF
  unsigned __int64 v74; // [rsp+478h] [rbp-40h]

  v3 = a2;
  v74 = __readfsqword(0x28u);
  a1[1] = 0;
  a1[4] = 0;
  *((_OWORD *)a1 + 1) = 0;
  v68 = 0;
  sub_3CC300(0x103u, -1, &v68);
  *a1 = v68;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3);
  v5 = (int)v4;
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 184LL))(*a1, v4);
  v6 = a1[2];
  if ( v5 != v6 )
  {
    LODWORD(v72) = 0;
    memset(v71, 0, sizeof(v71));
    if ( v5 < v6 )
    {
      v35 = v5;
      do
      {
        v36 = (__int64 *)(a1[1] + 32 * v35);
        v37 = *v36;
        if ( *v36 )
        {
          v36[1] = 0;
          qfree(v37);
        }
        ++v35;
      }
      while ( v35 < v6 );
      a1[2] = v5;
    }
    else
    {
      v7 = a1[1];
      v8 = a1[3];
      v9 = a1 + 1;
      if ( (unsigned __int64)v71 < v7 || (unsigned __int64)v71 >= 32 * v8 + v7 )
      {
        if ( v8 < v5 )
        {
          v40 = qvector_reserve(v9, 0, v5, 32);
          v41 = a1[3];
          v42 = a1[2];
          v63 = v40;
          a1[3] = v8;
          v43 = (__int64 *)a1[1];
          v44 = v42 - 1;
          if ( v44 >= 0 )
          {
            v45 = v40;
            do
            {
              v46 = *v43;
              v47 = _mm_loadu_si128((const __m128i *)(v43 + 1));
              *v43 = 0;
              v43[2] = 0;
              *(_QWORD *)v45 = v46;
              *(__m128i *)(v45 + 8) = v47;
              *(_DWORD *)(v45 + 24) = *((_DWORD *)v43 + 6);
              v48 = *v43;
              if ( *v43 )
              {
                v43[1] = 0;
                qfree(v48);
              }
              v43 += 4;
              v45 += 32;
              v49 = v44-- == 0;
            }
            while ( !v49 );
            v43 = (__int64 *)a1[1];
          }
          qfree(v43);
          v6 = a1[2];
          a1[1] = v63;
          a1[3] = v41;
        }
        if ( v6 < v5 )
        {
          do
          {
            v10 = v6++;
            v11 = a1[1] + 32 * v10;
            *(_QWORD *)v11 = 0;
            *(_DWORD *)(v11 + 24) = 0;
            *(_OWORD *)(v11 + 8) = 0;
          }
          while ( v5 != v6 );
        }
      }
      else
      {
        if ( v8 < v5 )
        {
          v50 = qvector_reserve(v9, 0, v5, 32);
          v51 = a1[3];
          v52 = (__int64 *)a1[1];
          a1[3] = v8;
          v64 = v51;
          if ( a1[2] - 1LL >= 0 )
          {
            v53 = v50;
            v54 = a1[2] - 1LL;
            do
            {
              v55 = *v52;
              v56 = _mm_loadu_si128((const __m128i *)(v52 + 1));
              *v52 = 0;
              v52[2] = 0;
              *(_QWORD *)v53 = v55;
              *(__m128i *)(v53 + 8) = v56;
              *(_DWORD *)(v53 + 24) = *((_DWORD *)v52 + 6);
              v57 = *v52;
              if ( *v52 )
              {
                v52[1] = 0;
                qfree(v57);
              }
              v52 += 4;
              v53 += 32;
              v49 = v54-- == 0;
            }
            while ( !v49 );
            v3 = a2;
            v52 = (__int64 *)a1[1];
          }
          qfree(v52);
          v6 = a1[2];
          a1[1] = v50;
          a1[3] = v64;
        }
        if ( v6 < v5 )
        {
          do
          {
            v38 = v6++;
            v39 = a1[1] + 32 * v38;
            *(_QWORD *)v39 = 0;
            *(_DWORD *)(v39 + 24) = 0;
            *(_OWORD *)(v39 + 8) = 0;
          }
          while ( v5 != v6 );
        }
      }
      a1[2] = v5;
    }
  }
  v69 = v3;
  v70 = 0;
  v12 = node_iterator_goup(&v69);
  v13 = *(_QWORD *)v12;
  LODWORD(v12) = *(_DWORD *)(v12 + 8);
  v14 = 0;
  v69 = v13;
  v70 = v12;
LABEL_9:
  v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3);
  v16 = v70;
  v17 = 0;
  if ( v15 != v70 || v3 != v69 )
  {
    while ( 1 )
    {
      if ( v17 >= (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 96LL))(v3, v16) )
      {
        if ( v14 < (int)v16 )
        {
          v24 = 4LL * v14;
          do
          {
            *(_DWORD *)(*(_QWORD *)(*a1 + 80LL) + v24) = 0x7FFFFFFF;
            v24 += 4;
          }
          while ( 4 * (v14 + (unsigned __int64)(v16 - v14)) != v24 );
          v14 = v16;
        }
        ++v14;
        v25 = qsnprintf(s, 1024, "%d: ", v16);
        v59 = &s[v25];
        (*(void (__fastcall **)(__int64, char *, _QWORD, _QWORD))(*(_QWORD *)v3 + 16LL))(
          v3,
          v59,
          (unsigned int)(1024 - v25),
          v16);
        if ( !*v59 )
          *(v59 - 2) = 0;
        v60 = (__int64 *)(a1[1] + 32LL * (int)v16);
        v26 = strlen(s);
        v27 = v60;
        v28 = v26;
        if ( v26 )
        {
          v32 = (void *)*v60;
          v33 = v26 + 1;
          if ( v60[2] < v26 + 1 )
          {
            v67 = v26;
            v66 = v26 + 1;
            v34 = qvector_reserve(v60, *v60, v33, 1);
            v27 = v60;
            v28 = v67;
            v32 = (void *)v34;
            v33 = v66;
            *v60 = v34;
          }
          v27[1] = v33;
          v65 = v27;
          v61 = v28;
          memmove(v32, s, v28);
          v27 = v65;
          v28 = v61;
          *(_BYTE *)(*v65 + v61) = 0;
        }
        else
        {
          v60[1] = 0;
        }
        v29 = *(__int64 (**)())(*(_QWORD *)v3 + 136LL);
        v30 = -1;
        if ( v29 != sub_64A00 )
        {
          v62 = v27;
          v30 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64 (*)(), __int64 (*)(), __int64 *, size_t))v29)(
                  v3,
                  v16,
                  v29,
                  sub_64A00,
                  v27,
                  v28);
          v27 = v62;
        }
        *((_DWORD *)v27 + 6) = v30;
        ++v70;
        node_iterator_goup(&v69);
        goto LABEL_9;
      }
      v18 = (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v3 + 112LL))(
              v3,
              v16,
              (unsigned int)v17);
      v19 = *(__int64 (**)())(*(_QWORD *)v3 + 144LL);
      if ( v19 == sub_133C70 )
        break;
      v58 = v18;
      v23 = ((__int64 (__fastcall *)(__int64, _QWORD))v19)(v3, v16);
      v20 = *a1;
      LODWORD(v71[0]) = v23;
      v72 = 0;
      v18 = v58;
      HIDWORD(v71[1]) = -1;
      *(_QWORD *)((char *)v71 + 4) = 0xFFFFFFFF00000001LL;
      v71[2] = 0;
      v21 = *(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD *))(*(_QWORD *)v20 + 208LL);
      if ( v23 == -1 )
        goto LABEL_13;
      v22 = v71;
LABEL_14:
      v21(v20, v16, v18, v22);
      if ( v71[2] )
      {
        *(_QWORD *)&v72 = 0;
        qfree(v71[2]);
      }
      ++v17;
    }
    v20 = *a1;
    *(_OWORD *)&v71[1] = 0xFFFFFFFFFFFFFFFFLL;
    v71[0] = 0x1FFFFFFFFLL;
    v72 = 0;
    v21 = *(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD *))(*(_QWORD *)v20 + 208LL);
LABEL_13:
    v22 = nullptr;
    goto LABEL_14;
  }
  return v74 - __readfsqword(0x28u);
}
