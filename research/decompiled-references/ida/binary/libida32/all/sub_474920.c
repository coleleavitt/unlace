unsigned __int64 __fastcall sub_474920(__int64 a1, __m128i *a2, int a3, const __m128i *a4)
{
  __int64 v6; // r12
  unsigned int v7; // r14d
  unsigned int v8; // eax
  int v9; // r13d
  __int64 *v10; // r15
  int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // r14
  const char *v18; // rdx
  const char *v19; // rdx
  __int64 v20; // r15
  const char *v21; // rdx
  const char *v22; // rdx
  unsigned int v23; // ebx
  unsigned int v24; // eax
  __int64 v25; // rdi
  __int64 *v26; // rbp
  int v27; // eax
  __int64 v28; // rsi
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rsi
  unsigned int v33; // eax
  char *v34; // rsi
  __int64 segment_translations; // [rsp+8h] [rbp-130h]
  int v36; // [rsp+2Ch] [rbp-10Ch] BYREF
  int v37; // [rsp+30h] [rbp-108h] BYREF
  int v38; // [rsp+34h] [rbp-104h] BYREF
  int v39; // [rsp+38h] [rbp-100h] BYREF
  int v40; // [rsp+3Ch] [rbp-FCh] BYREF
  void *v41; // [rsp+40h] [rbp-F8h] BYREF
  __int128 v42; // [rsp+48h] [rbp-F0h]
  void *v43; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v44; // [rsp+68h] [rbp-D0h]
  void *v45; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v46; // [rsp+88h] [rbp-B0h]
  void *ptr; // [rsp+A0h] [rbp-98h] BYREF
  __int128 v48; // [rsp+A8h] [rbp-90h]
  void *v49; // [rsp+C0h] [rbp-78h] BYREF
  __int128 v50; // [rsp+C8h] [rbp-70h]
  void *v51; // [rsp+D8h] [rbp-60h] BYREF
  __int128 v52; // [rsp+E0h] [rbp-58h]
  unsigned __int64 v53; // [rsp+F8h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  v41 = nullptr;
  v43 = nullptr;
  v6 = switch_dbctx(a3);
  v42 = 0;
  v44 = 0;
  v7 = a4->m128i_i32[0];
  v8 = ea2node(a4->m128i_u32[0]);
  v9 = -1;
  if ( netnode_supval(v8, 10, &v49, 4, 65) > 0 )
    v9 = (_DWORD)v49 - 1;
  v45 = nullptr;
  v46 = 0;
  segment_translations = get_segment_translations(&v45, v7);
  sub_4F9200(*(_QWORD *)(v6 + 1480), &v41, a4, 0);
  sub_4F8CF0(*(_QWORD *)(v6 + 1480), &v43, a4);
  v10 = *(__int64 **)(v6 + 1480);
  ptr = nullptr;
  v48 = 0;
  v11 = sub_3B90A0(v10, v7);
  v12 = *v10;
  v37 = v11;
  v13 = sub_79B5C0(&v37, v12, 29, 0, 0, 83);
  v14 = v13;
  if ( v13 > 0 )
  {
    v30 = v48;
    if ( (unsigned __int64)v48 < v13 )
    {
      v34 = (char *)ptr;
      if ( *((_QWORD *)&v48 + 1) < (unsigned __int64)v13 )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v13, 1);
        v30 = v48;
        v34 = (char *)ptr;
      }
      memset(&v34[v30], 0, v14 - v30);
      *(_QWORD *)&v48 = v14;
    }
    else if ( v13 != (_QWORD)v48 )
    {
      *(_QWORD *)&v48 = v13;
    }
    v31 = sub_3B90A0(v10, v7);
    v32 = *v10;
    v36 = v31;
    v14 = sub_79B5C0(&v36, v32, 29, ptr, v14, 83);
  }
  v49 = nullptr;
  v15 = qword_2CA1698;
  v50 = 0;
  v51 = nullptr;
  v52 = 0;
  sub_4ECB80(&v49, *(_QWORD *)(qword_2CA1698 + 1480) + 1552LL, a4, 0);
  sub_4ECB80(&v51, *(_QWORD *)(v15 + 1480) + 1552LL, a4, 1);
  v16 = switch_dbctx(*(int *)(a1 + 8));
  v17 = v16;
  v18 = haystack;
  if ( (_QWORD)v42 )
    v18 = (const char *)v41;
  sub_666350(*(_QWORD *)(v16 + 1480), a2, v18, 0);
  v19 = haystack;
  if ( (_QWORD)v44 )
    v19 = (const char *)v43;
  sub_666050(*(_QWORD *)(v17 + 1480), a2, v19, 0);
  v20 = qword_2CA1698;
  v21 = haystack;
  if ( (_QWORD)v50 )
    v21 = (const char *)v49;
  sub_4F0D50(*(_QWORD *)(qword_2CA1698 + 1480) + 1552LL, a2, v21, 0);
  v22 = haystack;
  if ( (_QWORD)v52 )
    v22 = (const char *)v51;
  sub_4F0D50(*(_QWORD *)(v20 + 1480) + 1552LL, a2, v22, 1);
  a2[1].m128i_i32[0] = a4[1].m128i_i32[0];
  a2[1].m128i_i8[4] = a4[1].m128i_i8[4];
  a2[1].m128i_i8[5] = a4[1].m128i_i8[5];
  a2[1].m128i_i8[6] = a4[1].m128i_i8[6];
  a2[1].m128i_i8[7] = a4[1].m128i_i8[7];
  a2[1].m128i_i16[4] = a4[1].m128i_i16[4];
  a2[1].m128i_i32[3] = a4[1].m128i_i32[3];
  a2[2] = _mm_loadu_si128(a4 + 2);
  a2[3] = _mm_loadu_si128(a4 + 3);
  a2[4] = _mm_loadu_si128(a4 + 4);
  a2[5] = _mm_loadu_si128(a4 + 5);
  a2[6].m128i_i8[0] = a4[6].m128i_i8[0];
  a2[6].m128i_i32[1] = a4[6].m128i_i32[1];
  update_segm(a2);
  v23 = a2->m128i_i32[0];
  if ( v9 == -1 )
  {
    v33 = ea2node(v23);
    netnode_supdel(v33, 10, 65);
  }
  else
  {
    v38 = v9 + 1;
    v24 = ea2node(v23);
    netnode_supset(v24, 10, &v38, 4, 65);
  }
  v25 = *(_QWORD *)(v17 + 1480);
  if ( segment_translations == -1 )
    sub_666920(v25, v23);
  else
    sub_6667E0(v25, v23, &v45);
  v26 = *(__int64 **)(v17 + 1480);
  v27 = sub_3B90A0(v26, v23);
  v28 = *v26;
  if ( v14 <= 0 )
  {
    v40 = v27;
    sub_79B4D0(&v40, v28, 29, 83);
  }
  else
  {
    v39 = v27;
    sub_79B440(&v39, v28, 29, ptr, v48, 83);
  }
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree(v51);
  }
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree(v49);
  }
  if ( ptr )
  {
    *(_QWORD *)&v48 = 0;
    qfree(ptr);
  }
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree(v45);
  }
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    qfree(v43);
  }
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    qfree(v41);
  }
  return v53 - __readfsqword(0x28u);
}

