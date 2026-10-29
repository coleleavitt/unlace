unsigned __int64 __fastcall sub_489200(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v6; // r12
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // r13
  _QWORD *v10; // r15
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // r14
  const char *v16; // rdx
  const char *v17; // rdx
  __int64 v18; // r15
  const char *v19; // rdx
  const char *v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // rdi
  _QWORD *v25; // rbp
  __int64 v27; // rdx
  __int64 v28; // rax
  char *v29; // rsi
  __int64 segment_translations; // [rsp+8h] [rbp-140h]
  unsigned __int64 v31; // [rsp+28h] [rbp-120h] BYREF
  unsigned __int64 v32; // [rsp+30h] [rbp-118h] BYREF
  __int64 v33; // [rsp+38h] [rbp-110h] BYREF
  unsigned __int64 v34; // [rsp+40h] [rbp-108h] BYREF
  unsigned __int64 v35; // [rsp+48h] [rbp-100h] BYREF
  void *v36; // [rsp+50h] [rbp-F8h] BYREF
  __int128 v37; // [rsp+58h] [rbp-F0h]
  void *v38; // [rsp+70h] [rbp-D8h] BYREF
  __int128 v39; // [rsp+78h] [rbp-D0h]
  void *v40; // [rsp+90h] [rbp-B8h] BYREF
  __int128 v41; // [rsp+98h] [rbp-B0h]
  void *ptr; // [rsp+B0h] [rbp-98h] BYREF
  __int128 v43; // [rsp+B8h] [rbp-90h]
  void *v44; // [rsp+D0h] [rbp-78h] BYREF
  __int128 v45; // [rsp+D8h] [rbp-70h]
  void *v46; // [rsp+E8h] [rbp-60h] BYREF
  __int128 v47; // [rsp+F0h] [rbp-58h]
  unsigned __int64 v48; // [rsp+108h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  v36 = nullptr;
  v38 = nullptr;
  v6 = switch_dbctx(a3);
  v37 = 0;
  v39 = 0;
  v7 = *a4;
  v8 = ea2node(*a4);
  v9 = -1;
  if ( netnode_supval(v8, 10, &v44, 8, 65) > 0 )
    v9 = (__int64)v44 - 1;
  v40 = nullptr;
  v41 = 0;
  segment_translations = get_segment_translations(&v40, v7);
  sub_510BD0(*(_QWORD *)(v6 + 1672), &v36, a4, 0);
  sub_510630(*(_QWORD *)(v6 + 1672), &v38, a4);
  v10 = *(_QWORD **)(v6 + 1672);
  ptr = nullptr;
  v43 = 0;
  v32 = sub_3BDD60(v10, v7);
  v11 = sub_7BE950(&v32, *v10, 29, 0, 0, 83);
  v12 = v11;
  if ( v11 > 0 )
  {
    v27 = v43;
    if ( (unsigned __int64)v43 < v11 )
    {
      v29 = (char *)ptr;
      if ( *((_QWORD *)&v43 + 1) < (unsigned __int64)v11 )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v11, 1);
        v27 = v43;
        v29 = (char *)ptr;
      }
      memset(&v29[v27], 0, v12 - v27);
      *(_QWORD *)&v43 = v12;
    }
    else if ( v11 != (_QWORD)v43 )
    {
      *(_QWORD *)&v43 = v11;
    }
    v31 = sub_3BDD60(v10, v7);
    v12 = sub_7BE950(&v31, *v10, 29, ptr, v12, 83);
  }
  v44 = nullptr;
  v13 = qword_2CCB598;
  v45 = 0;
  v46 = nullptr;
  v47 = 0;
  sub_504090(&v44, *(_QWORD *)(qword_2CCB598 + 1672) + 1624LL, a4, 0);
  sub_504090(&v46, *(_QWORD *)(v13 + 1672) + 1624LL, a4, 1);
  v14 = switch_dbctx(*(int *)(a1 + 8));
  v15 = v14;
  v16 = haystack;
  if ( (_QWORD)v37 )
    v16 = (const char *)v36;
  sub_6851E0(*(_QWORD *)(v14 + 1672), a2, v16, 0);
  v17 = haystack;
  if ( (_QWORD)v39 )
    v17 = (const char *)v38;
  sub_684EE0(*(_QWORD *)(v15 + 1672), a2, v17, 0);
  v18 = qword_2CCB598;
  v19 = haystack;
  if ( (_QWORD)v45 )
    v19 = (const char *)v44;
  sub_5083D0(*(_QWORD *)(qword_2CCB598 + 1672) + 1624LL, a2, v19, 0);
  v20 = haystack;
  if ( (_QWORD)v47 )
    v20 = (const char *)v46;
  sub_5083D0(*(_QWORD *)(v18 + 1672) + 1624LL, a2, v20, 1);
  *(_QWORD *)(a2 + 32) = a4[4];
  *(_BYTE *)(a2 + 40) = *((_BYTE *)a4 + 40);
  *(_BYTE *)(a2 + 41) = *((_BYTE *)a4 + 41);
  *(_BYTE *)(a2 + 42) = *((_BYTE *)a4 + 42);
  *(_BYTE *)(a2 + 43) = *((_BYTE *)a4 + 43);
  *(_WORD *)(a2 + 44) = *((_WORD *)a4 + 22);
  *(_QWORD *)(a2 + 48) = a4[6];
  *(__m128i *)(a2 + 56) = _mm_loadu_si128((const __m128i *)(a4 + 7));
  *(__m128i *)(a2 + 72) = _mm_loadu_si128((const __m128i *)(a4 + 9));
  *(__m128i *)(a2 + 88) = _mm_loadu_si128((const __m128i *)(a4 + 11));
  *(__m128i *)(a2 + 104) = _mm_loadu_si128((const __m128i *)(a4 + 13));
  *(__m128i *)(a2 + 120) = _mm_loadu_si128((const __m128i *)(a4 + 15));
  *(__m128i *)(a2 + 136) = _mm_loadu_si128((const __m128i *)(a4 + 17));
  *(__m128i *)(a2 + 152) = _mm_loadu_si128((const __m128i *)(a4 + 19));
  *(__m128i *)(a2 + 168) = _mm_loadu_si128((const __m128i *)(a4 + 21));
  *(_BYTE *)(a2 + 184) = *((_BYTE *)a4 + 184);
  *(_DWORD *)(a2 + 188) = *((_DWORD *)a4 + 47);
  update_segm(a2);
  v21 = *(_QWORD *)a2;
  if ( v9 == -1 )
  {
    v28 = ea2node(v21);
    netnode_supdel(v28, 10, 65);
  }
  else
  {
    v33 = v9 + 1;
    v22 = ea2node(v21);
    netnode_supset(v22, 10, &v33, 8, 65, v23);
  }
  v24 = *(_QWORD *)(v15 + 1672);
  if ( segment_translations == -1 )
    sub_6857D0(v24, v21);
  else
    sub_685680(v24, v21, &v40);
  v25 = *(_QWORD **)(v15 + 1672);
  if ( v12 <= 0 )
  {
    v35 = sub_3BDD60(v25, v21);
    sub_7BE850(&v35, *v25, 29, 83);
  }
  else
  {
    v34 = sub_3BDD60(v25, v21);
    sub_7BE7C0(&v34, *v25, 29, ptr, v43, 83);
  }
  if ( v46 )
  {
    *(_QWORD *)&v47 = 0;
    qfree(v46);
  }
  if ( v44 )
  {
    *(_QWORD *)&v45 = 0;
    qfree(v44);
  }
  if ( ptr )
  {
    *(_QWORD *)&v43 = 0;
    qfree(ptr);
  }
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(v40);
  }
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree(v38);
  }
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36);
  }
  return v48 - __readfsqword(0x28u);
}
