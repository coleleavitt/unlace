__int64 __fastcall sub_79ADB0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // rbx
  __m128i si128; // xmm0
  __int64 v8; // rdx
  void *v9; // rdi
  __int64 v10; // rbp
  void *v11; // rdi
  char *v12; // rdx
  __int64 v13; // r12
  __int64 i; // rbp
  char *v15; // rax
  void *v16; // rdi
  __int64 result; // rax
  __int64 v18; // rbp
  unsigned __int64 v19; // rax

  v6 = operator new(0x1768u);
  sub_722C00(v6, a2, 0x2000, nullptr);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23843A0);
  *(_QWORD *)(v6 + 5840) = 1025;
  *(_QWORD *)(v6 + 5864) = 1025;
  *(_QWORD *)(v6 + 5888) = 0;
  *(_DWORD *)(v6 + 5920) = 0;
  *(_QWORD *)(v6 + 5928) = 0;
  *(_QWORD *)(v6 + 5936) = v6 + 5920;
  *(_QWORD *)(v6 + 5944) = v6 + 5920;
  *(_QWORD *)(v6 + 5952) = 0;
  *(_QWORD *)(v6 + 5960) = 0;
  *(_DWORD *)(v6 + 5984) = 0;
  *(__m128i *)(v6 + 5848) = si128;
  *(__m128i *)(v6 + 5872) = si128;
  *(_OWORD *)(v6 + 5896) = 0;
  *(_OWORD *)(v6 + 5968) = 0;
  *(_BYTE *)(v6 + 5988) = get_undo_param(0) != 0;
  if ( !a3 )
    a3 = 3;
  if ( (unsigned __int8)sub_71C740((unsigned int *)v6, a3, a4 == 0 ? 7 : 0) )
  {
    v18 = *(_QWORD *)(a1 + 1544);
    v19 = *(int *)(v18 + 40);
    if ( v19 > 3 )
      sub_79ABC0();
    *(_QWORD *)(v18 + 8 * v19 + 8) = v6;
    sub_78E7A0(v6);
    result = *(unsigned int *)(v18 + 40);
    *(_DWORD *)(v18 + 40) = result + 1;
  }
  else
  {
    if ( v6 )
    {
      sub_78E9A0((_QWORD *)v6, 0, v8);
      v9 = *(void **)(v6 + 5960);
      if ( v9 )
      {
        *(_QWORD *)(v6 + 5968) = 0;
        qfree(v9);
      }
      v10 = *(_QWORD *)(v6 + 5928);
      while ( v10 )
      {
        sub_79ABE0(*(_QWORD **)(v10 + 24));
        v11 = (void *)v10;
        v10 = *(_QWORD *)(v10 + 16);
        operator delete(v11, 0x30u);
      }
      v12 = *(char **)(v6 + 5888);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v6 + 5896);
        if ( v13 )
        {
          for ( i = 0; i != v13; ++i )
          {
            v15 = &v12[24 * i];
            v16 = *(void **)v15;
            if ( *(_QWORD *)v15 )
            {
              *((_QWORD *)v15 + 1) = 0;
              qfree(v16);
              v12 = *(char **)(v6 + 5888);
            }
          }
        }
        *(_QWORD *)(v6 + 5896) = 0;
        qfree(v12);
      }
      sub_722E10(v6);
      operator delete((void *)v6, 0x1768u);
    }
    return 0;
  }
  return result;
}

