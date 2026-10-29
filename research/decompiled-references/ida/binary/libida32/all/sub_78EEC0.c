__int64 __fastcall sub_78EEC0(unsigned int **a1, __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned int *v7; // rbx
  __m128i si128; // xmm0
  __int64 undo_param; // rax
  unsigned __int64 v10; // rcx
  unsigned int v11; // edx
  unsigned __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rax
  bool v15; // zf
  void *v16; // rdi
  __int64 v17; // rbp
  void *v18; // rdi
  char *v19; // rdx
  __int64 v20; // r12
  __int64 i; // rbp
  char *v22; // rax
  void *v23; // rdi

  if ( *a1 )
    return 0xFFFFFFFFLL;
  v7 = (unsigned int *)operator new(0x1768u);
  sub_722C00((__int64)v7, a2, 0x2000, nullptr);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23843A0);
  *((_QWORD *)v7 + 730) = 1025;
  *((_QWORD *)v7 + 733) = 1025;
  *((_QWORD *)v7 + 736) = 0;
  v7[1480] = 0;
  *((_QWORD *)v7 + 741) = 0;
  *((_QWORD *)v7 + 742) = v7 + 1480;
  *((_QWORD *)v7 + 743) = v7 + 1480;
  *((_QWORD *)v7 + 744) = 0;
  *((_QWORD *)v7 + 745) = 0;
  v7[1496] = 0;
  *(__m128i *)(v7 + 1462) = si128;
  *((__m128i *)v7 + 367) = si128;
  *(_OWORD *)(v7 + 1474) = 0;
  *((_OWORD *)v7 + 373) = 0;
  undo_param = get_undo_param(0);
  v10 = *v7;
  *((_BYTE *)v7 + 5988) = undo_param != 0;
  if ( a4 )
  {
    v11 = 0;
    v12 = 64;
  }
  else
  {
    v11 = 7;
    v12 = 32;
  }
  if ( v12 < a3 / v10 )
    v12 = a3 / v10;
  if ( (unsigned __int8)sub_71C740(v7, v12, v11) )
  {
    v14 = *((int *)a1 + 10);
    v15 = *((_BYTE *)v7 + 5988) == 0;
    *a1 = v7;
    *((_DWORD *)a1 + 10) = v14 + 1;
    a1[v14 + 1] = v7;
    if ( !v15 )
    {
      register_undo_handlers(&unk_2B10760, 5, 1, 0);
      v7 = *a1;
    }
    return sub_78E7A0((__int64)v7);
  }
  else
  {
    if ( v7 )
    {
      sub_78E9A0(v7, 0, v13);
      v16 = *((void **)v7 + 745);
      if ( v16 )
      {
        *((_QWORD *)v7 + 746) = 0;
        qfree(v16);
      }
      v17 = *((_QWORD *)v7 + 741);
      while ( v17 )
      {
        sub_78E370(*(_QWORD **)(v17 + 24));
        v18 = (void *)v17;
        v17 = *(_QWORD *)(v17 + 16);
        operator delete(v18, 0x30u);
      }
      v19 = *((char **)v7 + 736);
      if ( v19 )
      {
        v20 = *((_QWORD *)v7 + 737);
        if ( v20 )
        {
          for ( i = 0; i != v20; ++i )
          {
            v22 = &v19[24 * i];
            v23 = *(void **)v22;
            if ( *(_QWORD *)v22 )
            {
              *((_QWORD *)v22 + 1) = 0;
              qfree(v23);
              v19 = *((char **)v7 + 736);
            }
          }
        }
        *((_QWORD *)v7 + 737) = 0;
        qfree(v19);
      }
      sub_722E10((__int64)v7);
      operator delete(v7, 0x1768u);
    }
    return 0xFFFFFFFFLL;
  }
}

