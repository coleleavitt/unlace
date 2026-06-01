__int64 __fastcall sub_69D2B0(__int64 a1, __int64 a2, const char *a3, __int64 a4)
{
  char *v7; // r12
  void *v8; // r14
  _QWORD *tinfo_property; // rbp
  __int64 v10; // r12
  size_t v12; // rax
  __int64 member; // rax
  __int64 v14; // rbp
  unsigned __int64 v15; // r8
  size_t v16; // r9
  unsigned __int64 v17; // r8
  size_t v18; // r9
  const char *v19; // rdx
  __int64 idati; // rax
  const void *v21; // r10
  void *v22; // rax
  const void *v23; // r10
  void *v24; // rax
  size_t v25; // [rsp+0h] [rbp-110h]
  unsigned __int64 v26; // [rsp+0h] [rbp-110h]
  unsigned __int64 v27; // [rsp+0h] [rbp-110h]
  unsigned __int64 v28; // [rsp+0h] [rbp-110h]
  unsigned __int64 v29; // [rsp+0h] [rbp-110h]
  size_t n; // [rsp+8h] [rbp-108h]
  size_t na; // [rsp+8h] [rbp-108h]
  size_t nb; // [rsp+8h] [rbp-108h]
  const void *v33; // [rsp+10h] [rbp-100h]
  const void *v34; // [rsp+10h] [rbp-100h]
  __int64 v35; // [rsp+20h] [rbp-F0h] BYREF
  void *ptr; // [rsp+28h] [rbp-E8h] BYREF
  __int128 v37; // [rsp+30h] [rbp-E0h]
  __int128 v38; // [rsp+48h] [rbp-C8h] BYREF
  void *v39; // [rsp+58h] [rbp-B8h] BYREF
  __int128 v40; // [rsp+60h] [rbp-B0h]
  void *v41; // [rsp+70h] [rbp-A0h]
  __int128 v42; // [rsp+78h] [rbp-98h]
  __int128 v43; // [rsp+88h] [rbp-88h] BYREF
  __int64 v44; // [rsp+A8h] [rbp-68h]
  int v45; // [rsp+B0h] [rbp-60h]
  __int64 v46; // [rsp+B8h] [rbp-58h]
  char v47; // [rsp+C0h] [rbp-50h]
  unsigned __int64 v48; // [rsp+D0h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  v37 = 0;
  ptr = nullptr;
  v7 = sub_69C980(a3, (__int64)&ptr);
  v8 = ptr;
  if ( v7 )
  {
    v35 = 0;
    if ( a4 )
    {
      copy_tinfo_t(&v35);
    }
    else
    {
      v19 = haystack;
      if ( (_QWORD)v37 )
        v19 = (const char *)ptr;
      if ( !v19 )
        goto LABEL_5;
      idati = *(_QWORD *)(a1 + 8);
      *((_QWORD *)&v38 + 1) = v19;
      LOWORD(v39) = 256;
      if ( !idati )
        idati = get_idati(a3, &ptr);
      *(_QWORD *)&v38 = idati;
      if ( !(unsigned __int8)create_tinfo(&v35, 61, 61, &v38) )
        goto LABEL_5;
    }
    tinfo_property = (_QWORD *)get_tinfo_property(v35, 309);
    if ( tinfo_property )
    {
      v39 = nullptr;
      v41 = nullptr;
      v44 = 1;
      v45 = -1;
      v46 = 0;
      v47 = 0;
      v38 = 0;
      v40 = 0;
      v42 = 0;
      v43 = 0;
      v12 = strlen(v7);
      if ( v12 )
      {
        n = v12;
        v25 = v12 + 1;
        v39 = (void *)qvector_reserve(&v39, 0, v12 + 1, 1);
        *(_QWORD *)&v40 = v25;
        memmove(v39, v7, n);
        *((_BYTE *)v39 + n) = 0;
      }
      member = udt_type_data_t__find_member((int)tinfo_property);
      v10 = member;
      if ( member >= 0 && a2 )
      {
        v14 = *tinfo_property + (member << 7);
        *(_QWORD *)a2 = *(_QWORD *)v14;
        *(_QWORD *)(a2 + 8) = *(_QWORD *)(v14 + 8);
        if ( a2 + 16 != v14 + 16 )
        {
          v15 = *(_QWORD *)(v14 + 24);
          if ( v15 && (v16 = v15 - 1, v15 != 1) )
          {
            v21 = *(const void **)(v14 + 16);
            v22 = *(void **)(a2 + 16);
            if ( *(_QWORD *)(a2 + 32) < v15 )
            {
              v33 = *(const void **)(v14 + 16);
              na = v15 - 1;
              v28 = *(_QWORD *)(v14 + 24);
              v22 = (void *)qvector_reserve(a2 + 16, *(_QWORD *)(a2 + 16), v28, 1);
              v21 = v33;
              v16 = na;
              *(_QWORD *)(a2 + 16) = v22;
              v15 = v28;
            }
            *(_QWORD *)(a2 + 24) = v15;
            v26 = v15;
            memmove(v22, v21, v16);
            *(_BYTE *)(*(_QWORD *)(a2 + 16) + v26 - 1) = 0;
          }
          else
          {
            *(_QWORD *)(a2 + 24) = 0;
          }
        }
        if ( a2 + 40 != v14 + 40 )
        {
          v17 = *(_QWORD *)(v14 + 48);
          if ( v17 && (v18 = v17 - 1, v17 != 1) )
          {
            v23 = *(const void **)(v14 + 40);
            v24 = *(void **)(a2 + 40);
            if ( *(_QWORD *)(a2 + 56) < v17 )
            {
              v34 = *(const void **)(v14 + 40);
              nb = v17 - 1;
              v29 = *(_QWORD *)(v14 + 48);
              v24 = (void *)qvector_reserve(a2 + 40, *(_QWORD *)(a2 + 40), v29, 1);
              v23 = v34;
              v18 = nb;
              *(_QWORD *)(a2 + 40) = v24;
              v17 = v29;
            }
            *(_QWORD *)(a2 + 48) = v17;
            v27 = v17;
            memmove(v24, v23, v18);
            *(_BYTE *)(*(_QWORD *)(a2 + 40) + v27 - 1) = 0;
          }
          else
          {
            *(_QWORD *)(a2 + 48) = 0;
          }
        }
        copy_tinfo_t(a2 + 64);
        *(__m128i *)(a2 + 72) = _mm_loadu_si128((const __m128i *)(v14 + 72));
        *(__m128i *)(a2 + 88) = _mm_loadu_si128((const __m128i *)(v14 + 88));
        *(_DWORD *)(a2 + 104) = *(_DWORD *)(v14 + 104);
        *(_DWORD *)(a2 + 112) = *(_DWORD *)(v14 + 112);
        *(_DWORD *)(a2 + 116) = *(_DWORD *)(v14 + 116);
        *(_BYTE *)(a2 + 120) = *(_BYTE *)(v14 + 120);
      }
      clear_tinfo_t(&v43);
      if ( v41 )
      {
        *(_QWORD *)&v42 = 0;
        qfree(v41);
      }
      if ( v39 )
      {
        *(_QWORD *)&v40 = 0;
        qfree(v39);
      }
      goto LABEL_6;
    }
LABEL_5:
    v10 = -1;
LABEL_6:
    clear_tinfo_t(&v35);
    goto LABEL_7;
  }
  v10 = -1;
LABEL_7:
  if ( v8 )
    qfree(v8);
  return v10;
}

