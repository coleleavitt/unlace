__int64 __fastcall sub_7AF7D0(unsigned int **a1, __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned int *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int *v12; // rax
  __int64 v13; // rax
  __int64 undo_param; // rax
  unsigned __int64 v15; // rcx
  unsigned int v16; // edx
  unsigned __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rax
  bool v20; // zf
  void *v21; // rdi
  __int64 v22; // rbp
  void *v23; // rdi
  char *v24; // rdx
  __int64 v25; // r12
  __int64 i; // rbp
  char *v27; // rax
  void *v28; // rdi
  void *v29; // rdi
  __int64 v30; // rbp
  void *v31; // rdi
  char *v32; // rdx
  __int64 v33; // r12
  __int64 j; // rbp
  char *v35; // rax
  void *v36; // rdi
  _QWORD v37[519]; // [rsp+0h] [rbp-1038h] BYREF

  v37[513] = __readfsqword(0x28u);
  if ( *a1 )
    return -1;
  if ( (unsigned __int8)is_cvt64(a1, a2, a3) )
  {
    set_file_ext(v37, 4096, a2, "id3");
    if ( (unsigned int)sub_7BA150(v37) == 3 )
      return -1;
    v7 = (unsigned int *)operator new(0x1788u);
    sub_743140((__int64)v7, (__int64)v37, 0x2000, nullptr);
    *((_QWORD *)v7 + 730) = 2049;
    *((_QWORD *)v7 + 735) = 2049;
    *((_QWORD *)v7 + 740) = 0;
    v7[1488] = 0;
    *((_QWORD *)v7 + 745) = 0;
    *((_QWORD *)v7 + 746) = v7 + 1488;
    *((_QWORD *)v7 + 747) = v7 + 1488;
    *((_QWORD *)v7 + 748) = 0;
    *((_QWORD *)v7 + 749) = 0;
    v7[1504] = 0;
    *(_OWORD *)(v7 + 1462) = -1;
    *(_OWORD *)(v7 + 1466) = 0;
    *((_OWORD *)v7 + 368) = -1;
    *((_OWORD *)v7 + 369) = 0;
    *(_OWORD *)(v7 + 1482) = 0;
    *((_OWORD *)v7 + 375) = 0;
    *((_BYTE *)v7 + 6020) = get_undo_param(0) != 0;
    v7[1504] |= 2u;
    if ( (unsigned __int8)sub_73CC80(v7, 32, 7u) )
    {
      if ( sub_7AEE70((__int64)v7) != -1 )
      {
        v9 = *((int *)a1 + 12);
        a1[1] = v7;
        *((_DWORD *)a1 + 12) = v9 + 1;
        a1[v9 + 2] = v7;
        qunlink(a2);
        v7 = (unsigned int *)operator new(0x1788u);
        sub_743140((__int64)v7, a2, 0x2000, nullptr);
        *((_QWORD *)v7 + 730) = 2049;
        *((_QWORD *)v7 + 735) = 2049;
        *((_QWORD *)v7 + 740) = 0;
        v7[1488] = 0;
        *((_QWORD *)v7 + 745) = 0;
        *((_QWORD *)v7 + 746) = v7 + 1488;
        *((_QWORD *)v7 + 747) = v7 + 1488;
        *((_QWORD *)v7 + 748) = 0;
        *((_QWORD *)v7 + 749) = 0;
        v7[1504] = 0;
        *(_OWORD *)(v7 + 1462) = -1;
        *(_OWORD *)(v7 + 1466) = 0;
        *((_OWORD *)v7 + 368) = -1;
        *((_OWORD *)v7 + 369) = 0;
        *(_OWORD *)(v7 + 1482) = 0;
        *((_OWORD *)v7 + 375) = 0;
        *((_BYTE *)v7 + 6020) = get_undo_param(0) != 0;
        if ( (unsigned __int8)sub_73C890((__int64)v7, 0x2000u) )
        {
          if ( (unsigned __int8)sub_73CC90(v7, 0) )
          {
            v10 = *((int *)a1 + 12);
            *a1 = v7;
            v11 = (unsigned int)(v10 + 1);
            *((_DWORD *)a1 + 12) = v11;
            a1[v10 + 2] = v7;
            v12 = a1[1];
            *(__m128i *)(v7 + 1470) = _mm_loadu_si128((const __m128i *)(v12 + 1470));
            *(__m128i *)(v7 + 1474) = _mm_loadu_si128((const __m128i *)(v12 + 1474));
            v13 = *((_QWORD *)v12 + 739);
            *((_BYTE *)v7 + 5881) = 8;
            *((_QWORD *)v7 + 739) = v13;
            sub_7AF120((char *)v7, 1, v11);
            return sub_7AEE70((__int64)*a1);
          }
        }
      }
    }
    if ( !v7 )
      return -1;
    sub_7AF120((char *)v7, 0, v8);
    v21 = *((void **)v7 + 749);
    if ( v21 )
    {
      *((_QWORD *)v7 + 750) = 0;
      qfree(v21);
    }
    v22 = *((_QWORD *)v7 + 745);
    while ( v22 )
    {
      sub_7AEA40(*(_QWORD **)(v22 + 24));
      v23 = (void *)v22;
      v22 = *(_QWORD *)(v22 + 16);
      operator delete(v23, 0x30u);
    }
    v24 = *((char **)v7 + 740);
    if ( v24 )
    {
      v25 = *((_QWORD *)v7 + 741);
      if ( v25 )
      {
        for ( i = 0; i != v25; ++i )
        {
          v27 = &v24[24 * i];
          v28 = *(void **)v27;
          if ( *(_QWORD *)v27 )
          {
            *((_QWORD *)v27 + 1) = 0;
            qfree(v28);
            v24 = *((char **)v7 + 740);
          }
        }
      }
      *((_QWORD *)v7 + 741) = 0;
      qfree(v24);
    }
LABEL_31:
    sub_743350((__int64)v7);
    operator delete(v7, 0x1788u);
    return -1;
  }
  v7 = (unsigned int *)operator new(0x1788u);
  sub_743140((__int64)v7, a2, 0x2000, nullptr);
  *((_QWORD *)v7 + 730) = 2049;
  *((_QWORD *)v7 + 735) = 2049;
  *((_QWORD *)v7 + 740) = 0;
  v7[1488] = 0;
  *((_QWORD *)v7 + 745) = 0;
  *((_QWORD *)v7 + 746) = v7 + 1488;
  *((_QWORD *)v7 + 747) = v7 + 1488;
  *((_QWORD *)v7 + 748) = 0;
  *((_QWORD *)v7 + 749) = 0;
  v7[1504] = 0;
  *(_OWORD *)(v7 + 1462) = -1;
  *(_OWORD *)(v7 + 1466) = 0;
  *((_OWORD *)v7 + 368) = -1;
  *((_OWORD *)v7 + 369) = 0;
  *(_OWORD *)(v7 + 1482) = 0;
  *((_OWORD *)v7 + 375) = 0;
  undo_param = get_undo_param(0);
  v15 = *v7;
  *((_BYTE *)v7 + 6020) = undo_param != 0;
  if ( a4 )
  {
    v16 = 0;
    v17 = 64;
  }
  else
  {
    v16 = 7;
    v17 = 32;
  }
  if ( v17 < a3 / v15 )
    v17 = a3 / v15;
  if ( !(unsigned __int8)sub_73CC80(v7, v17, v16) )
  {
    if ( !v7 )
      return -1;
    sub_7AF120((char *)v7, 0, v18);
    v29 = *((void **)v7 + 749);
    if ( v29 )
    {
      *((_QWORD *)v7 + 750) = 0;
      qfree(v29);
    }
    v30 = *((_QWORD *)v7 + 745);
    while ( v30 )
    {
      sub_7AEA40(*(_QWORD **)(v30 + 24));
      v31 = (void *)v30;
      v30 = *(_QWORD *)(v30 + 16);
      operator delete(v31, 0x30u);
    }
    v32 = *((char **)v7 + 740);
    if ( v32 )
    {
      v33 = *((_QWORD *)v7 + 741);
      if ( v33 )
      {
        for ( j = 0; j != v33; ++j )
        {
          v35 = &v32[24 * j];
          v36 = *(void **)v35;
          if ( *(_QWORD *)v35 )
          {
            *((_QWORD *)v35 + 1) = 0;
            qfree(v36);
            v32 = *((char **)v7 + 740);
          }
        }
      }
      *((_QWORD *)v7 + 741) = 0;
      qfree(v32);
    }
    goto LABEL_31;
  }
  v19 = *((int *)a1 + 12);
  v20 = *((_BYTE *)v7 + 6020) == 0;
  *a1 = v7;
  *((_DWORD *)a1 + 12) = v19 + 1;
  a1[v19 + 2] = v7;
  if ( !v20 )
  {
    register_undo_handlers(&unk_2B3A700, 5, 1, 0);
    v7 = *a1;
  }
  return sub_7AEE70((__int64)v7);
}
