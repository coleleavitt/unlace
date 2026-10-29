__int64 __fastcall sub_3C9340(__int64 a1, int *a2)
{
  unsigned int v2; // eax
  __int64 v3; // r8
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 **v6; // r8
  _QWORD *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 *v10; // r12
  __int64 *v12; // rax
  __int64 *v13; // r8
  __int64 v14; // r13
  __int64 v15; // rbp
  __int64 v16; // r15
  int v17; // r8d
  __int64 v18; // rbp
  __int64 v19; // r15
  __int64 v20; // rbp
  __int64 v21; // r13
  __int64 v22; // rbp
  __int64 v23; // rax
  size_t v24; // r14
  _QWORD *v25; // r13
  __int64 v26; // r15
  __int64 v27; // r13
  __int64 v28; // rbp
  int v29; // esi
  __int64 v30; // rbp
  __int64 v31; // rbx
  void *v32; // rax
  void *v33; // rsi
  char *v34; // rsi
  char *v35; // rsi
  char *v36; // rsi
  __m128i si128; // xmm0
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // [rsp+0h] [rbp-88h]
  __int64 v42; // [rsp+0h] [rbp-88h]
  int v43; // [rsp+0h] [rbp-88h]
  __int64 v44; // [rsp+8h] [rbp-80h]
  __int64 v45; // [rsp+8h] [rbp-80h]
  __int64 v46; // [rsp+10h] [rbp-78h] BYREF
  __int128 v47; // [rsp+18h] [rbp-70h]
  void *src; // [rsp+30h] [rbp-58h] BYREF
  size_t n; // [rsp+38h] [rbp-50h]
  unsigned __int64 v50; // [rsp+48h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  v2 = *a2;
  if ( (unsigned int)*a2 > 0x2F )
  {
    v12 = (__int64 *)*((_QWORD *)a2 + 1);
    v13 = v12 + 1;
    *((_QWORD *)a2 + 1) = v12 + 1;
    v4 = *v12;
LABEL_13:
    *((_QWORD *)a2 + 1) = v13 + 1;
    goto LABEL_4;
  }
  v3 = *((_QWORD *)a2 + 2);
  *a2 = v2 + 8;
  v4 = *(_QWORD *)(v3 + v2);
  if ( v2 + 8 > 0x2F )
  {
    v13 = (__int64 *)*((_QWORD *)a2 + 1);
    goto LABEL_13;
  }
  *a2 = v2 + 16;
LABEL_4:
  v5 = sub_3C9300(a1, v4);
  v7 = v5;
  if ( v5 )
  {
    v8 = v5[8];
    if ( v8 )
    {
      if ( (unsigned int)(*(_DWORD *)(v8 + 60) - 1) <= 1 )
      {
        v9 = v7[10];
        if ( v9 )
        {
          v10 = *v6;
          v46 = 0;
          v47 = 0;
          sub_3C69C0(v9, &v46);
          if ( (_QWORD)v47 )
          {
            sub_3C71E0((__int64 *)&src, &v46);
            v14 = v10[1];
            v41 = *((unsigned int *)v7 + 2);
            v44 = *v10;
            if ( v14 )
            {
              v15 = *v10;
              v16 = 0;
              while ( !*(_QWORD *)(v15 + 8) || strcmp(*(const char **)v15, "view_index") )
              {
                ++v16;
                v15 += 40;
                if ( v14 == v16 )
                  goto LABEL_48;
              }
            }
            else
            {
LABEL_48:
              if ( v10[2] < (unsigned __int64)(v14 + 1) )
              {
                v44 = qvector_reserve();
                v14 = v10[1];
                *v10 = v44;
              }
              v15 = v44 + 40 * v14;
              *(_QWORD *)v15 = 0;
              *(_OWORD *)(v15 + 8) = 0;
              *(_DWORD *)(v15 + 24) = 0;
              *(_QWORD *)(v15 + 32) = 0;
              ++v10[1];
              v35 = *(char **)v15;
              if ( *(_QWORD *)(v15 + 16) <= 0xAu )
              {
                v39 = qvector_reserve();
                *(_QWORD *)v15 = v39;
                v35 = (char *)v39;
              }
              *(_QWORD *)(v15 + 8) = 11;
              qmemcpy(v35, "view_index", 10);
              *(_BYTE *)(*(_QWORD *)v15 + 10LL) = 0;
            }
            v17 = *(_DWORD *)(v15 + 24);
            v18 = v15 + 24;
            if ( v17 )
              jvalue_t_clear();
            *(_DWORD *)v18 = 1;
            *(_QWORD *)(v18 + 8) = v41;
            v19 = v10[1];
            v42 = *v10;
            if ( v19 )
            {
              v20 = *v10;
              v21 = 0;
              while ( !*(_QWORD *)(v20 + 8) || strcmp(*(const char **)v20, "location") )
              {
                ++v21;
                v20 += 40;
                if ( v19 == v21 )
                  goto LABEL_43;
              }
            }
            else
            {
LABEL_43:
              if ( v10[2] < (unsigned __int64)(v19 + 1) )
              {
                v42 = qvector_reserve();
                v19 = v10[1];
                *v10 = v42;
              }
              v20 = v42 + 40 * v19;
              *(_QWORD *)v20 = 0;
              *(_OWORD *)(v20 + 8) = 0;
              *(_DWORD *)(v20 + 24) = 0;
              *(_QWORD *)(v20 + 32) = 0;
              ++v10[1];
              v34 = *(char **)v20;
              if ( *(_QWORD *)(v20 + 16) <= 8u )
              {
                v38 = qvector_reserve();
                *(_QWORD *)v20 = v38;
                v34 = (char *)v38;
              }
              *(_QWORD *)(v20 + 8) = 9;
              *(_QWORD *)v34 = 0x6E6F697461636F6CLL;
              *(_BYTE *)(*(_QWORD *)v20 + 8LL) = 0;
            }
            v22 = v20 + 24;
            v23 = operator new(0x18u);
            v24 = n;
            *(_QWORD *)v23 = 0;
            v25 = (_QWORD *)v23;
            *(_OWORD *)(v23 + 8) = 0;
            if ( v24 )
            {
              v32 = (void *)qalloc_or_throw();
              *v25 = v32;
              v33 = src;
              v25[2] = v24;
              memcpy(v32, v33, v24);
              v25[1] = v24;
            }
            if ( *(_DWORD *)v22 )
              jvalue_t_clear();
            *(_QWORD *)(v22 + 8) = v25;
            v26 = 0;
            *(_DWORD *)v22 = 2;
            v27 = v10[1];
            v43 = *((_DWORD *)v7 + 10);
            v45 = *v10;
            v28 = *v10;
            if ( v27 )
            {
              while ( !*(_QWORD *)(v28 + 8) || strcmp(*(const char **)v28, "x_cursor_in_view") )
              {
                ++v26;
                v28 += 40;
                if ( v27 == v26 )
                  goto LABEL_53;
              }
            }
            else
            {
LABEL_53:
              if ( v10[2] < (unsigned __int64)(v27 + 1) )
              {
                v45 = qvector_reserve();
                v27 = v10[1];
                *v10 = v45;
              }
              v28 = v45 + 40 * v27;
              *(_QWORD *)v28 = 0;
              *(_OWORD *)(v28 + 8) = 0;
              *(_DWORD *)(v28 + 24) = 0;
              *(_QWORD *)(v28 + 32) = 0;
              ++v10[1];
              v36 = *(char **)v28;
              if ( *(_QWORD *)(v28 + 16) <= 0x10u )
              {
                v40 = qvector_reserve();
                *(_QWORD *)v28 = v40;
                v36 = (char *)v40;
              }
              si128 = _mm_load_si128((const __m128i *)&xmmword_425EA0);
              *(_QWORD *)(v28 + 8) = 17;
              *(__m128i *)v36 = si128;
              *(_BYTE *)(*(_QWORD *)v28 + 16LL) = 0;
            }
            v29 = *(_DWORD *)(v28 + 24);
            v30 = v28 + 24;
            if ( v29 )
              jvalue_t_clear();
            *(_DWORD *)v30 = 1;
            *(_QWORD *)(v30 + 8) = v43;
            if ( v7[11] )
            {
              v31 = sub_3C8110(v10, "is_synchronized");
              if ( *(_DWORD *)v31 )
                jvalue_t_clear();
              *(_DWORD *)v31 = 5;
              *(_BYTE *)(v31 + 8) = 1;
            }
            if ( src )
            {
              n = 0;
              qfree();
            }
          }
          if ( v46 )
          {
            *(_QWORD *)&v47 = 0;
            qfree();
          }
        }
      }
    }
  }
  return 0;
}
