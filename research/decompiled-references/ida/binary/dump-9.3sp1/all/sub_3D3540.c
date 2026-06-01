__int64 __fastcall sub_3D3540(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v4; // r8
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 **v7; // rdi
  __int64 *v8; // rax
  __int64 *v9; // rdx
  __int64 v10; // rbx
  __int64 v12; // rax
  __int64 *v13; // r12
  __int64 v14; // rdi
  _QWORD *v15; // rax
  __int64 v16; // r13
  __int64 v17; // rbp
  __int64 v18; // r15
  int v19; // r8d
  __int64 v20; // rbp
  __int64 v21; // r15
  __int64 v22; // rbp
  __int64 v23; // r13
  char *v24; // rsi
  __int64 v25; // rbp
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  size_t v29; // r14
  _QWORD *v30; // r13
  __int64 v31; // r15
  __int64 v32; // r13
  __int64 v33; // rbp
  int v34; // esi
  __int64 v35; // rbp
  __int64 v36; // r13
  __int64 v37; // r15
  __int64 v38; // rbx
  __int64 v39; // rbp
  int v40; // ecx
  __int64 v41; // rbx
  void *v42; // rax
  void *v43; // rsi
  char *v44; // rsi
  char *v45; // rsi
  __m128i si128; // xmm0
  char *v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // [rsp+0h] [rbp-88h]
  __int64 v54; // [rsp+0h] [rbp-88h]
  int v55; // [rsp+0h] [rbp-88h]
  __int64 v56; // [rsp+8h] [rbp-80h]
  __int64 v57; // [rsp+8h] [rbp-80h]
  __int64 v58; // [rsp+10h] [rbp-78h] BYREF
  __int128 v59; // [rsp+18h] [rbp-70h]
  void *src; // [rsp+30h] [rbp-58h] BYREF
  size_t n; // [rsp+38h] [rbp-50h]
  unsigned __int64 v62; // [rsp+48h] [rbp-40h]

  v2 = *(_DWORD *)a2;
  v62 = __readfsqword(0x28u);
  if ( v2 > 0x2F )
  {
    v15 = *(_QWORD **)(a2 + 8);
    v7 = (__int64 **)(v15 + 1);
    *(_QWORD *)(a2 + 8) = v15 + 1;
    v6 = *v15;
  }
  else
  {
    v4 = *(_QWORD *)(a2 + 16);
    v5 = v2 + 8;
    *(_DWORD *)a2 = v5;
    v6 = *(_QWORD *)(v4 + v2);
    if ( (unsigned int)v5 <= 0x2F )
    {
      v7 = (__int64 **)(v4 + v5);
      *(_DWORD *)a2 = v2 + 16;
      goto LABEL_4;
    }
    v7 = *(__int64 ***)(a2 + 8);
  }
  *(_QWORD *)(a2 + 8) = v7 + 1;
LABEL_4:
  v8 = *(__int64 **)(a1 + 2088);
  v9 = &v8[*(_QWORD *)(a1 + 2096)];
  if ( v8 != v9 )
  {
    while ( 1 )
    {
      v10 = *v8;
      if ( *v8 )
      {
        if ( *(_QWORD *)v10 == v6 )
          break;
      }
      if ( v9 == ++v8 )
        return 0;
    }
    v12 = *(_QWORD *)(v10 + 64);
    if ( v12 && (unsigned int)(*(_DWORD *)(v12 + 60) - 1) <= 1 && *(_QWORD *)(v10 + 80) )
    {
      v13 = *v7;
      v14 = *(_QWORD *)(v10 + 80);
      v59 = 0;
      v58 = 0;
      sub_3D0150(v14, &v58);
      if ( (_QWORD)v59 )
      {
        sub_3D1770((__int64)&src, &v58);
        v16 = v13[1];
        v53 = *(unsigned int *)(v10 + 8);
        v56 = *v13;
        if ( v16 )
        {
          v17 = *v13;
          v18 = 0;
          while ( !*(_QWORD *)(v17 + 8) || strcmp(*(const char **)v17, "view_index") )
          {
            ++v18;
            v17 += 40;
            if ( v16 == v18 )
              goto LABEL_51;
          }
        }
        else
        {
LABEL_51:
          if ( v13[2] < (unsigned __int64)(v16 + 1) )
          {
            v56 = qvector_reserve((__int64)v13, v56, v16 + 1, 40);
            v16 = v13[1];
            *v13 = v56;
          }
          v17 = v56 + 40 * v16;
          *(_QWORD *)v17 = 0;
          *(_OWORD *)(v17 + 8) = 0;
          *(_DWORD *)(v17 + 24) = 0;
          *(_QWORD *)(v17 + 32) = 0;
          ++v13[1];
          v44 = *(char **)v17;
          if ( *(_QWORD *)(v17 + 16) <= 0xAu )
          {
            v49 = qvector_reserve(v17, (__int64)v44, 11, 1);
            *(_QWORD *)v17 = v49;
            v44 = (char *)v49;
          }
          *(_QWORD *)(v17 + 8) = 11;
          qmemcpy(v44, "view_index", 10);
          *(_BYTE *)(*(_QWORD *)v17 + 10LL) = 0;
        }
        v19 = *(_DWORD *)(v17 + 24);
        v20 = v17 + 24;
        if ( v19 )
          jvalue_t_clear();
        *(_DWORD *)v20 = 1;
        *(_QWORD *)(v20 + 8) = v53;
        v21 = v13[1];
        v54 = *v13;
        if ( v21 )
        {
          v22 = *v13;
          v23 = 0;
          while ( 1 )
          {
            if ( *(_QWORD *)(v22 + 8) )
            {
              v24 = "location";
              if ( !strcmp(*(const char **)v22, "location") )
                break;
            }
            ++v23;
            v22 += 40;
            if ( v21 == v23 )
              goto LABEL_61;
          }
        }
        else
        {
LABEL_61:
          if ( v13[2] < (unsigned __int64)(v21 + 1) )
          {
            v54 = qvector_reserve((__int64)v13, v54, v21 + 1, 40);
            v21 = v13[1];
            *v13 = v54;
          }
          v22 = v54 + 40 * v21;
          *(_QWORD *)v22 = 0;
          *(_OWORD *)(v22 + 8) = 0;
          *(_DWORD *)(v22 + 24) = 0;
          *(_QWORD *)(v22 + 32) = 0;
          ++v13[1];
          v24 = *(char **)v22;
          if ( *(_QWORD *)(v22 + 16) <= 8u )
          {
            v48 = qvector_reserve(v22, (__int64)v24, 9, 1);
            *(_QWORD *)v22 = v48;
            v24 = (char *)v48;
          }
          *(_QWORD *)(v22 + 8) = 9;
          *(_QWORD *)v24 = 0x6E6F697461636F6CLL;
          *(_BYTE *)(*(_QWORD *)v22 + 8LL) = 0;
        }
        v25 = v22 + 24;
        v26 = operator new(0x18u);
        v29 = n;
        *(_QWORD *)v26 = 0;
        v30 = (_QWORD *)v26;
        *(_OWORD *)(v26 + 8) = 0;
        if ( v29 )
        {
          v42 = (void *)qalloc_or_throw(v29, (__int64)v24, v27, v28);
          *v30 = v42;
          v43 = src;
          v30[2] = v29;
          memcpy(v42, v43, v29);
          v30[1] = v29;
        }
        if ( *(_DWORD *)v25 )
          jvalue_t_clear();
        *(_QWORD *)(v25 + 8) = v30;
        v31 = 0;
        *(_DWORD *)v25 = 2;
        v32 = v13[1];
        v55 = *(_DWORD *)(v10 + 40);
        v57 = *v13;
        v33 = *v13;
        if ( v32 )
        {
          while ( !*(_QWORD *)(v33 + 8) || strcmp(*(const char **)v33, "x_cursor_in_view") )
          {
            ++v31;
            v33 += 40;
            if ( v32 == v31 )
              goto LABEL_56;
          }
        }
        else
        {
LABEL_56:
          if ( v13[2] < (unsigned __int64)(v32 + 1) )
          {
            v57 = qvector_reserve((__int64)v13, v57, v32 + 1, 40);
            v32 = v13[1];
            *v13 = v57;
          }
          v33 = v57 + 40 * v32;
          *(_QWORD *)v33 = 0;
          *(_OWORD *)(v33 + 8) = 0;
          *(_DWORD *)(v33 + 24) = 0;
          *(_QWORD *)(v33 + 32) = 0;
          ++v13[1];
          v45 = *(char **)v33;
          if ( *(_QWORD *)(v33 + 16) <= 0x10u )
          {
            v50 = qvector_reserve(v33, (__int64)v45, 17, 1);
            *(_QWORD *)v33 = v50;
            v45 = (char *)v50;
          }
          si128 = _mm_load_si128((const __m128i *)&xmmword_424B00);
          *(_QWORD *)(v33 + 8) = 17;
          *(__m128i *)v45 = si128;
          *(_BYTE *)(*(_QWORD *)v33 + 16LL) = 0;
        }
        v34 = *(_DWORD *)(v33 + 24);
        v35 = v33 + 24;
        if ( v34 )
          jvalue_t_clear();
        *(_DWORD *)v35 = 1;
        *(_QWORD *)(v35 + 8) = v55;
        if ( *(_QWORD *)(v10 + 88) )
        {
          v36 = v13[1];
          v37 = *v13;
          if ( v36 )
          {
            v38 = *v13;
            v39 = 0;
            while ( !*(_QWORD *)(v38 + 8) || strcmp(*(const char **)v38, "is_synchronized") )
            {
              ++v39;
              v38 += 40;
              if ( v36 == v39 )
                goto LABEL_66;
            }
          }
          else
          {
LABEL_66:
            if ( v13[2] < (unsigned __int64)(v36 + 1) )
            {
              v52 = qvector_reserve((__int64)v13, v37, v36 + 1, 40);
              *v13 = v52;
              v36 = v13[1];
              v37 = v52;
            }
            v38 = v37 + 40 * v36;
            *(_QWORD *)v38 = 0;
            *(_OWORD *)(v38 + 8) = 0;
            *(_DWORD *)(v38 + 24) = 0;
            *(_QWORD *)(v38 + 32) = 0;
            ++v13[1];
            v47 = *(char **)v38;
            if ( *(_QWORD *)(v38 + 16) <= 0xFu )
            {
              v51 = qvector_reserve(v37 + 40 * v36, (__int64)v47, 16, 1);
              *(_QWORD *)v38 = v51;
              v47 = (char *)v51;
            }
            *(_QWORD *)(v38 + 8) = 16;
            qmemcpy(v47, "is_synchronized", 15);
            *(_BYTE *)(*(_QWORD *)v38 + 15LL) = 0;
          }
          v40 = *(_DWORD *)(v38 + 24);
          v41 = v38 + 24;
          if ( v40 )
            jvalue_t_clear();
          *(_DWORD *)v41 = 5;
          *(_BYTE *)(v41 + 8) = 1;
        }
        if ( src )
        {
          n = 0;
          qfree((__int64)src);
        }
      }
      if ( v58 )
      {
        *(_QWORD *)&v59 = 0;
        qfree(v58);
      }
    }
  }
  return 0;
}
