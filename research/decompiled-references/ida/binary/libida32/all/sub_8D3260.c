bool __fastcall sub_8D3260(__int64 a1, __int64 a2, const char *a3, unsigned __int64 a4, __int64 a5, __int64 a6, int a7)
{
  int v10; // eax
  __int64 v12; // rax
  const char *v13; // rdx
  _QWORD *v14; // r14
  const char *v15; // rsi
  int v16; // eax
  __int64 v17; // rbp
  __int64 v18; // rbx
  size_t v19; // r12
  void *v20; // r12
  __int64 v21; // rbx
  _QWORD *v22; // r12
  void *v23; // rdi
  char *v24; // rdx
  __int64 v25; // r12
  __int64 i; // rbx
  char *v27; // rax
  void *v28; // rdi
  void *v29; // rax
  void *v30; // r15
  void *v31; // r12
  _UNKNOWN **v33; // [rsp+10h] [rbp-78h] BYREF
  char v34; // [rsp+18h] [rbp-70h] BYREF
  __int64 v35; // [rsp+20h] [rbp-68h]
  _QWORD *v36; // [rsp+28h] [rbp-60h]
  __int64 v37; // [rsp+30h] [rbp-58h]
  char *v38; // [rsp+38h] [rbp-50h]
  int v39; // [rsp+40h] [rbp-48h]
  unsigned __int64 v40; // [rsp+48h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  if ( !(a5 | a4) )
    return 0;
  if ( a4 || (a7 & 0x80u) != 0 )
  {
    v34 = 0;
    v38 = &v34;
    v10 = a7;
    v35 = a2;
    LOBYTE(v10) = a7 & 0x7F;
    v36 = (_QWORD *)a4;
    v39 = v10;
    v37 = a6;
    v33 = &off_2B15EC0;
    return sub_8D2C80((__int64)&v33, a3) == 0;
  }
  else
  {
    v12 = operator new(0x70u);
    v13 = haystack;
    v14 = (_QWORD *)v12;
    if ( *(_QWORD *)(a5 + 8) )
      v13 = *(const char **)a5;
    sub_8D0810(v12, a1, v13);
    v15 = a3;
    v34 = 0;
    v38 = &v34;
    v16 = a7;
    v35 = a2;
    LOBYTE(v16) = a7 & 0x7F;
    v36 = v14;
    v39 = v16;
    v37 = a6;
    v33 = &off_2B15EC0;
    v17 = sub_8D2C80((__int64)&v33, a3);
    if ( v14 )
    {
      v18 = v14[9];
      if ( (_QWORD *)v18 != v14 + 7 )
      {
        do
        {
          v19 = *(_QWORD *)(v18 + 40);
          if ( v19 )
          {
            v29 = (void *)qalloc_or_throw(*(_QWORD *)(v18 + 40), v15);
            v15 = *(const char **)(v18 + 32);
            v30 = v29;
            memcpy(v29, v15, v19);
            v31 = *(void **)(v18 + 56);
            if ( v31 )
            {
              sub_8CF670(*(char ***)(v18 + 56), v15);
              v15 = (const char *)&qword_50;
              operator delete(v31, 0x50u);
            }
            if ( v30 )
              qfree(v30);
          }
          else
          {
            v20 = *(void **)(v18 + 56);
            if ( v20 )
            {
              sub_8CF670(*(char ***)(v18 + 56), v15);
              v15 = (const char *)&qword_50;
              operator delete(v20, 0x50u);
            }
          }
          v18 = std::_Rb_tree_increment();
        }
        while ( v14 + 7 != (_QWORD *)v18 );
      }
      v21 = v14[8];
      while ( v21 )
      {
        v22 = (_QWORD *)v21;
        sub_8CCCF0(*(_QWORD **)(v21 + 24));
        v23 = *(void **)(v21 + 32);
        v21 = *(_QWORD *)(v21 + 16);
        if ( v23 )
        {
          v22[5] = 0;
          qfree(v23);
        }
        operator delete(v22, 0x40u);
      }
      v24 = (char *)v14[3];
      if ( v24 )
      {
        v25 = v14[4];
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
              v24 = (char *)v14[3];
            }
          }
        }
        v14[4] = 0;
        qfree(v24);
      }
      operator delete(v14, 0x70u);
    }
    return v17 == 0;
  }
}

